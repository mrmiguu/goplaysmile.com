package;

import sys.net.Socket;

using C;
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
    var exp: Int;
    var socket: Socket;
    var side: Int;
    var roller: Int;
    var rollerFuture: Float;
    var rollerAnim: Bool;
    var roygbiv = 'roygbiv';

    public function new(g: Globals, s: Socket, user: String, pass: String) {
        trace('new Player');
        this.g = g;
        socket = s;
        this.user = user;
        this.pass = pass;

        'accounts'.createDirectory();
        if (account().exists()) load();
        else save();
        sendExp();
        broadcastLevel();
    }

    function account() {
        return 'accounts/$user@$pass';
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

    public function load() {
        var serial = account().getContent().serial();
        exp = serial.next();
        level = serial.next();
    }

    public function save() {
        account().saveContent([
            exp,
            level
        ].serialize());
    }

    public function init() {
        trace('init');

        inform();
        g.out.addLetter(socket,['init']);
    }

    function inform() {
        // give player everyone else's data
        informColors();
        informLevels();
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

    public function setColor(c: String) {
        trace('$user.color <- $c');

        color = c;
        broadcastColor();
    }

    public function getLevel() {
        return level;
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

    function sendExp() {
        g.out.addLetter(socket, ['exp',
            user,
            req(),
            exp,
            level
        ]);
    }

    function req() {
        return (1.1.pow(level) + 1.95).int() * level;
    }

    function increaseExp() {
        trace('increaseExp');

        exp = (exp + 1) % req();

        // check for level-up
        if (exp == 0) level++;

        save();
        sendExp();
        broadcastLevel();
    }

    public function rollDie() {
        side = 6.random();
        trace('$user.side <- $side');
        g.out.addLetter(socket,['roll',side]);
        rollerAnim = true;
    }

    function informLevels() {
        for (p in g.players)
            if (p != this)
                g.out.addLetter(socket, ['level',
                    p.getUser(),
                    p.getLevel()
                ]);
    }

    function informColors() {
        for (p in g.players)
            if (p != this)
                g.out.addLetter(socket, ['color',
                    p.getUser(),
                    p.getColor()
                ]);
    }

    function informLocs() {
        for (p in g.players)
            if (p != this)
                g.out.addLetter(socket, ['loc',
                    p.getUser(),
                    p.getLoc()
                ]);
    }

    function informDests() {
        for (p in g.players)
            if (p != this)
                g.out.addLetter(socket, ['dest',
                    p.getUser(),
                    p.getDest()
                ]);
    }

    public function broadcastLevel() {
        for (s in g.sockets)
            g.out.addLetter(s, ['level',
                user,
                getLevel()
            ]);
    }

    public function broadcastColor() {
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

    public function broadcastExit() {
        for (s in g.sockets)
            if (s != socket)
                g.out.addLetter(s, ['exit',
                    user
                ]);
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