package client

type Client struct {
    g *globals.Globals
    loginText *textField.TextField
    connection *connection.Connection
    loginButton *button.Button
    passButton *button.Button
    userField *field.Field
    undoButton *button.Button
}

func New() *Client {
    c := &Client{g: &globals.Globals{
        stg: stage,
    }}
    c.g.s = c
    c.g.addBackgrounds(this)

    scaleY = scaleX = stage.stageWidth.scale(stage.stageHeight)

    var splashSfx = 'etc/splash.ogg'.sound()
    var splash = 'etc/splash.png'.sprite()

    loginState()
    carPickState()
    toFromState()
    bagState()
    shopState()
    inGameState()
    
    g.radio = new Radio(g.login,g.carPick)
    g.radio.add(g.toFrom)
    g.radio.add(g.bag)
    g.radio.add(g.shop)
    g.radio.add(g.inGame)

    g.radio.push(g.login)
    // g.initBgMouseDown()

    addChild(splash)
    splashSfx.play()
    splash.tween(1.5, {alpha: 0}).delay(1.5).onComplete(func() {
        var bgm = 'etc/bgm.ogg'.sound()
        // bgm.play(0, 16085) // 420 hours
    })

    return c
}

func (c *Client) carPickState() {
    g.carPick.addAnimation(g.carRoulette = new CarRoulette(g))
    addChild(g.carPick)
}

func (c *Client) loginState() {
    g.setBgMouseDown(resetToUserState)

    loginButton = new Button(g,g.login,'username/username')
    loginButton.setX(loginButton.width.center(C.CENTER_W))
    loginButton.setY(loginButton.height.center(C.CENTER_H))
    loginButton.onPop(passStage)

    passButton = new Button(g,g.login,'password/password')
    passButton.setX(passButton.width.center(C.CENTER_W))
    passButton.setY(passButton.height.center(C.CENTER_H))
    passButton.onPop(connect)
    passButton.setVisible(false)

    userField = new Field(g,C.CENTER_W,loginButton.y/2,'login.cache')
    g.login.addChild(userField)

    var rows = ['1234567890','QWERTYUIOP','ASDFGHJKL','ZXCVBNM']
    var keysX=400.center(C.CENTER_W).int()
    var keysY=C.HEIGHT-225

    for (r in 0...rows.length) {
        var xOff = keysX

        if (r>=1) xOff+=16
        if (r>=2) xOff+=8
        if (r>=3) xOff+=16

        for (k in 0...rows[r].length) {
            var keyButton = new Button(g,g.login,'keys/blank')
            keyButton.setX(k*33+xOff)
            keyButton.setY(r*55+keysY)
            keyButton.addChild(rows[r].charAt(k).text(15,17,18))
            keyButton.onPop(func() {
                userField.addText(rows[r].charAt(k))
            })

            g.login.addChild(keyButton)
        }
    }

    undoButton = new Button(g,g.login,'key_undo/blank')
    undoButton.setX(keysX+330)
    undoButton.setY(keysY)
    undoButton.addChild('Back'.text(30,15,18))

    undoButton.onPop(func() {
        if (userField.size() > 0) userField.undo()
        else resetToUserState()
    })

    g.login.addChild(undoButton)
    g.login.addChild(loginButton)
    g.login.addChild(passButton)
    addChild(g.login)
}

func (c *Client) resetToUserState() {
    if (g.overlayHidden()) return

    // reset to username step
    passButton.setVisible(false)
    loginButton.setVisible(true)

    g.user = ''
    userField.show()
    g.hideOverlay()
}

func (c *Client) passStage() {
    // save username and clear for password
    var shown = userField.getShownCache()
    g.user = userField.getText()

    if (shown != g.user) {
        trace('$shown != ${g.user}')
        userField.resetHiddenCache()
    }

    if (g.user.length == 0) return

    trace('g.user=${g.user}')

    loginButton.setVisible(false)
    passButton.setVisible(true)

    userField.hide()

    g.showOverlay()
}

func (c *Client) connect() {
    trace('connect')

    var pass = userField.getText()
    if (pass.length == 0 || pass.indexOf('_') != -1) return

    connection = g.connect(g.user,pass)
    addChild(connection)
}

