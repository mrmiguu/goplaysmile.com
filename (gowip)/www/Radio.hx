package;

class Radio {
    var radio: Array<IButton>;
    
    public function new(b1: IButton, b2: IButton) {
        radio = [b1, b2];
    }

    public function add(b: IButton) {
        b.popOut();
        radio.push(b);
    }

    public function push(b: IButton) {
        for (r in radio)
            r.popOut();

        radio[radio.indexOf(b)].pushIn();
    }
}