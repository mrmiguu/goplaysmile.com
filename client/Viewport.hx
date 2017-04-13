package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.media.Sound;
import openfl.text.TextField;

using C;
using Math;
using Std;
using openfl.Assets;

class Viewport extends Sprite implements Animatible {
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
    var mouseHeld: Bool;
    var lastX: Float;
    var lastY: Float;
    var infoCard: Sprite;
    var infoCardText: TextField;

    var w: Int;
    var h: Int;

    var g: Globals;

    public function new(g: Globals, x: Int, y: Int, w: Int, h: Int, gps: Sprite, from: Sprite) {
        super();

        this.g = g;
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

        zoom.addEventListener(MouseEvent.MOUSE_DOWN, mouseDownZoom);
        zoom.addEventListener(MouseEvent.MOUSE_MOVE, mouseMoveZoom);
        zoom.addEventListener(MouseEvent.MOUSE_UP, mouseUpZoom);

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
            infoCard.visible = false;
            g.tapSfx();
        });

        infoCardText = ''.text(infoCard.width/2,infoCard.height/2,18);
        infoCard.addChild(infoCardText);
        addChild(infoCard);

        paragraphs = C.createParagraphs();
        for (p in paragraphs.keys()) trace('\"$p\".L=${p.length}');
    }

    function pointToName(x: Float, y: Float) {
        var i = 0; // index
        var dh = 354; // greatest possible hypotenuse
        var lastI = 0; // best, last index

        for (p in nodePoints) {
            var ddh = ((p.x-x).pow(2) + (p.y-y).pow(2)).sqrt().int();

            // shorter distance
            if (ddh < dh) {
                dh = ddh;
                lastI = i;
            }

            i++;
        }

        return nodeNames[lastI];
    }

    function point(id: String) {
        return nodePoints[id.nameToIndex(nodeNames)];
    }

    public function aimC(color: String, loc: String) { aC[color] = point(loc); }

    // public function aimRC(loc: String) { aRC = point(loc); }
    // public function aimOC(loc: String) { aOC = point(loc); }
    // public function aimYC(loc: String) { aYC = point(loc); }
    // public function aimGC(loc: String) { aGC = point(loc); }
    // public function aimBC(loc: String) { aBC = point(loc); }
    // public function aimIC(loc: String) { aIC = point(loc); }
    // public function aimVC(loc: String) { aVC = point(loc); }

    public function aimD(color: String, dest: String) { aD[color] = point(dest); }

    // public function aimRD(dest: String) { aRD = point(dest); }
    // public function aimOD(dest: String) { aOD = point(dest); }
    // public function aimYD(dest: String) { aYD = point(dest); }
    // public function aimGD(dest: String) { aGD = point(dest); }
    // public function aimBD(dest: String) { aBD = point(dest); }
    // public function aimID(dest: String) { aID = point(dest); }
    // public function aimVD(dest: String) { aVD = point(dest); }

    var aC: Map<String,Pt> = [for (color in C.ROYGBIV) color => {x:0,y:0}];
    var aD: Map<String,Pt> = [for (color in C.ROYGBIV) color => {x:0,y:0}];

    // var aRC: Pt = {x:0,y:0};
    // var aOC: Pt = {x:0,y:0};
    // var aYC: Pt = {x:0,y:0};
    // var aGC: Pt = {x:0,y:0};
    // var aBC: Pt = {x:0,y:0};
    // var aIC: Pt = {x:0,y:0};
    // var aVC: Pt = {x:0,y:0};

    // var aRD: Pt = {x:0,y:0};
    // var aOD: Pt = {x:0,y:0};
    // var aYD: Pt = {x:0,y:0};
    // var aGD: Pt = {x:0,y:0};
    // var aBD: Pt = {x:0,y:0};
    // var aID: Pt = {x:0,y:0};
    // var aVD: Pt = {x:0,y:0};

    public var animating = false;
    public var future = 0.0;
    public var delay = 0.025;


    public function transition() {
        // var aC: Pt = {x:0,y:0};

        // switch (g.player().getColor()) {
        //     case 'r': aC=aRC;
        //     case 'o': aC=aOC;
        //     case 'y': aC=aYC;
        //     case 'g': aC=aGC;
        //     case 'b': aC=aBC;
        //     case 'i': aC=aIC;
        //     case 'v': aC=aVC;
        // }

        move((aC[g.player().getColor()].x + w/2 - board.x) / 2,
             (aC[g.player().getColor()].y + h/2 - board.y) / 2);

        relocateCars();
        relocateDests();
    }

    public var carMoved = true;

    public function relocateCars() {
        for (color in C.ROYGBIV) {
            g.lC.get(color).x = Cars.WIDTH.center(aC[color].x);
            g.lC.get(color).y = Cars.HEIGHT.center(aC[color].y);
            g.bC.get(color).x = g.lC.get(color).x + board.x;
            g.bC.get(color).y = g.lC.get(color).y + board.y;
        }

        // g.lC.get('o').x = Cars.WIDTH.center(aOC.x);
        // g.lC.get('o').y = Cars.HEIGHT.center(aOC.y);
        // g.bC.get('o').x = g.lC.get('o').x + board.x;
        // g.bC.get('o').y = g.lC.get('o').y + board.y;

        // g.lC.get('y').x = Cars.WIDTH.center(aYC.x);
        // g.lC.get('y').y = Cars.HEIGHT.center(aYC.y);
        // g.bC.get('y').x = g.lC.get('y').x + board.x;
        // g.bC.get('y').y = g.lC.get('y').y + board.y;

        // g.lC.get('g').x = Cars.WIDTH.center(aGC.x);
        // g.lC.get('g').y = Cars.HEIGHT.center(aGC.y);
        // g.bC.get('g').x = g.lC.get('g').x + board.x;
        // g.bC.get('g').y = g.lC.get('g').y + board.y;

        // g.lC.get('b').x = Cars.WIDTH.center(aBC.x);
        // g.lC.get('b').y = Cars.HEIGHT.center(aBC.y);
        // g.bC.get('b').x = g.lC.get('b').x + board.x;
        // g.bC.get('b').y = g.lC.get('b').y + board.y;

        // g.lC.get('i').x = Cars.WIDTH.center(aIC.x);
        // g.lC.get('i').y = Cars.HEIGHT.center(aIC.y);
        // g.bC.get('i').x = g.lC.get('i').x + board.x;
        // g.bC.get('i').y = g.lC.get('i').y + board.y;

        // g.lC.get('v').x = Cars.WIDTH.center(aVC.x);
        // g.lC.get('v').y = Cars.HEIGHT.center(aVC.y);
        // g.bC.get('v').x = g.lC.get('v').x + board.x;
        // g.bC.get('v').y = g.lC.get('v').y + board.y;
    }

    public function relocateDests() {
        for (color in C.ROYGBIV) {
            g.lD.get(color).x = Dests.WIDTH.center(aD[color].x);
            g.lD.get(color).y = Dests.HEIGHT.center(aD[color].y);
            g.bD.get(color).x = g.lD.get(color).x + board.x;
            g.bD.get(color).y = g.lD.get(color).y + board.y;
        }

        // g.lD.get('o').x = Dests.WIDTH.center(aOD.x);
        // g.lD.get('o').y = Dests.HEIGHT.center(aOD.y);
        // g.bD.get('o').x = g.lD.get('o').x + board.x;
        // g.bD.get('o').y = g.lD.get('o').y + board.y;

        // g.lD.get('y').x = Dests.WIDTH.center(aYD.x);
        // g.lD.get('y').y = Dests.HEIGHT.center(aYD.y);
        // g.bD.get('y').x = g.lD.get('y').x + board.x;
        // g.bD.get('y').y = g.lD.get('y').y + board.y;

        // g.lD.get('g').x = Dests.WIDTH.center(aGD.x);
        // g.lD.get('g').y = Dests.HEIGHT.center(aGD.y);
        // g.bD.get('g').x = g.lD.get('g').x + board.x;
        // g.bD.get('g').y = g.lD.get('g').y + board.y;

        // g.lD.get('b').x = Dests.WIDTH.center(aBD.x);
        // g.lD.get('b').y = Dests.HEIGHT.center(aBD.y);
        // g.bD.get('b').x = g.lD.get('b').x + board.x;
        // g.bD.get('b').y = g.lD.get('b').y + board.y;

        // g.lD.get('i').x = Dests.WIDTH.center(aID.x);
        // g.lD.get('i').y = Dests.HEIGHT.center(aID.y);
        // g.bD.get('i').x = g.lD.get('i').x + board.x;
        // g.bD.get('i').y = g.lD.get('i').y + board.y;

        // g.lD.get('v').x = Dests.WIDTH.center(aVD.x);
        // g.lD.get('v').y = Dests.HEIGHT.center(aVD.y);
        // g.bD.get('v').x = g.lD.get('v').x + board.x;
        // g.bD.get('v').y = g.lD.get('v').y + board.y;
    }

    var mdz: Bool;
    var mdzX: Float;
    var mdzY: Float;
    var mdzColor: String;

    function mouseDownZoom(m: MouseEvent) {
        mdzColor = g.bC.colorClickedOn(m.localX,m.localY);
        if (mdzColor == '') mdzColor = g.bD.colorClickedOn(m.localX,m.localY);
        mdz=true;
        mdzX=m.localX;
        mdzY=m.localY;
    }

    function mouseMoveZoom(m: MouseEvent) {
        var dX = (m.localX-mdzX).abs();
        var dY = (m.localY-mdzY).abs();
        if (dX > 3 && dY > 3) mdz=false;
    }

    var paragraphs: Map<String,String>;

    function mouseUpZoom(m: MouseEvent) {
        if (!mdz) return;

        // player info
        var car = g.bC.colorClickedOn(m.localX,m.localY);
        var dest = g.bD.colorClickedOn(m.localX,m.localY);
        var pc = null;
        var pd = null;

        for (p in g.players()) {
            if (p.getColor() == car) pc = p;
            if (p.getColor() == dest) pd = p;
        }

        if (pc != null && mdzColor == car) {
            mdzColor = '';
            infoCardText.text = 'Name: ${pc.getName()}\n'
                +'Level: ${pc.getLevel()}\n'
                +'Location: ${pc.getLoc()}\n'
                +'Destination: ${pc.getDest()}';
            infoCard.visible = true;
            g.tapSfx();
        } else if (pd != null && mdzColor == dest) {
            mdzColor = '';
            var spot = pd.getDest();
            infoCardText.text = '$spot\n\n${paragraphs[spot]}';
            infoCard.visible = true;
            g.tapSfx();
        } else {
            var p1 = m.localX - board.x;
            var p2 = m.localY - board.y;

            for (p in nodePoints)
                if (p.x-6 < p1&&p1 < p.x+6 &&
                    p.y-6 < p2&&p2 < p.y+6) {

                    var spot = pointToName(p.x,p.y);
                    infoCardText.text = '$spot\n\n${paragraphs[spot]}';
                    infoCard.visible = true;
                    g.tapSfx();
                }
        }
    }

    function doubleClick(m: MouseEvent) {
        if (infoCard.visible) return;

        // zoom in on tapped location
        if (world.visible) {
            var pcx = [for (color in C.ROYGBIV) color => g.bC.get(color).x - board.x];
            var pcy = [for (color in C.ROYGBIV) color => g.bC.get(color).y - board.y];
            var pdx = [for (color in C.ROYGBIV) color => g.bD.get(color).x - board.x];
            var pdy = [for (color in C.ROYGBIV) color => g.bD.get(color).y - board.y];

            // for (color in C.ROYGBIV) {
            //     // get pure pre-move car & dest coordinates
            //     var pcx = g.bC.get(color).x - board.x;
            //     var pcy = g.bC.get(color).y - board.y;
            //     // var pocx = g.bC.get('o').x - board.x;
            //     // var pocy = g.bC.get('o').y - board.y;
            //     // var pycx = g.bC.get('y').x - board.x;
            //     // var pycy = g.bC.get('y').y - board.y;
            //     // var pgcx = g.bC.get('g').x - board.x;
            //     // var pgcy = g.bC.get('g').y - board.y;
            //     // var pbcx = g.bC.get('b').x - board.x;
            //     // var pbcy = g.bC.get('b').y - board.y;
            //     // var picx = g.bC.get('i').x - board.x;
            //     // var picy = g.bC.get('i').y - board.y;
            //     // var pvcx = g.bC.get('v').x - board.x;
            //     // var pvcy = g.bC.get('v').y - board.y;

            //     var pdx = g.bD.get(color).x - board.x;
            //     var pdy = g.bD.get(color).y - board.y;
            //     // var podx = g.bD.get('o').x - board.x;
            //     // var pody = g.bD.get('o').y - board.y;
            //     // var pydx = g.bD.get('y').x - board.x;
            //     // var pydy = g.bD.get('y').y - board.y;
            //     // var pgdx = g.bD.get('g').x - board.x;
            //     // var pgdy = g.bD.get('g').y - board.y;
            //     // var pbdx = g.bD.get('b').x - board.x;
            //     // var pbdy = g.bD.get('b').y - board.y;
            //     // var pidx = g.bD.get('i').x - board.x;
            //     // var pidy = g.bD.get('i').y - board.y;
            //     // var pvdx = g.bD.get('v').x - board.x;
            //     // var pvdy = g.bD.get('v').y - board.y;
            // }

            move(m.localX, m.localY);

            for (color in C.ROYGBIV) {
                g.bC.get(color).x = pcx[color] + board.x;
                g.bC.get(color).y = pcy[color] + board.y;
                // g.bC.get('o').x = pocx + board.x;
                // g.bC.get('o').y = pocy + board.y;
                // g.bC.get('y').x = pycx + board.x;
                // g.bC.get('y').y = pycy + board.y;
                // g.bC.get('g').x = pgcx + board.x;
                // g.bC.get('g').y = pgcy + board.y;
                // g.bC.get('b').x = pbcx + board.x;
                // g.bC.get('b').y = pbcy + board.y;
                // g.bC.get('i').x = picx + board.x;
                // g.bC.get('i').y = picy + board.y;
                // g.bC.get('v').x = pvcx + board.x;
                // g.bC.get('v').y = pvcy + board.y;
                g.bD.get(color).x = pdx[color] + board.x;
                g.bD.get(color).y = pdy[color] + board.y;
                // g.bD.get('o').x = podx + board.x;
                // g.bD.get('o').y = pody + board.y;
                // g.bD.get('y').x = pydx + board.x;
                // g.bD.get('y').y = pydy + board.y;
                // g.bD.get('g').x = pgdx + board.x;
                // g.bD.get('g').y = pgdy + board.y;
                // g.bD.get('b').x = pbdx + board.x;
                // g.bD.get('b').y = pbdy + board.y;
                // g.bD.get('i').x = pidx + board.x;
                // g.bD.get('i').y = pidy + board.y;
                // g.bD.get('v').x = pvdx + board.x;
                // g.bD.get('v').y = pvdy + board.y;
            }
        }

        zoom.visible = !zoom.visible;
        world.visible = !world.visible;

        mouseHeld = false;
        g.tapSfx();
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

            

            if (xp >= left && xp <= right) {
                board.x = xp;

                for (color in C.ROYGBIV) {
                    var xc = g.bC.get(color).x + posX - lastX;
                    var yc = g.bC.get(color).y + posY - lastY;
                    // var xoc = g.bC.get('o').x + posX - lastX;
                    // var yoc = g.bC.get('o').y + posY - lastY;
                    // var xyc = g.bC.get('y').x + posX - lastX;
                    // var yyc = g.bC.get('y').y + posY - lastY;
                    // var xgc = g.bC.get('g').x + posX - lastX;
                    // var ygc = g.bC.get('g').y + posY - lastY;
                    // var xbc = g.bC.get('b').x + posX - lastX;
                    // var ybc = g.bC.get('b').y + posY - lastY;
                    // var xic = g.bC.get('i').x + posX - lastX;
                    // var yic = g.bC.get('i').y + posY - lastY;
                    // var xvc = g.bC.get('v').x + posX - lastX;
                    // var yvc = g.bC.get('v').y + posY - lastY;

                    var xd = g.bD.get(color).x + posX - lastX;
                    var yd = g.bD.get(color).y + posY - lastY;
                    // var xod = g.bD.get('o').x + posX - lastX;
                    // var yod = g.bD.get('o').y + posY - lastY;
                    // var xyd = g.bD.get('y').x + posX - lastX;
                    // var yyd = g.bD.get('y').y + posY - lastY;
                    // var xgd = g.bD.get('g').x + posX - lastX;
                    // var ygd = g.bD.get('g').y + posY - lastY;
                    // var xbd = g.bD.get('b').x + posX - lastX;
                    // var ybd = g.bD.get('b').y + posY - lastY;
                    // var xid = g.bD.get('i').x + posX - lastX;
                    // var yid = g.bD.get('i').y + posY - lastY;
                    // var xvd = g.bD.get('v').x + posX - lastX;
                    // var yvd = g.bD.get('v').y + posY - lastY;

                    g.bC.get(color).x = xc;
                    // g.bC.get('o').x = xoc;
                    // g.bC.get('y').x = xyc;
                    // g.bC.get('g').x = xgc;
                    // g.bC.get('b').x = xbc;
                    // g.bC.get('i').x = xic;
                    // g.bC.get('v').x = xvc;

                    g.bD.get(color).x = xd;
                    // g.bD.get('o').x = xod;
                    // g.bD.get('y').x = xyd;
                    // g.bD.get('g').x = xgd;
                    // g.bD.get('b').x = xbd;
                    // g.bD.get('i').x = xid;
                    // g.bD.get('v').x = xvd;
                }
            }

            if (yp >= top && yp <= bottom) {
                board.y = yp;

                for (color in C.ROYGBIV) {
                    var xc = g.bC.get(color).x + posX - lastX;
                    var yc = g.bC.get(color).y + posY - lastY;
                    // var xoc = g.bC.get('o').x + posX - lastX;
                    // var yoc = g.bC.get('o').y + posY - lastY;
                    // var xyc = g.bC.get('y').x + posX - lastX;
                    // var yyc = g.bC.get('y').y + posY - lastY;
                    // var xgc = g.bC.get('g').x + posX - lastX;
                    // var ygc = g.bC.get('g').y + posY - lastY;
                    // var xbc = g.bC.get('b').x + posX - lastX;
                    // var ybc = g.bC.get('b').y + posY - lastY;
                    // var xic = g.bC.get('i').x + posX - lastX;
                    // var yic = g.bC.get('i').y + posY - lastY;
                    // var xvc = g.bC.get('v').x + posX - lastX;
                    // var yvc = g.bC.get('v').y + posY - lastY;

                    var xd = g.bD.get(color).x + posX - lastX;
                    var yd = g.bD.get(color).y + posY - lastY;
                    // var xod = g.bD.get('o').x + posX - lastX;
                    // var yod = g.bD.get('o').y + posY - lastY;
                    // var xyd = g.bD.get('y').x + posX - lastX;
                    // var yyd = g.bD.get('y').y + posY - lastY;
                    // var xgd = g.bD.get('g').x + posX - lastX;
                    // var ygd = g.bD.get('g').y + posY - lastY;
                    // var xbd = g.bD.get('b').x + posX - lastX;
                    // var ybd = g.bD.get('b').y + posY - lastY;
                    // var xid = g.bD.get('i').x + posX - lastX;
                    // var yid = g.bD.get('i').y + posY - lastY;
                    // var xvd = g.bD.get('v').x + posX - lastX;
                    // var yvd = g.bD.get('v').y + posY - lastY;

                    g.bC.get(color).y = yc;
                    // g.bC.get('o').y = yoc;
                    // g.bC.get('y').y = yyc;
                    // g.bC.get('g').y = ygc;
                    // g.bC.get('b').y = ybc;
                    // g.bC.get('i').y = yic;
                    // g.bC.get('v').y = yvc;

                    g.bD.get(color).y = yd;
                    // g.bD.get('o').y = yod;
                    // g.bD.get('y').y = yyd;
                    // g.bD.get('g').y = ygd;
                    // g.bD.get('b').y = ybd;
                    // g.bD.get('i').y = yid;
                    // g.bD.get('v').y = yvd;
                }
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

        for (dest in g.bD.all()) map.addTile(dest);
        
        // map.addTile(g.bD.o);
        // map.addTile(g.bD.y);
        // map.addTile(g.bD.g);
        // map.addTile(g.bD.b);
        // map.addTile(g.bD.i);
        // map.addTile(g.bD.v);

        for (car in g.bC.all()) map.addTile(car);

        // map.addTile(g.bC.o);
        // map.addTile(g.bC.y);
        // map.addTile(g.bC.g);
        // map.addTile(g.bC.b);
        // map.addTile(g.bC.i);
        // map.addTile(g.bC.v);

        return map.mapToSprite();
    }

    function littleMap() {
        var map = 'etc/map.png'.tilemap();

        for (dest in g.lD.all()) map.addTile(dest);
        // map.addTile(g.lD.r);
        // map.addTile(g.lD.o);
        // map.addTile(g.lD.y);
        // map.addTile(g.lD.g);
        // map.addTile(g.lD.b);
        // map.addTile(g.lD.i);
        // map.addTile(g.lD.v);

        for (car in g.lC.all()) map.addTile(car);
        // map.addTile(g.lC.r);
        // map.addTile(g.lC.o);
        // map.addTile(g.lC.y);
        // map.addTile(g.lC.g);
        // map.addTile(g.lC.b);
        // map.addTile(g.lC.i);
        // map.addTile(g.lC.v);

        var spr = map.mapToSprite();
        spr.width = w;
        spr.height = h;

        return spr;
    }
}