package;

import openfl.text.TextField;

using Consts;

class Globals {
    public var outbox: Mailbox;
    public var roll: Int->Void;
    public var t: Terrain;
    public var v: Viewport;
    public var toFrom: Game;
    public var toFromText: TextField;
    public var inGame: Game;
    public var l: Level;
    public var user: String;
    var players = new Map<String, Player>();

    public function new() {
        roll = function(i) {};
    }

    public function player(user: String) {
        if (!players.exists(user))
            players[user] = new Player(this,user);

        return players[user];
    }

    public function me() {
        return player(user);
    }
}