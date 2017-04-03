package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;

using C;
using Math;
using Std;

class Die extends SpriteSheet {
    public var paperdoll: Paperdoll;
    
    var lifts = [for (n in 0...3) 'die/lift${n}.ogg'.sound()];
    var lands = [for (n in 0...3) 'die/land${n}.ogg'.sound()];

    var g: Globals;
    var rollSent: Bool;
    var color: String;

    public function new(g: Globals, color: String) {
        super('die/${color}ice.png', 6, 6, 0.025);

        this.g = g;
        this.color = color;

        addEventListener(MouseEvent.CLICK, function(e) {
            if (!rollSent) {
                g.out.addLetter(['roll']);
                rollSent = true;
            }
        });
    }

    public function setX(x: Float) {
        this.x = width.center(x);
    }

    public function setY(y: Float) {
        this.y = y-height;
    }

    public function roll(side: Int) {
        state = side;
        animating = true;
        if (paperdoll != null) paperdoll.animating = true;
        rollSent = false;
    }

    public override function begin() {
        if (g.player().getColor() == color && !g.card().animating)
            g.card().target = state;

        if (paperdoll != null)
            paperdoll.state = state;
        
        if (g.player().getColor() == color)
            g.card().animating = true;

        lifts[lifts.length.random()].play();
    }

    public override function end() {

        animating = false;
        lands[lands.length.random()].play();
    }
}