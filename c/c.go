package c

import (
	"math"
)

type Sockets []*socket.T
type Tokens []interface{}
type Letter struct {
	Sender *socket.T
	Body   string
}
type Mailbox []Letter

const (
	WIDTH      = 800
	HEIGHT     = 480
	FONT_COLOR = 0x7F0000
)

type XY struct {
	X int
	Y int
}

// func Take(m Mailbox) {
// 	return m.shift()
// }

// func AddLetter(m Mailbox, s *socket.T, t Tokens) {
// 	var serial = new Serializer()

// 	for (token in t)
// 	    serial.serialize(token)

// 	m.push({sender s, body serial.toString()})
// }

// func Serialize(t Tokens) {
// 	var serial = new Serializer()

// 	for (token in t)
// 	    serial.serialize(token)

// 	return serial.toString()
// }

// func Serial(packet string) {
// 	// return new Unserializer(packet)
// }

// func Next(serial Unserializer) {
// 	return serial.unserialize()
// }

// func NextString(serial Unserializer) {
// 	return serial.unserialize().string()
// }

// Diff is the difference between two points.
func Diff(a float64, b float64) float64 {
	return math.Abs(a - b)
}

// Dist is a straight line between two points.
func Dist(ax, ay, bx, by int) float64 {
	return math.Sqrt(math.Pow(bx-ax, 2) + math.Pow(by-ay, 2))
}

// Scale is a proper-fitting ratio is returned to resize appropriately.
func Scale(w, h int) int {
	a := w / WIDTH
	b := h / HEIGHT
	if a < b {
		return a
	}
	return b
}

// Quickly returns a sound handle.
// func Sound(dir string) {
//     return ('assets/${dir}').fromFile()
// }

// Quickly returns bitmap data.
// func Bmp(dir string) {
//     return ('assets/${dir}').getBitmapData()
// }

// Creates a tileset.
// func Tileset(dir string) {
//     var png = bmp(dir)
//     var set = new Tileset(png)
//     set.addRect(png.rect)
//     return set
// }

// Custom tileset for a tile.
// func Tile(dir string) {
//     var tile = new Tile()
//     tile.tileset = tileset(dir)
//     return tile
// }

// Creates a tilemap base.
// func Tilemap(dir string, w = -1, h = -1) {
//     var set = tileset(dir)

//     var map = new Tilemap(
//         if (w < 0) set.getRect(0).width.int() else w,
//         if (h < 0) set.getRect(0).height.int() else h,
//         set
//     )

//     map.addTile(new Tile())

//     return map
// }

// Wraps a tilemap in a sprite.
// func MapToSprite(map Tilemap) {
//     var sprite = new Sprite()
//     sprite.addChild(map)

//     return sprite
// }

// Sprite wraps a tilemap from a file in a sprite.
func Sprite(dir string, xAndY ...int) {
	var sprite = MapToSprite(Tilemap(dir))
	if len(xAndY) > 0 {
		sprite.x = xAndY[0]
	}
	if len(xAndY) > 1 {
		sprite.y = xAndY[1]
	}

	return sprite
}

// Center centers a line on a given point.
func Center(line, point float64) float64 {
	return point - line/2
}

// Code by Jason Lin © 2014.
func Locations(image BitmapData) []XY {
	var points = []XY{}
	var cenX = 12
	var cenY = 13
	var halfCenY = cenY / 2
	var color = 0xFF0000

	for j := range make([]int, image.height) {
		for i := range make([]int, image.width) {
			var newLoc = true

			if image.GetPixel(i, j) != color {
				continue
			}

			if len(points) < 1 {
				points = append(points, XY{i + 1, j + halfCenY})
				continue
			}

			for _, p := range points {
				if (p.X-i).abs() <= cenX && (p.Y-j).abs() <= cenY {
					newLoc = false
				}
			}

			if newLoc {
				points = append(points, XY{i + 1, j + halfCenY})
			}
		}
	}

	return points
}

// NameToIndex matches a name from a list of names and pulls the index.
func NameToIndex(name string, names []string) int {
	var index = 0
	for i := range make([]int, len(names)) {
		if name == names[i] {
			index = i
		}
	}
	return index
}
