package;

using Consts;

class Node {
    public var list: Array<Node>;
    public var hwys: Array<Int>;
    public var id: String;

    public function new(id: String, hwys: Array<Int>) {        
        this.hwys = hwys;
        this.id = id;
    }
}