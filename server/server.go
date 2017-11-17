package server

import (
	"bytes"
	"encoding/json"
	"errors"
	"net/http"
	"os"
	"path/filepath"

	"github.com/mrmiguu/gps_online/shared"
	"github.com/mrmiguu/sock"
)

var (
	accounts = mustLoadAccounts()

	maps = []string{
		"santaclarita",
		"sanfernando",
		"lakeviewterrace",
		"sunland",
		"panoramacity",
		"lacanada",
		"pasadena",
		"vannuys",
		"burbank",
		"studiocity",
		"glendale",
		"azusa",
		"sandimas",
		"claremont",
		"highlandpark",
		"losangeles",
		"beverlyhills",
		"rosemead",
		"westcovina",
		"pomona",
		"elmonte",
		"montereypark",
		"calpoly",
		"usc",
		"commerce",
		"southelmonte",
		"culvercity",
		"chinohills",
		"santamonica",
		"diamondbar",
		"cityofindustry",
		"santafesprings",
		"lax",
		"watts",
		"lynwood",
		"brea",
		"corona",
		"bellflower",
		"compton",
		"hawthorne",
		"gardena",
		"dominguezhills",
		"northlongbeach",
		"torrance",
		"buenapark",
		"carson",
		"fullerton",
		"yorbalinda",
		"anaheim",
		"cypress",
		"westminster",
		"palosverdes",
		"gardengrove",
		"orange",
		"longbeach",
		"sanpedro",
		"huntingtonbeach",
		"santaana",
		"fountainvalley",
	}
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
	http.HandleFunc("/gpso_ipn", ipnHandler)

	Names := sock.Rstring()

	go logUsersIn(Names)
}

func logUsersIn(Names <-chan string) {
	for name := range Names {
		SOCKName := shared.SOCKName(name)

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
				Err <- errors.New("Wrong password")
			} else {
				Err <- errors.New("First ≠ Second")
			}
		}

		if found {
			println("[logging '" + name + "' in  !]")
		} else {
			println("[creating account '" + name + "'  !]")
		}
		sock.Close(SOCKName)

		go acct.join(name)
		accounts[name] = acct
	}
}

func (acct account) join(name string) {
	SOCKAccount := shared.SOCKAccount(name, acct.Password)
	defer sock.Close(SOCKAccount)

	println("[account '" + name + "' joined]")
	defer println("[account '" + name + "' left]")
}
