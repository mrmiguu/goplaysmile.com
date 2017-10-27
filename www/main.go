package main

import (
	"fmt"
	"strings"

	"github.com/mrmiguu/dxweb"
	"github.com/mrmiguu/gps_online/shared"
	"github.com/mrmiguu/jsutil"
	"github.com/mrmiguu/sock"
)

func init() {
	dxweb.Width = 750
	dxweb.Height = 1100
	// sock.Addr = "47.148.135.216"
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
			jsutil.CloseKeyboard()

			go lgn.Move(x, -height/2, 100)
			lgn.Show(false, 100)

			SOCKName = shared.SOCKName(name)
			fmt.Println(`SOCKName`, []byte(SOCKName))

			Found = sock.Rbool(SOCKName)
			Pass = sock.Wbytes(SOCKName)
			Err = sock.Rerror(SOCKName)

			Name <- name

			break readName

		case txt := <-input:
			typed.Set(txt)
		}
	}

	var found bool
	var retryPass bool
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

		case <-pwd.Hit:
			hit.Play()
			Pass <- pass

			go inputbg.Show(false, 100)
			typed.Show(false, 100)
			typed.Set("Reenter password")
			jsutil.CloseKeyboard()

			go pwd.Move(x, -height/2, 100)
			pwd.Show(false, 100)

			if found && !retryPass {
				continue
			}

			go inputbg.Show(true, 100)
			typed.Show(true, 100)

			go pwd.Move(x, height/2, 100)
			pwd.Show(true, 100)
			jsutil.OpenKeyboard()

			found = true

		case err := <-Err:
			if err == nil {
				sock.Close(SOCKName)
				break readPass
			}

			retryPass = true

			go inputbg.Show(true, 100)
			typed.Show(true, 100)

			go pwd.Move(x, height/2, 100)
			pwd.Show(true, 100)
			jsutil.OpenKeyboard()

		case txt := <-input:
			L := len(txt)
			if L == 0 {
				continue
			}
			typed.Set(strings.Repeat("*", L-1) + string(txt[L-1]))
			pass = []byte(txt)
		}
	}

	jsutil.CloseKeyboard()
}
