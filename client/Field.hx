package;

import openfl.display.Sprite;
import openfl.text.TextField;

using C;
using haxe.crypto.Md5;
using sys.io.File;
using sys.FileSystem;

class Field extends Sprite {
    var g: Globals;
    var l: Sprite;
    var ms: Array<Sprite>;
    var r: Sprite;
    var f: TextField;
    var tW=44;
    var tE=35;
    var cacheLoaded: Bool;
    var cacheFile: String;
    var passCache = '';

    public function new(g: Globals, x: Float, y: Float, cacheFile='', pw=false) {
        super();

        this.g = g;
        f = ''.text(x,y-32,72,0xFFFFFF);
        l = 'field/l.png'.sprite();
        ms = [for (i in 0...19) 'field/m.png'.sprite()];
        r = 'field/r.png'.sprite();

        l.y = y - l.height/2; // center
        addChild(l);
        
        for (m in ms) {
            m.y = l.y;
            addChild(m);
        }

        r.y = l.y;
        addChild(r);
        addChild(f);

        this.cacheFile = cacheFile;
        if (pw) hide() else reload();
    }

    function localSave() {
        if (cacheFile.length == 0 || f.text.length == 0) return;

        var reg = '_';
        var len = 0;
        var pwd = '_';

        if (cacheFile.exists()) {
            var serial = cacheFile.getContent().serial();
            reg = serial.nextString();
            len = serial.next();
            pwd = serial.nextString();
        }

        cacheFile.saveContent(C.serialize(
            if (f.displayAsPassword && cacheLoaded) [reg,f.text.length,passCache]
            else if (f.displayAsPassword) [reg,size(),f.text.encode()]
            else [f.text,len,pwd]
        ));
    }

    public function cached() {
        return cacheLoaded;
    }

    public function size() {
        return f.text.length;
    }

    public function hide() {
        f.displayAsPassword=true;
        reload();
    }

    public function show() {
        f.displayAsPassword=false;
        reload();
    }

    public function reload() {
        // check to see if reading cache is possible
        if (cacheFile.length > 0 && cacheFile.exists()) {
            var serial = cacheFile.getContent().serial();
            var reg = serial.nextString();

            if (f.displayAsPassword) {
                var buf = '';
                for (L in 0...serial.next()) buf+='_';
                passCache = serial.nextString(); // real md5
                setText(buf); // phony, same-length password
            } else {
                setText(reg);
            }

            cacheLoaded = true; // has to be at end!!!
            // cache isn't loaded until after text is set
        } else {
            cacheLoaded = false;
            setText('');
        }
    }

    public function getShownCache() {
        return if (cacheFile.length == 0 || f.text.length == 0 || !cacheFile.exists()) ''
            else cacheFile.getContent().serial().nextString();
    }

    public function resetHiddenCache() {
        if (cacheFile.length == 0 || f.text.length == 0) return;

        var reg = '_';
        var len = 0;
        var pwd = '_';

        if (cacheFile.exists()) {
            var serial = cacheFile.getContent().serial();
            reg = serial.nextString();
        }

        cacheFile.saveContent(C.serialize([reg,len,pwd]));
    }

    public function resetShownCache() {
        if (cacheFile.length == 0 || f.text.length == 0) return;

        var reg = '_';
        var len = 0;
        var pwd = '_';

        if (cacheFile.exists()) {
            var serial = cacheFile.getContent().serial();
            len = serial.next();
            pwd = serial.nextString();
        }

        cacheFile.saveContent(C.serialize([reg,len,pwd]));
    }

    public function getText() {
        localSave();
        return if (cacheLoaded && f.displayAsPassword) passCache
            else if (f.displayAsPassword && f.text.length > 0) f.text.encode()
            else f.text;
    }

    public function undo() {
        setText(if (size() > 1 && !cacheLoaded) f.text.substr(0,size()-1) else '');
    }

    public function addText(t: String) {
        setText(if (cacheLoaded) t else f.text+t);
    }

    public function setText(t: String) {
        var t20 = t;

        // save last state if user-made
        if (!f.displayAsPassword) passCache = '';
        
        cacheLoaded = false;

        if (t.length>11) {
            g.errSfx();
            t20 = t.substr(0,11);
        }

        if (t20.length == 0) {
            l.visible = false;

            for (m in ms) m.visible = false;

            r.visible = false;
        } else if (t20.length == 1) {
            l.x = (tE*2).center(C.CENTER_W);
            l.visible = true;
            
            for (m in ms) m.visible = false;

            r.x = l.x+tE;
            r.visible = true;
        } else {
            l.x = ((tE*2)+tW*(t20.length-1)).center(C.CENTER_W);
            l.visible = true;

            for (m in ms) m.visible = false;
            for (i in 0...(t20.length-1)) {
                if (i==0) ms[0].x = l.x+tE;
                else ms[i].x = ms[i-1].x+tW;

                ms[i].visible = true;
            }

            r.x = ms[t20.length-2].x+tW;
            r.visible = true;
        }

        f.text=t20;
        trace('field=${if (f.text.charAt(0) == '_') passCache else f.text}');
    }
}