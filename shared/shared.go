package shared

func Must(err error) {
	if err != nil {
		panic(err)
	}
}

func SOCKName(name string) string {
	return "name=" + name
}

func SOCKAccount(name string, pass []byte) string {
	return "account=" + name + ":" + string(pass)
}
