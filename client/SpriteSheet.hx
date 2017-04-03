package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.text.TextField;

using C;
using Math;
using Std;

class SpriteSheet extends Sprite implements Animatible {

    public var frames: Int;
    public var states: Int;
    public var state: Int;

    public var animating: Bool;
    public var future: Float;
    public var delay: Float;

    var frame: Int;
    var lastState: Int;
    var tiles: Array<Tile>;

    public function new(file: String, frames: Int, states: Int, delay: Float) {

        super();

        this.delay = delay;

        var png = file.bmp();
        var w = (png.width / (this.frames = frames)).int();
        var h = (png.height / (this.states = states)).int();

        var map = new Tilemap(w, h, new Tileset(png,
            [for (s in 0...states)
                for (f in 0...frames) new Rectangle(f * w, s * h, w, h)]));

        addChild(map);

        tiles = [for (s in 0...states)
                    for (f in 0...frames) new Tile(s * frames + f)];
        
        map.addTiles(tiles);

        for (t in tiles) t.visible = false;
        tiles[frames * states - 1].visible = true;
        lastState = states - 1;
    }

    public function begin() {}
    public function during() {}
    public function end() {}

    public function transition() {

        if (frame == 0) begin();
        else if (frame == frames - 1) end();
        else during(); // middle

        tiles[lastState * frames
                + (if (frame > 0) frame else frames) - 1].visible = false;

        tiles[state * frames + frame].visible = true;

        lastState = state; // if not updated, set as current
        
        frame = (frame + 1) % frames;
    }
}