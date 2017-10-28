package main

import (
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
}

func main() {
	go game()
	select {}
}

func game() {
	bgld := dxweb.LoadImage("assets/bg.png")
	lgnld := dxweb.LoadImage("assets/login-btn.png")
	pwdld := dxweb.LoadImage("assets/pass-btn.png")
	hitld := dxweb.LoadSound("assets/hit.wav")
	gpsld := dxweb.LoadImage("assets/gps-start.png")
	splashld := dxweb.LoadImage("assets/splash.png")
	inputbgld := dxweb.LoadImage("assets/inputbg.png")

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
	input := jsutil.OpenKeyboard()
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

	var name string
	Name := sock.Wstring()

	var SOCKName string

	var Found <-chan bool
	var Pass chan<- []byte
	var Err <-chan error

readName:
	for {
		select {
		case <-lgn.Hit:
			hit.Play()

			name = typed.Get()

			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			typed.Set("")
			jsutil.ClearKeyboard()

			go lgn.Move(x, -height/2, 100)
			lgn.Show(false, 100)

			SOCKName = shared.SOCKName(name)

			Found = sock.Rbool(SOCKName)
			Pass = sock.Wbytes(SOCKName)
			Err = sock.Rerror(SOCKName)

			Name <- name

			break readName

		case <-inputbg.Hit:
			jsutil.OpenKeyboard()
		case <-typed.Hit:
			jsutil.OpenKeyboard()

		case txt := <-input:
			typed.Set(txt)
		}
	}

	var found bool
	var once bool
	var pass []byte

readPass:
	for {
		select {
		case found = <-Found:
			typed.Set("Enter a password")
			go inputbg.Show(true, 100)
			typed.Show(true, 100)

			go pwd.Move(x, height/2, 100)
			pwd.Show(true, 100)

			once = found

		case <-pwd.Hit:
			hit.Play()
			if once {
				jsutil.ClearKeyboard()
			}

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
				sock.Close(SOCKName)
				break readPass
			}

			once = false

			typed.Set(err.Error())
			go inputbg.Show(true, 100)
			typed.Show(true, 100)

			go pwd.Move(x, height/2, 100)
			pwd.Show(true, 100)

		case <-inputbg.Hit:
			jsutil.OpenKeyboard()
		case <-typed.Hit:
			jsutil.OpenKeyboard()

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
}
