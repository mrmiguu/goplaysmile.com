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
	sock.Addr = "47.148.135.216"
}

func main() {
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
	lgn := <-lgnld

	_, height := lgn.Size()
	x, _ := lgn.Pos()
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
	go func() {
		for {
			select {
			case <-inputbg.Hit:
			case <-typed.Hit:
			}
			jsutil.OpenKeyboard()
		}
	}()
	go inputbg.Show(true, 100)
	go typed.Resize(84, 100)
	typed.Show(true, 100)

	var name string
	Name := sock.Wstring()
readKeys:
	for {
		select {
		case <-lgn.Hit:
			hit.Play()
			name = typed.Get()
			Name <- name

			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			typed.Set("")

			_, height = lgn.Size()
			x, _ = lgn.Pos()
			go lgn.Move(x, -height/2, 100)
			lgn.Show(false, 100)

			break readKeys

		case txt := <-input:
			typed.Set(txt)
		}
	}

	SOCKName := shared.SOCKName(name)

	Found := sock.Rbool(SOCKName)
	found := <-Found

	pwd := <-pwdld
	_, height = pwd.Size()
	x, _ = pwd.Pos()
	pwd.Move(x, -height/2)

	var pass []byte
	Pass := sock.Wbytes(SOCKName)
	Err := sock.Rerror(SOCKName)

	go inputbg.Show(true, 100)
	typed.Show(true, 100)

	go pwd.Move(x, height/2, 100)
	pwd.Show(true, 100)

readKeys:
	for {
		select {
		case err := <-Err:
			if err == nil {
				break readKeys
			}

		case <-pwd.Hit:
			hit.Play()
			Pass <- pass

			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			typed.Set("")

			go pwd.Move(x, -height/2, 100)
			pwd.Show(false, 100)

			go inputbg.Show(true, 100)
			typed.Show(true, 100)

			go pwd.Move(x, height/2, 100)
			pwd.Show(true, 100)

		case txt := <-input:
			L := len(txt)
			if L == 0 {
				continue
			}
			typed.Set(strings.Repeat("*", L-1) + string(txt[L-1]))
			pass = []byte(txt)
		}
	}

	sock.Close(SOCKName)

	jsutil.CloseKeyboard()

	select {}
}
