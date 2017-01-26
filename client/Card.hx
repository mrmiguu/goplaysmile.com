package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;

using Consts;
using Std;

class Card extends Animation {

    public var sprite: Sprite;
    public var h = 288;
    public var target = 0;
    var pick = 'roller/pick.ogg'.sound();
    var arrival = 'dests/arrival.ogg'.sound();
    var vrooms = [for (n in 0...3) 'cars/vroom${n}.ogg'.sound()];
    var current = 6;
    var instr = [];

    var roller: Sprite;
    var focus: Tile;
    var double: Tile;
    
    var g: Globals;

    public function new(g: Globals, name: String, roller: Sprite) {

        super(6, 0.125);

        this.roller = roller;
        this.g = g;

        var map = 'roller/${name}.png'.tilemap(
            roller.width.int(), roller.height.int());
        focus = map.getTileAt(0);
        map.addTile(double = new Tile());

        sprite = map.mapToSprite();
        sprite.y = roller.y;
    }

    public function i(y: Int) {

        if (instr.length < frames) instr.push(y);
        else sel();
    }

    public function sel() {

        if (instr.length < frames) return;

        focus.y = roller.height / 2 - instr[current];
        double.visible = true;

        if (focus.y > 0) double.y = focus.y - h;
        else if (focus.y < roller.height - h) double.y = focus.y + h;
        else double.visible = false;
    }

    public override function begin() { progress(); }
    public override function during() { progress(); }
    public override function end() { progress(); }

    function progress() {

        if (instr.length < frames) return;
        if (current == target) {
            animating = false;
            
            if (!g.me().onGoal()) {
                if (g.v.carMoved) vrooms[vrooms.length.random()].play();
                // if (g.me().onGoal()) arrival.play();
            }
            
            return;
        } else current = (current + 1) % instr.length;

        sel();
        pick.play();
    }
}