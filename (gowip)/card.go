package server


type f func(*Player)

type Card struct {
	I []f
}

func New(name string, f1, f2, f3, f4, f5, f6 f) *Card {
	return &Card{[]f{f1, f2, f3, f4, f5, f6}}
}
