package main

import (
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

	Name := sock.Wstring()
readKeys:
	for {
		select {
		case <-lgn.Hit:
			hit.Play()
			name := typed.Get()
			Name <- name
			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			typed.Set("")

			SOCKName := shared.SOCKName(name)

			Found := sock.Rbool(SOCKName)
			Pass := sock.Wbytes(SOCKName)
			Err := sock.Rerror(SOCKName)

			found := <-Found
			go inputbg.Show(true, 100)
			typed.Show(true, 100)
			if found {

			} else {
			}

			_, height = lgn.Size()
			x, _ = lgn.Pos()
			go lgn.Move(x, -height/2, 100)
			lgn.Show(false, 100)

			sock.Close(SOCKName)
			break readKeys

		case txt := <-input:
			typed.Set(txt)
		}
	}
	jsutil.CloseKeyboard()

	select {}
}
