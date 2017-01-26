package;

import openfl.display.Sprite;
import openfl.text.TextField;

using Consts;
using Math;
using Std;

class Level extends SpriteSheet {
    
    public var text: TextField;

    var lv = 1;
    var req: Int;
    var exp: Int;
    var sound = 'lvl/up.ogg'.sound();
    var bar: Sprite;

    public function new(gps: Sprite, bar: Sprite) {

        super('lvl/fireworks.png', 5, 8, 0.025);

        this.bar = bar;

        x = gps.x + width.center(220);
        y = gps.y + height.center(228);
        mouseEnabled = false;

        text = ''.text(gps.x + 220, gps.y + 217, 22);

        updateText();
        updateBar();
    }

    public override function begin() {

        state = (state + 1) % states;
    }

    public override function end() {

        if (state == states - 1) {

            animating = false;
            updateText();
        }
    }

    function updateBar() {

        bar.width = Consts.WIDTH * exp / (req - 1);
    }

    public function set(req: Int, exp: Int, lv: Int) {

        this.req = req;
        this.exp = exp;
        updateBar();

        // check for level-up
        if (lv > this.lv) increaseLevel();

        this.lv = lv;
    }

    function increaseLevel() {

        animating = true;
        sound.play();
    }

    function updateText() {

        text.text = '${lv}';
    }
}