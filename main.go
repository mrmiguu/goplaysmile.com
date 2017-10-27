package main

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"
	"os"
	"path/filepath"

	"github.com/mrmiguu/gps_online/shared"
	"github.com/mrmiguu/sock"
)

var (
	accounts = mustLoadAccounts()
)

func mustLoadAccounts() map[string]account {
	if _, err := os.Stat("accounts"); os.IsNotExist(err) {
		println("[creating accounts folder...]")
		shared.Must(os.Mkdir("accounts", os.ModePerm))
		println("[creating accounts folder  !]")
	}

	accounts := map[string]account{}

	println("[reading accounts...]")
	shared.Must(filepath.Walk("accounts", func(_ string, info os.FileInfo, err error) error {
		if err != nil {
			return err
		}
		name := info.Name()

		f, err := os.Open(name)
		if err != nil {
			return err
		}
		defer f.Close()

		var acct account
		if json.NewDecoder(f).Decode(&acct) != nil {
			return err
		}
		accounts[name] = acct

		return nil
	}))
	println("[reading accounts  !]")

	return accounts
}

type account struct {
	Password []byte
}

func init() {
	// sock.Addr = ":80"
}

func main() {
	Names := sock.Rstring()
	go logUsersIn(Names)
	select {}
}

func logUsersIn(Names <-chan string) {
	for name := range Names {
		SOCKName := shared.SOCKName(name)
		fmt.Println(`SOCKName`, []byte(SOCKName))

		Found := sock.Wbool(SOCKName)
		Pass := sock.Rbytes(SOCKName)
		Err := sock.Werror(SOCKName)

		acct, found := accounts[name]
		Found <- found
		if found {
			println("[logging '" + name + "' in...]")
		} else {
			println("[creating account '" + name + "'...]")
		}

		for {
			if !found {
				println("[pre password...]")
				acct.Password = <-Pass
				println("[pre password  !]")
			}
			println("[password...]")
			if bytes.Equal(acct.Password, <-Pass) {
				println("[password  !]")
				Err <- nil
				break
			}
			println("[password  X]")

			if found {
				Err <- errors.New("wrong password")
			} else {
				Err <- errors.New("passwords do not match")
			}
		}

		if found {
			println("[logging '" + name + "' in  !]")
		} else {
			println("[creating account '" + name + "'  !]")
		}

		go acct.join(name)
		accounts[name] = acct

		sock.Close(SOCKName)
	}
}

func (acct account) join(name string) {
	SOCKAccount := shared.SOCKAccount(name, acct.Password)
	defer sock.Close(SOCKAccount)

	println("[account '" + name + "' joined]")
	defer println("[account '" + name + "' left]")
}
