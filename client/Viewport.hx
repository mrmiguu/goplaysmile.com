package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.media.Sound;

using Consts;
using Math;
using Std;
using openfl.Assets;

class Viewport extends Sprite implements Animatible {
    public var bC = new Cars();
    public var lC = new Cars();
    public var bD = new Dests();
    public var lD = new Dests();
    public var board: Tile;
    public var zoom: Sprite;
    public var realW: Int;
    public var realH: Int;
    public var anim: Animation;

    public var nodePoints = 'etc/map.png'.bmp().locations();
    public var nodeNames = [
        'santaclarita', 'sanfernando', 'lakeviewterrace', 'sunland', 'panoramacity', 
        'lacanada', 'pasadena', 'vannuys', 'burbank', 'studiocity', 
        'glendale', 'azusa', 'sandimas', 'claremont', 'highlandpark', 
        'losangeles', 'beverlyhills', 'rosemead', 'westcovina', 'pomona', 'elmonte', 
        'montereypark', 'calpoly', 'usc', 'commerce', 'southelmonte', 
        'culvercity', 'chinohills', 'santamonica', 'diamondbar', 
        'cityofindustry', 'santafesprings', 'lax', 'watts', 'lynwood', 'brea', 
        'corona', 'bellflower', 'compton', 'hawthorne', 'gardena', 'dominguezhills', 
        'northlongbeach', 'torrance', 'buenapark', 'carson', 'fullerton', 
        'yorbalinda', 'anaheim', 'cypress', 'westminster', 'palosverdes', 'gardengrove', 
        'orange', 'longbeach', 'sanpedro', 'huntingtonbeach', 'santaana', 
        'fountainvalley'
    ];

    var left: Float;
    var top: Float;
    var right: Float;
    var bottom: Float;
    var world: Sprite;
    var slide: Sound;
    var mouseHeld: Bool;
    var lastX: Float;
    var lastY: Float;
    var infoCard: Sprite;

    var w: Int;
    var h: Int;

    var g: Globals;

    public function new(g: Globals, x: Int, y: Int, w: Int, h: Int, gps: Sprite, from: Sprite) {
        super();

        this.g = g;
        slide = 'etc/slide.ogg'.sound();

        this.x = gps.x + x;
        this.y = gps.y + y;
        this.w = w;
        this.h = h;
        
        zoom = gpsMap();
        addChild(zoom);

        world = littleMap();
        addChild(world);
        world.visible = !zoom.visible;

        // enable double click? (weird)
        zoom.doubleClickEnabled = true;
        world.doubleClickEnabled = true;
        zoom.addEventListener(MouseEvent.DOUBLE_CLICK, doubleClick);
        world.addEventListener(MouseEvent.DOUBLE_CLICK, doubleClick);

        zoom.addEventListener(MouseEvent.CLICK, click);
        addEventListener(MouseEvent.MOUSE_DOWN, function(m) if (zoom.visible) {
            mouseHeld = true;
            animating = false;
        });
        from.addEventListener(MouseEvent.MOUSE_UP, function(m) mouseHeld = false);
        from.addEventListener(MouseEvent.ROLL_OUT, function(m) mouseHeld = false);
        from.addEventListener(MouseEvent.MOUSE_MOVE, mouseMove);
        
        infoCard = 'etc/info.png'.sprite();
        infoCard.visible = false;
        infoCard.addEventListener(MouseEvent.CLICK, function(m) {
            zoom.visible = true;
            infoCard.visible = false;
            slide.play();
        });
        addChild(infoCard);
    }

    function point(id: String) {
        return nodePoints[id.nameToIndex(nodeNames)];
    }

    public function aimRC(loc: String) { aRC = point(loc); }
    public function aimOC(loc: String) { aOC = point(loc); }
    public function aimYC(loc: String) { aYC = point(loc); }
    public function aimGC(loc: String) { aGC = point(loc); }
    public function aimBC(loc: String) { aBC = point(loc); }
    public function aimIC(loc: String) { aIC = point(loc); }
    public function aimVC(loc: String) { aVC = point(loc); }

    public function aimRD(dest: String) { aRD = point(dest); }
    public function aimOD(dest: String) { aOD = point(dest); }
    public function aimYD(dest: String) { aYD = point(dest); }
    public function aimGD(dest: String) { aGD = point(dest); }
    public function aimBD(dest: String) { aBD = point(dest); }
    public function aimID(dest: String) { aID = point(dest); }
    public function aimVD(dest: String) { aVD = point(dest); }

