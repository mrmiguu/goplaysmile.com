package client

import (
	"math/rand"
	"strings"

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
	lgnld := dxweb.LoadImage("assets/login-btn.png")
	pwdld := dxweb.LoadImage("assets/pass-btn.png")
	hitld := dxweb.LoadSound("assets/hit.wav")
	gpsld := dxweb.LoadImage("assets/gps-start.png")
	splashld := dxweb.LoadImage("assets/splash.png")
	inputbgld := dxweb.LoadImage("assets/inputbg.png")
	shdwld := dxweb.LoadImage("assets/die/shadow.png")
	dield := dxweb.LoadSprite("assets/die/newdie.png", 1, 6)
	liftld := dxweb.LoadSound("assets/die/lift.wav")
	landld := dxweb.LoadSound("assets/die/land.wav")

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
	sock.Close(SOCKAccount)

	lift := <-liftld
	land := <-landld
	shdw := <-shdwld
	die := <-dield
	x, y := die.Pos()
	shdw.Move(x, y+120)
	die.Move(x, y+120)
	x, y = die.Pos()
	shdw.Show(true)
	die.Show(true)
	for {
		select {
		case <-die.Hit:
			lift.Play()
			dir := float64(rand.Int()%4) + 1.0
			go die.Rotate(90*dir, 125)
			die.Move(x, y-360, 125)
			go die.Rotate(0, 125)
			die.Play(rand.Intn(6))
			die.Move(x, y, 125)
			land.Play()
		}
	}
}
