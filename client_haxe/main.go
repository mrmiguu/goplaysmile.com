package main

import (
	"github.com/mrmiguu/dxweb"
)

func init() {
	dxweb.Width = 450
	dxweb.Height = 800
}

func main() {
	bgld := dxweb.LoadImage("assets/etc/bg.png", dxweb.Width, dxweb.Height)
	splashld := dxweb.LoadImage("assets/etc/splash.png", dxweb.Width, dxweb.Height)

	splash := <-splashld
	splash.Show(true, 2500)
	go splash.Show(false, 500)
	bg := <-bgld
	bg.Show(true)
}
