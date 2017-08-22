package;

import haxe.Timer;
import openfl.display.Sprite;
import openfl.events.Event;
import sys.net.Host;
import sys.net.Socket;

using C;
using Math;
using Std;
using sys.io.File;
using sys.net.Socket;

class Server extends Sprite {
    var g = new Globals();
    var clientCount: Field;
    var listener = new Socket();
    var readers: Sockets = [];

    public function new() {
        super();

        scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight);

        addChild('etc/bg.png'.sprite());

        clientCount = new Field(g,C.WIDTH/2,C.HEIGHT/2);
        updateCount();
        addChild(clientCount);

        listener.setBlocking(false);
        listener.bind(new Host('192.168.1.152'), 4200);
        listener.listen(100);
        readers.push(listener);

        addEventListener(Event.ENTER_FRAME,serverLoop);
    }

    function connect(client: Socket) {
        client.setFastSend(true);
        client.setBlocking(false);
        readers.push(client);
        g.sockets.push(client);
        updateCount();
    }

    function disconnect(client: Socket) {
        g.removePlayer(client);
        readers.remove(client);
        updateCount();
    }

    function updateCount() {
        clientCount.setText('${g.sockets.length}');
    }

    function read(index: Socket, packet: String) {
        var serial = packet.serial();

        switch (serial.nextString()) {
            case 'login':
                accountInfoArrived(index,
                    serial.next(), // username
                    serial.next() // password md5 hash
                );

            case 'color':
                colorRequestArrived(index,
                    serial.nextString() // color
                );

            case 'roll':
                rollRequestArrived(index);
        }
    }

    function accountInfoArrived(index: Socket, user: String, pass: String) {
        trace('accountInfoArrived');
        g.addPlayer(index, new Player(g,index,user,pass));
        g.player(index).addCard(g.c1);
        g.player(index).init(); // pass around their to-from
    }

    function colorRequestArrived(index: Socket, color: String) {
        trace('colorRequestArrived');
        g.player(index).setColor(color);  // (pt 1) bad design; fix later
        g.player(index).reset();
        g.player(index).broadcastColor(); // (pt 2) bad design; fix later
    }

    function rollRequestArrived(index: Socket) {
        trace('rollRequestArrived');
        g.player(index).rollDie();
    }

    var pingFuture: Float;
    static inline var pingDelay = 2.5;

    // var cpsFuture: Float;
    // var cps: Int;

    function serverLoop(e: Event) {
        var time = Timer.stamp();

        // cps++;
        // if (cpsFuture < time) {
        //     trace(cps);
        //     cps = 0;
        //     cpsFuture = time+1;
        // }

        var sockets = readers.select(g.sockets,null,0);

        for (client in sockets.read)
            if (client != listener)
                try read(client, client.input.readLine())
                catch (e: Dynamic) {}
            else
                try connect(client.accept())
                catch (e: Dynamic) {}

        // one letter every loop
        if (g.out.length > 0) {
            var letter = g.out.take();

            try {
                letter.sender.output.writeString('${letter.body}\r\n');
            } catch (e: Dynamic) disconnect(letter.sender);
        }

        // ping every so often
        if (pingFuture+pingDelay < time) {
            for (client in sockets.write) {
                g.out.addLetter(client,['`']);
                pingFuture = time+pingDelay;
            }
        }

        // process every player's event loop
        for (p in g.players) p.loop(time);
    }
}