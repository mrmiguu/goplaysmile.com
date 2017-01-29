package;

import openfl.display.Sprite;
import openfl.events.MouseEvent;

using Consts;

class Button extends Sprite implements IButton {
    var pushFn = function(){};
    var popFn = function(){};
    var up: Sprite;
    var down: Sprite;
    var pushed = false;
    var g: Globals;

    public function new(g: Globals, parent: Sprite, dir: String) {
        super();

        this.g = g;
        
        up = '${dir}_up.png'.sprite();
        down = '${dir}_down.png'.sprite();

        addEventListener(MouseEvent.MOUSE_DOWN, function(_) pushIn());
        addEventListener(MouseEvent.MOUSE_UP, function(_) popOut());
        parent.addEventListener(MouseEvent.MOUSE_UP, function(_) reset());
        parent.addEventListener(MouseEvent.ROLL_OUT, function(_) reset());

        addChild(up);
        addChild(down);
        reset();
    }

    public function onPush(f: Void->Void) { pushFn = f; }
    public function onPop(f: Void->Void) { popFn = f; }

    public function pushIn() {
        for (i in 0...numChildren) {
            var child = getChildAt(i);
            if (child != up && child != down)
                child.y += 3;
        }

        pushed = true;
        g.pushSfx();
        up.visible = false;
        down.visible = true;
        pushFn();
    }

    function reset() {
        if (pushed) for (i in 0...numChildren) {
            var child = getChildAt(i);
            if (child != up && child != down)
                child.y -= 3;
        }

        down.visible = false;
        up.visible = true;
        pushed = false;
    }

    public function popOut() {
        if (!pushed) return;
        g.popSfx();
        reset();
        popFn();
        pushed = false;
    }
}