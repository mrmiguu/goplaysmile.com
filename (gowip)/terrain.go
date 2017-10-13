package server

import "/mrmiguu/node"

// Terrain is the terrain type.
type Terrain struct {
	anaheim,
	azusa,
	bellflower,
	beverlyhills,
	brea,
	buenapark,
	burbank,
	calpoly,
	carson,
	chinohills,
	cityofindustry,
	claremont,
	commerce,
	compton,
	corona,
	culvercity,
	cypress,
	diamondbar,
	dominguezhills,
	elmonte,
	fountainvalley,
	fullerton,
	gardena,
	gardengrove,
	glendale,
	hawthorne,
	highlandpark,
	huntingtonbeach,
	lacanada,
	lakeviewterrace,
	lax,
	longbeach,
	losangeles,
	lynwood,
	montereypark,
	northlongbeach,
	orange,
	palosverdes,
	panoramacity,
	pasadena,
	pomona,
	rosemead,
	sandimas,
	sanfernando,
	sanpedro,
	santaana,
	santaclarita,
	santafesprings,
	santamonica,
	southelmonte,
	studiocity,
	sunland,
	torrance,
	usc,
	vannuys,
	watts,
	westcovina,
	westminster,
	yorbalinda *Node

	Diag  float64
	AStar *Astar
	Pairs [][]*Node
	Map   map[string]*Node

	nodePoints c.XY
	nodeNames  []string
}

