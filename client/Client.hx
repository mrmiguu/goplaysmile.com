package;

import haxe.Serializer;
import haxe.Unserializer;
import openfl.display.Sprite;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import sys.net.Host;
import sys.net.Socket;

using Consts;
using Math;
using Std;

class Client extends Game {
    var g = new Globals();
    var slide = 'etc/slide.ogg'.sound();
    var loginText: TextField;
    var cardText: TextField;
    var connection: Connection;
    // var rCar = 'cars/r.png'.sprite();
    // var oCar = 'cars/o.png'.sprite();
    // var yCar = 'cars/y.png'.sprite();
    // var gCar = 'cars/g.png'.sprite();
    // var bCar = 'cars/b.png'.sprite();
    // var iCar = 'cars/i.png'.sprite();
    // var vCar = 'cars/v.png'.sprite();

    public function new() {
        super();

        // add ambient background
        addChild('etc/bg.png'.sprite());

        scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight);

        var bgm = 'etc/bgm.ogg'.sound();
        // bgm.play(0, 16085); // 420 hours

       loginState();
       carPickState();
       toFromState();
       inGameState();
        
       g.radio = new Radio(g.login,g.carPick);
       g.radio.add(g.toFrom);
       g.radio.add(g.inGame);
       g.radio.push(g.login);
    }

    function carPickState() {
        g.carPick.addAnimation(g.carRoulette = new CarRoulette(g));
        // var table = 'etc/carPick.png'.sprite();
        // table.y = Consts.HEIGHT - table.height;
        // g.carPick.addChild(table);

        // var c_w = 78/2;
        // var c_h = 84/2;
        // var r=200;
        // var o_x=table.x+table.width/2;
        // var o_y=table.y+table.height/2;
        // var p=7;
        // var p_off=Math.PI/2;
        // var f=2*Math.PI/p;

        // rCar.x = o_x-c_w+r*(f*0-p_off).cos();
        // rCar.y = o_y-c_h+r*(f*0-p_off).sin();
        // oCar.x = o_x-c_w+r*(f*1-p_off).cos();
        // oCar.y = o_y-c_h+r*(f*1-p_off).sin();
        // yCar.x = o_x-c_w+r*(f*2-p_off).cos();
        // yCar.y = o_y-c_h+r*(f*2-p_off).sin();
        // gCar.x = o_x-c_w+r*(f*3-p_off).cos();
        // gCar.y = o_y-c_h+r*(f*3-p_off).sin();
        // bCar.x = o_x-c_w+r*(f*4-p_off).cos();
        // bCar.y = o_y-c_h+r*(f*4-p_off).sin();
        // iCar.x = o_x-c_w+r*(f*5-p_off).cos();
        // iCar.y = o_y-c_h+r*(f*5-p_off).sin();
        // vCar.x = o_x-c_w+r*(f*6-p_off).cos();
        // vCar.y = o_y-c_h+r*(f*6-p_off).sin();

        // g.carPick.addChild(rCar);
        // g.carPick.addChild(oCar);
        // g.carPick.addChild(yCar);
        // g.carPick.addChild(gCar);
        // g.carPick.addChild(bCar);
        // g.carPick.addChild(iCar);
        // g.carPick.addChild(vCar);

        // rCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','r']);
        // });

        // oCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','o']);
        // });

        // yCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','y']);
        // });

        // gCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','g']);
        // });

        // bCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','b']);
        // });

        // iCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','i']);
        // });

        // vCar.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
        //     g.out.addLetter(['color','v']);
        // });

        addChild(g.carPick);
    }

    function loginState() {
        passOverlay = 'password/overlay.png'.sprite();
        passOverlay.visible = false;
        passOverlay.addEventListener(MouseEvent.MOUSE_DOWN, function(_) resetToUserState());
        g.login.addChild(passOverlay);

        loginButton = new Button(g,g.login,'username/username');
        loginButton.setX(loginButton.width.center(Consts.WIDTH/2));
        loginButton.setY(loginButton.height.center(Consts.HEIGHT/2));
        loginButton.onPop(passStage);

        passButton = new Button(g,g.login,'password/password');
        passButton.setX(passButton.width.center(Consts.WIDTH/2));
        passButton.setY(passButton.height.center(Consts.HEIGHT/2));
        passButton.onPop(connect);
        passButton.setVisible(false);

        userField = new Field(g,Consts.WIDTH/2,loginButton.y/2,'login.cache');
        g.login.addChild(userField);

        var rows = ['1234567890','QWERTYUIOP','ASDFGHJKL','ZXCVBNM'];
        var keysX=400.center(Consts.WIDTH/2).int();
        var keysY=Consts.HEIGHT-225;

        for (r in 0...rows.length) {
            var xOff = keysX;

            if (r>=1) xOff+=16;
            if (r>=2) xOff+=8;
            if (r>=3) xOff+=16;

            for (k in 0...rows[r].length) {
                var keyButton = new Button(g,g.login,'keys/blank');
                keyButton.setX(k*33+xOff);
                keyButton.setY(r*55+keysY);
                keyButton.addChild(rows[r].charAt(k).text(15,17,18));
                keyButton.onPop(function()
                    userField.addText(rows[r].charAt(k))
                );

                g.login.addChild(keyButton);
            }
        }

        undoButton = new Button(g,g.login,'key_undo/blank');
        undoButton.setX(keysX+330);
        undoButton.setY(keysY);
        undoButton.addChild('Back'.text(30,15,18));

        undoButton.onPop(function() {
            if (userField.size() > 0) userField.undo();
            else resetToUserState();
        });

        g.login.addChild(undoButton);
        g.login.addChild(loginButton);
        g.login.addChild(passButton);
        addChild(g.login);
    }

    var loginButton: Button;
    var passButton: Button;
    var userField: Field;
    var undoButton: Button;
    var passOverlay: Sprite;

    function resetToUserState() {
        if (!passOverlay.visible) return;

        // reset to username step
        passButton.setVisible(false);
        loginButton.setVisible(true);

        g.user = '';
        userField.show();
        passOverlay.visible = false;
    }

    function passStage() {
        // save username and clear for password
        var shown = userField.getShownCache();
        g.user = userField.getText();

        if (shown != g.user) {
            trace('$shown != ${g.user}');
            userField.resetHiddenCache();
        }

        if (g.user.length == 0) return;

        trace('g.user=${g.user}');

        loginButton.setVisible(false);
        passButton.setVisible(true);

        userField.hide();

        passOverlay.visible = true;
    }

    function connect() {
        trace('connect');

        var pass = userField.getText();
        if (pass.length == 0 || pass.indexOf('_') != -1) return;

        connection = g.connect(g.user,pass);
        addChild(connection);
    }

    function toFromState() {
        var card = 'etc/card.png'.sprite();
        card.y = card.height.center(Consts.HEIGHT/2);

        card.addEventListener(MouseEvent.CLICK, function(m) {
            slide.play();
            g.radio.push(g.inGame);
        });

        cardText = ''.text(Consts.WIDTH/2, card.height/2, 18);

        card.addChild(cardText);
        g.toFrom.addChild(card);
        addChild(g.toFrom);
    }

    function inGameState() {
        // setup gps
        var gps = 'etc/gps.png'.sprite();
        gps.y = gps.x = gps.width.center(Consts.WIDTH / 2);

        // setup viewport (over gps)
        var view = new Viewport(g, 49, 37, 308, 174, gps, g.inGame);
        g.inGame.addAnimation(view);
        
        // setup the roller for the card instructions (spins)
        var roller = 'roller/overlay.png'.sprite();
        roller.y = Consts.HEIGHT - roller.height;

        g.v = view;
        // g.g.toFrom = g.toFrom;
        g.toFromText = cardText;
        // g.g.inGame = g.inGame;

        // setup the entire terrain system
        var terrain = new Terrain(g);
        terrain.y -= roller.height;
        g.t = terrain;

        // add exp bar
        var bar = 'lvl/exp.png'.sprite();

        // level text
        g.l = new Level(gps, bar);

        // hide a card to rotate under the roller
        var c1 = new Card(g,'c1',roller);
        c1.i(38);
        c1.i(96);
        c1.i(143);
        c1.i(183);
        c1.i(223);
        c1.i(263);

        g.inGame.addChild(c1.sprite);
        g.inGame.addAnimation(c1);
        g.inGame.addChild(roller);
        g.inGame.addChild(terrain);
        g.inGame.addChild(gps);
        g.inGame.addChild(view);
        g.inGame.addChild(g.l.text);
        g.inGame.addChild(g.l);
        g.inGame.addAnimation(g.l);

        // setup the entire die system
        // -- the die needs the terrain handle because
        // -- it controls it eventually
        var die = new Die(g, c1);

        die.x = die.width.center(Consts.WIDTH / 2);
        die.y = die.height.center(Consts.HEIGHT / 2)
                    + die.height
                    - roller.height;

        g.inGame.addChild(die);
        g.inGame.addAnimation(die);
        
        // create the example paperdoll
        var pdH = new Paperdoll('headlights',die);
        g.inGame.addChild(pdH);
        g.inGame.addAnimation(pdH);
        
        // set our die's paperdoll
        die.paperdoll = pdH;

        // exp bar is a gui element        
        g.inGame.addChild(bar);
        addChild(g.inGame);
    }
}
