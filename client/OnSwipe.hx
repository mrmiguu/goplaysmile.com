package;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
using Math;
class OnSwipe implements Animatible {
    public var animating:Bool;
    public var future:Float;
    public var delay:Float;
    var g:Globals;
    var s:Sprite;
    var swiped:Bool;
    var f:Void->Void;
    var lastX:Float;
    var lastY:Float;
    var dist:Int;
    public function new(g:Globals,s:Sprite,f:Void->Void) {
        this.g=g;
        this.s=s;
        g.s.addEventListener(MouseEvent.MOUSE_UP,mouseUp);
        s.addEventListener(MouseEvent.MOUSE_DOWN,mouseDown);
        delay=0.1; //time (1/100th of a second) for swipe scan
        dist=25; //pixels for mouse to travel for swipe
        this.f=f;
    }
    public function transition() {
        swiped = (g.s.mouseX-lastX).abs() >= dist ||
                 (g.s.mouseY-lastY).abs() >= dist;
        lastX=g.s.mouseX;
        lastY=g.s.mouseY;
    }
    function mouseUp(m:MouseEvent) {
        if (swiped) f();
        animating=false;
    }
    function mouseDown(m:MouseEvent) {
        animating=true;
    }
}