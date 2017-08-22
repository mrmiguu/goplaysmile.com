package globals

type T struct {
    T *terrain.T
    Out []interface{}
    Sockets []*socket.T
    Players map[*socket.T]*player.T
    err = c.Sound("etc/err.ogg")
    // first card
    C1 *card.T
}

func New() *T {
    T: terrain.New(),
    Players: map[*socket.T]*player.T{},
    err: "etc/err.ogg".sound(),
    // first card
    C1: card.New("c1",
        function(p) p.go(if (p.on(405)) 0 else 1),
        function(p) p.go(0),
        function(p) p.to("beverlyhills"),
        function(p) p.go(2),
        function(p) p.to("beverlyhills"),
        function(p) p.go(3),
    ),
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
