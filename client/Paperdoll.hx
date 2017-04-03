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

class Paperdoll extends Sprite implements Animatible {

    public var frames: Int;
    public var states: Int;
    public var state: Int;
    
    public var animating: Bool;
    public var future: Float;
    public var delay: Float;

    var w: Int;
    var h: Int;
    var frame: Int;
    var lastState: Int;
    var tiles: Array<Tile>;

    public function new(name: String, d: Die) {
        
        super();
        
        frames = d.frames;
        states = d.states;
        delay = d.delay;
        mouseEnabled = false;

        var png = 'die/paperdoll_$name.png'.bmp();
        w = png.width;
        h = (png.height / states).int();

        x = d.x;
        y = d.y + d.height / 2;
        
        var map = new Tilemap(w, h, new Tileset(png, [for (s in 0...states) new Rectangle(0, s * h, w, h)]));
        addChild(map);

        tiles = [for (s in 0...states) new Tile(s)];
        map.addTiles(tiles);

        for (t in tiles) t.visible = false;
        tiles[state = states - 1].visible = true;
        lastState = state;
    }

    public function begin() {}
    public function during() {}
    public function end() {
        animating = false;
    }

    public function transition() {

        if (frame == 0) begin();
        else if (frame == frames - 1) end();
        else during(); // middle

        switch (frame) {
            
        case 0: rotation = 90; y -= 20; x += w;
        case 1: rotation = 0; y -= 40; x -= w;
        case 2: rotation = -90; y -= 20; y += h;
        case 3: rotation = -180; y += 20; x += w;
        case 4: rotation = -270; y += 40; y -= h;
        case 5: rotation = 0; y += 20; x -= w;
        }
        
        tiles[lastState].visible = false;
        tiles[state].visible = true;
        lastState = state; // if not updated, set as current
        frame = (frame + 1) % frames;
    }
}