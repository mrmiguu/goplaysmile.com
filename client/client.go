package client

import (
	"math/rand"
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
	// sock.Addr = "goplaysmile.com"

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

	splash := <-splashld
	splash.Show(true, 2500)
	gps := <-gpsld
	gps.Show(true)
	go splash.Show(false)

	bg := <-bgld
	pwd := <-pwdld
	lgn := <-lgnld

	_, height := pwd.Size()
	x, _ := pwd.Pos()
	pwd.Move(x, -height/2)
	lgn.Move(x, height/2)

	bg.Show(true)
	lgn.Show(true)

	hit := <-hitld
	<-gps.Hit
	input := jsutil.FocusKeyboard()
	hit.Play()
	go gps.Show(false, 125)

	typed := dxweb.NewText("Enter a username")
	x, _ = typed.Pos()
	inputy := height + height/2
	inputbg := <-inputbgld
	inputbg.Move(x, inputy)
	typed.Move(x, inputy)
	typed.Resize(84)

	go inputbg.Show(true, 100)
	typed.Show(true, 100)

	Name := sock.Wstring()

	var name string
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

	typed.Set("Enter a password")
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

			Pass <- pass

			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			pass = nil
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

	SOCKAccount := shared.SOCKAccount(name, pass)
	defer sock.Close(SOCKAccount)

	// bgm := <-bgmld
	// bgm.Loop()

	maps := map[string]dxweb.Image{}
	for mapnm, mapld := range maplds {
		m := <-mapld
		m.Move(dxweb.Bottom(m))
		maps[mapnm] = m
	}

	icobar := <-dxweb.LoadImage("assets/icobar.png")
	icobar.Move(dxweb.Top(icobar))

	// icoBag := <-dxweb.LoadImage("assets/ico-bag.png")
	// icoGiftshop := <-dxweb.LoadImage("assets/ico-giftshop.png")
	icoGpsos := <-dxweb.LoadImage("assets/ico-gpsos.png")
	// icoMarket := <-dxweb.LoadImage("assets/ico-market.png")
	// icoSearch := <-dxweb.LoadImage("assets/ico-search.png")

	shdw := <-dxweb.LoadImage("assets/die/shadow.png")
	die := <-dxweb.LoadSprite("assets/die/dice.png", 1, 6)
	lift := <-dxweb.LoadSound("assets/die/lift.wav")
	land := <-dxweb.LoadSound("assets/die/land.wav")

	dolls := []dxweb.Image{
		<-dxweb.LoadImage("assets/die/hats/boot.png"),
		<-dxweb.LoadImage("assets/die/hats/brownshoe.png"),
		<-dxweb.LoadImage("assets/die/hats/catmask.png"),
		<-dxweb.LoadImage("assets/die/hats/crosshelm.png"),
		<-dxweb.LoadImage("assets/die/hats/crown.png"),
		<-dxweb.LoadImage("assets/die/hats/dogmask.png"),
		<-dxweb.LoadImage("assets/die/hats/fryingpan.png"),
		<-dxweb.LoadImage("assets/die/hats/gradcap.png"),
		<-dxweb.LoadImage("assets/die/hats/highheel.png"),
		<-dxweb.LoadImage("assets/die/hats/sandal.png"),
		<-dxweb.LoadImage("assets/die/hats/shortcake.png"),
		<-dxweb.LoadImage("assets/die/hats/sneaker.png"),
		<-dxweb.LoadImage("assets/die/hats/sunhat.png"),
		<-dxweb.LoadImage("assets/die/hats/tophat.png"),
	}
	// for i := range dolls {
	// 	dolls[i].Disable(true)
	// }

	x, _ = die.Pos()
	_, height = die.Size()
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

	icobar.Show(true)

	icoGpsos.Move(icobar.Pos())
	icoGpsos.Show(true)

	for {
		select {
		case <-icoGpsos.Hit:
			jsutil.OpenLink("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=3AGKVQVLS9WF2&custom=" + name)
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
