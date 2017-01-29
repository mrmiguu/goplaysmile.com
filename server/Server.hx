package;

import haxe.Timer;
import openfl.display.Sprite;
import openfl.events.Event;
import sys.net.Host;
import sys.net.Socket;

using Consts;
using Math;
using Std;
using sys.io.File;
using sys.net.Socket;

class Server extends Sprite {
    var g = new Globals();
    var clientCount = ''.text(Consts.WIDTH/2, Consts.HEIGHT/2, 18);
    var listener = new Socket();
    var readers: Sockets = [];
    // var writers: Sockets = [];

    public function new() {
        super();

        scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight);

        addChild('etc/bg.png'.sprite());

        var card = 'etc/card.png'.sprite();
        card.y = card.height.center(Consts.HEIGHT/2);
        addChild(card);

        updateCount();
        addChild(clientCount);

        // listener.setFastSend(true);
        listener.setBlocking(false);
        listener.bind(new Host('192.168.1.173'), 4200);
        listener.listen(100);
        readers.push(listener);

        addEventListener(Event.ENTER_FRAME, serverLoop);
    }

    function connect(client: Socket) {
        client.setFastSend(true);
        client.setBlocking(false);
        readers.push(client);
        g.sockets.push(client);
        updateCount();
    }

    function disconnect(client: Socket) {
        readers.remove(client);
        g.sockets.remove(client);
        g.players.remove(client);
        updateCount();
    }

    function updateCount() {
        clientCount.text = '${g.sockets.length}';
    }

    function read(index: Socket, packet: String) {
        var serial = packet.serial();

        switch (serial.nextString()) {
            case 'login':
                accountInfoArrived(index,
                    serial.next(), // username
                    serial.next() // password md5 hash
                );

            case 'roll':
                rollRequestArrived(index);
        }
    }

    function accountInfoArrived(index: Socket, user: String, pass: String) {
        trace('accountInfoArrived');
        var player = g.players[index] = new Player(g, user, pass, index);
        player.addCard(g.c1);
        player.init(); // pass around their to-from
    }

    function rollRequestArrived(index: Socket) {
        trace('rollRequestArrived');
        g.player(index).rollDie();
    }

    var pingFuture: Float;
    var pingDelay = 2.5;

    // var fpsFuture: Float;
    // var fps: Int;

    function serverLoop(e: Event) {
        var time = Timer.stamp();
        var sockets = readers.select(g.sockets, null, 0);

        // fps++;
        // if (fpsFuture+1 < time) {
        //     trace(fps);
        //     fps=0;
        //     fpsFuture = time + 1;
        // }

        for (client in sockets.read)
            if (client != listener)
                try read(client, client.input.readLine())
                catch (e: Dynamic) {}
            else
                try connect(client.accept())
                catch (e: Dynamic) {}

        for (client in sockets.write) {
            for (letter in g.out)
                if (letter.sender == client)
                    try {
                        client.output.writeString('${letter.body}\r\n');
                        g.out.remove(letter);
                    } catch (e: Dynamic) disconnect(client);

            // ping every so often
            if (pingFuture+pingDelay < time) {
                g.out.addLetter(client, ['`']);
                pingFuture = time+pingDelay;
            }
        }

        // process every player's event loop
        for (p in g.players) p.loop(time);
    }
}