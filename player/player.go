package player

type T struct {
    g *globals.T
    user string
    pass string
    color string
    path []*node.T
    cur int
    card *card.T
    cards  []*card.T
    level int
    exp int
    socket *socket.T
    side int
    roller int
    rollerFuture float64
    rollerAnim bool
    roygbiv string
}

func New(g *globals.T, s *socket.T, user, pass string) *T {
    fmt.Println("new Player")
    t := &T{
        g: g,
        socket: s,
        user: user,
        pass: pass,
        level: 1,
        roygbiv: "roygbiv",
    }

    "accounts".createDirectory()
    if (account().exists()) load()
    else save()
    sendExp()
    broadcastLevel()

    return t
}

func (t *T) account() string {
    return "accounts/"+t.user+"@"+t.pass
}

func (t *T) OnGoal() bool {
    return t.cur == len(t.path)-1
}

func (t *T) AddCard(c *card.T) {
    fmt.Println("addCard")
    // if no card, also equip
    if (cards.length == 0) card = c
    cards.push(c)
}

func (t *T) EquipCard(c *card.T) {
    if (cards.indexOf(c) != -1) card = c
}

func (t *T) Load() {
    var serial = account().getContent().serial()
    exp = serial.next()
    level = serial.next()
}
func (t *T) Save() {
    account().saveContent([
        exp,
        level
    ].serialize())
}

func (t *T) Init() {
    fmt.Println("init")

    inform()
    g.out.addLetter(socket,["init"])
}

func (t *T) inform() {
    // give player everyone else"s data
    informColors()
    informLevels()
    informLocs()
    informDests()
}

func (t *T) Reset() {
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

func (t *T) On(hwy int) {
    fmt.Println("on")
    return path[cur].hwys.indexOf(hwy) != -1
}

func (t *T) Go(n int){
    fmt.Println("go")
    setCur(if (cur + n >= path.length) path.length - 1 else cur + n)
}

func (t *T) GetUser() {
    return user
}

func (t *T) GetColor() {
    return color
}

func (t *T) SetColor(c string) {
    fmt.Println("$user.color <- $c")

    color = c
    broadcastColor()
}

func (t *T) GetLevel() {
    return level
}

func (t *T) GetLoc() {
    return path[cur].id
}

func (t *T) GetDest() {
    return path[path.length-1].id
}

func (t *T) To(city string) {
    fmt.Println("to")
    refine(g.t.map[city], g.t.map[getDest()])
}

func (t *T) refine(start node.T, end node.T) {
    fmt.Println("refine")
    // find new path from city to the goal
    path = g.t.aStar.find(start, end)
    setCur(0)
}

func (t *T) setCur(n int) {
    cur = n
    fmt.Println("$user.loc <- ${getLoc()}")
    broadcastLoc()
}

func (t *T) sendExp() {
    g.out.addLetter(socket, ["exp",
        user,
        req(),
        exp,
        level
    ])
}

func (t *T) req() int {
    return (1.1.pow(level) + 1.95).int() * level
}

func (t *T) increaseExp() {
    fmt.Println("increaseExp")

    exp = (exp + 1) % req()

    // check for level-up
    if (exp == 0) level++

    save()
    sendExp()
    broadcastLevel()
}

func (t *T) RollDie() {
    side = 6.random()
    fmt.Println("$user.side <- $side")
    g.out.addLetter(socket,["roll",side])
    rollerAnim = true
}

func (t *T) informLevels() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["level",
                p.getUser(),
                p.getLevel()
            ])
}

func (t *T) informColors() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["color",
                p.getUser(),
                p.getColor()
            ])
}

func (t *T) informLocs() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["loc",
                p.getUser(),
                p.getLoc()
            ])
}

func (t *T) informDests() {
    for (p in g.players)
        if (p != this)
            g.out.addLetter(socket, ["dest",
                p.getUser(),
                p.getDest()
            ])
}

func (t *T) BroadcastLevel() {
    for (s in g.sockets)
        g.out.addLetter(s, ["level",
            user,
            getLevel()
        ])
}

func (t *T) BroadcastColor() {
    for (s in g.sockets)
        g.out.addLetter(s, ["color",
            user,
            getColor()
        ])
}

func (t *T) broadcastLoc() {
    for (s in g.sockets)
        g.out.addLetter(s, ["loc",
            user,
            getLoc()
        ])
}

func (t *T) broadcastDest() {
    for (s in g.sockets)
        g.out.addLetter(s, ["dest",
            user,
            getDest()
        ])
}

func (t *T) BroadcastExit() {
    for (s in g.sockets)
        if (s != socket)
            g.out.addLetter(s, ["exit",
                user
            ])
}

func (t *T) Loop(time float64) {
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
