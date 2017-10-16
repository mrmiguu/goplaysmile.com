package main

import (
	"github.com/mrmiguu/sock"
)

func init() {
	sock.Addr = ":80"
}

func main() {
	go logUsersIn(sock.Rstring())
	select {}
}

func logUsersIn(Names <-chan string) {
	db := make(map[string]interface{})
	for name := range Names {
		if _, found := db[name]; found {
			println("`" + name + "` rejected; already logged in")
			continue
		}
		db[name] = nil
		println("`" + name + "` logged in")
	}
}
