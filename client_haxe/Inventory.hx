package;

import openfl.display.Sprite;
import openfl.events.MouseEvent;

using C;
using motion.Actuate;

//swiping items logged in the inventory
//cycles through the selection
class Inventory extends Game implements Animatible {
    var g:Globals;
    var lastX:Null<Float>;
    var items=[];
    var anims=[];
    var cardLight:Sprite;
    var paperdollLight:Sprite;
    var panel:Sprite;

    public function new(g:Globals,folder:String) {
        super();
        this.g=g;
        addChild(panel='$folder/panel.png'.sprite());
        addAnimation(this);
    }

    public function reloc(loc:String) {
        panel.anchor__Of(loc,g.s);
    }

    public function addCard(card:String) {
        var i = 'cards/$card'.sprite();
        i.anchor__Of('c',panel);
        i.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            lastX = g.stg.mouseX;
        });
        addChild(i);

        cardLight = 'cards/equipped.png'.sprite();
        cardLight.mouseEnabled=false;
        cardLight.anchor__Of('b',i);
        addChild(cardLight);

        g.stg.addEventListener(MouseEvent.MOUSE_MOVE, function(m) {
            if (lastX==null) return;
            i.x += g.stg.mouseX-lastX;
            cardLight.anchor__Of('b',i);
            lastX = g.stg.mouseX;
        });
        g.stg.addEventListener(MouseEvent.MOUSE_UP, function(m) {
            if (lastX==null) return;
            resetItem();
            i.anchor__Of('c',panel);
            cardLight.anchor__Of('b',i);
        });

        var a = new OnSwipe(g,i,function()onSwipe(i));
        addAnimation(a);
        anims.push(a);
        items.push(i);
    }

    public function addPaperdoll(paperdoll:String) {
        var i = 'paperdoll/$paperdoll'.sprite();
        i.anchor__Of('c',panel);
        i.addEventListener(MouseEvent.MOUSE_DOWN, function(m) {
            lastX = g.stg.mouseX;
        });
        addChild(i);

        paperdollLight = 'paperdoll/equipped.png'.sprite();
        paperdollLight.mouseEnabled=false;
        paperdollLight.anchor__Of('bl',i);
        addChild(paperdollLight);

        g.stg.addEventListener(MouseEvent.MOUSE_MOVE, function(m) {
            if (lastX==null) return;
            i.x += g.stg.mouseX-lastX;
            paperdollLight.anchor__Of('bl',i);
            lastX = g.stg.mouseX;
        });
        g.stg.addEventListener(MouseEvent.MOUSE_UP, function(m) {
            if (lastX==null) return;
            resetItem();
            i.anchor__Of('c',panel);
            paperdollLight.anchor__Of('bl',i);
        });

        var a = new OnSwipe(g,i,function()onSwipe(i));
        addAnimation(a);
        anims.push(a);
        items.push(i);
    }

    function resetItem() {
        lastX=null;
        animating=true;
        g.slideSfx();
    }

    function onSwipe(item:Sprite) {
        trace ("[[ Swiped inventory ]]");
    }

    public var animating: Bool;
    public var future: Float;
    public var delay = 0.025;
    public function transition() {
        //when the cursor item is at rest,
        //turn off movement

    }
}