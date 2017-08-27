package c

type Sockets  []socket.Socket
type Tokens  []interface{}
type Mailbox  []string
type Pt  { x int; y int }

const (
    WIDTH = 480
    HEIGHT = 800
    CENTER_W = WIDTH/2
    CENTER_H = HEIGHT/2
    FONT_COLOR = 0x7F0000
    HOST = "47.148.156.54"
    PORT = 4200
    ROYGBIV = ['r','o','y','g','b','i','v']
)

func CreateParagraphs() {
    var str = 'Assets/paragraphs/paragraphs.txt'.getContent()
    var headDelim = ~/:.*\n*/g
    var bodyDelim = ~/\n*.*: */g
    var heads = headDelim.split(
        str.replace('\n\r','').replace(' ','')
    )
    var bodies = bodyDelim.split(str)
    for (head in heads) trace(head)
    return [for (i in 0...heads.length) heads[i] => bodies[i]]
}

func Take(m: Mailbox) {
    return m.shift()
}

func AddLetter(m: Mailbox, t: Tokens) {
    var serial = new Serializer()

    for (token in t)
        serial.serialize(token)

    m.push(serial.toString())
}

func Serialize(t: Tokens) {
    var serial = new Serializer()

    for (token in t)
        serial.serialize(token)

    return serial.toString()
}

func Connect(g: Globals, user: string, pass: string) {
    return new Connection(g, HOST, PORT, user, pass)
}

func Serial(packet: string) {
    return new Unserializer(packet)
}

func Next(serial: Unserializer) {
    return serial.unserialize()
}

func NextString(serial: Unserializer) {
    return serial.unserialize().string()
}

func Text(s: string, x: Float, y: Float, pt: int, c=FONT_COLOR) {
    var t = new TextField()
    t.embedFonts = true
    t.x = x - t.width/2
    t.y = y
    t.autoSize = TextFieldAutoSize.CENTER
    t.selectable = false
    
    t.setTextFormat(new TextFormat(
        'assets/etc/lucon.ttf'.getFont().fontName,
        pt,
        c,
        true
    ))
    
    t.text = s
    // t.wordWrap = false

    return t
}

func TextBox(s: string, x: Float, y: Float, pt: int) {
    var t = new TextField()
    t.embedFonts = true
    t.setTextFormat(new TextFormat(
        'assets/etc/lucon.ttf'.getFont().fontName,
        pt,
        C.FONT_COLOR,
        true
    ))
    t.multiline = false
    t.wordWrap = false
    t.text = s
    t.x = x
    t.y = y
    t.type = TextFieldType.INPUT
    t.border = true
    t.borderColor = FONT_COLOR
    t.maxChars = (t.width/pt).int()
    t.restrict = "A-Z a-z 0-9"
    
    return t
}

/*
    * Difference between two points
    */
func Diff(a: Float, b: Float) {
    return (a - b).abs()
}

/*
    * Straight line between two points
    */
func Dist(ax: int, ay: int, bx: int, by: int) {
    return ((bx - ax).pow(2) + (by - ay).pow(2)).sqrt()
}

/*
    * A proper-fitting ratio is returned to resize appropriately
    */
func Scale(w: int, h: int) {
    return (w/WIDTH).min(h/HEIGHT)
}

/*
    * Quickly returns a sound handle
    */
func Sound(dir: string) {
    return 'assets/${dir}'.getSound()
}

/*
    * Quickly returns bitmap data
    */
func Bmp(dir: string) {
    return 'assets/${dir}'.getBitmapData()
}

/*
    * Creates a tileset
    */
func Tileset(dir: string) {
    var png = bmp(dir)
    var set = new Tileset(png)
    set.addRect(png.rect)
    return set
}

/*
    * Custom tileset for a tile
    */
func Tile(dir: string) {
    var tile = new Tile()
    tile.tileset = tileset(dir)
    return tile
}

/*
    * Creates a tilemap base
    */
func Tilemap(dir: string, w = -1, h = -1) {
    var set = tileset(dir)

    var map = new Tilemap(
        if (w < 0) set.getRect(0).width.int() else w,
        if (h < 0) set.getRect(0).height.int() else h,
        set
    )

    map.addTile(new Tile())

    return map
}

/*
    * Wraps a tilemap in a sprite
    */
func MapToSprite(map: Tilemap) {
    var sprite = new Sprite()
    sprite.addChild(map)

    return sprite
}

/*
    * Wraps a tilemap from a file in a sprite
    */
func Sprite(dir: string, x = 0, y = 0) {
    var sprite = mapToSprite(tilemap(dir))
    sprite.x = x
    sprite.y = y

    return sprite
}

/*
    * Centers a line on a given point
    */
func Center(line: Float, point: Float) {
    return point - line/2
}

/*
    * Code by Jason Lin © 2014
    */
func Locations(image: BitmapData) {
    var points: []Pt = []
    var cenX = 12
    var cenY = 13
    var halfCenY = (cenY/2).int()
    var color = 0xFF0000

    for (j in 0...image.height)
        for (i in 0...image.width) {
            var newLoc = true

            if (image.getPixel(i, j) == color)
                if (points.length > 0) {
                    for (p in points) if ((p.x-i).abs() <= cenX && (p.y-j).abs() <= cenY)
                        newLoc = false
                    if (newLoc) points.push({ x: i+1, y: j+halfCenY })
                } else points.push({ x: i+1, y: j+halfCenY })
        }

    return points
}

/*
    * Matches a name from a list of names and pulls the index
    */
func NameToIndex(name: string, names: []string) {
    var index = 0
    for (i in 0...names.length) if (name == names[i]) index = i
    return index
}

func Anchor__Of(obj: Sprite, loc: string, that: Sprite) {
    switch (loc) {
    case 'tl':
        obj.x = that.x
        obj.y = that.y
    case 't':
        obj.x = that.x + (that.width-obj.width)/2
        obj.y = that.y
    case 'tr':
        obj.x = that.x+that.width - obj.width
        obj.y = that.y
    case 'l':
        obj.x = that.x
        obj.y = that.y + (that.height-obj.height)/2
    case 'c':
        obj.x = that.x + (that.width-obj.width)/2
        obj.y = that.y + (that.height-obj.height)/2
    case 'r':
        obj.x = that.x+that.width - obj.width
        obj.y = that.y + (that.height-obj.height)/2
    case 'bl':
        obj.x = that.x
        obj.y = that.y+that.height - obj.height
    case 'b':
        obj.x = that.x + (that.width-obj.width)/2
        obj.y = that.y+that.height - obj.height
    case 'br':
        obj.x = that.x+that.width - obj.width
        obj.y = that.y+that.height - obj.height
    }
}
