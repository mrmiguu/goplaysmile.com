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
    var radio: Radio;
    var login = new Game();
    var toFrom = new Game();
    var inGame = new Game();
    var slide = 'etc/slide.ogg'.sound();
    var loginText: TextField;
    var cardText: TextField;
    var connection: Connection;

    public function new() {
        super();

        // add ambient background
        addChild('etc/bg.png'.sprite());

        scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight);

        var bgm = 'etc/bgm.ogg'.sound();
        bgm.play(0, 16085); // 420 hours

        loginState();
        toFromState();
        inGameState();
        
        radio = new Radio(login, toFrom);
        radio.add(inGame);

        radio.push(login);
    }

    function loginState() {
        var loginButton = new Button(login, 'login/login');

        loginButton.x = loginButton.width.center(Consts.WIDTH/2);
        loginButton.y = loginButton.height.center(Consts.HEIGHT/2);
        loginButton.onPop(connect);

        // loginText = 'Richard'.textBox(0, 0, 18);

        // var keyButtons = [];

        // 0~9 and A~Z
        for (L in 0...36) {
            var keyButton = new Button(login,'keys/blank');
            keyButton.x = (L%10)*33;
            keyButton.y = (L/10).int()*55;
            keyButton.addChild('${L%10}'.text(21,15,18));
            login.addChild(keyButton);
        }
        
        // login.addChild(loginText);
        login.addChild(loginButton);
        addChild(login);
    }

    function connect() {
        connection = g.login(g.user='Richard', 'Richard');
        addChild(connection);
        // switch to the logged-in screen
        radio.push(toFrom);
    }

    function toFromState() {
        var card = 'etc/card.png'.sprite();
        card.y = card.height.center(Consts.HEIGHT/2);

        card.addEventListener(MouseEvent.CLICK, function(m) {
            slide.play();
            radio.push(inGame);
        });

        cardText = ''.text(Consts.WIDTH/2, card.height/2, 18);

        card.addChild(cardText);
        toFrom.addChild(card);
        addChild(toFrom);
    }

    function inGameState() {
        // setup gps
        var gps = 'etc/gps.png'.sprite();
        gps.y = gps.x = gps.width.center(Consts.WIDTH / 2);

        // setup viewport (over gps)
        var view = new Viewport(g, 49, 37, 308, 174, gps, inGame);
        inGame.addAnimation(view);
        
        // setup the roller for the card instructions (spins)
        var roller = 'roller/overlay.png'.sprite();
        roller.y = Consts.HEIGHT - roller.height;

        g.v = view;
        g.toFrom = toFrom;
        g.toFromText = cardText;
        g.inGame = inGame;

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

        inGame.addChild(c1.sprite);
        inGame.addAnimation(c1);
        inGame.addChild(roller);
        inGame.addChild(terrain);
        inGame.addChild(gps);
        inGame.addChild(view);
        inGame.addChild(g.l.text);
        inGame.addChild(g.l);
        inGame.addAnimation(g.l);

        // setup the entire die system
        // -- the die needs the terrain handle because
        // -- it controls it eventually
        var die = new Die(g, c1);

        die.x = die.width.center(Consts.WIDTH / 2);
        die.y = die.height.center(Consts.HEIGHT / 2)
                    + die.height
                    - roller.height;

        inGame.addChild(die);
        inGame.addAnimation(die);
        
        // create the example paperdoll
        var pdH = new Paperdoll('headlights',die);
        inGame.addChild(pdH);
        inGame.addAnimation(pdH);
        
        // set our die's paperdoll
        die.paperdoll = pdH;

        // exp bar is a gui element        
        inGame.addChild(bar);
        addChild(inGame);
    }
}