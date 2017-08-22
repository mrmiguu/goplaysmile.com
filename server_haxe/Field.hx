package;

import openfl.display.Sprite;
import openfl.text.TextField;

using C;

class Field extends Sprite {
    var g: Globals;
    var l: Sprite;
    var ms: Array<Sprite>;
    var r: Sprite;
    var f: TextField;
    var tW=44;
    var tE=35;
    public var length = 0;

    public function new(g: Globals, x: Float, y: Float, pw=false) {
        super();

        this.g = g;
        f = ''.text(x,y-32,72,0xFFFFFF);
        l = 'field/l.png'.sprite();
        ms = [for (i in 0...19) 'field/m.png'.sprite()];
        r = 'field/r.png'.sprite();

        f.displayAsPassword=pw;

        l.y = y - l.height/2; // center
        addChild(l);
        
        for (m in ms) {
            m.y = l.y;
            addChild(m);
        }

        r.y = l.y;
        addChild(r);
        addChild(f);

        setText('');
    }

    public function size() {
        return f.text.length;
    }

    public function password(tf: Bool) {
        f.displayAsPassword=tf;
    }

    public function getText() {
        return f.text;
    }

    /*
    0
    1 lr
    2 lmr
    3 lmmr
    */
    public function setText(t: String) {
        var t20 = t;

        if (t.length>11) {
            g.errSfx();
            t20 = t.substr(0,11);
        }

        if (t20.length == 0) {
            l.visible = false;

            for (m in ms) m.visible = false;

            r.visible = false;
        } else if (t20.length == 1) {
            l.x = (tE*2).center(C.WIDTH/2);
            l.visible = true;
            
            for (m in ms) m.visible = false;

            r.x = l.x+tE;
            r.visible = true;
        } else {
            l.x = ((tE*2)+tW*(t20.length-1)).center(C.WIDTH/2);
            l.visible = true;

            for (m in ms) m.visible = false;
            for (i in 0...(t20.length-1)) {
                if (i==0) ms[0].x = l.x+tE;
                else ms[i].x = ms[i-1].x+tW;

                ms[i].visible = true;
            }

            r.x = ms[t20.length-2].x+tW;
            r.visible = true;
        }

        f.text=t20;
        trace('field=${f.text}');
    }
}