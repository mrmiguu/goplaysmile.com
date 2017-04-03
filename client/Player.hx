package;

import sys.net.Socket;

using C;
using Math;
using Std;
using sys.io.File;

class Player {
    var g: Globals;
    var arrival = 'dests/arrival.ogg'.sound();
    var user: String;
    var color: String;
    var level = 1;
    var loc: String;
    var dest: String;
    var card: Card;
    var cards = [];

    public function new(g: Globals, user: String) {
        trace('new Player');
        this.g = g;
        this.user = user;
        // save();
    }

    public function getColor() {
        // trace('getColor');
        return color;
    }

    public function getLevel() {
        // trace('getLevel');
        return level;
    }

    public function setLevel(lv: Int) {
        trace('$user.level <- $lv');
        level = lv;
    }

    public function setColor(c: String) {
        trace('$user.color <- $c');
        g.showColor(color = c);
        if (me()) g.die().visible = true;
    }

    public function setLoc(l: String) {
        // update board
        if (me() && loc!=null) g.t.map[loc].visible = false;
        loc = l;
        if (me()) g.t.map[l].visible = true;

        trace('$user.loc <- $loc');

        // it's us; animate camera
        if (me()) g.v.animating = true;

        g.v.aimC(color,loc);

        // switch (color) {
        //     case 'r': g.v.aimRC(loc);
        //     case 'o': g.v.aimOC(loc);
        //     case 'y': g.v.aimYC(loc);
        //     case 'g': g.v.aimGC(loc);
        //     case 'b': g.v.aimBC(loc);
        //     case 'i': g.v.aimIC(loc);
        //     case 'v': g.v.aimVC(loc);
        // }

        g.v.relocateCars();
    }

    public function getName() { return user; }

    public function getLoc() {
        return loc;
    }

    public function setDest(d: String) {
        // update destination on map
        dest = d;

        trace('$user.dest <- $dest');

        g.v.aimD(color,dest);

        // switch (color) {
        //     case 'r': g.v.aimRD(dest);
        //     case 'o': g.v.aimOD(dest);
        //     case 'y': g.v.aimYD(dest);
        //     case 'g': g.v.aimGD(dest);
        //     case 'b': g.v.aimBD(dest);
        //     case 'i': g.v.aimID(dest);
        //     case 'v': g.v.aimVD(dest);
        // }

        g.v.relocateDests();

        if (me()) g.t.reset();
    }

    function me() {
        return user==g.user;
    }

    public function getDest() {
        return dest;
    }

    public function onGoal() { return loc == dest; }

    public function arrived() {
        arrival.play();
    }
}