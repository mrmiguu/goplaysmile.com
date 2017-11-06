package server

import (
	"bytes"
	"fmt"
	"io/ioutil"
	"log"
	"net/http"
	"net/url"
)

func ipnHandler(w http.ResponseWriter, r *http.Request) {
	log.Println("/gpso_ipn [!]")
	if r.Method != http.MethodPost {
		http.Error(w, fmt.Sprintf("No route for %v", r.Method), http.StatusNotFound)
		return
	}

	fmt.Printf("Write Status 200")
	w.WriteHeader(http.StatusOK)

	body, err := ioutil.ReadAll(r.Body)
	if err != nil {
		log.Println(err)
		return
	}
	defer r.Body.Close()

	body = append([]byte(`cmd=_notify-validate&`), body...)

	resp, err := http.Post(
		"https://www.paypal.com/cgi-bin/webscr",
		r.Header.Get("Content-Type"),
		bytes.NewBuffer(body),
	)

	b, err := ioutil.ReadAll(resp.Body)
	if err != nil {
		log.Println(err)
		return
	}
	defer resp.Body.Close()
	verifyStatus := string(b)

	if verifyStatus != "VERIFIED" {
		log.Printf("Response: %v", verifyStatus)
		log.Println("This indicates that an attempt was made to spoof this interface, or we have a bug.")
		return
	}

	log.Printf("Response: %v", verifyStatus)

	vals, err := url.ParseQuery(string(body))
	for k, v := range vals {
		fmt.Println(k, v)
	}
}
