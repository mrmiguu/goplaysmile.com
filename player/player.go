package player

type Player struct {
    g *globals.Globals
    user string
    pass string
    color string
    path []*node.Node
    cur int
    card *card.Card
    cards  []*card.Card
    level int
    exp int
    socket *socket.Socket
    side int
    roller int
    rollerFuture float64
    rollerAnim bool
    roygbiv string
}

func New(g *globals.Globals, s *socket.Socket, user, pass string) *Player {
    fmt.Println("new Player")
    t := &Player{
        g: g,
        socket: s,
        user: user,
        pass: pass,
        level: 1,
        roygbiv: "roygbiv",
    }

    "accounts".createDirectory()
    if t.account().exists() {
        t.Load()
    } else {
        t.Save()
    }
    t.sendExp()
    broadcastLevel()

    return t
}

func (t *Player) account() string {
    return "accounts/"+t.user+"@"+t.pass
}

func (t *Player) OnGoal() bool {
    return t.cur == len(t.path)-1
}

func (t *Player) AddCard(c *card.Card) {
    fmt.Println("addCard")
    // if no card, also equip
    if (cards.length == 0) card = c
    cards.push(c)
}

func (t *Player) EquipCard(c *card.Card) {
    if (cards.indexOf(c) != -1) card = c
}

func (t *Player) Load() {
    var serial = account().getContent().serial()
    exp = serial.next()
    level = serial.next()
}
func (t *Player) Save() {
    account().saveContent([
        exp,
        level
    ].serialize())
}

func (t *Player) Init() {
    fmt.Println("init")

    inform()
    g.out.addLetter(socket,["init"])
}

func (t *Player) inform() {
    // give player everyone else"s data
    informColors()
    informLevels()
    informLocs()
    informDests()
}

func (t *Player) Reset() {
    fmt.Println("reset")
    // set the src node to something
    // random in the src-dst list while
    // setting the dst node to its respective
    // src-dst pair
    var i = g.t.pairs.length.random()

    // a random source is selected from the pairing
    var s = 2.random() // 0 or 1

    // find optimal path to goal
    // path = new AI(cur, finish, this).path
    refine(g.t.pairs[i][s], g.t.pairs[i][(s + 1) % 2])

    fmt.Println("$user.dest <- ${getDest()}")
    broadcastDest()
}

func (t *Player) On(hwy int) {
    fmt.Println("on")
    return path[cur].hwys.indexOf(hwy) != -1
}

func (t *Player) Go(n int){
    fmt.Println("go")
    setCur(if (cur + n >= path.length) path.length - 1 else cur + n)
}

func (t *Player) GetUser() {
    return user
}

func (t *Player) GetColor() {
    return color
}

func (t *Player) SetColor(c string) {
    fmt.Println("$user.color <- $c")

    color = c
    broadcastColor()
}

func (t *Player) GetLevel() {
    return level
}

func (t *Player) GetLoc() {
    return path[cur].id
}

func (t *Player) GetDest() {
    return path[path.length-1].id
}

func (t *Player) To(city string) {
    fmt.Println("to")
    refine(g.t.map[city], g.t.map[getDest()])
}

func (t *Player) refine(start node.Node, end node.Node) {
    fmt.Println("refine")
    // find new path from city to the goal
    path = g.t.aStar.find(start, end)
    setCur(0)
}

func (t *Player) setCur(n int) {
    cur = n
    fmt.Println("$user.loc <- ${getLoc()}")
    broadcastLoc()
}

func (t *Player) sendExp() {
    g.out.addLetter(socket, ["exp",
        user,
        req(),
        exp,
        level
    ])
}

func (t *Player) req() int {
    return (1.1.pow(level) + 1.95).int() * level
}

func (t *Player) increaseExp() {
    fmt.Println("increaseExp")

    exp = (exp + 1) % req()

    // check for level-up
    if (exp == 0) level++

    save()
    sendExp()
    broadcastLevel()
}

func (t *Player) RollDie() {
    side = 6.random()
    fmt.Println("$user.side <- $side")
    g.out.addLetter(socket,["roll",side])
    rollerAnim = true
}

func (t *Player) informLevels() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["level",
                p.getUser(),
                p.getLevel()
            ])
}

func (t *Player) informColors() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["color",
                p.getUser(),
                p.getColor()
            ])
}

func (t *Player) informLocs() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["loc",
                p.getUser(),
                p.getLoc()
            ])
}

func (t *Player) informDests() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["dest",
                p.getUser(),
                p.getDest()
            ])
}

func (t *Player) BroadcastLevel() {
    for (s in g.sockets)
        g.out.addLetter(s, ["level",
            user,
            getLevel()
        ])
}

func (t *Player) BroadcastColor() {
    for (s in g.sockets)
        g.out.addLetter(s, ["color",
            user,
            getColor()
        ])
}

func (t *Player) broadcastLoc() {
    for (s in g.sockets)
        g.out.addLetter(s, ["loc",
            user,
            getLoc()
        ])
}

func (t *Player) broadcastDest() {
    for (s in g.sockets)
        g.out.addLetter(s, ["dest",
            user,
            getDest()
        ])
}

func (t *Player) BroadcastExit() {
    for (s in g.sockets)
        if (s != socket)
            g.out.addLetter(s, ["exit",
                user
            ])
}

func (t *Player) Loop(time float64) {
    if (rollerAnim && rollerFuture < time) {
        // fmt.Println("roller=$roller")
        if (roller == side) {
            // fmt.Println("roller != side")
            rollerAnim = false

            if (!onGoal()) {
                card.i[side](this)
                // fmt.Println("card.i[]()")
                if (onGoal()) {
                    g.out.addLetter(socket, ["arrived"])
                    increaseExp()
                }
            } else reset()

        } else roller = (roller + 1) % 6

        rollerFuture = time + 0.125
    }
}
