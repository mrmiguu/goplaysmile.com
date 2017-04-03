package;

using C;

class Dests {

    public static inline var WIDTH = 74;
    public static inline var HEIGHT = 74;

    var destMap = [for (color in C.ROYGBIV) color => 'dests/$color.png'.tile()];

    public function new() {
        for (dest in destMap) dest.visible = false;
    }

    public function get(color: String) {
        return destMap[color];
    }

    public function all() {
        return destMap.iterator();
    }

    public function colorClickedOn(mx: Float, my: Float) {
        for (color in C.ROYGBIV)
            if (destMap[color].x < mx&&mx < destMap[color].x+WIDTH &&
                destMap[color].y < my&&my < destMap[color].y+HEIGHT)
                return color;
        return '';
    }
}