func (c *Client) toFromState() {
    var cardShadow = 'toFrom/card_shadow.png'.sprite()
    cardShadow.visible = false

    var cardStack = 'toFrom/cardStack.png'.sprite()
    cardStack.x = cardStack.width.center(C.CENTER_W)
    cardStack.y = cardStack.height.center(C.HEIGHT*0.37)

    var cardStackBacklight = 'toFrom/cardStack_backlight.png'.sprite()
    cardStackBacklight.anchor__Of('c',cardStack)

    cardShadow.x = cardShadow.width.center(C.CENTER_W)
    cardShadow.y = cardShadow.height.center(cardStack.y+cardStack.height/2)

    cardStack.addEventListener(MouseEvent.CLICK, func(m) {
        g.tapSfx()
        cardShadow.visible = true

        var card = 'toFrom/${g.player().getLoc()}_${g.player().getDest()}.png'.sprite()
        card.x = card.width.center(C.CENTER_W)
        card.y = cardShadow.y - card.height/3
        card.addEventListener(MouseEvent.CLICK, func(m) {
            g.tapSfx()
            g.radio.push(g.inGame)
            cardShadow.visible = false
            card.visible = false
        })
        g.toFrom.addChild(card)
    })

    var bagButton = new Button(g,g.toFrom,'toFrom/bag')
    bagButton.setX(bagButton.width.center(C.CENTER_W))
    bagButton.setY(bagButton.height.center(C.HEIGHT/6) + 1.5*C.HEIGHT/3)
    bagButton.onPop(func() {
        g.radio.push(g.bag)
        g.setBgMouseDown(back2ToFrom)
    })

    var shopButton = new Button(g,g.toFrom,'toFrom/shop')
    shopButton.setX(shopButton.width.center(C.CENTER_W))
    shopButton.setY(shopButton.height.center(C.HEIGHT/6) + 2*C.HEIGHT/3)
    shopButton.onPop(func() {
        g.radio.push(g.shop)
        g.setBgMouseDown(back2ToFrom)
    })

    g.toFrom.addChild(cardStackBacklight)
    g.toFrom.addChild(cardStack)
    g.toFrom.addChild(bagButton)
    g.toFrom.addChild(shopButton)
    g.toFrom.addChild(cardShadow)
    addChild(g.toFrom)
}

func (c *Client) back2ToFrom() {
    g.radio.push(g.toFrom)
    g.resetBgMouseDown()
}

var item1x: Null<Float>
func (c *Client) resetItem1X(m:MouseEvent) {
    item1x = null
}
func (c *Client) bagSwipe() {
    trace ("[[ Swiped bag ]]")
}
func (c *Client) bagState() {
    // var panel = 'bag/panel.png'.sprite()
    // panel.anchor__Of('c',this)

    // var item1 = 'cards/1.png'.sprite()
    // item1.anchor__Of('c',panel)
    // var item1Glow = 'cards/equipped.png'.sprite()
    // item1Glow.mouseEnabled=false
    // item1Glow.anchor__Of('b',item1)
    // item1.addEventListener(MouseEvent.MOUSE_DOWN, func(m) {
    //     item1x = stage.mouseX
    // })
    // stage.addEventListener(MouseEvent.MOUSE_MOVE, func(m) {
    //     if (item1x==null) return
    //     item1.x += stage.mouseX-item1x
    //     item1Glow.anchor__Of('b',item1)
    //     item1x = stage.mouseX
    // })
    // stage.addEventListener(MouseEvent.MOUSE_UP,resetItem1X)

    // // var item2 = 'paperdoll/headlights_item.png'.sprite()
    // // item2.anchor__Of('c',panel)

    // // var item2Glow = 'paperdoll/equipped.png'.sprite()
    // // item2Glow.mouseEnabled=false
    // // item2Glow.anchor__Of('bl',item2)

    // g.bag.addChild(panel)
    // g.bag.addChild(item1)
    // g.bag.addChild(item1Glow)
    // g.bag.addAnimation(new OnSwipe(g,item1,bagSwipe))
    // g.bag.addChild(item2)
    // g.bag.addChild(item2Glow)
    g.bag = new Inventory(g,'bag')
    g.bag.reloc('c')
    g.bag.addCard('1.png')

    addChild(g.bag)
}

func (c *Client) shopState() {
    g.shop = new Inventory(g,'shop')
    g.shop.addPaperdoll('headlights_item.png')

    var buy = new Button(g,g.shop,'shop/buy')
    buy.setX(buy.width.center(C.CENTER_W))
    buy.setY(buy.height.center(C.CENTER_H*1.5))
    g.shop.addChild(buy)

    addChild(g.shop)
}

func (c *Client) inGameState() {
    // setup gps
    var gps = 'etc/gps.png'.sprite()
    gps.y = gps.x = gps.width.center(C.CENTER_W)

    // setup viewport (over gps)
    var view = new Viewport(g, 49, 37, 308, 174, gps, g.inGame)
    g.inGame.addAnimation(view)
    
    // setup the roller for the card instructions (spins)
    g.createRoller()

    g.v = view
    // g.g.toFrom = g.toFrom
    // g.toFromText = cardText
    // g.g.inGame = g.inGame

    // setup the entire terrain system
    var terrain = new Terrain(g)
    terrain.y -= g.rollerH()
    g.t = terrain

    // add exp bar
    var bar = 'lvl/exp.png'.sprite()

    // level text
    g.l = new Level(g, gps, bar)

    // hide a card to rotate under the roller
    g.equipCard('c1')

    g.addCardInGame()
    g.inGame.addChild(terrain)
    g.inGame.addChild(gps)
    g.inGame.addChild(view)
    g.inGame.addChild(g.l.text)
    g.inGame.addChild(g.l)
    g.inGame.addAnimation(g.l)

    // setup the entire die system
    // -- the die needs the terrain handle because
    // -- it controls it eventually
    g.createDice()
    
    // create the example paperdoll
    // var pdH = new Paperdoll('headlights',die)
    // g.inGame.addChild(pdH)
    // g.inGame.addAnimation(pdH)
    
    // // set our die's paperdoll
    // die.paperdoll = pdH

    // exp bar is a gui element        
    g.inGame.addChild(bar)
    addChild(g.inGame)
}