// New creates a new terrain object.
func New() *Terrain {
	t := &Terrain{
		nodePoints: c.Locations(c.Bmp("etc/map.png")),
		nodeNames: []string{
			"santaclarita", "sanfernando", "lakeviewterrace", "sunland", "panoramacity",
			"lacanada", "pasadena", "vannuys", "burbank", "studiocity",
			"glendale", "azusa", "sandimas", "claremont", "highlandpark",
			"losangeles", "beverlyhills", "rosemead", "westcovina", "pomona", "elmonte",
			"montereypark", "calpoly", "usc", "commerce", "southelmonte",
			"culvercity", "chinohills", "santamonica", "diamondbar",
			"cityofindustry", "santafesprings", "lax", "watts", "lynwood", "brea",
			"corona", "bellflower", "compton", "hawthorne", "gardena", "dominguezhills",
			"northlongbeach", "torrance", "buenapark", "carson", "fullerton",
			"yorbalinda", "anaheim", "cypress", "westminster", "palosverdes", "gardengrove",
			"orange", "longbeach", "sanpedro", "huntingtonbeach", "santaana",
			"fountainvalley",
		},
		Diag: c.Dist(0, 0, 2142, 1210),
	}

	// prepare the game-specific info for A*
	t.AStar = astar.New(t.Diag, t.Point)

	// instanciate all nodes
	t.anaheim = newAStar("anaheim", []int{5})
	t.azusa = newAStar("azusa", []int{210, 605})
	t.bellflower = newAStar("bellflower", []int{91, 605})
	t.beverlyhills = newAStar("beverlyhills", []int{2, 170})
	t.brea = newAStar("brea", []int{57})
	t.buenapark = newAStar("buenapark", []int{5, 91})
	t.burbank = newAStar("burbank", []int{5, 101})
	t.calpoly = newAStar("calpoly", []int{57})
	t.carson = newAStar("carson", []int{110, 405})
	t.chinohills = newAStar("chinohills", []int{60})
	t.cityofindustry = newAStar("cityofindustry", []int{60})
	t.claremont = newAStar("claremont", []int{210})
	t.commerce = newAStar("commerce", []int{60, 710})
	t.compton = newAStar("compton", []int{91, 710})
	t.corona = newAStar("corona", []int{91})
	t.culvercity = newAStar("culvercity", []int{10, 405})
	t.cypress = newAStar("cypress", []int{605})
	t.diamondbar = newAStar("diamondbar", []int{57})
	t.dominguezhills = newAStar("dominguezhills", []int{110})
	t.elmonte = newAStar("elmonte", []int{10, 605})
	t.fountainvalley = newAStar("fountainvalley", []int{405})
	t.fullerton = newAStar("fullerton", []int{57, 91})
	t.gardena = newAStar("gardena", []int{91, 110})
	t.gardengrove = newAStar("gardengrove", []int{5, 22, 57})
	t.glendale = newAStar("glendale", []int{2, 101})
	t.hawthorne = newAStar("hawthorne", []int{91, 405})
	t.highlandpark = newAStar("highlandpark", []int{110})
	t.huntingtonbeach = newAStar("huntingtonbeach", []int{605})
	t.lacanada = newAStar("lacanada", []int{2, 210})
	t.lakeviewterrace = newAStar("lakeviewterrace", []int{210})
	t.lax = newAStar("lax", []int{105, 405})
	t.longbeach = newAStar("longbeach", []int{710})
	t.losangeles = newAStar("losangeles", []int{5, 10, 110})
	t.lynwood = newAStar("lynwood", []int{105, 710})
	t.montereypark = newAStar("montereypark", []int{10, 710})
	t.northlongbeach = newAStar("northlongbeach", []int{710})
	t.orange = newAStar("orange", []int{22, 55})
	t.palosverdes = newAStar("palosverdes", []int{})
	t.panoramacity = newAStar("panoramacity", []int{5, 170})
	t.pasadena = newAStar("pasadena", []int{110})
	t.pomona = newAStar("pomona", []int{10})
	t.rosemead = newAStar("rosemead", []int{10})
	t.sandimas = newAStar("sandimas", []int{57, 210})
	t.sanfernando = newAStar("sanfernando", []int{5, 405})
	t.sanpedro = newAStar("sanpedro", []int{110})
	t.santaana = newAStar("santaana", []int{5, 55, 405})
	t.santaclarita = newAStar("santaclarita", []int{5, 210})
	t.santafesprings = newAStar("santafesprings", []int{5, 605})
	t.santamonica = newAStar("santamonica", []int{10})
	t.southelmonte = newAStar("southelmonte", []int{60, 605})
	t.studiocity = newAStar("studiocity", []int{101, 170})
	t.sunland = newAStar("sunland", []int{210})
	t.torrance = newAStar("torrance", []int{405})
	t.usc = newAStar("usc", []int{10, 60, 110})
	t.vannuys = newAStar("vannuys", []int{101, 405})
	t.watts = newAStar("watts", []int{105, 110})
	t.westcovina = newAStar("westcovina", []int{10})
	t.westminster = newAStar("westminster", []int{22, 405})
	t.yorbalinda = newAStar("yorbalinda", []int{55, 91})

	t.Map = map[string]*Node{
		"anaheim": t.anaheim, "azusa": t.azusa, "bellflower": t.bellflower,
		"beverlyhills": t.beverlyhills, "brea": t.brea,
		"buenapark": t.buenapark, "burbank": t.burbank,
		"calpoly": t.calpoly, "carson": t.carson,
		"chinohills": t.chinohills, "cityofindustry": t.cityofindustry,
		"claremont": t.claremont, "commerce": t.commerce,
		"compton": t.compton, "corona": t.corona,
		"culvercity": t.culvercity, "cypress": t.cypress,
		"diamondbar": t.diamondbar, "dominguezhills": t.dominguezhills,
		"elmonte": t.elmonte, "fountainvalley": t.fountainvalley,
		"fullerton": t.fullerton, "gardena": t.gardena,
		"gardengrove": t.gardengrove, "glendale": t.glendale,
		"hawthorne": t.hawthorne, "highlandpark": t.highlandpark,
		"huntingtonbeach": t.huntingtonbeach, "lacanada": t.lacanada,
		"lakeviewterrace": t.lakeviewterrace, "lax": t.lax,
		"longbeach": t.longbeach, "losangeles": t.losangeles,
		"lynwood": t.lynwood, "montereypark": t.montereypark,
		"northlongbeach": t.northlongbeach, "orange": t.orange,
		"palosverdes": t.palosverdes, "panoramacity": t.panoramacity,
		"pasadena": t.pasadena, "pomona": t.pomona, "rosemead": t.rosemead,
		"sandimas": t.sandimas, "sanfernando": t.sanfernando,
		"sanpedro": t.sanpedro, "santaana": t.santaana,
		"santaclarita": t.santaclarita, "santafesprings": t.santafesprings,
		"santamonica": t.santamonica, "southelmonte": t.southelmonte,
		"studiocity": t.studiocity, "sunland": t.sunland,
		"torrance": t.torrance, "usc": t.usc, "vannuys": t.vannuys,
		"watts": t.watts, "westcovina": t.westcovina,
		"westminster": t.westminster, "yorbalinda": t.yorbalinda,
	}

	// source/destination pairs
	t.Pairs = [][]*Node{
		{t.claremont, t.santaana},
		{t.sanfernando, t.yorbalinda},
		{t.carson, t.pomona},
		{t.azusa, t.torrance},
		{t.claremont, t.westminster},
		{t.chinohills, t.vannuys},
		{t.culvercity, t.orange},
		{t.sanpedro, t.lacanada},
		{t.burbank, t.corona},
		{t.corona, t.panoramacity},
		{t.fountainvalley, t.studiocity},
		{t.elmonte, t.sanpedr},
	}

	anaheim.List = []*Node{buenapark, gardengrove}
	azusa.List = []*Node{sandimas, highlandpark, elmonte}
	bellflower.List = []*Node{compton, santafesprings, buenapark, cypress}
	beverlyhills.List = []*Node{usc, losangeles, studiocity, burbank, glendale, commerce, santafesprings, lynwood}
	brea.List = []*Node{diamondbar, fullerton}
	buenapark.List = []*Node{bellflower, santafesprings, anaheim, fullerton}
	burbank.List = []*Node{panoramacity, studiocity, glendale, losangeles, beverlyhills}
	calpoly.List = []*Node{westcovina, diamondbar, pomona, sandimas}
	carson.List = []*Node{torrance, dominguezhills, sanpedro, northlongbeach, westminster, longbeach}
	chinohills.List = []*Node{diamondbar}
	cityofindustry.List = []*Node{southelmonte, diamondbar}
	claremont.List = []*Node{sandimas}
	commerce.List = []*Node{montereypark, southelmonte, usc, lynwood, santafesprings, losangeles, beverlyhills}
	compton.List = []*Node{lynwood, gardena, northlongbeach, bellflower}
	corona.List = []*Node{yorbalinda}
	culvercity.List = []*Node{santamonica, usc, vannuys, lax}
	cypress.List = []*Node{gardengrove, bellflower, westminster, fountainvalley, huntingtonbeach}
	diamondbar.List = []*Node{calpoly, chinohills, cityofindustry, brea}
	dominguezhills.List = []*Node{gardena, carson}
	elmonte.List = []*Node{rosemead, westcovina, azusa, southelmonte}
	fountainvalley.List = []*Node{westminster, santaana, gardengrove, huntingtonbeach, cypress}
	fullerton.List = []*Node{buenapark, brea, yorbalinda, gardengrove}
	gardena.List = []*Node{watts, compton, hawthorne, dominguezhills}
	gardengrove.List = []*Node{cypress, westminster, orange, santaana, fullerton, anaheim, fountainvalley, huntingtonbeach}
	glendale.List = []*Node{azusa, pasadena, lacanada, burbank, losangeles, highlandpark, beverlyhills}
	hawthorne.List = []*Node{lax, gardena, torrance}
	highlandpark.List = []*Node{azusa, losangeles, glendale, lacanada}
	huntingtonbeach.List = []*Node{westminster, cypress, gardengrove, fountainvalley}
	lacanada.List = []*Node{sunland, glendale, highlandpark}
	lakeviewterrace.List = []*Node{santaclarita, sunland}
	lax.List = []*Node{culvercity, watts, hawthorne}
	longbeach.List = []*Node{northlongbeach, westminster, carson}
	losangeles.List = []*Node{burbank, beverlyhills, usc, highlandpark, glendale, montereypark, commerce, santafesprings, lynwood}
	lynwood.List = []*Node{watts, compton, commerce, santafesprings, usc, beverlyhills, losangeles}
	montereypark.List = []*Node{losangeles, commerce, rosemead}
	northlongbeach.List = []*Node{carson, compton, westminster, longbeach}
	orange.List = []*Node{yorbalinda, gardengrove, santaana}
	palosverdes.List = []*Node{torrance}
	panoramacity.List = []*Node{sanfernando, studiocity, burbank}
	pasadena.List = []*Node{highlandpark}
	pomona.List = []*Node{westcovina, calpoly, sandimas}
	rosemead.List = []*Node{montereypark, elmonte}
	sandimas.List = []*Node{azusa, claremont, westcovina, pomona, calpoly}
	sanfernando.List = []*Node{santaclarita, panoramacity, vannuys}
	sanpedro.List = []*Node{carson}
	santaana.List = []*Node{orange, gardengrove, fountainvalley}
	santaclarita.List = []*Node{sanfernando, lakeviewterrace}
	santafesprings.List = []*Node{southelmonte, buenapark, bellflower, commerce, losangeles, beverlyhills, usc, lynwood}
	santamonica.List = []*Node{culvercity}
	southelmonte.List = []*Node{commerce, santafesprings, cityofindustry, elmonte}
	studiocity.List = []*Node{vannuys, panoramacity, burbank, beverlyhills}
	sunland.List = []*Node{lacanada, lakeviewterrace}
	torrance.List = []*Node{hawthorne, carson, palosverdes}
	usc.List = []*Node{commerce, losangeles, beverlyhills, watts, culvercity, lynwood, santafesprings}
	vannuys.List = []*Node{sanfernando, studiocity, culvercity}
	watts.List = []*Node{usc, lax, lynwood, gardena}
	westcovina.List = []*Node{elmonte, sandimas, pomona, calpoly}
	westminster.List = []*Node{carson, longbeach, northlongbeach, cypress, huntingtonbeach, gardengrove, fountainvalley}
	yorbalinda.List = []*Node{fullerton, corona, orange}

	return t
}

// Point pulls the point of a node from the loc array.
func (t *Terrain) Point(id string) c.XY {
	return t.nodePoints[c.NameToIndex(id, nodeNames)]
}
