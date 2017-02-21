package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;

using Consts;
using Math;
using Std;

class Die extends SpriteSheet {
    public var paperdoll: Paperdoll;
    
    var lifts = [for (n in 0...3) 'die/lift${n}.ogg'.sound()];
    var lands = [for (n in 0...3) 'die/land${n}.ogg'.sound()];

    var card: Card;
    var rollSent: Bool;

    public function new(g: Globals, card: Card) {
        super('die/dice.png', 6, 6, 0.025);

        g.roll = roll;
        this.card = card;

        addEventListener(MouseEvent.CLICK, function(e) {
            if (!rollSent) {
                g.out.addLetter(['roll']);
                rollSent = true;
            }
        });
    }

    public function roll(side: Int) {
        state = side;
        animating = true;
        if (paperdoll != null) paperdoll.animating = true;
        rollSent = false;
    }

    public override function begin() {
        if (!card.animating) card.target = state;
        if (paperdoll != null) paperdoll.state = state;
        
        card.animating = true;
        lifts[lifts.length.random()].play();
    }

    public override function end() {

        animating = false;
        lands[lands.length.random()].play();
    }
}