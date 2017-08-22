package;

import openfl.display.Sprite;
import openfl.display.Tile;
import openfl.display.Tilemap;
import openfl.display.Tileset;
import openfl.text.TextField;

using C;
using Math;
using Std;

class Terrain extends Sprite {
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

    var pairs: Array<Array<Node>>;
    public var map: Map<String,Node>;
    var last: Node;
    var g: Globals;

    public function new(g: Globals) {
        super();

        this.g = g;

        // instanciate all nodes
        anaheim = new Node('anaheim', this);
        azusa = new Node('azusa', this);
        bellflower = new Node('bellflower', this);
        beverlyhills = new Node('beverlyhills', this);
        brea = new Node('brea', this);
        buenapark = new Node('buenapark', this);
        burbank = new Node('burbank', this);
        calpoly = new Node('calpoly', this);
        carson = new Node('carson', this);
        chinohills = new Node('chinohills', this);
        cityofindustry = new Node('cityofindustry', this);
        claremont = new Node('claremont', this);
        commerce = new Node('commerce', this);
        compton = new Node('compton', this);
        corona = new Node('corona', this);
        culvercity = new Node('culvercity', this);
        cypress = new Node('cypress', this);
        diamondbar = new Node('diamondbar', this);
        dominguezhills = new Node('dominguezhills', this);
        elmonte = new Node('elmonte', this);
        fountainvalley = new Node('fountainvalley', this);
        fullerton = new Node('fullerton', this);
        gardena = new Node('gardena', this);
        gardengrove = new Node('gardengrove', this);
        glendale = new Node('glendale', this);
        hawthorne = new Node('hawthorne', this);
        highlandpark = new Node('highlandpark', this);
        huntingtonbeach = new Node('huntingtonbeach', this);
        lacanada = new Node('lacanada', this);
        lakeviewterrace = new Node('lakeviewterrace', this);
        lax = new Node('lax', this);
        longbeach = new Node('longbeach', this);
        losangeles = new Node('losangeles', this);
        lynwood = new Node('lynwood', this);
        montereypark = new Node('montereypark', this);
        northlongbeach = new Node('northlongbeach', this);
        orange = new Node('orange', this);
        palosverdes = new Node('palosverdes', this);
        panoramacity = new Node('panoramacity', this);
        pasadena = new Node('pasadena', this);
        pomona = new Node('pomona', this);
        rosemead = new Node('rosemead', this);
        sandimas = new Node('sandimas', this);
        sanfernando = new Node('sanfernando', this);
        sanpedro = new Node('sanpedro', this);
        santaana = new Node('santaana', this);
        santaclarita = new Node('santaclarita', this);
        santafesprings = new Node('santafesprings', this);
        santamonica = new Node('santamonica', this);
        southelmonte = new Node('southelmonte', this);
        studiocity = new Node('studiocity', this);
        sunland = new Node('sunland', this);
        torrance = new Node('torrance', this);
        usc = new Node('usc', this);
        vannuys = new Node('vannuys', this);
        watts = new Node('watts', this);
        westcovina = new Node('westcovina', this);
        westminster = new Node('westminster', this);
        yorbalinda = new Node('yorbalinda', this);

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
    }

    public function reset() {
        g.radio.push(g.toFrom);
        // g.toFromText.text = 'From: ${g.player().getLoc()}\nTo: ${g.player().getDest()}';
        g.hideOverlay();
    }
}