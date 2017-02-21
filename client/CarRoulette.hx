package;

import openfl.events.MouseEvent;

using Consts;
using Math;

class CarRoulette implements Animatible {
    public var animating: Bool;
    public var future: Float;
    public var delay = 0.01;
    var g: Globals;
    var table = 'etc/carPick.png'.sprite();
    var rCar = 'cars/r.png'.sprite();
    var oCar = 'cars/o.png'.sprite();
    var yCar = 'cars/y.png'.sprite();
    var gCar = 'cars/g.png'.sprite();
    var bCar = 'cars/b.png'.sprite();
    var iCar = 'cars/i.png'.sprite();
    var vCar = 'cars/v.png'.sprite();
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

        table.y = Consts.HEIGHT - table.height;
        o_x = table.x+table.width/2;
        o_y = table.y+table.height/2;
        g.carPick.addChild(table);

        g.carPick.addChild(rCar);
        g.carPick.addChild(oCar);
        g.carPick.addChild(yCar);
        g.carPick.addChild(gCar);
        g.carPick.addChild(bCar);
        g.carPick.addChild(iCar);
        g.carPick.addChild(vCar);

        rCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','r']);
        });

        oCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','o']);
        });

        yCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','y']);
        });

        gCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','g']);
        });

        bCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','b']);
        });

        iCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','i']);
        });

        vCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            g.out.addLetter(['color','v']);
        });
    }

    public function transition() {
        rCar.x = o_x-c_w+r*(f*0-rp_off).cos();
        rCar.y = o_y-c_h+r*(f*0-rp_off).sin();
        oCar.x = o_x-c_w+r*(f*1+op_off).cos();
        oCar.y = o_y-c_h+r*(f*1+op_off).sin();
        yCar.x = o_x-c_w+r*(f*2-yp_off).cos();
        yCar.y = o_y-c_h+r*(f*2-yp_off).sin();
        gCar.x = o_x-c_w+r*(f*3+gp_off).cos();
        gCar.y = o_y-c_h+r*(f*3+gp_off).sin();
        bCar.x = o_x-c_w+r*(f*4-bp_off).cos();
        bCar.y = o_y-c_h+r*(f*4-bp_off).sin();
        iCar.x = o_x-c_w+r*(f*5+ip_off).cos();
        iCar.y = o_y-c_h+r*(f*5+ip_off).sin();
        vCar.x = o_x-c_w+r*(f*6-vp_off).cos();
        vCar.y = o_y-c_h+r*(f*6-vp_off).sin();

        rp_off = (rp_off+Math.PI/100)%(2*Math.PI);
        op_off = (op_off+Math.PI/114)%(2*Math.PI);
        yp_off = (yp_off+Math.PI/129)%(2*Math.PI);
        gp_off = (gp_off+Math.PI/143)%(2*Math.PI);
        bp_off = (bp_off+Math.PI/157)%(2*Math.PI);
        ip_off = (ip_off+Math.PI/171)%(2*Math.PI);
        vp_off = (vp_off+Math.PI/186)%(2*Math.PI);
    }
}