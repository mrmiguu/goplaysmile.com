package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;

using C;
using Std;

class Card extends Animation {
    public var canvas: Sprite;
    public var h = 288;
    public var target = 0;
    var pick = 'roller/pick.ogg'.sound();
    var arrival = 'dests/arrival.ogg'.sound();
    var vrooms = [for (n in 0...3) 'cars/vroom${n}.ogg'.sound()];
    var current = 6;
    var instr = [];

    var focus: Tile;
    var double: Tile;
    
    var g: Globals;

    public function new(g: Globals, name: String) {
        super(6, 0.125);

        this.g = g;

        var map = 'roller/$name.png'.tilemap(
            g.rollerW().int(), g.rollerH().int());
        focus = map.getTileAt(0);
        map.addTile(double = new Tile());

        canvas = map.mapToSprite();
        canvas.y = g.rollerY();

        switch (name) {
            case 'c1': instr = [38,96,143,183,223,263];
        }
    }

    public function sel() {
        if (instr.length < frames) return;

        focus.y = g.rollerH()/2 - instr[current];
        double.visible = true;

        if (focus.y > 0) double.y = focus.y - h;
        else if (focus.y < g.rollerH()-h) double.y = focus.y + h;
        else double.visible = false;
    }

    public override function begin() { progress(); }
    public override function during() { progress(); }
    public override function end() { progress(); }

    function progress() {
        if (instr.length < frames) return;
        if (current == target) {
            animating = false;
            
            if (!g.player().onGoal()) {
                if (g.v.carMoved) vrooms[vrooms.length.random()].play();
                // if (g.player().onGoal()) arrival.play();
            }
            
            return;
        } else current = (current + 1) % instr.length;

        sel();
        pick.play();
    }
}