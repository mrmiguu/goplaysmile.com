package;

import haxe.Timer;
import openfl.display.Sprite;
import openfl.events.Event;
import sys.net.Host;
import sys.net.Socket;

using Consts;
using sys.net.Socket;

class Connection extends Sprite implements IButton {
    var g: Globals;
    var server = new Socket();
    var readers: Sockets = [];
    var writers: Sockets = [];
    var outbox: Mailbox = [];

    public function new(g: Globals, host: String, port: Int, user: String, pass: String) {
        super();

        this.g = g;
        g.outbox = outbox;

        server.setFastSend(true);
        server.setBlocking(false);
        server.connect(new Host(host), port);

        readers.push(server);
        writers.push(server);

        addEventListener(Event.ENTER_FRAME,clientLoop);

        outbox.addLetter(['login',user,pass]);
    }

    public function pushIn() {
        visible = true;
    }

    public function popOut() {
        visible = false;
    }

    function read(packet: String) {
        var serial = packet.serial();

        switch (serial.nextString()) {
            case 'init':
                initArrived();

            case 'color':
                playerColorArrived(
                    serial.next(), // player
                    serial.next() // color
                );

            case 'roll':
                dieInfoArrived(
                    serial.next() // side
                );

            case 'loc':
                playerLocationArrived(
                    serial.next(), // player
                    serial.next() // location
                );

            case 'dest':
                playerDestinationArrived(
                    serial.next(), // player
                    serial.next() // destination
                );

            case 'arrived':
                playerArrived();

            case 'exp':
                playerExperienceArrived(
                    serial.next(), // required
                    serial.next(), // experience
                    serial.next() // level
                );
        }
    }

    function initArrived() {
        trace('initArrived');
        // switch to the logged-in screen
        g.radio.push(g.toFrom);
        g.t.reset();
    }

    function playerColorArrived(user: String, color: String) {
        trace('playerColorArrived');
        g.player(user).setColor(color);
    }

    function dieInfoArrived(side: Int) {
        trace('dieInfoArrived');
        g.roll(side);
    }

    function playerLocationArrived(user: String, loc: String) {
        trace('playerLocationArrived');
        g.player(user).setLoc(loc);
    }

    function playerDestinationArrived(user: String, dest: String) {
        trace('playerDestinationArrived');
        g.player(user).setDest(dest);
    }

    function playerArrived() {
        trace('playerArrived');
        g.me().arrived();
    }

    function playerExperienceArrived(req: Int, exp: Int, lv: Int) {
        trace('playerExperienceArrived');
        g.l.set(req,exp,lv);
    }

    // var fpsFuture: Float;
    // var fps: Int;

    function clientLoop(e: Event) {
        var time = Timer.stamp();
        var sockets = readers.select(writers, null, 0);

        // fps++;
        // if (fpsFuture+1 < time) {
        //     trace(fps);
        //     fps=0;
        //     fpsFuture = time + 1;
        // }
        
        if (sockets.read.length > 0)
            try read(server.input.readLine())
            catch (e: Dynamic) {}

        if (sockets.write.length > 0)
            if (outbox.length > 0)
                server.output.writeString('${outbox.take()}\r\n');
    }
}