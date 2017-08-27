package server

type Server struct {
    g *globals.Globals
    listener socket.Socket
    readers []socket.Socket
}

func New() *Server {
    t := &Server{}

    listener.setBlocking(false)
    listener.bind(new Host("192.168.1.152"), 4200)
    listener.listen(100)
    readers.push(listener)
    serverLoop

    return t
}

func connect(client socket.Socket) {
    client.setFastSend(true)
    client.setBlocking(false)
    readers.push(client)
    g.sockets.push(client)
}

func disconnect(client socket.Socket) {
    g.removePlayer(client)
    readers.remove(client)
}

func read(index socket.Socket, packet string) {
    var serial = packet.serial()

    switch (serial.nextString()) {
        case "login":
            accountInfoArrived(index,
                serial.next(), // username
                serial.next() // password md5 hash
            )

        case "color":
            colorRequestArrived(index,
                serial.nextString() // color
            )

        case "roll":
            rollRequestArrived(index)
    }
}

func accountInfoArrived(index socket.Socket, user string, pass string) {
    trace("accountInfoArrived")
    g.addPlayer(index, new Player(g,index,user,pass))
    g.player(index).addCard(g.c1)
    g.player(index).init() // pass around their to-from
}

func colorRequestArrived(index socket.Socket, color string) {
    trace("colorRequestArrived")
    g.player(index).setColor(color)    // (pt 1) bad design fix later
    g.player(index).reset()
    g.player(index).broadcastColor() // (pt 2) bad design fix later
}

func rollRequestArrived(index socket.Socket) {
    trace("rollRequestArrived")
    g.player(index).rollDie()
}

func serverLoop() {
    var time = Timer.stamp()


    var sockets = readers.select(g.sockets,null,0)

    for (client in sockets.read)
        if (client != listener)
            try read(client, client.input.readLine())
            catch (e Dynamic) {}
        else
            try connect(client.accept())
            catch (e Dynamic) {}

    // one letter every loop
    if (g.out.length > 0) {
        var letter = g.out.take()

        try {
            letter.sender.output.writeString("${letter.body}\r\n")
        } catch (e Dynamic) disconnect(letter.sender)
    }

    // ping every so often
    if (pingFuture+pingDelay < time) {
        for (client in sockets.write) {
            g.out.addLetter(client,["`"])
            pingFuture = time+pingDelay
        }
    }

    // process every player's event loop
    for (p in g.players) p.loop(time)
}