    var aRC: Pt = {x:0,y:0};
    var aOC: Pt = {x:0,y:0};
    var aYC: Pt = {x:0,y:0};
    var aGC: Pt = {x:0,y:0};
    var aBC: Pt = {x:0,y:0};
    var aIC: Pt = {x:0,y:0};
    var aVC: Pt = {x:0,y:0};

    var aRD: Pt = {x:0,y:0};
    var aOD: Pt = {x:0,y:0};
    var aYD: Pt = {x:0,y:0};
    var aGD: Pt = {x:0,y:0};
    var aBD: Pt = {x:0,y:0};
    var aID: Pt = {x:0,y:0};
    var aVD: Pt = {x:0,y:0};

    public var animating = false;
    public var future = 0.0;
    public var delay = 0.025;


    public function transition() {
        var aC: Pt = {x:0,y:0};

        switch (g.me().getColor()) {
            case 'r': aC=aRC;
            case 'o': aC=aOC;
            case 'y': aC=aYC;
            case 'g': aC=aGC;
            case 'b': aC=aBC;
            case 'i': aC=aIC;
            case 'v': aC=aVC;
        }

        move((aC.x + w/2 - board.x) / 2,
             (aC.y + h/2 - board.y) / 2);

        relocateCars();
        relocateDests();
    }

    public var carMoved = true;

    public function relocateCars() {
        lC.r.x = Cars.WIDTH.center(aRC.x);
        lC.r.y = Cars.HEIGHT.center(aRC.y);
        bC.r.x = lC.r.x + board.x;
        bC.r.y = lC.r.y + board.y;

        lC.o.x = Cars.WIDTH.center(aOC.x);
        lC.o.y = Cars.HEIGHT.center(aOC.y);
        bC.o.x = lC.o.x + board.x;
        bC.o.y = lC.o.y + board.y;

        lC.y.x = Cars.WIDTH.center(aYC.x);
        lC.y.y = Cars.HEIGHT.center(aYC.y);
        bC.y.x = lC.y.x + board.x;
        bC.y.y = lC.y.y + board.y;

        lC.g.x = Cars.WIDTH.center(aGC.x);
        lC.g.y = Cars.HEIGHT.center(aGC.y);
        bC.g.x = lC.g.x + board.x;
        bC.g.y = lC.g.y + board.y;

        lC.b.x = Cars.WIDTH.center(aBC.x);
        lC.b.y = Cars.HEIGHT.center(aBC.y);
        bC.b.x = lC.b.x + board.x;
        bC.b.y = lC.b.y + board.y;

        lC.i.x = Cars.WIDTH.center(aIC.x);
        lC.i.y = Cars.HEIGHT.center(aIC.y);
        bC.i.x = lC.i.x + board.x;
        bC.i.y = lC.i.y + board.y;

        lC.v.x = Cars.WIDTH.center(aVC.x);
        lC.v.y = Cars.HEIGHT.center(aVC.y);
        bC.v.x = lC.v.x + board.x;
        bC.v.y = lC.v.y + board.y;
    }

    public function relocateDests() {
        lD.r.x = Dests.WIDTH.center(aRD.x);
        lD.r.y = Dests.HEIGHT.center(aRD.y);
        bD.r.x = lD.r.x + board.x;
        bD.r.y = lD.r.y + board.y;

        lD.o.x = Dests.WIDTH.center(aOD.x);
        lD.o.y = Dests.HEIGHT.center(aOD.y);
        bD.o.x = lD.o.x + board.x;
        bD.o.y = lD.o.y + board.y;

        lD.y.x = Dests.WIDTH.center(aYD.x);
        lD.y.y = Dests.HEIGHT.center(aYD.y);
        bD.y.x = lD.y.x + board.x;
        bD.y.y = lD.y.y + board.y;

        lD.g.x = Dests.WIDTH.center(aGD.x);
        lD.g.y = Dests.HEIGHT.center(aGD.y);
        bD.g.x = lD.g.x + board.x;
        bD.g.y = lD.g.y + board.y;

        lD.b.x = Dests.WIDTH.center(aBD.x);
        lD.b.y = Dests.HEIGHT.center(aBD.y);
        bD.b.x = lD.b.x + board.x;
        bD.b.y = lD.b.y + board.y;

        lD.i.x = Dests.WIDTH.center(aID.x);
        lD.i.y = Dests.HEIGHT.center(aID.y);
        bD.i.x = lD.i.x + board.x;
        bD.i.y = lD.i.y + board.y;

        lD.v.x = Dests.WIDTH.center(aVD.x);
        lD.v.y = Dests.HEIGHT.center(aVD.y);
        bD.v.x = lD.v.x + board.x;
        bD.v.y = lD.v.y + board.y;
    }

