package main

import (
	"github.com/mrmiguu/dxweb"
	"github.com/mrmiguu/jsutil"
	"github.com/mrmiguu/sock"
)

func init() {
	dxweb.Width = 450
	dxweb.Height = 800
	sock.Addr = "47.148.135.216:4200"
}

func main() {
	bgld := dxweb.LoadImage("assets/etc/bg.png", dxweb.Width, dxweb.Height)
	lgnld := dxweb.LoadImage("assets/login-btn.png", dxweb.Width, 277)
	gpsld := dxweb.LoadImage("assets/gps-start.png", dxweb.Width, dxweb.Height)
	splashld := dxweb.LoadImage("assets/etc/splash.png", dxweb.Width, dxweb.Height)

	splash := <-splashld
	splash.Show(true, 2500)
	go func() {
		for range splash.Hit {
			println("splash.Hit")
		}
	}()
	go splash.Show(false, 1500)

	gps := <-gpsld
	bg := <-bgld
	lgn := <-lgnld

	_, height := lgn.Size()
	x, _ := lgn.Pos()
	lgn.Move(x, height/2)

	gps.Show(true)
	bg.Show(true)
	lgn.Show(true)

	<-gps.Hit
	input := jsutil.OpenKeyboard()
	go gps.Show(false, 500)

	username := sock.Wstring()
	go func() {
		var text string
		for txt := range input {
			text = txt
		}
		username <- text
	}()
	<-lgn.Hit
	jsutil.CloseKeyboard()

	select {}
}
