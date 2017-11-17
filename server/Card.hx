package;

using C;
using Std;

typedef F = Player->Void;

class Card {
    public var i = [];

    public function new(name: String, f1: F, f2: F, f3: F, f4: F, f5: F, f6: F) {
        i.push(f1);
        i.push(f2);
        i.push(f3);
        i.push(f4);
        i.push(f5);
        i.push(f6);
    }
}