    function click(m: MouseEvent) {
        var p1 = m.localX - board.x;
        var p2 = m.localY - board.y;

        for (p in nodePoints)
            if (p.x-6 < p1&&p1 < p.x+6 &&
                p.y-6 < p2&&p2 < p.y+6) {

                infoCard.visible = true;
                zoom.visible = false;
                slide.play();
            }
    }

    function doubleClick(m: MouseEvent) {
        if (infoCard.visible) return;

        // zoom in on tapped location
        if (world.visible) {

            // get pure pre-move car & dest coordinates
            var prcx = bC.r.x - board.x;
            var prcy = bC.r.y - board.y;
            var pocx = bC.o.x - board.x;
            var pocy = bC.o.y - board.y;
            var pycx = bC.y.x - board.x;
            var pycy = bC.y.y - board.y;
            var pgcx = bC.g.x - board.x;
            var pgcy = bC.g.y - board.y;
            var pbcx = bC.b.x - board.x;
            var pbcy = bC.b.y - board.y;
            var picx = bC.i.x - board.x;
            var picy = bC.i.y - board.y;
            var pvcx = bC.v.x - board.x;
            var pvcy = bC.v.y - board.y;

            var prdx = bD.r.x - board.x;
            var prdy = bD.r.y - board.y;
            var podx = bD.o.x - board.x;
            var pody = bD.o.y - board.y;
            var pydx = bD.y.x - board.x;
            var pydy = bD.y.y - board.y;
            var pgdx = bD.g.x - board.x;
            var pgdy = bD.g.y - board.y;
            var pbdx = bD.b.x - board.x;
            var pbdy = bD.b.y - board.y;
            var pidx = bD.i.x - board.x;
            var pidy = bD.i.y - board.y;
            var pvdx = bD.v.x - board.x;
            var pvdy = bD.v.y - board.y;

            move(m.localX, m.localY);

            bC.r.x = prcx + board.x;
            bC.r.y = prcy + board.y;
            bC.o.x = pocx + board.x;
            bC.o.y = pocy + board.y;
            bC.y.x = pycx + board.x;
            bC.y.y = pycy + board.y;
            bC.g.x = pgcx + board.x;
            bC.g.y = pgcy + board.y;
            bC.b.x = pbcx + board.x;
            bC.b.y = pbcy + board.y;
            bC.i.x = picx + board.x;
            bC.i.y = picy + board.y;
            bC.v.x = pvcx + board.x;
            bC.v.y = pvcy + board.y;
            bD.r.x = prdx + board.x;
            bD.r.y = prdy + board.y;
            bD.o.x = podx + board.x;
            bD.o.y = pody + board.y;
            bD.y.x = pydx + board.x;
            bD.y.y = pydy + board.y;
            bD.g.x = pgdx + board.x;
            bD.g.y = pgdy + board.y;
            bD.b.x = pbdx + board.x;
            bD.b.y = pbdy + board.y;
            bD.i.x = pidx + board.x;
            bD.i.y = pidy + board.y;
            bD.v.x = pvdx + board.x;
            bD.v.y = pvdy + board.y;
        }

        zoom.visible = !zoom.visible;
        world.visible = !world.visible;

        mouseHeld = false;
        slide.play();
    }

    /* Move the board as much as it can within the boundaries of the screen,
    centering it on a specific point on the map in the viewport. */
    function move(x: Float, y: Float) {
        x = w/2 - x;
        y = h/2 - y;

        var preX = board.x;
        var preY = board.y;

        if (x < left) board.x = left;
        else if (x > right) board.x = right;
        else board.x = x;

        if (y < top) board.y = top;
        else if (y > bottom) board.y = bottom;
        else board.y = y;
    }

