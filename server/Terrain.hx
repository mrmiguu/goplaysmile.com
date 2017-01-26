package;

using Consts;
using Math;
using Std;

class Terrain {
    var anaheim: Node; var azusa: Node; var bellflower: Node;
    var beverlyhills: Node; var brea: Node; var buenapark: Node;
    var burbank: Node; var calpoly: Node; var carson: Node;
    var chinohills: Node; var cityofindustry: Node; var claremont: Node;
    var commerce: Node; var compton: Node; var corona: Node;
    var culvercity: Node; var cypress: Node; var diamondbar: Node;
    var dominguezhills: Node; var elmonte: Node; var fountainvalley: Node;
    var fullerton: Node; var gardena: Node; var gardengrove: Node;
    var glendale: Node; var hawthorne: Node; var highlandpark: Node;
    var huntingtonbeach: Node; var lacanada: Node; var lakeviewterrace: Node;
    var lax: Node; var longbeach: Node; var losangeles: Node; var lynwood: Node;
    var montereypark: Node; var northlongbeach: Node; var orange: Node;
    var palosverdes: Node; var panoramacity: Node; var pasadena: Node;
    var pomona: Node; var rosemead: Node; var sandimas: Node;
    var sanfernando: Node; var sanpedro: Node; var santaana: Node;
    var santaclarita: Node; var santafesprings: Node; var santamonica: Node;
    var southelmonte: Node; var studiocity: Node; var sunland: Node;
    var torrance: Node; var usc: Node; var vannuys: Node; var watts: Node;
    var westcovina: Node; var westminster: Node; var yorbalinda: Node;

    public var diag: Float;
    public var aStar: AStar;
    
    public var pairs: Array<Array<Node>>;
    public var map: Map<String,Node>;

