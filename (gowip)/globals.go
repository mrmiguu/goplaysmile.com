package server

import "github.com/mrmiguu/goplaysmile.com/terrain"

type Globals struct {
	Globals *terrain.Terrain
	Out     []interface{}
	Sockets []*socket.Socket
	Players map[*socket.Socket]*player.Player

	// first card
	C1 *card.Card
}

func New() *Globals {
	return &Globals{
		Globals: terrain.New(),
		Players: map[*socket.Socket]*player.Player{},

		// first card
		C1: card.New("c1",
			func(p *player.Player) {
				x := 1
				if p.On(405) {
					x = 0
				}
				p.Go(x)
			},
			func(p *player.Player) { p.Go(0) },
			func(p *player.Player) { p.To("beverlyhills") },
			func(p *player.Player) { p.Go(2) },
			func(p *player.Player) { p.To("beverlyhills") },
			func(p *player.Player) { p.Go(3) },
		),
	}
}

func (g *Globals) AddPlayer(s *socket.Socket, p *player.Player) {
	g.Players[s] = p
}

func (g *Globals) Player(s *socket.Socket) *player.Player {
	return g.Players[s]
}

func (g *Globals) RemovePlayer(s *socket.Socket) {
	g.Players[s].broadcastExit()
	g.Players.remove(s)
	g.Sockets.remove(s)
}

func (g *Globals) ErrSfx() {
	g.err.play()
}
