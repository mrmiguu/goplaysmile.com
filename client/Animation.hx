package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.text.TextField;

using Consts;
using Math;
using Std;

class Animation implements Animatible {

    public var frames: Int;
    
    public var animating: Bool;
    public var future: Float;
    public var delay: Float;

    var frame: Int;

    public function new(frames: Int, delay: Float) {

        this.frames = frames;
        this.delay = delay;
    }

    public function begin() {}
    public function during() {}
    public function end() {}

    public function transition() {

        if (frame == 0) begin();
        else if (frame == frames - 1) end();
        else during(); // middle

        frame = (frame + 1) % frames;
    }
}