    public function new() {
        diag = 0.dist(0, 2142, 1210);

        // prepare the game-specific info for A*
        aStar = new AStar(this);

        // instanciate all nodes
        anaheim = new Node('anaheim', [5]);
        azusa = new Node('azusa', [210,605]);
        bellflower = new Node('bellflower', [91,605]);
        beverlyhills = new Node('beverlyhills', [2,170]);
        brea = new Node('brea', [57]);
        buenapark = new Node('buenapark', [5,91]);
        burbank = new Node('burbank', [5,101]);
        calpoly = new Node('calpoly', [57]);
        carson = new Node('carson', [110,405]);
        chinohills = new Node('chinohills', [60]);
        cityofindustry = new Node('cityofindustry', [60]);
        claremont = new Node('claremont', [210]);
        commerce = new Node('commerce', [60,710]);
        compton = new Node('compton', [91,710]);
        corona = new Node('corona', [91]);
        culvercity = new Node('culvercity', [10,405]);
        cypress = new Node('cypress', [605]);
        diamondbar = new Node('diamondbar', [57]);
        dominguezhills = new Node('dominguezhills', [110]);
        elmonte = new Node('elmonte', [10,605]);
        fountainvalley = new Node('fountainvalley', [405]);
        fullerton = new Node('fullerton', [57,91]);
        gardena = new Node('gardena', [91,110]);
        gardengrove = new Node('gardengrove', [5,22,57]);
        glendale = new Node('glendale', [2,101]);
        hawthorne = new Node('hawthorne', [91,405]);
        highlandpark = new Node('highlandpark', [110]);
        huntingtonbeach = new Node('huntingtonbeach', [605]);
        lacanada = new Node('lacanada', [2,210]);
        lakeviewterrace = new Node('lakeviewterrace', [210]);
        lax = new Node('lax', [105,405]);
        longbeach = new Node('longbeach', [710]);
        losangeles = new Node('losangeles', [5,10,110]);
        lynwood = new Node('lynwood', [105,710]);
        montereypark = new Node('montereypark', [10,710]);
        northlongbeach = new Node('northlongbeach', [710]);
        orange = new Node('orange', [22,55]);
        palosverdes = new Node('palosverdes', []);
        panoramacity = new Node('panoramacity', [5,170]);
        pasadena = new Node('pasadena', [110]);
        pomona = new Node('pomona', [10]);
        rosemead = new Node('rosemead', [10]);
        sandimas = new Node('sandimas', [57,210]);
        sanfernando = new Node('sanfernando', [5,405]);
        sanpedro = new Node('sanpedro', [110]);
        santaana = new Node('santaana', [5,55,405]);
        santaclarita = new Node('santaclarita', [5,210]);
        santafesprings = new Node('santafesprings', [5,605]);
        santamonica = new Node('santamonica', [10]);
        southelmonte = new Node('southelmonte', [60,605]);
        studiocity = new Node('studiocity', [101,170]);
        sunland = new Node('sunland', [210]);
        torrance = new Node('torrance', [405]);
        usc = new Node('usc', [10,60,110]);
        vannuys = new Node('vannuys', [101,405]);
        watts = new Node('watts', [105,110]);
        westcovina = new Node('westcovina', [10]);
        westminster = new Node('westminster', [22,405]);
        yorbalinda = new Node('yorbalinda', [55,91]);

        map = [
            'anaheim' => anaheim, 'azusa' => azusa, 'bellflower' => bellflower,
            'beverlyhills' => beverlyhills, 'brea' => brea,
            'buenapark' => buenapark, 'burbank' => burbank,
            'calpoly' => calpoly, 'carson' => carson,
            'chinohills' => chinohills, 'cityofindustry' => cityofindustry,
            'claremont' => claremont, 'commerce' => commerce,
            'compton' => compton, 'corona' => corona,
            'culvercity' => culvercity, 'cypress' => cypress,
            'diamondbar' => diamondbar, 'dominguezhills' => dominguezhills,
            'elmonte' => elmonte, 'fountainvalley' => fountainvalley,
            'fullerton' => fullerton, 'gardena' => gardena,
            'gardengrove' => gardengrove, 'glendale' => glendale,
            'hawthorne' => hawthorne, 'highlandpark' => highlandpark,
            'huntingtonbeach' => huntingtonbeach, 'lacanada' => lacanada,
            'lakeviewterrace' => lakeviewterrace, 'lax' => lax,
            'longbeach' => longbeach, 'losangeles' => losangeles,
            'lynwood' => lynwood, 'montereypark' => montereypark,
            'northlongbeach' => northlongbeach, 'orange' => orange,
            'palosverdes' => palosverdes, 'panoramacity' => panoramacity,
            'pasadena' => pasadena, 'pomona' => pomona, 'rosemead' => rosemead,
            'sandimas' => sandimas, 'sanfernando' => sanfernando,
            'sanpedro' => sanpedro, 'santaana' => santaana,
            'santaclarita' => santaclarita, 'santafesprings' => santafesprings,
            'santamonica' => santamonica, 'southelmonte' => southelmonte,
            'studiocity' => studiocity, 'sunland' => sunland,
            'torrance' => torrance, 'usc' => usc, 'vannuys' => vannuys,
            'watts' => watts, 'westcovina' => westcovina,
            'westminster' => westminster, 'yorbalinda' => yorbalinda
        ];

        // source/destination pairs
        pairs = [
            [claremont, santaana],
            [sanfernando, yorbalinda],
            [carson, pomona],
            [azusa, torrance],
            [claremont, westminster],
            [chinohills, vannuys],
            [culvercity, orange],
            [sanpedro, lacanada],
            [burbank, corona],
            [corona, panoramacity],
            [fountainvalley, studiocity],
            [elmonte, sanpedro]
        ];

        anaheim.list = [buenapark, gardengrove];
        azusa.list = [sandimas, highlandpark, elmonte];
        bellflower.list = [compton, santafesprings, buenapark, cypress];
        beverlyhills.list = [usc, losangeles, studiocity, burbank, glendale, commerce, santafesprings, lynwood];
        brea.list = [diamondbar, fullerton];
        buenapark.list = [bellflower, santafesprings, anaheim, fullerton];
        burbank.list = [panoramacity, studiocity, glendale, losangeles, beverlyhills];
        calpoly.list = [westcovina, diamondbar, pomona, sandimas];
        carson.list = [torrance, dominguezhills, sanpedro, northlongbeach, westminster, longbeach];
        chinohills.list = [diamondbar];
        cityofindustry.list = [southelmonte, diamondbar];
        claremont.list = [sandimas];
        commerce.list = [montereypark, southelmonte, usc, lynwood, santafesprings, losangeles, beverlyhills];
        compton.list = [lynwood, gardena, northlongbeach, bellflower];
        corona.list = [yorbalinda];
        culvercity.list = [santamonica, usc, vannuys, lax];
        cypress.list = [gardengrove, bellflower, westminster, fountainvalley, huntingtonbeach];
        diamondbar.list = [calpoly, chinohills, cityofindustry, brea];
        dominguezhills.list = [gardena, carson];
        elmonte.list = [rosemead, westcovina, azusa, southelmonte];
        fountainvalley.list = [westminster, santaana, gardengrove, huntingtonbeach, cypress];
        fullerton.list = [buenapark, brea, yorbalinda, gardengrove];
        gardena.list = [watts, compton, hawthorne, dominguezhills];
        gardengrove.list = [cypress, westminster, orange, santaana, fullerton, anaheim, fountainvalley, huntingtonbeach];
        glendale.list = [azusa, pasadena, lacanada, burbank, losangeles, highlandpark, beverlyhills];
        hawthorne.list = [lax, gardena, torrance];
        highlandpark.list = [azusa, losangeles, glendale, lacanada];
        huntingtonbeach.list = [westminster, cypress, gardengrove, fountainvalley];
        lacanada.list = [sunland, glendale, highlandpark];
        lakeviewterrace.list = [santaclarita, sunland];
        lax.list = [culvercity, watts, hawthorne];
        longbeach.list = [northlongbeach, westminster, carson];
        losangeles.list = [burbank, beverlyhills, usc, highlandpark, glendale, montereypark, commerce, santafesprings, lynwood];
        lynwood.list = [watts, compton, commerce, santafesprings, usc, beverlyhills, losangeles];
        montereypark.list = [losangeles, commerce, rosemead];
        northlongbeach.list = [carson, compton, westminster, longbeach];
        orange.list = [yorbalinda, gardengrove, santaana];
        palosverdes.list = [torrance];
        panoramacity.list = [sanfernando, studiocity, burbank];
        pasadena.list = [highlandpark];
        pomona.list = [westcovina, calpoly, sandimas];
        rosemead.list = [montereypark, elmonte];
        sandimas.list = [azusa, claremont, westcovina, pomona, calpoly];
        sanfernando.list = [santaclarita, panoramacity, vannuys];
        sanpedro.list = [carson];
        santaana.list = [orange, gardengrove, fountainvalley];
        santaclarita.list = [sanfernando, lakeviewterrace];
        santafesprings.list = [southelmonte, buenapark, bellflower, commerce, losangeles, beverlyhills, usc, lynwood];
        santamonica.list = [culvercity];
        southelmonte.list = [commerce, santafesprings, cityofindustry, elmonte];
        studiocity.list = [vannuys, panoramacity, burbank, beverlyhills];
        sunland.list = [lacanada, lakeviewterrace];
        torrance.list = [hawthorne, carson, palosverdes];
        usc.list = [commerce, losangeles, beverlyhills, watts, culvercity, lynwood, santafesprings];
        vannuys.list = [sanfernando, studiocity, culvercity];
        watts.list = [usc, lax, lynwood, gardena];
        westcovina.list = [elmonte, sandimas, pomona, calpoly];
        westminster.list = [carson, longbeach, northlongbeach, cypress, huntingtonbeach, gardengrove, fountainvalley];
        yorbalinda.list = [fullerton, corona, orange];
    }

