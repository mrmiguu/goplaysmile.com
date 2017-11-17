package;

using C;

class Cars {
    public static inline var WIDTH = 78;
    public static inline var HEIGHT = 84;

    var carMap = [for (color in C.ROYGBIV) color => 'cars/$color.png'.tile()];

    public function new() {
        for (car in carMap) car.visible = false;
    }

    public function get(color: String) {
        return carMap[color];
    }

    public function all() {
        return carMap.iterator();
    }

    public function colorClickedOn(mx: Float, my: Float) {
        for (color in C.ROYGBIV)
            if (carMap[color].x < mx&&mx < carMap[color].x+WIDTH &&
                carMap[color].y < my&&my < carMap[color].y+HEIGHT)
                return color;
        return '';
    }
}