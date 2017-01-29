package;


import haxe.Resource;
import haxe.Timer;
import haxe.Unserializer;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.AssetType;
import lime.utils.Bytes;
import lime.utils.Log;

#if sys
import haxe.io.Path;
import sys.FileSystem;
#end


@:keep @:dox(hide) class DefaultAssetLibrary extends AssetLibrary {
	
	
	private var lastModified:Float;
	private var rootPath:String;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			
			rootPath = Reflect.field (ApplicationMain.config, "assetsPrefix");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		#if (openfl && !flash && !display)
		openfl.text.Font.registerFont (__ASSET__OPENFL__assets_etc_lucon_ttf);
		
		#end
		
		var useManifest = #if html5 true #else false #end;
		var id;
		id = "assets/cars/b.png";useManifest = true;
		id = "assets/cars/g.png";useManifest = true;
		id = "assets/cars/i.png";useManifest = true;
		id = "assets/cars/o.png";useManifest = true;
		id = "assets/cars/r.png";useManifest = true;
		id = "assets/cars/v.png";useManifest = true;
		id = "assets/cars/vroom0.flac";useManifest = true;
		id = "assets/cars/vroom0.ogg";useManifest = true;
		id = "assets/cars/vroom1.flac";useManifest = true;
		id = "assets/cars/vroom1.ogg";useManifest = true;
		id = "assets/cars/vroom2.flac";useManifest = true;
		id = "assets/cars/vroom2.ogg";useManifest = true;
		id = "assets/cars/y.png";useManifest = true;
		id = "assets/dests/arrival.flac";useManifest = true;
		id = "assets/dests/arrival.ogg";useManifest = true;
		id = "assets/dests/b.png";useManifest = true;
		id = "assets/dests/g.png";useManifest = true;
		id = "assets/dests/i.png";useManifest = true;
		id = "assets/dests/o.png";useManifest = true;
		id = "assets/dests/r.png";useManifest = true;
		id = "assets/dests/v.png";useManifest = true;
		id = "assets/dests/y.png";useManifest = true;
		id = "assets/die/dice.png";useManifest = true;
		id = "assets/die/dice_dark.png";useManifest = true;
		id = "assets/die/land0.flac";useManifest = true;
		id = "assets/die/land0.ogg";useManifest = true;
		id = "assets/die/land1.flac";useManifest = true;
		id = "assets/die/land1.ogg";useManifest = true;
		id = "assets/die/land2.flac";useManifest = true;
		id = "assets/die/land2.ogg";useManifest = true;
		id = "assets/die/lift0.flac";useManifest = true;
		id = "assets/die/lift0.ogg";useManifest = true;
		id = "assets/die/lift1.flac";useManifest = true;
		id = "assets/die/lift1.ogg";useManifest = true;
		id = "assets/die/lift2.flac";useManifest = true;
		id = "assets/die/lift2.ogg";useManifest = true;
		id = "assets/die/paperdoll.png";useManifest = true;
		id = "assets/die/paperdoll_bedlights.png";useManifest = true;
		id = "assets/die/paperdoll_gedlights.png";useManifest = true;
		id = "assets/die/paperdoll_headlights.png";useManifest = true;
		id = "assets/die/paperdoll_nedlights.png";useManifest = true;
		id = "assets/die/paperdoll_pedlights.png";useManifest = true;
		id = "assets/die/paperdoll_redlights.png";useManifest = true;
		id = "assets/die/paperdoll_wedlights.png";useManifest = true;
		id = "assets/etc/app.png";useManifest = true;
		id = "assets/etc/bg.png";useManifest = true;
		id = "assets/etc/bgm.ogg";useManifest = true;
		id = "assets/etc/bg_dark.png";useManifest = true;
		id = "assets/etc/card.png";useManifest = true;
		id = "assets/etc/err.flac";useManifest = true;
		id = "assets/etc/err.ogg";useManifest = true;
		id = "assets/etc/gps.png";useManifest = true;
		id = "assets/etc/icon.png";useManifest = true;
		id = "assets/etc/info.png";useManifest = true;
		id = "assets/etc/lucon.ttf";
		classTypes.set (id, __ASSET__assets_etc_lucon_ttf);
		types.set (id, AssetType.FONT);
		#if html5
		preload.set (id, true);
		#end id = "assets/etc/map.pdn";useManifest = true;
		id = "assets/etc/map.png";useManifest = true;
		id = "assets/etc/pop.flac";useManifest = true;
		id = "assets/etc/pop0.ogg";useManifest = true;
		id = "assets/etc/pop1.ogg";useManifest = true;
		id = "assets/etc/pop2.ogg";useManifest = true;
		id = "assets/etc/push.flac";useManifest = true;
		id = "assets/etc/push0.ogg";useManifest = true;
		id = "assets/etc/push1.ogg";useManifest = true;
		id = "assets/etc/push2.ogg";useManifest = true;
		id = "assets/etc/slide.ogg";useManifest = true;
		id = "assets/field/l.png";useManifest = true;
		id = "assets/field/m.png";useManifest = true;
		id = "assets/field/r.png";useManifest = true;
		id = "assets/keys/blank_down.pdn";useManifest = true;
		id = "assets/keys/blank_down.png";useManifest = true;
		id = "assets/keys/blank_up.pdn";useManifest = true;
		id = "assets/keys/blank_up.png";useManifest = true;
		id = "assets/key_undo/blank_down.pdn";useManifest = true;
		id = "assets/key_undo/blank_down.png";useManifest = true;
		id = "assets/key_undo/blank_up.pdn";useManifest = true;
		id = "assets/key_undo/blank_up.png";useManifest = true;
		id = "assets/login/login_down.png";useManifest = true;
		id = "assets/login/login_up.png";useManifest = true;
		id = "assets/lvl/exp.png";useManifest = true;
		id = "assets/lvl/fireworks.png";useManifest = true;
		id = "assets/lvl/up.ogg";useManifest = true;
		id = "assets/maps/2d_anaheim.png";useManifest = true;
		id = "assets/maps/2d_azusa.png";useManifest = true;
		id = "assets/maps/2d_bellflower.png";useManifest = true;
		id = "assets/maps/2d_beverlyhills.png";useManifest = true;
		id = "assets/maps/2d_brea.png";useManifest = true;
		id = "assets/maps/2d_buenapark.png";useManifest = true;
		id = "assets/maps/2d_burbank.png";useManifest = true;
		id = "assets/maps/2d_calpoly.png";useManifest = true;
		id = "assets/maps/2d_carson.png";useManifest = true;
		id = "assets/maps/2d_chinohills.png";useManifest = true;
		id = "assets/maps/2d_cityofindustry.png";useManifest = true;
		id = "assets/maps/2d_claremont.png";useManifest = true;
		id = "assets/maps/2d_commerce.png";useManifest = true;
		id = "assets/maps/2d_compton.png";useManifest = true;
		id = "assets/maps/2d_corona.png";useManifest = true;
		id = "assets/maps/2d_culvercity.png";useManifest = true;
		id = "assets/maps/2d_cypress.png";useManifest = true;
		id = "assets/maps/2d_diamondbar.png";useManifest = true;
		id = "assets/maps/2d_dominguezhills.png";useManifest = true;
		id = "assets/maps/2d_elmonte.png";useManifest = true;
		id = "assets/maps/2d_fountainvalley.png";useManifest = true;
		id = "assets/maps/2d_fullerton.png";useManifest = true;
		id = "assets/maps/2d_gardena.png";useManifest = true;
		id = "assets/maps/2d_gardengrove.png";useManifest = true;
		id = "assets/maps/2d_glendale.png";useManifest = true;
		id = "assets/maps/2d_hawthorne.png";useManifest = true;
		id = "assets/maps/2d_highlandpark.png";useManifest = true;
		id = "assets/maps/2d_huntingtonbeach.png";useManifest = true;
		id = "assets/maps/2d_lacanada.png";useManifest = true;
		id = "assets/maps/2d_lakeviewterrace.png";useManifest = true;
		id = "assets/maps/2d_lax.png";useManifest = true;
		id = "assets/maps/2d_longbeach.png";useManifest = true;
		id = "assets/maps/2d_losangeles.png";useManifest = true;
		id = "assets/maps/2d_lynwood.png";useManifest = true;
		id = "assets/maps/2d_montereypark.png";useManifest = true;
		id = "assets/maps/2d_northlongbeach.png";useManifest = true;
		id = "assets/maps/2d_orange.png";useManifest = true;
		id = "assets/maps/2d_palosverdes.png";useManifest = true;
		id = "assets/maps/2d_panoramacity.png";useManifest = true;
		id = "assets/maps/2d_pasadena.png";useManifest = true;
		id = "assets/maps/2d_pomona.png";useManifest = true;
		id = "assets/maps/2d_rosemead.png";useManifest = true;
		id = "assets/maps/2d_sandimas.png";useManifest = true;
		id = "assets/maps/2d_sanfernando.png";useManifest = true;
		id = "assets/maps/2d_sanpedro.png";useManifest = true;
		id = "assets/maps/2d_santaana.png";useManifest = true;
		id = "assets/maps/2d_santaclarita.png";useManifest = true;
		id = "assets/maps/2d_santafesprings.png";useManifest = true;
		id = "assets/maps/2d_santamonica.png";useManifest = true;
		id = "assets/maps/2d_southelmonte.png";useManifest = true;
		id = "assets/maps/2d_studiocity.png";useManifest = true;
		id = "assets/maps/2d_sunland.png";useManifest = true;
		id = "assets/maps/2d_torrance.png";useManifest = true;
		id = "assets/maps/2d_usc.png";useManifest = true;
		id = "assets/maps/2d_vannuys.png";useManifest = true;
		id = "assets/maps/2d_watts.png";useManifest = true;
		id = "assets/maps/2d_westcovina.png";useManifest = true;
		id = "assets/maps/2d_westminster.png";useManifest = true;
		id = "assets/maps/2d_yorbalinda.png";useManifest = true;
		id = "assets/maps/3d_anaheim.png";useManifest = true;
		id = "assets/maps/3d_anaheim_dark.png";useManifest = true;
		id = "assets/maps/3d_azusa.png";useManifest = true;
		id = "assets/maps/3d_azusa_dark.png";useManifest = true;
		id = "assets/maps/3d_bellflower.png";useManifest = true;
		id = "assets/maps/3d_bellflower_dark.png";useManifest = true;
		id = "assets/maps/3d_beverlyhills.png";useManifest = true;
		id = "assets/maps/3d_beverlyhills_dark.png";useManifest = true;
		id = "assets/maps/3d_brea.png";useManifest = true;
		id = "assets/maps/3d_brea_dark.png";useManifest = true;
		id = "assets/maps/3d_buenapark.png";useManifest = true;
		id = "assets/maps/3d_buenapark_dark.png";useManifest = true;
		id = "assets/maps/3d_burbank.png";useManifest = true;
		id = "assets/maps/3d_burbank_dark.png";useManifest = true;
		id = "assets/maps/3d_calpoly.png";useManifest = true;
		id = "assets/maps/3d_calpoly_dark.png";useManifest = true;
		id = "assets/maps/3d_carson.png";useManifest = true;
		id = "assets/maps/3d_carson_dark.png";useManifest = true;
		id = "assets/maps/3d_chinohills.png";useManifest = true;
		id = "assets/maps/3d_chinohills_dark.png";useManifest = true;
		id = "assets/maps/3d_cityofindustry.png";useManifest = true;
		id = "assets/maps/3d_cityofindustry_dark.png";useManifest = true;
		id = "assets/maps/3d_claremont.png";useManifest = true;
		id = "assets/maps/3d_claremont_dark.png";useManifest = true;
		id = "assets/maps/3d_commerce.png";useManifest = true;
		id = "assets/maps/3d_commerce_dark.png";useManifest = true;
		id = "assets/maps/3d_compton.png";useManifest = true;
		id = "assets/maps/3d_compton_dark.png";useManifest = true;
		id = "assets/maps/3d_corona.png";useManifest = true;
		id = "assets/maps/3d_corona_dark.png";useManifest = true;
		id = "assets/maps/3d_culvercity.png";useManifest = true;
		id = "assets/maps/3d_culvercity_dark.png";useManifest = true;
		id = "assets/maps/3d_cypress.png";useManifest = true;
		id = "assets/maps/3d_cypress_dark.png";useManifest = true;
		id = "assets/maps/3d_diamondbar.png";useManifest = true;
		id = "assets/maps/3d_diamondbar_dark.png";useManifest = true;
		id = "assets/maps/3d_dominguezhills.png";useManifest = true;
		id = "assets/maps/3d_dominguezhills_dark.png";useManifest = true;
		id = "assets/maps/3d_elmonte.png";useManifest = true;
		id = "assets/maps/3d_elmonte_dark.png";useManifest = true;
		id = "assets/maps/3d_fountainvalley.png";useManifest = true;
		id = "assets/maps/3d_fountainvalley_dark.png";useManifest = true;
		id = "assets/maps/3d_fullerton.png";useManifest = true;
		id = "assets/maps/3d_fullerton_dark.png";useManifest = true;
		id = "assets/maps/3d_gardena.png";useManifest = true;
		id = "assets/maps/3d_gardena_dark.png";useManifest = true;
		id = "assets/maps/3d_gardengrove.png";useManifest = true;
		id = "assets/maps/3d_gardengrove_dark.png";useManifest = true;
		id = "assets/maps/3d_glendale.png";useManifest = true;
		id = "assets/maps/3d_glendale_dark.png";useManifest = true;
		id = "assets/maps/3d_hawthorne.png";useManifest = true;
		id = "assets/maps/3d_hawthorne_dark.png";useManifest = true;
		id = "assets/maps/3d_highlandpark.png";useManifest = true;
		id = "assets/maps/3d_highlandpark_dark.png";useManifest = true;
		id = "assets/maps/3d_huntingtonbeach.png";useManifest = true;
		id = "assets/maps/3d_huntingtonbeach_dark.png";useManifest = true;
		id = "assets/maps/3d_lacanada.png";useManifest = true;
		id = "assets/maps/3d_lacanada_dark.png";useManifest = true;
		id = "assets/maps/3d_lakeviewterrace.png";useManifest = true;
		id = "assets/maps/3d_lakeviewterrace_dark.png";useManifest = true;
		id = "assets/maps/3d_lax.png";useManifest = true;
		id = "assets/maps/3d_lax_dark.png";useManifest = true;
		id = "assets/maps/3d_longbeach.png";useManifest = true;
		id = "assets/maps/3d_longbeach_dark.png";useManifest = true;
		id = "assets/maps/3d_losangeles.png";useManifest = true;
		id = "assets/maps/3d_losangeles_dark.png";useManifest = true;
		id = "assets/maps/3d_lynwood.png";useManifest = true;
		id = "assets/maps/3d_lynwood_dark.png";useManifest = true;
		id = "assets/maps/3d_montereypark.png";useManifest = true;
		id = "assets/maps/3d_montereypark_dark.png";useManifest = true;
		id = "assets/maps/3d_northlongbeach.png";useManifest = true;
		id = "assets/maps/3d_northlongbeach_dark.png";useManifest = true;
		id = "assets/maps/3d_orange.png";useManifest = true;
		id = "assets/maps/3d_orange_dark.png";useManifest = true;
		id = "assets/maps/3d_palosverdes.png";useManifest = true;
		id = "assets/maps/3d_palosverdes_dark.png";useManifest = true;
		id = "assets/maps/3d_panoramacity.png";useManifest = true;
		id = "assets/maps/3d_panoramacity_dark.png";useManifest = true;
		id = "assets/maps/3d_pasadena.png";useManifest = true;
		id = "assets/maps/3d_pasadena_dark.png";useManifest = true;
		id = "assets/maps/3d_pomona.png";useManifest = true;
		id = "assets/maps/3d_pomona_dark.png";useManifest = true;
		id = "assets/maps/3d_rosemead.png";useManifest = true;
		id = "assets/maps/3d_rosemead_dark.png";useManifest = true;
		id = "assets/maps/3d_sandimas.png";useManifest = true;
		id = "assets/maps/3d_sandimas_dark.png";useManifest = true;
		id = "assets/maps/3d_sanfernando.png";useManifest = true;
		id = "assets/maps/3d_sanfernando_dark.png";useManifest = true;
		id = "assets/maps/3d_sanpedro.png";useManifest = true;
		id = "assets/maps/3d_sanpedro_dark.png";useManifest = true;
		id = "assets/maps/3d_santaana.png";useManifest = true;
		id = "assets/maps/3d_santaana_dark.png";useManifest = true;
		id = "assets/maps/3d_santaclarita.png";useManifest = true;
		id = "assets/maps/3d_santaclarita_dark.png";useManifest = true;
		id = "assets/maps/3d_santafesprings.png";useManifest = true;
		id = "assets/maps/3d_santafesprings_dark.png";useManifest = true;
		id = "assets/maps/3d_santamonica.png";useManifest = true;
		id = "assets/maps/3d_santamonica_dark.png";useManifest = true;
		id = "assets/maps/3d_southelmonte.png";useManifest = true;
		id = "assets/maps/3d_southelmonte_dark.png";useManifest = true;
		id = "assets/maps/3d_studiocity.png";useManifest = true;
		id = "assets/maps/3d_studiocity_dark.png";useManifest = true;
		id = "assets/maps/3d_sunland.png";useManifest = true;
		id = "assets/maps/3d_sunland_dark.png";useManifest = true;
		id = "assets/maps/3d_torrance.png";useManifest = true;
		id = "assets/maps/3d_torrance_dark.png";useManifest = true;
		id = "assets/maps/3d_usc.png";useManifest = true;
		id = "assets/maps/3d_usc_dark.png";useManifest = true;
		id = "assets/maps/3d_vannuys.png";useManifest = true;
		id = "assets/maps/3d_vannuys_dark.png";useManifest = true;
		id = "assets/maps/3d_watts.png";useManifest = true;
		id = "assets/maps/3d_watts_dark.png";useManifest = true;
		id = "assets/maps/3d_westcovina.png";useManifest = true;
		id = "assets/maps/3d_westcovina_dark.png";useManifest = true;
		id = "assets/maps/3d_westminster.png";useManifest = true;
		id = "assets/maps/3d_westminster_dark.png";useManifest = true;
		id = "assets/maps/3d_yorbalinda.png";useManifest = true;
		id = "assets/maps/3d_yorbalinda_dark.png";useManifest = true;
		id = "assets/roller/c1.png";useManifest = true;
		id = "assets/roller/card.png";useManifest = true;
		id = "assets/roller/hwy_template.png";useManifest = true;
		id = "assets/roller/overlay.png";useManifest = true;
		id = "assets/roller/pick.flac";useManifest = true;
		id = "assets/roller/pick.ogg";useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			#if sys
			if (false && Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath (rootPath + "manifest");
				
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
			#end
			
		}
		
	}
	
	
	private function loadManifest ():Void {
		
		var bytes = Resource.getBytes ("__ASSET_MANIFEST__");
		var manifest;
		
		if (bytes != null) {
			
			var manifest = AssetManifest.fromBytes (bytes);
			manifest.basePath = rootPath;
			__fromManifest (manifest);
			
		} else {
			
			// TODO: Make asynchronous
			
			var manifest = AssetManifest.fromFile (rootPath + "manifest");
			
			if (manifest != null) {
				
				manifest.basePath = rootPath;
				__fromManifest (manifest);
				
			} else {
				
				Log.warn ("Could not load asset manifest (bytes was null)");
				
			}
			
			//AssetManifest.loadFromFile (rootPath + "manifest").onComplete (function (manifest:AssetManifest) {
				//
				//if (manifest != null) {
					//
					//__fromManifest (manifest);
					//
				//} else {
					//
					//Log.warn ("Could not load asset manifest (bytes was null)");
					//
				//}
				//
				//__fromManifest (manifest);
				//
			//}).onError (function (e:Dynamic) {
				//
				//Log.warn ('Could not load asset manifest (${e})');
				//
			//});
			
		}
		
	}
	
	
}


#if !display
#if flash












































































































































































































































































#elseif (desktop || cpp)



@:keep #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font { public function new () { __fontPath = #if (ios || tvos) "assets/" + #end "assets/etc/lucon.ttf"; name = "Lucida Console"; super (); }}


#else

@:keep #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/etc/lucon.ttf"; #end name = "Lucida Console"; super (); }}


#end

#if (openfl && !flash)

@:keep #if display private #end class __ASSET__OPENFL__assets_etc_lucon_ttf extends openfl.text.Font { public function new () { #if !html5 __fontPath = #if (ios || tvos) "assets/" + #end "assets/etc/lucon.ttf"; #end name = "Lucida Console"; super (); }}


#end
#end