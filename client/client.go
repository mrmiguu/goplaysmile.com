package client

import (
	"fmt"
	"math/rand"
	"strconv"
	"strings"
	"time"

	"github.com/mrmiguu/dxweb"
	"github.com/mrmiguu/gps_online/shared"
	"github.com/mrmiguu/jsutil"
	"github.com/mrmiguu/sock"
)

func init() {
	dxweb.Width = 750
	dxweb.Height = 1100
	sock.Addr = "goplaysmile.com"

	go main()
}

func main() {
	bgld := dxweb.LoadImage("assets/bg.png")
	// bgmld := dxweb.LoadSound("assets/Hantasi - Go Play Smile.mp3")
	lgnld := dxweb.LoadImage("assets/login-btn.png")
	pwdld := dxweb.LoadImage("assets/pass-btn.png")
	hitld := dxweb.LoadSound("assets/hit.wav")
	gpsld := dxweb.LoadImage("assets/gps-start.png")
	splashld := dxweb.LoadImage("assets/splash.png")
	inputbgld := dxweb.LoadImage("assets/inputbg.png")

	mapnms := []string{
		"santaclarita",
		"sanfernando",
		"lakeviewterrace",
		"sunland",
		"panoramacity",
		"lacanada",
		"pasadena",
		"vannuys",
		"burbank",
		"studiocity",
		"glendale",
		"azusa",
		"sandimas",
		"claremont",
		"highlandpark",
		"losangeles",
		"beverlyhills",
		"rosemead",
		"westcovina",
		"pomona",
		"elmonte",
		"montereypark",
		"calpoly",
		"usc",
		"commerce",
		"southelmonte",
		"culvercity",
		"chinohills",
		"santamonica",
		"diamondbar",
		"cityofindustry",
		"santafesprings",
		"lax",
		"watts",
		"lynwood",
		"brea",
		"corona",
		"bellflower",
		"compton",
		"hawthorne",
		"gardena",
		"dominguezhills",
		"northlongbeach",
		"torrance",
		"buenapark",
		"carson",
		"fullerton",
		"yorbalinda",
		"anaheim",
		"cypress",
		"westminster",
		"palosverdes",
		"gardengrove",
		"orange",
		"longbeach",
		"sanpedro",
		"huntingtonbeach",
		"santaana",
		"fountainvalley",
	}
	maplds := map[string]<-chan dxweb.Image{}
	for _, mapnm := range mapnms {
		maplds[mapnm] = dxweb.LoadImage("assets/maps/" + mapnm + ".png")
	}

	hit := <-hitld
	bg := <-bgld

	// check for frozen log-out
	cookie := jsutil.LoadCookie()
	name, foundName := cookie["name"]
	hashStr, foundHash := cookie["hash"]
	hash := []byte(hashStr)
	if !foundName || !foundHash {
		splash := <-splashld
		splash.Show(true, 2500)
		gps := <-gpsld
		gps.Show(true)
		go splash.Show(false)

		pwd := <-pwdld
		lgn := <-lgnld

		_, height := pwd.Size()
		x, _ := pwd.Pos()
		pwd.Move(x, -height/2)
		lgn.Move(x, height/2)

		bg.Show(true)
		lgn.Show(true)

		<-gps.Hit
		input := jsutil.FocusKeyboard()
		hit.Play()
		go gps.Show(false, 125)

		if !foundName {
			name = "Enter a username"
		}
		typed := dxweb.NewText(name)
		x, _ = typed.Pos()
		inputy := height + height/2
		inputbg := <-inputbgld
		inputbg.Move(x, inputy)
		typed.Move(x, inputy)
		typed.Resize(84)

		go inputbg.Show(true, 100)
		typed.Show(true, 100)

		Name := sock.Wstring()

	readName:
		for {
			select {
			case <-lgn.Hit:
				jsutil.FocusKeyboard()
				hit.Play()

				name = typed.Get()

				go inputbg.Show(false, 100)
				typed.Show(false, 100)
				typed.Set("")
				jsutil.ClearKeyboard()

				go lgn.Move(x, -height/2, 100)
				lgn.Show(false, 100)

				break readName

			case <-inputbg.Hit:
				jsutil.FocusKeyboard()
			case <-typed.Hit:
				jsutil.FocusKeyboard()

			case txt := <-input:
				typed.Set(txt)
			}
		}

		SOCKName := shared.SOCKName(name)
		Found := sock.Rbool(SOCKName)
		Pass := sock.Wbytes(SOCKName)
		Err := sock.Rerror(SOCKName)

		Name <- name

		found := <-Found
		once := found

		hidden := "Enter a password"
		plen, err := strconv.Atoi(cookie["plen"])
		if foundHash && err == nil {
			hidden = strings.Repeat("*", plen)
		}

		typed.Set(hidden)
		go inputbg.Show(true, 100)
		typed.Show(true, 100)

		go pwd.Move(x, height/2, 100)
		pwd.Show(true, 100)

		var pass []byte

	readPass:
		for {
			select {
			case <-pwd.Hit:
				jsutil.FocusKeyboard()
				hit.Play()

				if foundHash && len(pass) == 0 {
					hash = []byte(hashStr)
				} else {
					// b32 := sha256.Sum256(pass)
					plen = len(pass)
					hash = pass
					hashStr = string(hash)
				}
				fmt.Println(hashStr)

				Pass <- hash

				go inputbg.Show(false, 100)
				typed.Show(false, 100)
				// pass = nil
				typed.Set("Reenter password")
				jsutil.ClearKeyboard()

				go pwd.Move(x, -height/2, 100)
				pwd.Show(false, 100)

				if found || once {
					continue
				}

				go inputbg.Show(true, 100)
				typed.Show(true, 100)

				go pwd.Move(x, height/2, 100)
				pwd.Show(true, 100)

				once = true

			case err := <-Err:
				if err == nil {
					jsutil.BlurKeyboard()
					break readPass
				}

				once = false

				typed.Set(err.Error())
				go inputbg.Show(true, 100)
				typed.Show(true, 100)

				go pwd.Move(x, height/2, 100)
				pwd.Show(true, 100)

			case <-inputbg.Hit:
				jsutil.FocusKeyboard()
			case <-typed.Hit:
				jsutil.FocusKeyboard()

			case txt := <-input:
				L := len(txt)
				var hidden string
				if L > 0 {
					hidden = strings.Repeat("*", L-1) + string(txt[L-1])
				}
				typed.Set(hidden)
				pass = []byte(txt)
			}
		}
		sock.Close(SOCKName)

		cookie = jsutil.Cookie{
			"name": name,
			"hash": hashStr,
			"plen": strconv.Itoa(plen),
			// "pay":  strconv.FormatBool(false),
		}
		jsutil.StoreCookie(cookie)
	}

	SOCKAccount := shared.SOCKAccount(name, hash)
	defer sock.Close(SOCKAccount)

	maps := map[string]dxweb.Image{}
	for mapnm, mapld := range maplds {
		m := <-mapld
		m.Move(dxweb.Bottom(m))
		maps[mapnm] = m
	}

	icobar := <-dxweb.LoadImage("assets/icobar.png")
	icobar.Move(dxweb.Top(icobar))

	icoBag := <-icobar.LoadImage("assets/ico-bag.png")
	icoGpsos := <-icobar.LoadImage("assets/ico-gpsos.png")
	icoGiftshop := <-icobar.LoadImage("assets/ico-giftshop.png")
	// icoMarket := <-dxweb.LoadImage("assets/ico-market.png")
	// icoSearch := <-dxweb.LoadImage("assets/ico-search.png")

	dash := <-dxweb.LoadImage("assets/dash.png")
	dashX, _ := dash.Pos()
	dash.Move(dashX, dxweb.Height*3/10)
	gpsmap := <-dash.LoadImage("assets/etc/map.png", 382, 218)

	shdw := <-dxweb.LoadImage("assets/die/shadow.png")
	die := <-dxweb.LoadSprite("assets/die/dice.png", 1, 6)
	lift := <-dxweb.LoadSound("assets/die/lift.wav")
	land := <-dxweb.LoadSound("assets/die/land.wav")

	dolls := []dxweb.Image{
		<-dxweb.LoadImage("assets/die/hats/boot.png"),
		// <-dxweb.LoadImage("assets/die/hats/brownshoe.png"),
		// <-dxweb.LoadImage("assets/die/hats/catmask.png"),
		// <-dxweb.LoadImage("assets/die/hats/crosshelm.png"),
		<-dxweb.LoadImage("assets/die/hats/crown.png"),
		// <-dxweb.LoadImage("assets/die/hats/dogmask.png"),
		<-dxweb.LoadImage("assets/die/hats/fryingpan.png"),
		<-dxweb.LoadImage("assets/die/hats/gradcap.png"),
		<-dxweb.LoadImage("assets/die/hats/highheel.png"),
		// <-dxweb.LoadImage("assets/die/hats/sandal.png"),
		<-dxweb.LoadImage("assets/die/hats/shortcake.png"),
		<-dxweb.LoadImage("assets/die/hats/sneaker.png"),
		<-dxweb.LoadImage("assets/die/hats/sunhat.png"),
		<-dxweb.LoadImage("assets/die/hats/tophat.png"),
	}

	blank := <-dxweb.LoadImage("assets/blank-scr.png")
	bagItems := []dxweb.Image{
		// <-blank.LoadImage("assets/die/hats/boot.png"),
		<-blank.LoadImage("assets/die/hats/brownshoe.png"),
		<-blank.LoadImage("assets/die/hats/catmask.png"),
		<-blank.LoadImage("assets/die/hats/crosshelm.png"),
		// <-blank.LoadImage("assets/die/hats/crown.png"),
		<-blank.LoadImage("assets/die/hats/dogmask.png"),
		// <-blank.LoadImage("assets/die/hats/fryingpan.png"),
		// <-blank.LoadImage("assets/die/hats/gradcap.png"),
		// <-blank.LoadImage("assets/die/hats/highheel.png"),
		<-blank.LoadImage("assets/die/hats/sandal.png"),
		// <-blank.LoadImage("assets/die/hats/shortcake.png"),
		// <-blank.LoadImage("assets/die/hats/sneaker.png"),
		// <-blank.LoadImage("assets/die/hats/sunhat.png"),
		// <-blank.LoadImage("assets/die/hats/tophat.png"),
	}
	scrollverlay := <-blank.LoadImage("assets/scrollverlay.png")
	tab := <-blank.LoadImage("assets/tab.png")

	cost2 := <-blank.LoadImage("assets/gpsos/cost_2.png")
	cost4 := <-blank.LoadImage("assets/gpsos/cost_4.png")
	cost9 := <-blank.LoadImage("assets/gpsos/cost_9.png")
	cost15 := <-blank.LoadImage("assets/gpsos/cost_15.png")
	cost25 := <-blank.LoadImage("assets/gpsos/cost_25.png")
	cost49 := <-blank.LoadImage("assets/gpsos/cost_49.png")
	cost69 := <-blank.LoadImage("assets/gpsos/cost_69.png")
	gpsos10 := <-blank.LoadImage("assets/gpsos/gpsos_10.png")
	gpsos20 := <-blank.LoadImage("assets/gpsos/gpsos_20.png")
	gpsos50 := <-blank.LoadImage("assets/gpsos/gpsos_50.png")
	gpsos100 := <-blank.LoadImage("assets/gpsos/gpsos_100.png")
	gpsos200 := <-blank.LoadImage("assets/gpsos/gpsos_200.png")
	gpsos500 := <-blank.LoadImage("assets/gpsos/gpsos_500.png")
	gpsos1000 := <-blank.LoadImage("assets/gpsos/gpsos_1000.png")

	gpsoHit := <-dxweb.LoadSound("assets/gpsos/hit.wav")

	bx, by := blank.Pos()
	_, bh := blank.Size()

	halfGpso := 58

	c2w, _ := cost2.Size()
	c4w, _ := cost4.Size()
	c9w, _ := cost9.Size()
	c15w, _ := cost15.Size()
	c25w, _ := cost25.Size()
	c49w, _ := cost49.Size()
	c69w, _ := cost69.Size()

	g10w, g10h := gpsos10.Size()
	g20w, g20h := gpsos20.Size()
	g50w, g50h := gpsos50.Size()
	g100w, g100h := gpsos100.Size()
	g200w, g200h := gpsos200.Size()
	g500w, g500h := gpsos500.Size()
	g1000w, g1000h := gpsos1000.Size()

	cost2.Move(c2w/2+halfGpso, -g100h/2-g50h-g20h-g10h/2-30)
	cost4.Move(c4w/2+halfGpso, -g100h/2-g50h-g20h/2-20)
	cost9.Move(c9w/2+halfGpso, -g100h/2-g50h/2-10)
	cost15.Move(c15w/2+halfGpso, 0)
	cost25.Move(c25w/2+halfGpso, g100h/2+g200h/2+10)
	cost49.Move(c49w/2+halfGpso, g100h/2+g200h+g500h/2+20)
	cost69.Move(c69w/2+halfGpso, g100h/2+g200h+g500h+g1000h/2+30)

	gpsos10.Move(-g10w/2+halfGpso, -g100h/2-g50h-g20h-g10h/2-30)
	gpsos20.Move(-g20w/2+halfGpso, -g100h/2-g50h-g20h/2-20)
	gpsos50.Move(-g50w/2+halfGpso, -g100h/2-g50h/2-10)
	gpsos100.Move(-g100w/2+halfGpso, 0)
	gpsos200.Move(-g200w/2+halfGpso, g100h/2+g200h/2+10)
	gpsos500.Move(-g500w/2+halfGpso, g100h/2+g200h+g500h/2+20)
	gpsos1000.Move(-g1000w/2+halfGpso, g100h/2+g200h+g500h+g1000h/2+30)

	_, th := tab.Size()
	tab.Move(0, bh/2-th/2)

	// bgm := <-bgmld
	// bgm.Loop()
	bg.Show(true)

	payPal := func(id string) {
		jsutil.Redirect("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=" + id + "&custom=" + name)
	}
	gpsosUI := func() {
		select {
		case <-tab.Hit:
			hit.Play()
			blank.Move(bx, -bh/2, 250)
			tab.Show(false)

			cost2.Show(false)
			cost4.Show(false)
			cost9.Show(false)
			cost15.Show(false)
			cost25.Show(false)
			cost49.Show(false)
			cost69.Show(false)
			gpsos10.Show(false)
			gpsos20.Show(false)
			gpsos50.Show(false)
			gpsos100.Show(false)
			gpsos200.Show(false)
			gpsos500.Show(false)
			gpsos1000.Show(false)

			blank.Show(false)
		case <-gpsos10.Hit:
			gpsoHit.Play()
			payPal("3AGKVQVLS9WF2")
		case <-gpsos20.Hit:
			gpsoHit.Play()
			payPal("QAZLX4G4DRYXY")
		case <-gpsos50.Hit:
			gpsoHit.Play()
			payPal("T3MQB3N6G3ZPL")
		case <-gpsos100.Hit:
			gpsoHit.Play()
			payPal("3AGKVQVLS9WF2")
		case <-gpsos200.Hit:
			gpsoHit.Play()
			payPal("KDXU5V9TUXUMU")
		case <-gpsos500.Hit:
			gpsoHit.Play()
			payPal("V79FQ6H9M2TW2")
		case <-gpsos1000.Hit:
			gpsoHit.Play()
			payPal("VG8SE9DGAGAFC")
		}
	}

	if foundName && foundHash {
		blank.Show(true)
		tab.Show(true)

		cost2.Show(true)
		cost4.Show(true)
		cost9.Show(true)
		cost15.Show(true)
		cost25.Show(true)
		cost49.Show(true)
		cost69.Show(true)
		gpsos10.Show(true)
		gpsos20.Show(true)
		gpsos50.Show(true)
		gpsos100.Show(true)
		gpsos200.Show(true)
		gpsos500.Show(true)
		gpsos1000.Show(true)
	}

	x, _ := die.Pos()
	_, height := die.Size()
	shdw.Move(x, 787-height/2)
	die.Move(x, 787-height/2)
	rand.Seed(int64(time.Now().Nanosecond()))
	rndmap := rand.Intn(len(maps))
	doll := rndmap % len(dolls)
	paperdoll := dolls[doll]
	side := rndmap % 6
	die.Play(side)
	x, y := die.Pos()
	paperdoll.Move(x, y)
	shdw.Show(true)
	die.Show(true)
	paperdoll.Show(true)
	Map := maps[mapnms[rndmap]]
	Map.Show(true)

	ibw, _ := icoBag.Size()
	igw, _ := icoGpsos.Size()
	igsw, _ := icoGiftshop.Size()
	ihalf := (ibw + igw + igsw) / 2
	icoBag.Move(-ihalf+ibw/2, 0)
	icoGpsos.Move(-ihalf+ibw+igw/2, 0)
	icoGiftshop.Move(-ihalf+ibw+igw+igsw/2, 0)

	icobar.Show(true)
	icoBag.Show(true)
	icoGpsos.Show(true)
	icoGiftshop.Show(true)

	dash.Show(true)
	gpsmap.Show(true)

	if foundName && foundHash {
		gpsosUI()
	} else {
		blank.Move(bx, -bh/2)
	}

	for {
		select {
		case <-icoBag.Hit:
			hit.Play()

			blank.Show(true)
			_, bi0h := bagItems[0].Size()
			_, bi1h := bagItems[1].Size()
			_, bi2h := bagItems[2].Size()
			_, bi3h := bagItems[3].Size()
			_, bi4h := bagItems[4].Size()
			bagItems[0].Move(0, -bi0h/2-bi1h-bi2h/2)
			bagItems[0].Show(true)
			bagItems[1].Move(0, -bi1h/2-bi2h/2)
			bagItems[1].Show(true)
			bagItems[2].Show(true)
			bagItems[3].Move(0, bi2h/2+bi3h/2)
			bagItems[3].Show(true)
			bagItems[4].Move(0, bi2h/2+bi3h+bi4h/2)
			bagItems[4].Show(true)
			scrollverlay.Show(true)
			tab.Show(true)

			blank.Move(bx, by, 250)
			land.Play()

			<-tab.Hit
			hit.Play()
			blank.Move(bx, -bh/2, 250)
			bagItems[0].Show(false)
			bagItems[1].Show(false)
			bagItems[2].Show(false)
			bagItems[3].Show(false)
			bagItems[4].Show(false)
			scrollverlay.Show(false)
			blank.Show(false)
			continue

		case <-icoGpsos.Hit:
			hit.Play()
			blank.Show(true)
			tab.Show(true)

			cost2.Show(true)
			cost4.Show(true)
			cost9.Show(true)
			cost15.Show(true)
			cost25.Show(true)
			cost49.Show(true)
			cost69.Show(true)
			gpsos10.Show(true)
			gpsos20.Show(true)
			gpsos50.Show(true)
			gpsos100.Show(true)
			gpsos200.Show(true)
			gpsos500.Show(true)
			gpsos1000.Show(true)

			blank.Move(bx, by, 250)
			land.Play()
			gpsosUI()
			continue

		case <-icoGiftshop.Hit:
			hit.Play()
			continue

		case <-paperdoll.Hit:
			select {
			case <-die.Hit:
			default:
			}
		case <-die.Hit:
			select {
			case <-paperdoll.Hit:
			default:
			}
		}

		lift.Play()
		dir := float64(rand.Int()%4) + 1.0

		go paperdoll.Rotate(90*dir, 125)
		go die.Rotate(90*dir, 125)

		go paperdoll.Move(x, y-360, 125)
		die.Move(x, y-360, 125)

		go paperdoll.Rotate(0, 125)
		go die.Rotate(0, 125)

		rndmap := rand.Intn(len(maps))

		side := rndmap % 6
		die.Play(side)

		Map.Show(false)

		Map = maps[mapnms[rndmap]]
		Map.Show(true)

		go paperdoll.Move(x, y, 125)
		die.Move(x, y, 125)

		doll := rndmap % len(dolls)
		paperdoll.Show(false)
		paperdoll = dolls[doll]
		paperdoll.Move(x, y)
		paperdoll.Show(true)

		land.Play()
	}
}
