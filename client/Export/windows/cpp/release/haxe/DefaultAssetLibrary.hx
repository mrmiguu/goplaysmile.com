package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.net.HTTPRequest;
import lime.system.CFFI;
import lime.text.Font;
import lime.utils.Bytes;
import lime.utils.Log;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import haxe.io.Path;
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map<String, Dynamic> ();
	public var path (default, null) = new Map<String, String> ();
	public var type (default, null) = new Map<String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	#if (windows && !cs)
	private var rootPath = FileSystem.absolutePath (Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
	#else
	private var rootPath = "";
	#end
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_etc_lucon_ttf);
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("assets/cars/b.png", "assets/cars/b.png");
		type.set ("assets/cars/b.png", AssetType.IMAGE);
		path.set ("assets/cars/g.png", "assets/cars/g.png");
		type.set ("assets/cars/g.png", AssetType.IMAGE);
		path.set ("assets/cars/i.png", "assets/cars/i.png");
		type.set ("assets/cars/i.png", AssetType.IMAGE);
		path.set ("assets/cars/o.png", "assets/cars/o.png");
		type.set ("assets/cars/o.png", AssetType.IMAGE);
		path.set ("assets/cars/r.png", "assets/cars/r.png");
		type.set ("assets/cars/r.png", AssetType.IMAGE);
		path.set ("assets/cars/v.png", "assets/cars/v.png");
		type.set ("assets/cars/v.png", AssetType.IMAGE);
		path.set ("assets/cars/vroom0.flac", "assets/cars/vroom0.flac");
		type.set ("assets/cars/vroom0.flac", AssetType.BINARY);
		path.set ("assets/cars/vroom0.ogg", "assets/cars/vroom0.ogg");
		type.set ("assets/cars/vroom0.ogg", AssetType.SOUND);
		path.set ("assets/cars/vroom1.flac", "assets/cars/vroom1.flac");
		type.set ("assets/cars/vroom1.flac", AssetType.BINARY);
		path.set ("assets/cars/vroom1.ogg", "assets/cars/vroom1.ogg");
		type.set ("assets/cars/vroom1.ogg", AssetType.SOUND);
		path.set ("assets/cars/vroom2.flac", "assets/cars/vroom2.flac");
		type.set ("assets/cars/vroom2.flac", AssetType.BINARY);
		path.set ("assets/cars/vroom2.ogg", "assets/cars/vroom2.ogg");
		type.set ("assets/cars/vroom2.ogg", AssetType.SOUND);
		path.set ("assets/cars/y.png", "assets/cars/y.png");
		type.set ("assets/cars/y.png", AssetType.IMAGE);
		path.set ("assets/dests/arrival.flac", "assets/dests/arrival.flac");
		type.set ("assets/dests/arrival.flac", AssetType.BINARY);
		path.set ("assets/dests/arrival.ogg", "assets/dests/arrival.ogg");
		type.set ("assets/dests/arrival.ogg", AssetType.SOUND);
		path.set ("assets/dests/b.png", "assets/dests/b.png");
		type.set ("assets/dests/b.png", AssetType.IMAGE);
		path.set ("assets/dests/g.png", "assets/dests/g.png");
		type.set ("assets/dests/g.png", AssetType.IMAGE);
		path.set ("assets/dests/i.png", "assets/dests/i.png");
		type.set ("assets/dests/i.png", AssetType.IMAGE);
		path.set ("assets/dests/o.png", "assets/dests/o.png");
		type.set ("assets/dests/o.png", AssetType.IMAGE);
		path.set ("assets/dests/r.png", "assets/dests/r.png");
		type.set ("assets/dests/r.png", AssetType.IMAGE);
		path.set ("assets/dests/v.png", "assets/dests/v.png");
		type.set ("assets/dests/v.png", AssetType.IMAGE);
		path.set ("assets/dests/y.png", "assets/dests/y.png");
		type.set ("assets/dests/y.png", AssetType.IMAGE);
		path.set ("assets/die/dice.png", "assets/die/dice.png");
		type.set ("assets/die/dice.png", AssetType.IMAGE);
		path.set ("assets/die/dice_dark.png", "assets/die/dice_dark.png");
		type.set ("assets/die/dice_dark.png", AssetType.IMAGE);
		path.set ("assets/die/land0.flac", "assets/die/land0.flac");
		type.set ("assets/die/land0.flac", AssetType.BINARY);
		path.set ("assets/die/land0.ogg", "assets/die/land0.ogg");
		type.set ("assets/die/land0.ogg", AssetType.SOUND);
		path.set ("assets/die/land1.flac", "assets/die/land1.flac");
		type.set ("assets/die/land1.flac", AssetType.BINARY);
		path.set ("assets/die/land1.ogg", "assets/die/land1.ogg");
		type.set ("assets/die/land1.ogg", AssetType.SOUND);
		path.set ("assets/die/land2.flac", "assets/die/land2.flac");
		type.set ("assets/die/land2.flac", AssetType.BINARY);
		path.set ("assets/die/land2.ogg", "assets/die/land2.ogg");
		type.set ("assets/die/land2.ogg", AssetType.SOUND);
		path.set ("assets/die/lift0.flac", "assets/die/lift0.flac");
		type.set ("assets/die/lift0.flac", AssetType.BINARY);
		path.set ("assets/die/lift0.ogg", "assets/die/lift0.ogg");
		type.set ("assets/die/lift0.ogg", AssetType.SOUND);
		path.set ("assets/die/lift1.flac", "assets/die/lift1.flac");
		type.set ("assets/die/lift1.flac", AssetType.BINARY);
		path.set ("assets/die/lift1.ogg", "assets/die/lift1.ogg");
		type.set ("assets/die/lift1.ogg", AssetType.SOUND);
		path.set ("assets/die/lift2.flac", "assets/die/lift2.flac");
		type.set ("assets/die/lift2.flac", AssetType.BINARY);
		path.set ("assets/die/lift2.ogg", "assets/die/lift2.ogg");
		type.set ("assets/die/lift2.ogg", AssetType.SOUND);
		path.set ("assets/die/paperdoll.png", "assets/die/paperdoll.png");
		type.set ("assets/die/paperdoll.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_bedlights.png", "assets/die/paperdoll_bedlights.png");
		type.set ("assets/die/paperdoll_bedlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_gedlights.png", "assets/die/paperdoll_gedlights.png");
		type.set ("assets/die/paperdoll_gedlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_headlights.png", "assets/die/paperdoll_headlights.png");
		type.set ("assets/die/paperdoll_headlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_nedlights.png", "assets/die/paperdoll_nedlights.png");
		type.set ("assets/die/paperdoll_nedlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_pedlights.png", "assets/die/paperdoll_pedlights.png");
		type.set ("assets/die/paperdoll_pedlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_redlights.png", "assets/die/paperdoll_redlights.png");
		type.set ("assets/die/paperdoll_redlights.png", AssetType.IMAGE);
		path.set ("assets/die/paperdoll_wedlights.png", "assets/die/paperdoll_wedlights.png");
		type.set ("assets/die/paperdoll_wedlights.png", AssetType.IMAGE);
		path.set ("assets/etc/app.png", "assets/etc/app.png");
		type.set ("assets/etc/app.png", AssetType.IMAGE);
		path.set ("assets/etc/bg.png", "assets/etc/bg.png");
		type.set ("assets/etc/bg.png", AssetType.IMAGE);
		path.set ("assets/etc/bgm.ogg", "assets/etc/bgm.ogg");
		type.set ("assets/etc/bgm.ogg", AssetType.MUSIC);
		path.set ("assets/etc/bg_dark.png", "assets/etc/bg_dark.png");
		type.set ("assets/etc/bg_dark.png", AssetType.IMAGE);
		path.set ("assets/etc/card.png", "assets/etc/card.png");
		type.set ("assets/etc/card.png", AssetType.IMAGE);
		path.set ("assets/etc/err.flac", "assets/etc/err.flac");
		type.set ("assets/etc/err.flac", AssetType.BINARY);
		path.set ("assets/etc/err.ogg", "assets/etc/err.ogg");
		type.set ("assets/etc/err.ogg", AssetType.SOUND);
		path.set ("assets/etc/gps.png", "assets/etc/gps.png");
		type.set ("assets/etc/gps.png", AssetType.IMAGE);
		path.set ("assets/etc/icon.png", "assets/etc/icon.png");
		type.set ("assets/etc/icon.png", AssetType.IMAGE);
		path.set ("assets/etc/info.png", "assets/etc/info.png");
		type.set ("assets/etc/info.png", AssetType.IMAGE);
		path.set ("assets/etc/lucon.ttf", "assets/etc/lucon.ttf");
		type.set ("assets/etc/lucon.ttf", AssetType.FONT);
		path.set ("assets/etc/map.pdn", "assets/etc/map.pdn");
		type.set ("assets/etc/map.pdn", AssetType.TEXT);
		path.set ("assets/etc/map.png", "assets/etc/map.png");
		type.set ("assets/etc/map.png", AssetType.IMAGE);
		path.set ("assets/etc/pop.flac", "assets/etc/pop.flac");
		type.set ("assets/etc/pop.flac", AssetType.BINARY);
		path.set ("assets/etc/pop0.ogg", "assets/etc/pop0.ogg");
		type.set ("assets/etc/pop0.ogg", AssetType.SOUND);
		path.set ("assets/etc/pop1.ogg", "assets/etc/pop1.ogg");
		type.set ("assets/etc/pop1.ogg", AssetType.SOUND);
		path.set ("assets/etc/pop2.ogg", "assets/etc/pop2.ogg");
		type.set ("assets/etc/pop2.ogg", AssetType.SOUND);
		path.set ("assets/etc/push.flac", "assets/etc/push.flac");
		type.set ("assets/etc/push.flac", AssetType.BINARY);
		path.set ("assets/etc/push0.ogg", "assets/etc/push0.ogg");
		type.set ("assets/etc/push0.ogg", AssetType.SOUND);
		path.set ("assets/etc/push1.ogg", "assets/etc/push1.ogg");
		type.set ("assets/etc/push1.ogg", AssetType.SOUND);
		path.set ("assets/etc/push2.ogg", "assets/etc/push2.ogg");
		type.set ("assets/etc/push2.ogg", AssetType.SOUND);
		path.set ("assets/etc/slide.ogg", "assets/etc/slide.ogg");
		type.set ("assets/etc/slide.ogg", AssetType.SOUND);
		path.set ("assets/field/l.png", "assets/field/l.png");
		type.set ("assets/field/l.png", AssetType.IMAGE);
		path.set ("assets/field/m.png", "assets/field/m.png");
		type.set ("assets/field/m.png", AssetType.IMAGE);
		path.set ("assets/field/r.png", "assets/field/r.png");
		type.set ("assets/field/r.png", AssetType.IMAGE);
		path.set ("assets/keys/blank_down.pdn", "assets/keys/blank_down.pdn");
		type.set ("assets/keys/blank_down.pdn", AssetType.TEXT);
		path.set ("assets/keys/blank_down.png", "assets/keys/blank_down.png");
		type.set ("assets/keys/blank_down.png", AssetType.IMAGE);
		path.set ("assets/keys/blank_up.pdn", "assets/keys/blank_up.pdn");
		type.set ("assets/keys/blank_up.pdn", AssetType.TEXT);
		path.set ("assets/keys/blank_up.png", "assets/keys/blank_up.png");
		type.set ("assets/keys/blank_up.png", AssetType.IMAGE);
		path.set ("assets/key_undo/blank_down.pdn", "assets/key_undo/blank_down.pdn");
		type.set ("assets/key_undo/blank_down.pdn", AssetType.TEXT);
		path.set ("assets/key_undo/blank_down.png", "assets/key_undo/blank_down.png");
		type.set ("assets/key_undo/blank_down.png", AssetType.IMAGE);
		path.set ("assets/key_undo/blank_up.pdn", "assets/key_undo/blank_up.pdn");
		type.set ("assets/key_undo/blank_up.pdn", AssetType.TEXT);
		path.set ("assets/key_undo/blank_up.png", "assets/key_undo/blank_up.png");
		type.set ("assets/key_undo/blank_up.png", AssetType.IMAGE);
		path.set ("assets/login/login_down.png", "assets/login/login_down.png");
		type.set ("assets/login/login_down.png", AssetType.IMAGE);
		path.set ("assets/login/login_up.png", "assets/login/login_up.png");
		type.set ("assets/login/login_up.png", AssetType.IMAGE);
		path.set ("assets/lvl/exp.png", "assets/lvl/exp.png");
		type.set ("assets/lvl/exp.png", AssetType.IMAGE);
		path.set ("assets/lvl/fireworks.png", "assets/lvl/fireworks.png");
		type.set ("assets/lvl/fireworks.png", AssetType.IMAGE);
		path.set ("assets/lvl/up.ogg", "assets/lvl/up.ogg");
		type.set ("assets/lvl/up.ogg", AssetType.SOUND);
		path.set ("assets/maps/2d_anaheim.png", "assets/maps/2d_anaheim.png");
		type.set ("assets/maps/2d_anaheim.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_azusa.png", "assets/maps/2d_azusa.png");
		type.set ("assets/maps/2d_azusa.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_bellflower.png", "assets/maps/2d_bellflower.png");
		type.set ("assets/maps/2d_bellflower.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_beverlyhills.png", "assets/maps/2d_beverlyhills.png");
		type.set ("assets/maps/2d_beverlyhills.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_brea.png", "assets/maps/2d_brea.png");
		type.set ("assets/maps/2d_brea.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_buenapark.png", "assets/maps/2d_buenapark.png");
		type.set ("assets/maps/2d_buenapark.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_burbank.png", "assets/maps/2d_burbank.png");
		type.set ("assets/maps/2d_burbank.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_calpoly.png", "assets/maps/2d_calpoly.png");
		type.set ("assets/maps/2d_calpoly.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_carson.png", "assets/maps/2d_carson.png");
		type.set ("assets/maps/2d_carson.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_chinohills.png", "assets/maps/2d_chinohills.png");
		type.set ("assets/maps/2d_chinohills.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_cityofindustry.png", "assets/maps/2d_cityofindustry.png");
		type.set ("assets/maps/2d_cityofindustry.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_claremont.png", "assets/maps/2d_claremont.png");
		type.set ("assets/maps/2d_claremont.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_commerce.png", "assets/maps/2d_commerce.png");
		type.set ("assets/maps/2d_commerce.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_compton.png", "assets/maps/2d_compton.png");
		type.set ("assets/maps/2d_compton.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_corona.png", "assets/maps/2d_corona.png");
		type.set ("assets/maps/2d_corona.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_culvercity.png", "assets/maps/2d_culvercity.png");
		type.set ("assets/maps/2d_culvercity.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_cypress.png", "assets/maps/2d_cypress.png");
		type.set ("assets/maps/2d_cypress.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_diamondbar.png", "assets/maps/2d_diamondbar.png");
		type.set ("assets/maps/2d_diamondbar.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_dominguezhills.png", "assets/maps/2d_dominguezhills.png");
		type.set ("assets/maps/2d_dominguezhills.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_elmonte.png", "assets/maps/2d_elmonte.png");
		type.set ("assets/maps/2d_elmonte.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_fountainvalley.png", "assets/maps/2d_fountainvalley.png");
		type.set ("assets/maps/2d_fountainvalley.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_fullerton.png", "assets/maps/2d_fullerton.png");
		type.set ("assets/maps/2d_fullerton.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_gardena.png", "assets/maps/2d_gardena.png");
		type.set ("assets/maps/2d_gardena.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_gardengrove.png", "assets/maps/2d_gardengrove.png");
		type.set ("assets/maps/2d_gardengrove.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_glendale.png", "assets/maps/2d_glendale.png");
		type.set ("assets/maps/2d_glendale.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_hawthorne.png", "assets/maps/2d_hawthorne.png");
		type.set ("assets/maps/2d_hawthorne.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_highlandpark.png", "assets/maps/2d_highlandpark.png");
		type.set ("assets/maps/2d_highlandpark.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_huntingtonbeach.png", "assets/maps/2d_huntingtonbeach.png");
		type.set ("assets/maps/2d_huntingtonbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_lacanada.png", "assets/maps/2d_lacanada.png");
		type.set ("assets/maps/2d_lacanada.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_lakeviewterrace.png", "assets/maps/2d_lakeviewterrace.png");
		type.set ("assets/maps/2d_lakeviewterrace.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_lax.png", "assets/maps/2d_lax.png");
		type.set ("assets/maps/2d_lax.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_longbeach.png", "assets/maps/2d_longbeach.png");
		type.set ("assets/maps/2d_longbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_losangeles.png", "assets/maps/2d_losangeles.png");
		type.set ("assets/maps/2d_losangeles.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_lynwood.png", "assets/maps/2d_lynwood.png");
		type.set ("assets/maps/2d_lynwood.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_montereypark.png", "assets/maps/2d_montereypark.png");
		type.set ("assets/maps/2d_montereypark.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_northlongbeach.png", "assets/maps/2d_northlongbeach.png");
		type.set ("assets/maps/2d_northlongbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_orange.png", "assets/maps/2d_orange.png");
		type.set ("assets/maps/2d_orange.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_palosverdes.png", "assets/maps/2d_palosverdes.png");
		type.set ("assets/maps/2d_palosverdes.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_panoramacity.png", "assets/maps/2d_panoramacity.png");
		type.set ("assets/maps/2d_panoramacity.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_pasadena.png", "assets/maps/2d_pasadena.png");
		type.set ("assets/maps/2d_pasadena.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_pomona.png", "assets/maps/2d_pomona.png");
		type.set ("assets/maps/2d_pomona.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_rosemead.png", "assets/maps/2d_rosemead.png");
		type.set ("assets/maps/2d_rosemead.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_sandimas.png", "assets/maps/2d_sandimas.png");
		type.set ("assets/maps/2d_sandimas.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_sanfernando.png", "assets/maps/2d_sanfernando.png");
		type.set ("assets/maps/2d_sanfernando.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_sanpedro.png", "assets/maps/2d_sanpedro.png");
		type.set ("assets/maps/2d_sanpedro.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_santaana.png", "assets/maps/2d_santaana.png");
		type.set ("assets/maps/2d_santaana.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_santaclarita.png", "assets/maps/2d_santaclarita.png");
		type.set ("assets/maps/2d_santaclarita.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_santafesprings.png", "assets/maps/2d_santafesprings.png");
		type.set ("assets/maps/2d_santafesprings.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_santamonica.png", "assets/maps/2d_santamonica.png");
		type.set ("assets/maps/2d_santamonica.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_southelmonte.png", "assets/maps/2d_southelmonte.png");
		type.set ("assets/maps/2d_southelmonte.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_studiocity.png", "assets/maps/2d_studiocity.png");
		type.set ("assets/maps/2d_studiocity.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_sunland.png", "assets/maps/2d_sunland.png");
		type.set ("assets/maps/2d_sunland.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_torrance.png", "assets/maps/2d_torrance.png");
		type.set ("assets/maps/2d_torrance.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_usc.png", "assets/maps/2d_usc.png");
		type.set ("assets/maps/2d_usc.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_vannuys.png", "assets/maps/2d_vannuys.png");
		type.set ("assets/maps/2d_vannuys.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_watts.png", "assets/maps/2d_watts.png");
		type.set ("assets/maps/2d_watts.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_westcovina.png", "assets/maps/2d_westcovina.png");
		type.set ("assets/maps/2d_westcovina.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_westminster.png", "assets/maps/2d_westminster.png");
		type.set ("assets/maps/2d_westminster.png", AssetType.IMAGE);
		path.set ("assets/maps/2d_yorbalinda.png", "assets/maps/2d_yorbalinda.png");
		type.set ("assets/maps/2d_yorbalinda.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_anaheim.png", "assets/maps/3d_anaheim.png");
		type.set ("assets/maps/3d_anaheim.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_anaheim_dark.png", "assets/maps/3d_anaheim_dark.png");
		type.set ("assets/maps/3d_anaheim_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_azusa.png", "assets/maps/3d_azusa.png");
		type.set ("assets/maps/3d_azusa.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_azusa_dark.png", "assets/maps/3d_azusa_dark.png");
		type.set ("assets/maps/3d_azusa_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_bellflower.png", "assets/maps/3d_bellflower.png");
		type.set ("assets/maps/3d_bellflower.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_bellflower_dark.png", "assets/maps/3d_bellflower_dark.png");
		type.set ("assets/maps/3d_bellflower_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_beverlyhills.png", "assets/maps/3d_beverlyhills.png");
		type.set ("assets/maps/3d_beverlyhills.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_beverlyhills_dark.png", "assets/maps/3d_beverlyhills_dark.png");
		type.set ("assets/maps/3d_beverlyhills_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_brea.png", "assets/maps/3d_brea.png");
		type.set ("assets/maps/3d_brea.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_brea_dark.png", "assets/maps/3d_brea_dark.png");
		type.set ("assets/maps/3d_brea_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_buenapark.png", "assets/maps/3d_buenapark.png");
		type.set ("assets/maps/3d_buenapark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_buenapark_dark.png", "assets/maps/3d_buenapark_dark.png");
		type.set ("assets/maps/3d_buenapark_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_burbank.png", "assets/maps/3d_burbank.png");
		type.set ("assets/maps/3d_burbank.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_burbank_dark.png", "assets/maps/3d_burbank_dark.png");
		type.set ("assets/maps/3d_burbank_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_calpoly.png", "assets/maps/3d_calpoly.png");
		type.set ("assets/maps/3d_calpoly.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_calpoly_dark.png", "assets/maps/3d_calpoly_dark.png");
		type.set ("assets/maps/3d_calpoly_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_carson.png", "assets/maps/3d_carson.png");
		type.set ("assets/maps/3d_carson.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_carson_dark.png", "assets/maps/3d_carson_dark.png");
		type.set ("assets/maps/3d_carson_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_chinohills.png", "assets/maps/3d_chinohills.png");
		type.set ("assets/maps/3d_chinohills.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_chinohills_dark.png", "assets/maps/3d_chinohills_dark.png");
		type.set ("assets/maps/3d_chinohills_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_cityofindustry.png", "assets/maps/3d_cityofindustry.png");
		type.set ("assets/maps/3d_cityofindustry.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_cityofindustry_dark.png", "assets/maps/3d_cityofindustry_dark.png");
		type.set ("assets/maps/3d_cityofindustry_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_claremont.png", "assets/maps/3d_claremont.png");
		type.set ("assets/maps/3d_claremont.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_claremont_dark.png", "assets/maps/3d_claremont_dark.png");
		type.set ("assets/maps/3d_claremont_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_commerce.png", "assets/maps/3d_commerce.png");
		type.set ("assets/maps/3d_commerce.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_commerce_dark.png", "assets/maps/3d_commerce_dark.png");
		type.set ("assets/maps/3d_commerce_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_compton.png", "assets/maps/3d_compton.png");
		type.set ("assets/maps/3d_compton.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_compton_dark.png", "assets/maps/3d_compton_dark.png");
		type.set ("assets/maps/3d_compton_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_corona.png", "assets/maps/3d_corona.png");
		type.set ("assets/maps/3d_corona.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_corona_dark.png", "assets/maps/3d_corona_dark.png");
		type.set ("assets/maps/3d_corona_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_culvercity.png", "assets/maps/3d_culvercity.png");
		type.set ("assets/maps/3d_culvercity.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_culvercity_dark.png", "assets/maps/3d_culvercity_dark.png");
		type.set ("assets/maps/3d_culvercity_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_cypress.png", "assets/maps/3d_cypress.png");
		type.set ("assets/maps/3d_cypress.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_cypress_dark.png", "assets/maps/3d_cypress_dark.png");
		type.set ("assets/maps/3d_cypress_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_diamondbar.png", "assets/maps/3d_diamondbar.png");
		type.set ("assets/maps/3d_diamondbar.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_diamondbar_dark.png", "assets/maps/3d_diamondbar_dark.png");
		type.set ("assets/maps/3d_diamondbar_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_dominguezhills.png", "assets/maps/3d_dominguezhills.png");
		type.set ("assets/maps/3d_dominguezhills.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_dominguezhills_dark.png", "assets/maps/3d_dominguezhills_dark.png");
		type.set ("assets/maps/3d_dominguezhills_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_elmonte.png", "assets/maps/3d_elmonte.png");
		type.set ("assets/maps/3d_elmonte.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_elmonte_dark.png", "assets/maps/3d_elmonte_dark.png");
		type.set ("assets/maps/3d_elmonte_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_fountainvalley.png", "assets/maps/3d_fountainvalley.png");
		type.set ("assets/maps/3d_fountainvalley.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_fountainvalley_dark.png", "assets/maps/3d_fountainvalley_dark.png");
		type.set ("assets/maps/3d_fountainvalley_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_fullerton.png", "assets/maps/3d_fullerton.png");
		type.set ("assets/maps/3d_fullerton.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_fullerton_dark.png", "assets/maps/3d_fullerton_dark.png");
		type.set ("assets/maps/3d_fullerton_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_gardena.png", "assets/maps/3d_gardena.png");
		type.set ("assets/maps/3d_gardena.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_gardena_dark.png", "assets/maps/3d_gardena_dark.png");
		type.set ("assets/maps/3d_gardena_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_gardengrove.png", "assets/maps/3d_gardengrove.png");
		type.set ("assets/maps/3d_gardengrove.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_gardengrove_dark.png", "assets/maps/3d_gardengrove_dark.png");
		type.set ("assets/maps/3d_gardengrove_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_glendale.png", "assets/maps/3d_glendale.png");
		type.set ("assets/maps/3d_glendale.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_glendale_dark.png", "assets/maps/3d_glendale_dark.png");
		type.set ("assets/maps/3d_glendale_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_hawthorne.png", "assets/maps/3d_hawthorne.png");
		type.set ("assets/maps/3d_hawthorne.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_hawthorne_dark.png", "assets/maps/3d_hawthorne_dark.png");
		type.set ("assets/maps/3d_hawthorne_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_highlandpark.png", "assets/maps/3d_highlandpark.png");
		type.set ("assets/maps/3d_highlandpark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_highlandpark_dark.png", "assets/maps/3d_highlandpark_dark.png");
		type.set ("assets/maps/3d_highlandpark_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_huntingtonbeach.png", "assets/maps/3d_huntingtonbeach.png");
		type.set ("assets/maps/3d_huntingtonbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_huntingtonbeach_dark.png", "assets/maps/3d_huntingtonbeach_dark.png");
		type.set ("assets/maps/3d_huntingtonbeach_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lacanada.png", "assets/maps/3d_lacanada.png");
		type.set ("assets/maps/3d_lacanada.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lacanada_dark.png", "assets/maps/3d_lacanada_dark.png");
		type.set ("assets/maps/3d_lacanada_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lakeviewterrace.png", "assets/maps/3d_lakeviewterrace.png");
		type.set ("assets/maps/3d_lakeviewterrace.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lakeviewterrace_dark.png", "assets/maps/3d_lakeviewterrace_dark.png");
		type.set ("assets/maps/3d_lakeviewterrace_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lax.png", "assets/maps/3d_lax.png");
		type.set ("assets/maps/3d_lax.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lax_dark.png", "assets/maps/3d_lax_dark.png");
		type.set ("assets/maps/3d_lax_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_longbeach.png", "assets/maps/3d_longbeach.png");
		type.set ("assets/maps/3d_longbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_longbeach_dark.png", "assets/maps/3d_longbeach_dark.png");
		type.set ("assets/maps/3d_longbeach_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_losangeles.png", "assets/maps/3d_losangeles.png");
		type.set ("assets/maps/3d_losangeles.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_losangeles_dark.png", "assets/maps/3d_losangeles_dark.png");
		type.set ("assets/maps/3d_losangeles_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lynwood.png", "assets/maps/3d_lynwood.png");
		type.set ("assets/maps/3d_lynwood.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_lynwood_dark.png", "assets/maps/3d_lynwood_dark.png");
		type.set ("assets/maps/3d_lynwood_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_montereypark.png", "assets/maps/3d_montereypark.png");
		type.set ("assets/maps/3d_montereypark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_montereypark_dark.png", "assets/maps/3d_montereypark_dark.png");
		type.set ("assets/maps/3d_montereypark_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_northlongbeach.png", "assets/maps/3d_northlongbeach.png");
		type.set ("assets/maps/3d_northlongbeach.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_northlongbeach_dark.png", "assets/maps/3d_northlongbeach_dark.png");
		type.set ("assets/maps/3d_northlongbeach_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_orange.png", "assets/maps/3d_orange.png");
		type.set ("assets/maps/3d_orange.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_orange_dark.png", "assets/maps/3d_orange_dark.png");
		type.set ("assets/maps/3d_orange_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_palosverdes.png", "assets/maps/3d_palosverdes.png");
		type.set ("assets/maps/3d_palosverdes.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_palosverdes_dark.png", "assets/maps/3d_palosverdes_dark.png");
		type.set ("assets/maps/3d_palosverdes_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_panoramacity.png", "assets/maps/3d_panoramacity.png");
		type.set ("assets/maps/3d_panoramacity.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_panoramacity_dark.png", "assets/maps/3d_panoramacity_dark.png");
		type.set ("assets/maps/3d_panoramacity_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_pasadena.png", "assets/maps/3d_pasadena.png");
		type.set ("assets/maps/3d_pasadena.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_pasadena_dark.png", "assets/maps/3d_pasadena_dark.png");
		type.set ("assets/maps/3d_pasadena_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_pomona.png", "assets/maps/3d_pomona.png");
		type.set ("assets/maps/3d_pomona.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_pomona_dark.png", "assets/maps/3d_pomona_dark.png");
		type.set ("assets/maps/3d_pomona_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_rosemead.png", "assets/maps/3d_rosemead.png");
		type.set ("assets/maps/3d_rosemead.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_rosemead_dark.png", "assets/maps/3d_rosemead_dark.png");
		type.set ("assets/maps/3d_rosemead_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sandimas.png", "assets/maps/3d_sandimas.png");
		type.set ("assets/maps/3d_sandimas.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sandimas_dark.png", "assets/maps/3d_sandimas_dark.png");
		type.set ("assets/maps/3d_sandimas_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sanfernando.png", "assets/maps/3d_sanfernando.png");
		type.set ("assets/maps/3d_sanfernando.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sanfernando_dark.png", "assets/maps/3d_sanfernando_dark.png");
		type.set ("assets/maps/3d_sanfernando_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sanpedro.png", "assets/maps/3d_sanpedro.png");
		type.set ("assets/maps/3d_sanpedro.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sanpedro_dark.png", "assets/maps/3d_sanpedro_dark.png");
		type.set ("assets/maps/3d_sanpedro_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santaana.png", "assets/maps/3d_santaana.png");
		type.set ("assets/maps/3d_santaana.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santaana_dark.png", "assets/maps/3d_santaana_dark.png");
		type.set ("assets/maps/3d_santaana_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santaclarita.png", "assets/maps/3d_santaclarita.png");
		type.set ("assets/maps/3d_santaclarita.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santaclarita_dark.png", "assets/maps/3d_santaclarita_dark.png");
		type.set ("assets/maps/3d_santaclarita_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santafesprings.png", "assets/maps/3d_santafesprings.png");
		type.set ("assets/maps/3d_santafesprings.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santafesprings_dark.png", "assets/maps/3d_santafesprings_dark.png");
		type.set ("assets/maps/3d_santafesprings_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santamonica.png", "assets/maps/3d_santamonica.png");
		type.set ("assets/maps/3d_santamonica.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_santamonica_dark.png", "assets/maps/3d_santamonica_dark.png");
		type.set ("assets/maps/3d_santamonica_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_southelmonte.png", "assets/maps/3d_southelmonte.png");
		type.set ("assets/maps/3d_southelmonte.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_southelmonte_dark.png", "assets/maps/3d_southelmonte_dark.png");
		type.set ("assets/maps/3d_southelmonte_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_studiocity.png", "assets/maps/3d_studiocity.png");
		type.set ("assets/maps/3d_studiocity.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_studiocity_dark.png", "assets/maps/3d_studiocity_dark.png");
		type.set ("assets/maps/3d_studiocity_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sunland.png", "assets/maps/3d_sunland.png");
		type.set ("assets/maps/3d_sunland.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_sunland_dark.png", "assets/maps/3d_sunland_dark.png");
		type.set ("assets/maps/3d_sunland_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_torrance.png", "assets/maps/3d_torrance.png");
		type.set ("assets/maps/3d_torrance.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_torrance_dark.png", "assets/maps/3d_torrance_dark.png");
		type.set ("assets/maps/3d_torrance_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_usc.png", "assets/maps/3d_usc.png");
		type.set ("assets/maps/3d_usc.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_usc_dark.png", "assets/maps/3d_usc_dark.png");
		type.set ("assets/maps/3d_usc_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_vannuys.png", "assets/maps/3d_vannuys.png");
		type.set ("assets/maps/3d_vannuys.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_vannuys_dark.png", "assets/maps/3d_vannuys_dark.png");
		type.set ("assets/maps/3d_vannuys_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_watts.png", "assets/maps/3d_watts.png");
		type.set ("assets/maps/3d_watts.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_watts_dark.png", "assets/maps/3d_watts_dark.png");
		type.set ("assets/maps/3d_watts_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_westcovina.png", "assets/maps/3d_westcovina.png");
		type.set ("assets/maps/3d_westcovina.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_westcovina_dark.png", "assets/maps/3d_westcovina_dark.png");
		type.set ("assets/maps/3d_westcovina_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_westminster.png", "assets/maps/3d_westminster.png");
		type.set ("assets/maps/3d_westminster.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_westminster_dark.png", "assets/maps/3d_westminster_dark.png");
		type.set ("assets/maps/3d_westminster_dark.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_yorbalinda.png", "assets/maps/3d_yorbalinda.png");
		type.set ("assets/maps/3d_yorbalinda.png", AssetType.IMAGE);
		path.set ("assets/maps/3d_yorbalinda_dark.png", "assets/maps/3d_yorbalinda_dark.png");
		type.set ("assets/maps/3d_yorbalinda_dark.png", AssetType.IMAGE);
		path.set ("assets/roller/c1.png", "assets/roller/c1.png");
		type.set ("assets/roller/c1.png", AssetType.IMAGE);
		path.set ("assets/roller/card.png", "assets/roller/card.png");
		type.set ("assets/roller/card.png", AssetType.IMAGE);
		path.set ("assets/roller/hwy_template.png", "assets/roller/hwy_template.png");
		type.set ("assets/roller/hwy_template.png", AssetType.IMAGE);
		path.set ("assets/roller/overlay.png", "assets/roller/overlay.png");
		type.set ("assets/roller/overlay.png", AssetType.IMAGE);
		path.set ("assets/roller/pick.flac", "assets/roller/pick.flac");
		type.set ("assets/roller/pick.flac", AssetType.BINARY);
		path.set ("assets/roller/pick.ogg", "assets/roller/pick.ogg");
		type.set ("assets/roller/pick.ogg", AssetType.SOUND);
		
		
		#elseif html5
		
		var id;
		id = "assets/cars/b.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/g.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/i.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/o.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/r.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/v.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/cars/vroom0.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/cars/vroom0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/cars/vroom1.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/cars/vroom1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/cars/vroom2.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/cars/vroom2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/cars/y.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/arrival.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/dests/arrival.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/dests/b.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/g.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/i.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/o.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/r.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/v.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/dests/y.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/dice.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/dice_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/land0.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/land0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/land1.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/land1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/land2.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/land2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/lift0.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/lift0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/lift1.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/lift1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/lift2.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/die/lift2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/die/paperdoll.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_bedlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_gedlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_headlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_nedlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_pedlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_redlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/die/paperdoll_wedlights.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/app.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/bg.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/bgm.ogg";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/etc/bg_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/card.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/err.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/etc/err.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/gps.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/icon.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/info.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/lucon.ttf";
		path.set (id, id);
		type.set (id, AssetType.FONT);
		id = "assets/etc/map.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/etc/map.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/etc/pop.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/etc/pop0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/pop1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/pop2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/push.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/etc/push0.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/push1.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/push2.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/etc/slide.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/field/l.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/field/m.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/field/r.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/keys/blank_down.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/keys/blank_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/keys/blank_up.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/keys/blank_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/key_undo/blank_down.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/key_undo/blank_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/key_undo/blank_up.pdn";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/key_undo/blank_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/login/login_down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/login/login_up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/lvl/exp.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/lvl/fireworks.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/lvl/up.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/maps/2d_anaheim.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_azusa.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_bellflower.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_beverlyhills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_brea.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_buenapark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_burbank.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_calpoly.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_carson.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_chinohills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_cityofindustry.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_claremont.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_commerce.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_compton.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_corona.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_culvercity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_cypress.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_diamondbar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_dominguezhills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_elmonte.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_fountainvalley.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_fullerton.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_gardena.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_gardengrove.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_glendale.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_hawthorne.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_highlandpark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_huntingtonbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_lacanada.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_lakeviewterrace.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_lax.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_longbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_losangeles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_lynwood.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_montereypark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_northlongbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_orange.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_palosverdes.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_panoramacity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_pasadena.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_pomona.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_rosemead.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_sandimas.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_sanfernando.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_sanpedro.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_santaana.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_santaclarita.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_santafesprings.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_santamonica.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_southelmonte.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_studiocity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_sunland.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_torrance.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_usc.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_vannuys.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_watts.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_westcovina.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_westminster.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/2d_yorbalinda.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_anaheim.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_anaheim_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_azusa.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_azusa_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_bellflower.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_bellflower_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_beverlyhills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_beverlyhills_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_brea.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_brea_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_buenapark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_buenapark_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_burbank.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_burbank_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_calpoly.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_calpoly_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_carson.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_carson_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_chinohills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_chinohills_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_cityofindustry.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_cityofindustry_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_claremont.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_claremont_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_commerce.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_commerce_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_compton.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_compton_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_corona.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_corona_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_culvercity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_culvercity_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_cypress.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_cypress_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_diamondbar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_diamondbar_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_dominguezhills.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_dominguezhills_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_elmonte.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_elmonte_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_fountainvalley.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_fountainvalley_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_fullerton.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_fullerton_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_gardena.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_gardena_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_gardengrove.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_gardengrove_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_glendale.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_glendale_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_hawthorne.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_hawthorne_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_highlandpark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_highlandpark_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_huntingtonbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_huntingtonbeach_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lacanada.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lacanada_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lakeviewterrace.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lakeviewterrace_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lax.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lax_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_longbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_longbeach_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_losangeles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_losangeles_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lynwood.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_lynwood_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_montereypark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_montereypark_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_northlongbeach.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_northlongbeach_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_orange.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_orange_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_palosverdes.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_palosverdes_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_panoramacity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_panoramacity_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_pasadena.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_pasadena_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_pomona.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_pomona_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_rosemead.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_rosemead_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sandimas.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sandimas_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sanfernando.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sanfernando_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sanpedro.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sanpedro_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santaana.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santaana_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santaclarita.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santaclarita_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santafesprings.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santafesprings_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santamonica.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_santamonica_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_southelmonte.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_southelmonte_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_studiocity.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_studiocity_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sunland.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_sunland_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_torrance.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_torrance_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_usc.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_usc_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_vannuys.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_vannuys_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_watts.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_watts_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_westcovina.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_westcovina_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_westminster.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_westminster_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_yorbalinda.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/maps/3d_yorbalinda_dark.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/roller/c1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/roller/card.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/roller/hwy_template.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/roller/overlay.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/roller/pick.flac";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/roller/pick.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		className.set ("assets/etc/lucon.ttf", __ASSET__assets_etc_lucon_ttf);
		type.set ("assets/etc/lucon.ttf", AssetType.FONT);
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				
				if (FileSystem.exists (path)) {
					
					lastModified = FileSystem.stat (path).mtime.getTime ();
					
					timer = new Timer (2000);
					timer.run = function () {
						
						var modified = FileSystem.stat (path).mtime.getTime ();
						
						if (modified > lastModified) {
							
							lastModified = modified;
							loadManifest ();
							
							onChange.dispatch ();
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == TEXT && assetType == BINARY) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return Preloader.audioBuffers.get (path.get (id));
		
		#else
		
		if (className.exists (id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), Bytes));
		else return AudioBuffer.fromFile (rootPath + path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):Bytes {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return Bytes.ofData (cast (Type.createInstance (className.get (id), []), flash.utils.ByteArray));
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return Bytes.ofData (bitmapData.getPixels (bitmapData.rect));
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), Bytes);
		
		#elseif html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes:Bytes = cast loader.responseData;
		
		if (bytes != null) {
			
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Bytes);
		else return Bytes.readFile (rootPath + path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (rootPath + path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (rootPath + path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var bytes:Bytes = cast loader.responseData;
		
		if (bytes != null) {
			
			return bytes.getString (0, bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.getString (0, bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		#if flash
		
		return className.exists (id);
		
		#elseif html5
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		return switch (requestedType) {
			
			case FONT:
				
				className.exists (id);
			
			case IMAGE:
				
				Preloader.images.exists (path.get (id));
			
			case MUSIC, SOUND:
				
				Preloader.audioBuffers.exists (path.get (id));
			
			default:
				
				Preloader.loaders.exists (path.get (id));
			
		}
		
		#else
		
		return true;
		
		#end
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		if (Assets.isLocal (id)) {
			
			promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id), true));
			
		} else if (path.exists (id)) {
			
			promise.completeWith (AudioBuffer.loadFromFile (path.get (id)));
			
		} else {
			
			promise.error (null);
			
		}
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<Bytes> {
		
		var promise = new Promise<Bytes> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = flash.net.URLLoaderDataFormat.BINARY;
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = Bytes.ofData (loader.data);
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				promise.progress (event.bytesLoaded, event.bytesTotal);
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest<Bytes> ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Bytes> (function () return getBytes (id), true));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (loader.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				promise.progress (event.bytesLoaded, event.bytesTotal);
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id) + "?" + Assets.cache.version;
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id), true));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = Bytes.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = Bytes.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = Bytes.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = Bytes.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = Bytes.readFile ("assets/manifest");
			#else
			var bytes = Bytes.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				if (bytes.length > 0) {
					
					var data = bytes.getString (0, bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				Log.warn ("Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			Log.warn ('Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var request = new HTTPRequest<String> ();
			promise.completeWith (request.load (path.get (id) + "?" + Assets.cache.version));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.getString (0, bytes.length);
					
				}
				
			}, true);
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash












































































































































































































































































#elseif html5























































@:keep #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font { public function new () { super (); name = "Lucida Console"; } } 




















































































































































































































#else

@:keep #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "assets/etc/lucon.ttf"; name = "Lucida Console"; super (); }}


#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)
@:keep #if display private #end class __ASSET__OPENFL__assets_etc_lucon_ttf extends openfl.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "assets/etc/lucon.ttf"; name = "Lucida Console"; super (); }}

#end

#end
