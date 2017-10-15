package main

import (
	"github.com/mrmiguu/dxweb"
	"github.com/mrmiguu/jsutil"
	"github.com/mrmiguu/sock"
)

func init() {
	dxweb.Width = 750
	dxweb.Height = 1100
	dxweb.HitSound = "assets/hit.wav"
	sock.Addr = "47.148.135.216:4200"
}

func main() {
	bgld := dxweb.LoadImage("assets/bg.png")
	lgnld := dxweb.LoadImage("assets/login-btn.png")
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

	<-gps.Hit
	input := jsutil.OpenKeyboard()
	go gps.Show(false, 125)

	typed := dxweb.NewText("Enter a username")
	x, _ = typed.Pos()
	inputy := height + height/2
	inputbg := <-inputbgld
	inputbg.Move(x, inputy)
	typed.Move(x, inputy)
	go inputbg.Show(true, 100)
	go typed.Resize(84, 100)
	typed.Show(true, 100)

	username := sock.Wstring()
readKeys:
	for {
		select {
		case <-lgn.Hit:
			username <- typed.Get()
			_, height = lgn.Size()
			x, _ = lgn.Pos()
			go lgn.Move(x, -height/2, 125)
			lgn.Show(false, 125)
			break readKeys
		case txt := <-input:
			typed.Set(txt)
		}
	}
	jsutil.CloseKeyboard()

	println("[LOGGED IN]")

	select {}
}