    function mouseMove(m: MouseEvent) {
        var posX = m.stageX * 2 - x;
        var posY = m.stageY * 2 - y;

        if (mouseHeld) {
            var xp = board.x + posX - lastX;
            var yp = board.y + posY - lastY;

            var xrc = bC.r.x + posX - lastX;
            var yrc = bC.r.y + posY - lastY;
            var xoc = bC.o.x + posX - lastX;
            var yoc = bC.o.y + posY - lastY;
            var xyc = bC.y.x + posX - lastX;
            var yyc = bC.y.y + posY - lastY;
            var xgc = bC.g.x + posX - lastX;
            var ygc = bC.g.y + posY - lastY;
            var xbc = bC.b.x + posX - lastX;
            var ybc = bC.b.y + posY - lastY;
            var xic = bC.i.x + posX - lastX;
            var yic = bC.i.y + posY - lastY;
            var xvc = bC.v.x + posX - lastX;
            var yvc = bC.v.y + posY - lastY;

            var xrd = bD.r.x + posX - lastX;
            var yrd = bD.r.y + posY - lastY;
            var xod = bD.o.x + posX - lastX;
            var yod = bD.o.y + posY - lastY;
            var xyd = bD.y.x + posX - lastX;
            var yyd = bD.y.y + posY - lastY;
            var xgd = bD.g.x + posX - lastX;
            var ygd = bD.g.y + posY - lastY;
            var xbd = bD.b.x + posX - lastX;
            var ybd = bD.b.y + posY - lastY;
            var xid = bD.i.x + posX - lastX;
            var yid = bD.i.y + posY - lastY;
            var xvd = bD.v.x + posX - lastX;
            var yvd = bD.v.y + posY - lastY;

            if (xp >= left && xp <= right) {
                board.x = xp;

                bC.r.x = xrc;
                bC.o.x = xoc;
                bC.y.x = xyc;
                bC.g.x = xgc;
                bC.b.x = xbc;
                bC.i.x = xic;
                bC.v.x = xvc;

                bD.r.x = xrd;
                bD.o.x = xod;
                bD.y.x = xyd;
                bD.g.x = xgd;
                bD.b.x = xbd;
                bD.i.x = xid;
                bD.v.x = xvd;
            }

            if (yp >= top && yp <= bottom) {
                board.y = yp;

                bC.r.y = yrc;
                bC.o.y = yoc;
                bC.y.y = yyc;
                bC.g.y = ygc;
                bC.b.y = ybc;
                bC.i.y = yic;
                bC.v.y = yvc;

                bD.r.y = yrd;
                bD.o.y = yod;
                bD.y.y = yyd;
                bD.g.y = ygd;
                bD.b.y = ybd;
                bD.i.y = yid;
                bD.v.y = yvd;
            }
            
        }

        lastX = posX;
        lastY = posY;
    }

    function gpsMap() {
        var bmp = 'etc/map.png'.bmp();
        realW = bmp.width;
        realH = bmp.height;

        left = -w.diff(realW);
        top = -h.diff(realH);
        bottom = right = 0;

        var set = new Tileset(bmp);
        set.addRect(bmp.rect);

        var map = new Tilemap(w, h, set);
        map.addTile(board = new Tile());
        map.addTile(bD.r);
        map.addTile(bD.o);
        map.addTile(bD.y);
        map.addTile(bD.g);
        map.addTile(bD.b);
        map.addTile(bD.i);
        map.addTile(bD.v);

        map.addTile(bC.r);
        map.addTile(bC.o);
        map.addTile(bC.y);
        map.addTile(bC.g);
        map.addTile(bC.b);
        map.addTile(bC.i);
        map.addTile(bC.v);

        return map.mapToSprite();
    }

    function littleMap() {
        var map = 'etc/map.png'.tilemap();

        map.addTile(lD.r);
        map.addTile(lD.o);
        map.addTile(lD.y);
        map.addTile(lD.g);
        map.addTile(lD.b);
        map.addTile(lD.i);
        map.addTile(lD.v);

        map.addTile(lC.r);
        map.addTile(lC.o);
        map.addTile(lC.y);
        map.addTile(lC.g);
        map.addTile(lC.b);
        map.addTile(lC.i);
        map.addTile(lC.v);

        var spr = map.mapToSprite();
        spr.width = w;
        spr.height = h;

        return spr;
    }
}