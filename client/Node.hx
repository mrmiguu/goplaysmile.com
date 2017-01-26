package;

import openfl.display.Sprite;

using Consts;

class Node extends Sprite {
    public var id: String;

    public function new(id: String, sprite: Sprite) {
        super();

        this.id = id;

        addChild('maps/3d_${id}.png'.sprite());

        x = Consts.WIDTH/2 - width/2;
        y = Consts.HEIGHT - height;
        visible = false;

        sprite.addChild(this); // draw this on passed-in sprite
    }
}