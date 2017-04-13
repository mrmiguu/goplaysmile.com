package;

import openfl.display.Sprite;
import openfl.display.Stage;
import openfl.events.MouseEvent;
import openfl.text.TextField;

using C;
using Std;

class Globals {
    public var s:Sprite;
    public var stg:Stage;
    public var login = new Game();
    public var carPick = new Game();
    public var toFrom = new Game();
    public var bag:Inventory;
    public var shop:Inventory;
    public var inGame = new Game();
    public var radio: Radio;
    public var out = [];
    public var bC = new Cars();
    public var lC = new Cars();
    public var bD = new Dests();
    public var lD = new Dests();
    public var t: Terrain;
    public var v: Viewport;
    public var toFromText: TextField;
    public var l: Level;
    public var user = '';
    public var carRoulette: CarRoulette;

    // maps color to actual color-version of die
    var diceMap: Map<String,Die>;

    var cardEquipped: Card;
    var rollerOverlay: Sprite;

    var bgFn: Dynamic->Void;
    var background = 'etc/bg.png'.sprite();
    var overlay = 'etc/overlay.png'.sprite();
    var err = 'etc/err.ogg'.sound();
    var slides = [for (n in 0...3) 'etc/slide${n}.ogg'.sound()];
    var taps = [for (n in 0...3) 'etc/tap${n}.ogg'.sound()];
    var pushes = [for (n in 0...3) 'etc/push${n}.ogg'.sound()];
    var pops = [for (n in 0...3) 'etc/pop${n}.ogg'.sound()];
    var playerMap = new Map<String, Player>();

    public function new() {}

    public function createDice() {
        diceMap = [for (color in C.ROYGBIV) color => new Die(this,color)];

        for (d in diceMap) {
            d.setX(C.CENTER_W);
            d.setY(C.HEIGHT-rollerOverlay.height-d.height);
            d.visible = false;
            inGame.addChild(d);
            inGame.addAnimation(d);
        }
    }

    public function createRoller() {
        rollerOverlay = 'roller/overlay.png'.sprite();
        rollerOverlay.y = C.HEIGHT - rollerOverlay.height;
    }

    public function rollerX() { return rollerOverlay.x; }
    public function rollerY() { return rollerOverlay.y; }
    public function rollerH() { return rollerOverlay.height; }
    public function rollerW() { return rollerOverlay.width; }

    public function die(color = '') {
        return
            if (color.length == 0)
                diceMap[playerMap[user].getColor()]
            else
                diceMap[color];
    }

    public function dice() {
        return diceMap.iterator();
    }

    public function addCardInGame() {
        inGame.addChild(cardEquipped.canvas);
        inGame.addAnimation(cardEquipped);
        inGame.addChild(rollerOverlay);
    }

    public function equipCard(name: String) {
        cardEquipped = new Card(this,name);
    }

    public function card() {
        return cardEquipped;
    }

    public function addBackgrounds(parent: Sprite) {
        overlay.mouseEnabled = false;
        hideOverlay();
        parent.addChild(background);
        parent.addChild(overlay);
    }

    // public function initBgMouseDown() {
    //     background.addEventListener(MouseEvent.CLICK, function(m) {
    //         if (bgFn==null) radio.undo();
    //     });
    // }

    public function setBgMouseDown(f: Void->Void) {
        bgFn = function(_) f();
        background.addEventListener(MouseEvent.MOUSE_DOWN, bgFn);
    }

    public function resetBgMouseDown() {
        background.removeEventListener(MouseEvent.MOUSE_DOWN, bgFn);
    }

    public function showOverlay() { overlay.visible = true; }
    public function hideOverlay() { overlay.visible = false; }
    public function overlayShown() { return overlay.visible; }
    public function overlayHidden() { return !overlay.visible; }

    public function player(user = '') {
        if (user.length == 0) user = this.user;
        if (!playerMap.exists(user))
            playerMap[user] = new Player(this,user);

        return playerMap[user];
    }

    public function me(user: String) {
        return user==this.user;
    }

    public function players() {
        return playerMap.iterator();
    }

    public function removePlayer(name: String) {
        hideColor(playerMap[name].getColor());
        playerMap.remove(name);
    }

    public function showColor(color: String) {
        carRoulette.pick(color);
        bC.get(color).visible = true;
        lC.get(color).visible = true;
        bD.get(color).visible = true;
        lD.get(color).visible = true;
    }

    public function hideColor(color: String) {
        carRoulette.putBack(color);
        bC.get(color).visible = false;
        lC.get(color).visible = false;
        bD.get(color).visible = false;
        lD.get(color).visible = false;
    }

    public function errSfx() {
        err.play();
    }

    public function slideSfx() {
        slides[slides.length.random()].play();
    }

    public function tapSfx() {
        taps[taps.length.random()].play();
    }

    public function pushSfx() {
        pushes[pushes.length.random()].play();
    }

    public function popSfx() {
        pops[pushes.length.random()].play();
    }
}