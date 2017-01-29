package;

import haxe.Serializer;
import haxe.Unserializer;
import haxe.ds.ArraySort;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.geom.Point;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import sys.net.Socket;

using Math;
using Std;
using haxe.crypto.Md5;
using openfl.Assets;
using openfl.media.Sound;

typedef Sockets = Array<Socket>;
typedef Tokens = Array<Dynamic>;
typedef Mailbox = Array<String>;
typedef Pt = { var x: Int; var y: Int; }

class Consts {
    public static inline var WIDTH = 480;
    public static inline var HEIGHT = 800;
    public static inline var FONT_COLOR = 0x7F0000;
    public static inline var HOST = 'llllllll.club';
    public static inline var PORT = 4200;

    public static inline function take(m: Mailbox) {
        return m.shift();
    }

    public static inline function addLetter(m: Mailbox, t: Tokens) {
        var serial = new Serializer();

        for (token in t)
            serial.serialize(token);

        m.push(serial.toString());
    }

    public static inline function connect(g: Globals, user: String, pass: String) {
        return new Connection(g, HOST, PORT, user, pass.encode());
    }

    public static inline function serial(packet: String) {
        return new Unserializer(packet);
    }

    public static inline function next(serial: Unserializer) {
        return serial.unserialize();
    }

    public static inline function nextString(serial: Unserializer) {
        return serial.unserialize().string();
    }

    public static inline function text(s: String, x: Float, y: Float, pt: Int, c=FONT_COLOR) {
        var t = new TextField();
        t.embedFonts = true;
        t.text = s;
        t.x = x - t.width/2;
        t.y = y;
        t.autoSize = TextFieldAutoSize.CENTER;
        t.selectable = false;
        
        t.setTextFormat(new TextFormat(
            'assets/etc/lucon.ttf'.getFont().fontName,
            pt,
            c,
            true
        ));

        return t;
    }

    public static inline function textBox(s: String, x: Float, y: Float, pt: Int) {
        var t = new TextField();
        t.embedFonts = true;
        t.setTextFormat(new TextFormat(
            'assets/etc/lucon.ttf'.getFont().fontName,
            pt,
            Consts.FONT_COLOR,
            true
        ));
        t.multiline = false;
        t.wordWrap = false;
        t.text = s;
        t.x = x;
        t.y = y;
        t.type = TextFieldType.INPUT;
        t.border = true;
        t.borderColor = FONT_COLOR;
        t.maxChars = (t.width/pt).int();
        t.restrict = "A-Z a-z 0-9";
        
        return t;
    }

    /*
     * Difference between two points
     */
    public static inline function diff(a: Float, b: Float) {
        return (a - b).abs();
    }

    /*
     * Straight line between two points
     */
    public static inline function dist(ax: Int, ay: Int, bx: Int, by: Int) {
        return ((bx - ax).pow(2) + (by - ay).pow(2)).sqrt();
    }

    /*
     * A proper-fitting ratio is returned to resize appropriately
     */
    public static inline function scale(w: Int, h: Int) {
        return (w/WIDTH).min(h/HEIGHT);
    }

    /*
     * Quickly returns a sound handle
     */
    public static inline function sound(dir: String) {
        return ('assets/${dir}').fromFile();
    }

    /*
     * Quickly returns bitmap data
     */
    public static inline function bmp(dir: String) {
        return ('assets/${dir}').getBitmapData();
    }

    /*
     * Creates a tileset
     */
    public static inline function tileset(dir: String) {
        var png = bmp(dir);
        var set = new Tileset(png);
        set.addRect(png.rect);
        return set;
    }

    /*
     * Custom tileset for a tile
     */
    public static inline function tile(dir: String) {
        var tile = new Tile();
        tile.tileset = tileset(dir);
        return tile;
    }

    /*
     * Creates a tilemap base
     */
    public static inline function tilemap(dir: String, w = -1, h = -1) {
        var set = tileset(dir);

        var map = new Tilemap(
            if (w < 0) set.getRect(0).width.int() else w,
            if (h < 0) set.getRect(0).height.int() else h,
            set
        );

        map.addTile(new Tile());

        return map;
    }

    /*
     * Wraps a tilemap in a sprite
     */
    public static inline function mapToSprite(map: Tilemap) {
        var sprite = new Sprite();
        sprite.addChild(map);

        return sprite;
    }

    /*
     * Wraps a tilemap from a file in a sprite
     */
    public static inline function sprite(dir: String, x = 0, y = 0) {
        var sprite = mapToSprite(tilemap(dir));
        sprite.x = x;
        sprite.y = y;

        return sprite;
    }

    /*
     * Centers a line on a given point
     */
    public static inline function center(line: Float, point: Float) {
        return point - line/2;
    }

    /*
     * Code by Jason Lin © 2014
     */
    public static inline function locations(image: BitmapData) {
        var points: Array<Pt> = [];
        var cenX = 12;
        var cenY = 13;
        var halfCenY = (cenY/2).int();
        var color = 0xFF0000;

        for (j in 0...image.height)
            for (i in 0...image.width) {
                var newLoc = true;

                if (image.getPixel(i, j) == color)
                    if (points.length > 0) {
                        for (p in points) if ((p.x-i).abs() <= cenX && (p.y-j).abs() <= cenY)
                            newLoc = false;
                        if (newLoc) points.push({ x: i+1, y: j+halfCenY });
                    } else points.push({ x: i+1, y: j+halfCenY });
            }

        return points;
    }

    /*
     * Matches a name from a list of names and pulls the index
     */
    public static inline function nameToIndex(name: String, names: Array<String>) {
        var index = 0;
        for (i in 0...names.length) if (name == names[i]) index = i;
        return index;
    }
}