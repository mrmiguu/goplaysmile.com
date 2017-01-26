package;

import haxe.Timer;
import openfl.display.Sprite;
import openfl.events.Event;

class Game extends Sprite implements IButton {
    var animatibles = [];

    public function new() {
        super();
        addEventListener(Event.ENTER_FRAME, frame);
    }

    public function pushIn() {
        visible = true;
    }

    public function popOut() {
        visible = false;
    }


    public function addAnimation(a: Animatible) {
        animatibles.push(a);
    }

    function frame(e: Event) {
        var time = Timer.stamp();

        for (a in animatibles) if (a.animating && time > a.future) {
            a.transition();
            a.future = time + a.delay;
        }
    }
}