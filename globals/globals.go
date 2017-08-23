package globals

import (
	"github.com/mrmiguu/gps_online/card"
	"github.com/mrmiguu/gps_online/terrain"
)

type T struct {
	T       *terrain.T
	Out     []interface{}
	Sockets []*socket.T
	Players map[*socket.T]*player.T

	// first card
	C1 *card.T
}

func New() *T {
	return &T{
		T:       terrain.New(),
		Players: map[*socket.T]*player.T{},

		// first card
		C1: card.New("c1",
			func(p *player.T) {
				x := 1
				if p.On(405) {
					x = 0
				}
				p.Go(x)
			},
			func(p *player.T) { p.Go(0) },
			func(p *player.T) { p.To("beverlyhills") },
			func(p *player.T) { p.Go(2) },
			func(p *player.T) { p.To("beverlyhills") },
			func(p *player.T) { p.Go(3) },
		),
	}
}

func (t *T) AddPlayer(s *socket.T, p *player.T) {
	t.Players[s] = p
}

func (t *T) Player(s *socket.T) *player.T {
	return t.Players[s]
}

func (t *T) RemovePlayer(s *socket.T) {
	t.Players[s].broadcastExit()
	t.Players.remove(s)
	t.Sockets.remove(s)
}

func (t *T) ErrSfx() {
	t.err.play()
}
