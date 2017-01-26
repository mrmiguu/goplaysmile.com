package;

import sys.net.Socket;

using Consts;

class Globals {
    public var t = new Terrain();
    public var out = [];
    public var players = new Map<Socket, Player>();
    public var sockets = [];

    // first card
    public var c1 = new Card('c1',
        function(p) p.go(if (p.on(405)) 0 else 1),
        function(p) p.go(0),
        function(p) p.to('beverlyhills'),
        function(p) p.go(2),
        function(p) p.to('beverlyhills'),
        function(p) p.go(3)
    );

    public function player(s: Socket) {
        return players[s];
    }

    public function new() {}
}