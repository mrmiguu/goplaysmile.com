package;

import openfl.display.Sprite;

using C;

class Node extends Sprite {
    public var id: String;

    public function new(id: String, sprite: Sprite) {
        super();

        this.id = id;

        addChild('maps/3d_${id}.png'.sprite());

        x = C.CENTER_W - width/2;
        y = C.HEIGHT - height;
        visible = false;

        sprite.addChild(this); // draw this on passed-in sprite
    }
}