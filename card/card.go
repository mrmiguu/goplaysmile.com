package card

import "github.com/mrmiguu/gps_online/player"

type f func(*player.T)

type T struct {
	I []f
}

func New(name string, f1, f2, f3, f4, f5, f6 f) *T {
	return &T{[]f{f1, f2, f3, f4, f5, f6}}
}
