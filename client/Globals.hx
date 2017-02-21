package;

import openfl.text.TextField;

using Consts;
using Std;

class Globals {
    public var login = new Game();
    public var carPick = new Game();
    public var toFrom = new Game();
    public var inGame = new Game();
    public var radio: Radio;
    public var out = [];
    public var roll: Int->Void;
    public var t: Terrain;
    public var v: Viewport;
    public var toFromText: TextField;
    public var l: Level;
    public var user = '';
    public var carRoulette: Animatible;
    var err = 'etc/err.ogg'.sound();
    var pushes = [for (n in 0...3) 'etc/push${n}.ogg'.sound()];
    var pops = [for (n in 0...3) 'etc/pop${n}.ogg'.sound()];
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

    public function errSfx() {
        err.play();
    }

    public function pushSfx() {
        pushes[pushes.length.random()].play();
    }

    public function popSfx() {
        pops[pushes.length.random()].play();
    }
}