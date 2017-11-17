package;

interface Animatible {
	public var animating: Bool;
    public var future: Float;
    public var delay: Float;
    public function transition(): Void;
}