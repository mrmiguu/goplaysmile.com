package;

import openfl.events.MouseEvent;

using C;
using Math;

class CarRoulette implements Animatible {
    public var animating: Bool;
    public var future: Float;
    public var delay = 0.01;
    var g: Globals;
    var table = 'etc/carPick.png'.sprite();
    var carMap = [for (color in C.ROYGBIV) color => 'cars/$color.png'.sprite()];
    var c_w = 78/2;
    var c_h = 84/2;
    var r=200;
    var o_x: Float;
    var o_y: Float;
    var rp_off=0.0;
    var op_off=0.0;
    var yp_off=0.0;
    var gp_off=0.0;
    var bp_off=0.0;
    var ip_off=0.0;
    var vp_off=0.0;
    var f=2*Math.PI/7;

    public function new(g: Globals) {
        this.g = g;

        table.y = C.HEIGHT - table.height;
        o_x = table.x+table.width/2;
        o_y = table.y+table.height/2;
        g.carPick.addChild(table);

        for (color in C.ROYGBIV) {
            g.carPick.addChild(carMap[color]);
            carMap[color].addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
                g.out.addLetter(['color',color]);
            });
        }
    }

    public function putBack(color: String) {
        carMap[color].visible = true;
    }

    public function pick(color: String) {
        carMap[color].visible = false;
    }

    public function transition() {
        var ns = [0,1,2,3,4,5,6];

        for (car in carMap) {
            var n = ns.shift();
            car.x = o_x-c_w+r*(f*n).cos();
            car.y = o_y-c_h+r*(f*n).sin();
        }
    }
}