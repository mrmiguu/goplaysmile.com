package;

import haxe.Serializer;
import haxe.Unserializer;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import sys.net.Host;
import sys.net.Socket;

using Consts;
using Std;

class Client extends Game {
    var g = new Globals();
    var slide = 'etc/slide.ogg'.sound();
    var loginText: TextField;
    var cardText: TextField;
    var connection: Connection;
    var userField: Field;

    public function new() {
        super();

        // add ambient background
        addChild('etc/bg.png'.sprite());

        scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight);

        var bgm = 'etc/bgm.ogg'.sound();
        // bgm.play(0, 16085); // 420 hours

        loginState();
        toFromState();
        inGameState();
        
        g.radio = new Radio(g.login,g.toFrom);
        g.radio.add(g.inGame);
        g.radio.push(g.login);
    }

    function loginState() {
        var loginButton = new Button(g,g.login,'login/login');

        loginButton.x = loginButton.width.center(Consts.WIDTH/2);
        loginButton.y = loginButton.height.center(Consts.HEIGHT/2);
        loginButton.onPop(connect);

        userField = new Field(g,Consts.WIDTH/2,loginButton.y/2);

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
                keyButton.x = k*33+xOff;
                keyButton.y = r*55+keysY;
                var keyText = rows[r].charAt(k).text(20,15,18);
                keyButton.addChild(keyText);
                keyButton.onPop(function()
                    userField.setText(userField.getText() + rows[r].charAt(k))
                );

                g.login.addChild(keyButton);
            }
        }

        var undoButton = new Button(g,g.login,'key_undo/blank');
        undoButton.x=keysX+330;
        undoButton.y=keysY;
        var undoText = 'Undo'.text(35,15,18);
        undoButton.addChild(undoText);
        undoButton.onPop(function()
            userField.setText(userField.getText().substr(0,g.user.length-1))
        );

        g.login.addChild(userField);
        g.login.addChild(loginButton);
        g.login.addChild(undoButton);
        addChild(g.login);
    }

    function connect() {
        connection = g.connect(g.user=userField.getText(),'Richard');
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