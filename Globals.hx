package;

import sys.net.Socket;

using C;

class Globals {
    public var t = new Terrain();
    public var out = [];
    public var sockets = [];
    public var players = new Map<Socket,Player>();
    var err = 'etc/err.ogg'.sound();

    // first card
    public var c1 = new Card('c1',
        function(p) p.go(if (p.on(405)) 0 else 1),
        function(p) p.go(0),
        function(p) p.to('beverlyhills'),
        function(p) p.go(2),
        function(p) p.to('beverlyhills'),
        function(p) p.go(3)
    );

    public function addPlayer(s: Socket, p: Player) {
        players[s] = p;
    }

    public function player(s: Socket) {
        return players[s];
    }

    public function removePlayer(s: Socket) {
        players[s].broadcastExit();
        players.remove(s);
        sockets.remove(s);
    }

    public function errSfx() {
        err.play();
    }

    public function new() {}
}