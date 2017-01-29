package;

import sys.net.Socket;

using Consts;
using Math;
using Std;
using sys.io.File;
using sys.FileSystem;

class Player {
    var g: Globals;
    var user: String;
    var pass: String;
    var color: String;
    var path: Array<Node>;
    var cur: Int;
    var card: Card;
    var cards = [];
    var level = 1;
    var req: Int;
    var exp: Int;
    var socket: Socket;
    var side: Int;
    var roller: Int;
    var rollerFuture: Float;
    var rollerAnim: Bool;
    var roygbiv = 'roygbiv';

    public function new(g: Globals, user: String, pass: String, s: Socket) {
        trace('new Player');
        this.g = g;
        this.user = user;
        this.pass = pass;
        socket = s;

        'accounts'.createDirectory();
        save();
    }

    public function onGoal() { return cur == path.length-1; }

    public function addCard(c: Card) {
        trace('addCard');
        // if no card, also equip
        if (cards.length == 0) card = c;
        cards.push(c);
    }

    public function equipCard(c: Card) {
        if (cards.indexOf(c) != -1) card = c;
    }

    public function save() {
        'accounts/${user}'.saveContent('
            ${pass}'
        );
    }

    public function init() {
        trace('init');
        setColor(roygbiv.charAt(user.length%7));
        reset();
        g.out.addLetter(socket,['init']);
        trace('addLetter(socket,[\'init\'])');

        // give player everyone else's data
        informColors();
        informLocs();
        informDests();
    }

    public function reset() {
        trace('reset');
        // set the src node to something
        // random in the src-dst list while
        // setting the dst node to its respective
        // src-dst pair
        var i = g.t.pairs.length.random();

        // a random source is selected from the pairing
        var s = 2.random(); // 0 or 1

        // find optimal path to goal
        // path = new AI(cur, finish, this).path;
        refine(g.t.pairs[i][s], g.t.pairs[i][(s + 1) % 2]);

        trace('$user.dest <- ${getDest()}');
        broadcastDest();
    }
    
    public function on(hwy: Int) {
        trace('on');
        return path[cur].hwys.indexOf(hwy) != -1;
    }
    
    public function go(n: Int){
        trace('go');
        setCur(if (cur + n >= path.length) path.length - 1 else cur + n);
    }

    public function getUser() {
        return user;
    }

    public function getColor() {
        return color;
    }

    function setColor(c: String) {
        trace('$user.color <- $c');
        color = c;
        broadcastColor();
    }

    function informColors() {
        for (p in g.players)
            g.out.addLetter(socket, ['color',
                p.getUser(),
                p.getColor()
            ]);
    }

    function informLocs() {
        for (p in g.players)
            g.out.addLetter(socket, ['loc',
                p.getUser(),
                p.getLoc()
            ]);
    }

    function informDests() {
        for (p in g.players)
            g.out.addLetter(socket, ['dest',
                p.getUser(),
                p.getDest()
            ]);
    }

    function broadcastColor() {
        for (s in g.sockets)
            g.out.addLetter(s, ['color',
                user,
                getColor()
            ]);
    }

    function broadcastLoc() {
        for (s in g.sockets)
            g.out.addLetter(s, ['loc',
                user,
                getLoc()
            ]);
    }

    function broadcastDest() {
        for (s in g.sockets)
            g.out.addLetter(s, ['dest',
                user,
                getDest()
            ]);
    }

    public function getLoc() {
        return path[cur].id;
    }

    public function getDest() {
        return path[path.length-1].id;
    }

    public function to(city: String) {
        trace('to');
        refine(g.t.map[city], g.t.map[getDest()]);
    }

    function refine(start: Node, end: Node) {
        trace('refine');
        // find new path from city to the goal
        path = g.t.aStar.find(start, end);
        setCur(0);
    }

    function setCur(n: Int) {
        cur = n;
        trace('$user.loc <- ${getLoc()}');
        broadcastLoc();
    }

    function increaseExp() {
        trace('increaseExp');
        req = (1.1.pow(level) + 1.95).int() * level;
        exp = (exp + 1) % req;

        // check for level-up
        if (exp == 0) level++;

        g.out.addLetter(socket, ['exp',req,exp,level]);
    }

    public function rollDie() {
        side = 6.random();
        trace('$user.side <- $side');
        g.out.addLetter(socket,['roll',side]);
        rollerAnim = true;
    }

    public function loop(time: Float) {
        if (rollerAnim && rollerFuture < time) {
            // trace('roller=$roller');
            if (roller == side) {
                // trace('roller != side');
                rollerAnim = false;

                if (!onGoal()) {
                    card.i[side](this);
                    // trace('card.i[]()');
                    if (onGoal()) {
                        g.out.addLetter(socket, ['arrived']);
                        increaseExp();
                    }
                } else reset();

            } else roller = (roller + 1) % 6;

            rollerFuture = time + 0.125;
        }
    }
}