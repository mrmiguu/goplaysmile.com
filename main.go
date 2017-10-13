package main

import (
	"github.com/mrmiguu/sock"
)

func init() {
	sock.Addr = ":4200"
}

func main() {
	username := sock.Rstring()
	for usrnm := range username {
		println("'" + usrnm + "' logged in")
	}
}
