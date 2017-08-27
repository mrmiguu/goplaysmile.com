package terrain

import (
	"github.com/mrmiguu/gps_online/astar"
	"github.com/mrmiguu/gps_online/c"
	"github.com/mrmiguu/gps_online/node"
)

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
	yorbalinda *node.Node

	Diag  float64
	AStar *astar.Astar
	Pairs [][]*node.Node
	Map   map[string]*node.Node

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
	t.anaheim = node.New("anaheim", []int{5})
	t.azusa = node.New("azusa", []int{210, 605})
	t.bellflower = node.New("bellflower", []int{91, 605})
	t.beverlyhills = node.New("beverlyhills", []int{2, 170})
	t.brea = node.New("brea", []int{57})
	t.buenapark = node.New("buenapark", []int{5, 91})
	t.burbank = node.New("burbank", []int{5, 101})
	t.calpoly = node.New("calpoly", []int{57})
	t.carson = node.New("carson", []int{110, 405})
	t.chinohills = node.New("chinohills", []int{60})
	t.cityofindustry = node.New("cityofindustry", []int{60})
	t.claremont = node.New("claremont", []int{210})
	t.commerce = node.New("commerce", []int{60, 710})
	t.compton = node.New("compton", []int{91, 710})
	t.corona = node.New("corona", []int{91})
	t.culvercity = node.New("culvercity", []int{10, 405})
	t.cypress = node.New("cypress", []int{605})
	t.diamondbar = node.New("diamondbar", []int{57})
	t.dominguezhills = node.New("dominguezhills", []int{110})
	t.elmonte = node.New("elmonte", []int{10, 605})
	t.fountainvalley = node.New("fountainvalley", []int{405})
	t.fullerton = node.New("fullerton", []int{57, 91})
	t.gardena = node.New("gardena", []int{91, 110})
	t.gardengrove = node.New("gardengrove", []int{5, 22, 57})
	t.glendale = node.New("glendale", []int{2, 101})
	t.hawthorne = node.New("hawthorne", []int{91, 405})
	t.highlandpark = node.New("highlandpark", []int{110})
	t.huntingtonbeach = node.New("huntingtonbeach", []int{605})
	t.lacanada = node.New("lacanada", []int{2, 210})
	t.lakeviewterrace = node.New("lakeviewterrace", []int{210})
	t.lax = node.New("lax", []int{105, 405})
	t.longbeach = node.New("longbeach", []int{710})
	t.losangeles = node.New("losangeles", []int{5, 10, 110})
	t.lynwood = node.New("lynwood", []int{105, 710})
	t.montereypark = node.New("montereypark", []int{10, 710})
	t.northlongbeach = node.New("northlongbeach", []int{710})
	t.orange = node.New("orange", []int{22, 55})
	t.palosverdes = node.New("palosverdes", []int{})
	t.panoramacity = node.New("panoramacity", []int{5, 170})
	t.pasadena = node.New("pasadena", []int{110})
	t.pomona = node.New("pomona", []int{10})
	t.rosemead = node.New("rosemead", []int{10})
	t.sandimas = node.New("sandimas", []int{57, 210})
	t.sanfernando = node.New("sanfernando", []int{5, 405})
	t.sanpedro = node.New("sanpedro", []int{110})
	t.santaana = node.New("santaana", []int{5, 55, 405})
	t.santaclarita = node.New("santaclarita", []int{5, 210})
	t.santafesprings = node.New("santafesprings", []int{5, 605})
	t.santamonica = node.New("santamonica", []int{10})
	t.southelmonte = node.New("southelmonte", []int{60, 605})
	t.studiocity = node.New("studiocity", []int{101, 170})
	t.sunland = node.New("sunland", []int{210})
	t.torrance = node.New("torrance", []int{405})
	t.usc = node.New("usc", []int{10, 60, 110})
	t.vannuys = node.New("vannuys", []int{101, 405})
	t.watts = node.New("watts", []int{105, 110})
	t.westcovina = node.New("westcovina", []int{10})
	t.westminster = node.New("westminster", []int{22, 405})
	t.yorbalinda = node.New("yorbalinda", []int{55, 91})

	t.Map = map[string]*node.Node{
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
	t.Pairs = [][]*node.Node{
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

	anaheim.List = []*node.Node{buenapark, gardengrove}
	azusa.List = []*node.Node{sandimas, highlandpark, elmonte}
	bellflower.List = []*node.Node{compton, santafesprings, buenapark, cypress}
	beverlyhills.List = []*node.Node{usc, losangeles, studiocity, burbank, glendale, commerce, santafesprings, lynwood}
	brea.List = []*node.Node{diamondbar, fullerton}
	buenapark.List = []*node.Node{bellflower, santafesprings, anaheim, fullerton}
	burbank.List = []*node.Node{panoramacity, studiocity, glendale, losangeles, beverlyhills}
	calpoly.List = []*node.Node{westcovina, diamondbar, pomona, sandimas}
	carson.List = []*node.Node{torrance, dominguezhills, sanpedro, northlongbeach, westminster, longbeach}
	chinohills.List = []*node.Node{diamondbar}
	cityofindustry.List = []*node.Node{southelmonte, diamondbar}
	claremont.List = []*node.Node{sandimas}
	commerce.List = []*node.Node{montereypark, southelmonte, usc, lynwood, santafesprings, losangeles, beverlyhills}
	compton.List = []*node.Node{lynwood, gardena, northlongbeach, bellflower}
	corona.List = []*node.Node{yorbalinda}
	culvercity.List = []*node.Node{santamonica, usc, vannuys, lax}
	cypress.List = []*node.Node{gardengrove, bellflower, westminster, fountainvalley, huntingtonbeach}
	diamondbar.List = []*node.Node{calpoly, chinohills, cityofindustry, brea}
	dominguezhills.List = []*node.Node{gardena, carson}
	elmonte.List = []*node.Node{rosemead, westcovina, azusa, southelmonte}
	fountainvalley.List = []*node.Node{westminster, santaana, gardengrove, huntingtonbeach, cypress}
	fullerton.List = []*node.Node{buenapark, brea, yorbalinda, gardengrove}
	gardena.List = []*node.Node{watts, compton, hawthorne, dominguezhills}
	gardengrove.List = []*node.Node{cypress, westminster, orange, santaana, fullerton, anaheim, fountainvalley, huntingtonbeach}
	glendale.List = []*node.Node{azusa, pasadena, lacanada, burbank, losangeles, highlandpark, beverlyhills}
	hawthorne.List = []*node.Node{lax, gardena, torrance}
	highlandpark.List = []*node.Node{azusa, losangeles, glendale, lacanada}
	huntingtonbeach.List = []*node.Node{westminster, cypress, gardengrove, fountainvalley}
	lacanada.List = []*node.Node{sunland, glendale, highlandpark}
	lakeviewterrace.List = []*node.Node{santaclarita, sunland}
	lax.List = []*node.Node{culvercity, watts, hawthorne}
	longbeach.List = []*node.Node{northlongbeach, westminster, carson}
	losangeles.List = []*node.Node{burbank, beverlyhills, usc, highlandpark, glendale, montereypark, commerce, santafesprings, lynwood}
	lynwood.List = []*node.Node{watts, compton, commerce, santafesprings, usc, beverlyhills, losangeles}
	montereypark.List = []*node.Node{losangeles, commerce, rosemead}
	northlongbeach.List = []*node.Node{carson, compton, westminster, longbeach}
	orange.List = []*node.Node{yorbalinda, gardengrove, santaana}
	palosverdes.List = []*node.Node{torrance}
	panoramacity.List = []*node.Node{sanfernando, studiocity, burbank}
	pasadena.List = []*node.Node{highlandpark}
	pomona.List = []*node.Node{westcovina, calpoly, sandimas}
	rosemead.List = []*node.Node{montereypark, elmonte}
	sandimas.List = []*node.Node{azusa, claremont, westcovina, pomona, calpoly}
	sanfernando.List = []*node.Node{santaclarita, panoramacity, vannuys}
	sanpedro.List = []*node.Node{carson}
	santaana.List = []*node.Node{orange, gardengrove, fountainvalley}
	santaclarita.List = []*node.Node{sanfernando, lakeviewterrace}
	santafesprings.List = []*node.Node{southelmonte, buenapark, bellflower, commerce, losangeles, beverlyhills, usc, lynwood}
	santamonica.List = []*node.Node{culvercity}
	southelmonte.List = []*node.Node{commerce, santafesprings, cityofindustry, elmonte}
	studiocity.List = []*node.Node{vannuys, panoramacity, burbank, beverlyhills}
	sunland.List = []*node.Node{lacanada, lakeviewterrace}
	torrance.List = []*node.Node{hawthorne, carson, palosverdes}
	usc.List = []*node.Node{commerce, losangeles, beverlyhills, watts, culvercity, lynwood, santafesprings}
	vannuys.List = []*node.Node{sanfernando, studiocity, culvercity}
	watts.List = []*node.Node{usc, lax, lynwood, gardena}
	westcovina.List = []*node.Node{elmonte, sandimas, pomona, calpoly}
	westminster.List = []*node.Node{carson, longbeach, northlongbeach, cypress, huntingtonbeach, gardengrove, fountainvalley}
	yorbalinda.List = []*node.Node{fullerton, corona, orange}

	return t
}

// Point pulls the point of a node from the loc array.
func (t *Terrain) Point(id string) c.XY {
	return t.nodePoints[c.NameToIndex(id, nodeNames)]
}