    var nodePoints = 'etc/map.png'.bmp().locations();
    var nodeNames = [
        'santaclarita', 'sanfernando', 'lakeviewterrace', 'sunland', 'panoramacity', 
        'lacanada', 'pasadena', 'vannuys', 'burbank', 'studiocity', 
        'glendale', 'azusa', 'sandimas', 'claremont', 'highlandpark', 
        'losangeles', 'beverlyhills', 'rosemead', 'westcovina', 'pomona', 'elmonte', 
        'montereypark', 'calpoly', 'usc', 'commerce', 'southelmonte', 
        'culvercity', 'chinohills', 'santamonica', 'diamondbar', 
        'cityofindustry', 'santafesprings', 'lax', 'watts', 'lynwood', 'brea', 
        'corona', 'bellflower', 'compton', 'hawthorne', 'gardena', 'dominguezhills', 
        'northlongbeach', 'torrance', 'buenapark', 'carson', 'fullerton', 
        'yorbalinda', 'anaheim', 'cypress', 'westminster', 'palosverdes', 'gardengrove', 
        'orange', 'longbeach', 'sanpedro', 'huntingtonbeach', 'santaana', 
        'fountainvalley'
    ];

    /*
     * Pull the point of a node from the loc array
     */
    public function point(id: String) {
        return nodePoints[id.nameToIndex(nodeNames)];
    }
}