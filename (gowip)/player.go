package server

type player struct {
    g *globals
    user string
    pass string
    color string
    path []*Node
    cur int
    card *Card
    cards  []*Card
    level int
    exp int
    socket *Socket
    side int
    roller int
    rollerFuture float64
    rollerAnim bool
    roygbiv string
}

func newPlayer(g *globals, s *Socket, user, pass string) *player {
    fmt.Println("newPlayer")
    t := &player{
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

func (t *player) account() string {
    return "accounts/"+t.user+"@"+t.pass
}

func (t *player) OnGoal() bool {
    return t.cur == len(t.path)-1
}

func (t *player) AddCard(c *Card) {
    fmt.Println("addCard")
    // if no card, also equip
    if (cards.length == 0) card = c
    cards.push(c)
}

func (t *player) EquipCard(c *Card) {
    if (cards.indexOf(c) != -1) card = c
}

func (t *player) Load() {
    var serial = account().getContent().serial()
    exp = serial.next()
    level = serial.next()
}
func (t *player) Save() {
    account().saveContent([
        exp,
        level
    ].serialize())
}

func (t *player) Init() {
    fmt.Println("init")

    inform()
    g.out.addLetter(socket,["init"])
}

func (t *player) inform() {
    // give player everyone else"s data
    informColors()
    informLevels()
    informLocs()
    informDests()
}

func (t *player) Reset() {
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

func (t *player) On(hwy int) {
    fmt.Println("on")
    return path[cur].hwys.indexOf(hwy) != -1
}

func (t *player) Go(n int){
    fmt.Println("go")
    setCur(if (cur + n >= path.length) path.length - 1 else cur + n)
}

func (t *player) GetUser() {
    return user
}

func (t *player) GetColor() {
    return color
}

func (t *player) SetColor(c string) {
    fmt.Println("$user.color <- $c")

    color = c
    broadcastColor()
}

func (t *player) GetLevel() {
    return level
}

func (t *player) GetLoc() {
    return path[cur].id
}

func (t *player) GetDest() {
    return path[path.length-1].id
}

func (t *player) To(city string) {
    fmt.Println("to")
    refine(g.t.map[city], g.t.map[getDest()])
}

func (t *player) refine(start Node, end Node) {
    fmt.Println("refine")
    // find new path from city to the goal
    path = g.t.aStar.find(start, end)
    setCur(0)
}

func (t *player) setCur(n int) {
    cur = n
    fmt.Println("$user.loc <- ${getLoc()}")
    broadcastLoc()
}

func (t *player) sendExp() {
    g.out.addLetter(socket, ["exp",
        user,
        req(),
        exp,
        level
    ])
}

func (t *player) req() int {
    return (1.1.pow(level) + 1.95).int() * level
}

func (t *player) increaseExp() {
    fmt.Println("increaseExp")

    exp = (exp + 1) % req()

    // check for level-up
    if (exp == 0) level++

    save()
    sendExp()
    broadcastLevel()
}

func (t *player) RollDie() {
    side = 6.random()
    fmt.Println("$user.side <- $side")
    g.out.addLetter(socket,["roll",side])
    rollerAnim = true
}

func (t *player) informLevels() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["level",
                p.getUser(),
                p.getLevel()
            ])
}

func (t *player) informColors() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["color",
                p.getUser(),
                p.getColor()
            ])
}

func (t *player) informLocs() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["loc",
                p.getUser(),
                p.getLoc()
            ])
}

func (t *player) informDests() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["dest",
                p.getUser(),
                p.getDest()
            ])
}

func (t *player) BroadcastLevel() {
    for (s in g.sockets)
        g.out.addLetter(s, ["level",
            user,
            getLevel()
        ])
}

func (t *player) BroadcastColor() {
    for (s in g.sockets)
        g.out.addLetter(s, ["color",
            user,
            getColor()
        ])
}

func (t *player) broadcastLoc() {
    for (s in g.sockets)
        g.out.addLetter(s, ["loc",
            user,
            getLoc()
        ])
}

func (t *player) broadcastDest() {
    for (s in g.sockets)
        g.out.addLetter(s, ["dest",
            user,
            getDest()
        ])
}

func (t *player) BroadcastExit() {
    for (s in g.sockets)
        if (s != socket)
            g.out.addLetter(s, ["exit",
                user
            ])
}

func (t *player) Loop(time float64) {
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
