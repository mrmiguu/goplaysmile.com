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
		id = "assets/cars/b.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_b_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/g.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_g_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/i.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_i_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/o.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_o_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/r.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_r_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/v.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_v_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/cars/vroom0.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom0_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/cars/vroom0.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom0_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/cars/vroom1.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom1_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/cars/vroom1.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom1_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/cars/vroom2.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom2_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/cars/vroom2.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_vroom2_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/cars/y.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_cars_y_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/arrival.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_arrival_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/dests/arrival.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_arrival_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/dests/b.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_b_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/g.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_g_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/i.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_i_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/o.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_o_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/r.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_r_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/v.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_v_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/dests/y.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_dests_y_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/dice.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_dice_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/dice_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_dice_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/land0.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land0_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/land0.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land0_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/land1.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land1_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/land1.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land1_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/land2.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land2_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/land2.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_land2_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/lift0.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift0_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/lift0.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift0_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/lift1.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift1_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/lift1.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift1_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/lift2.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift2_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/die/lift2.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_lift2_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/die/paperdoll.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_bedlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_bedlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_gedlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_gedlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_headlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_headlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_nedlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_nedlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_pedlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_pedlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_redlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_redlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/die/paperdoll_wedlights.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_die_paperdoll_wedlights_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/app.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_app_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/bg.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_bg_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/bgm.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_bgm_ogg);
		types.set (id, AssetType.MUSIC);
		#end
		id = "assets/etc/bg_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_bg_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/card.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_card_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/err.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_err_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/etc/err.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_err_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/gps.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_gps_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/icon.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_icon_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/info.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_info_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/lucon.ttf";
		classTypes.set (id, __ASSET__assets_etc_lucon_ttf);
		types.set (id, AssetType.FONT);
		#if html5
		preload.set (id, true);
		#end id = "assets/etc/map.pdn";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_map_pdn);
		types.set (id, AssetType.TEXT);
		#end
		id = "assets/etc/map.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_map_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/etc/pop.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_pop_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/etc/pop0.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_pop0_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/pop1.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_pop1_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/pop2.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_pop2_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/push.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_push_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/etc/push0.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_push0_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/push1.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_push1_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/push2.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_push2_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/etc/slide.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_etc_slide_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/field/l.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_field_l_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/field/m.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_field_m_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/field/r.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_field_r_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/keys/blank_down.pdn";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_keys_blank_down_pdn);
		types.set (id, AssetType.TEXT);
		#end
		id = "assets/keys/blank_down.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_keys_blank_down_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/keys/blank_up.pdn";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_keys_blank_up_pdn);
		types.set (id, AssetType.TEXT);
		#end
		id = "assets/keys/blank_up.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_keys_blank_up_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/key_undo/blank_down.pdn";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_key_undo_blank_down_pdn);
		types.set (id, AssetType.TEXT);
		#end
		id = "assets/key_undo/blank_down.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_key_undo_blank_down_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/key_undo/blank_up.pdn";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_key_undo_blank_up_pdn);
		types.set (id, AssetType.TEXT);
		#end
		id = "assets/key_undo/blank_up.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_key_undo_blank_up_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/login/login_down.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_login_login_down_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/login/login_up.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_login_login_up_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/login/pass.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_login_pass_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/lvl/exp.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_lvl_exp_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/lvl/fireworks.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_lvl_fireworks_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/lvl/up.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_lvl_up_ogg);
		types.set (id, AssetType.SOUND);
		#end
		id = "assets/maps/2d_anaheim.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_anaheim_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_azusa.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_azusa_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_bellflower.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_bellflower_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_beverlyhills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_beverlyhills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_brea.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_brea_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_buenapark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_buenapark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_burbank.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_burbank_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_calpoly.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_calpoly_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_carson.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_carson_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_chinohills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_chinohills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_cityofindustry.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_cityofindustry_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_claremont.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_claremont_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_commerce.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_commerce_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_compton.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_compton_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_corona.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_corona_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_culvercity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_culvercity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_cypress.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_cypress_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_diamondbar.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_diamondbar_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_dominguezhills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_dominguezhills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_elmonte.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_elmonte_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_fountainvalley.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_fountainvalley_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_fullerton.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_fullerton_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_gardena.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_gardena_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_gardengrove.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_gardengrove_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_glendale.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_glendale_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_hawthorne.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_hawthorne_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_highlandpark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_highlandpark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_huntingtonbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_huntingtonbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_lacanada.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_lacanada_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_lakeviewterrace.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_lakeviewterrace_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_lax.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_lax_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_longbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_longbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_losangeles.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_losangeles_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_lynwood.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_lynwood_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_montereypark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_montereypark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_northlongbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_northlongbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_orange.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_orange_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_palosverdes.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_palosverdes_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_panoramacity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_panoramacity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_pasadena.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_pasadena_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_pomona.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_pomona_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_rosemead.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_rosemead_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_sandimas.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_sandimas_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_sanfernando.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_sanfernando_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_sanpedro.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_sanpedro_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_santaana.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_santaana_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_santaclarita.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_santaclarita_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_santafesprings.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_santafesprings_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_santamonica.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_santamonica_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_southelmonte.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_southelmonte_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_studiocity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_studiocity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_sunland.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_sunland_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_torrance.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_torrance_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_usc.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_usc_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_vannuys.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_vannuys_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_watts.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_watts_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_westcovina.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_westcovina_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_westminster.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_westminster_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/2d_yorbalinda.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_2d_yorbalinda_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_anaheim.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_anaheim_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_anaheim_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_anaheim_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_azusa.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_azusa_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_azusa_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_azusa_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_bellflower.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_bellflower_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_bellflower_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_bellflower_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_beverlyhills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_beverlyhills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_beverlyhills_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_beverlyhills_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_brea.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_brea_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_brea_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_brea_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_buenapark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_buenapark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_buenapark_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_buenapark_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_burbank.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_burbank_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_burbank_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_burbank_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_calpoly.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_calpoly_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_calpoly_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_calpoly_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_carson.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_carson_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_carson_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_carson_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_chinohills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_chinohills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_chinohills_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_chinohills_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_cityofindustry.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_cityofindustry_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_cityofindustry_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_cityofindustry_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_claremont.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_claremont_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_claremont_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_claremont_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_commerce.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_commerce_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_commerce_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_commerce_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_compton.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_compton_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_compton_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_compton_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_corona.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_corona_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_corona_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_corona_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_culvercity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_culvercity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_culvercity_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_culvercity_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_cypress.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_cypress_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_cypress_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_cypress_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_diamondbar.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_diamondbar_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_diamondbar_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_diamondbar_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_dominguezhills.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_dominguezhills_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_dominguezhills_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_dominguezhills_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_elmonte.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_elmonte_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_elmonte_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_elmonte_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_fountainvalley.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_fountainvalley_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_fountainvalley_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_fountainvalley_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_fullerton.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_fullerton_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_fullerton_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_fullerton_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_gardena.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_gardena_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_gardena_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_gardena_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_gardengrove.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_gardengrove_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_gardengrove_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_gardengrove_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_glendale.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_glendale_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_glendale_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_glendale_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_hawthorne.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_hawthorne_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_hawthorne_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_hawthorne_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_highlandpark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_highlandpark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_highlandpark_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_highlandpark_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_huntingtonbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_huntingtonbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_huntingtonbeach_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_huntingtonbeach_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lacanada.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lacanada_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lacanada_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lacanada_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lakeviewterrace.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lakeviewterrace_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lakeviewterrace_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lakeviewterrace_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lax.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lax_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lax_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lax_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_longbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_longbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_longbeach_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_longbeach_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_losangeles.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_losangeles_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_losangeles_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_losangeles_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lynwood.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lynwood_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_lynwood_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_lynwood_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_montereypark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_montereypark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_montereypark_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_montereypark_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_northlongbeach.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_northlongbeach_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_northlongbeach_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_northlongbeach_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_orange.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_orange_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_orange_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_orange_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_palosverdes.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_palosverdes_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_palosverdes_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_palosverdes_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_panoramacity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_panoramacity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_panoramacity_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_panoramacity_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_pasadena.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_pasadena_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_pasadena_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_pasadena_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_pomona.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_pomona_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_pomona_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_pomona_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_rosemead.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_rosemead_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_rosemead_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_rosemead_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sandimas.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sandimas_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sandimas_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sandimas_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sanfernando.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sanfernando_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sanfernando_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sanfernando_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sanpedro.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sanpedro_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sanpedro_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sanpedro_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santaana.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santaana_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santaana_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santaana_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santaclarita.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santaclarita_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santaclarita_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santaclarita_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santafesprings.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santafesprings_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santafesprings_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santafesprings_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santamonica.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santamonica_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_santamonica_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_santamonica_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_southelmonte.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_southelmonte_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_southelmonte_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_southelmonte_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_studiocity.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_studiocity_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_studiocity_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_studiocity_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sunland.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sunland_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_sunland_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_sunland_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_torrance.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_torrance_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_torrance_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_torrance_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_usc.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_usc_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_usc_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_usc_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_vannuys.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_vannuys_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_vannuys_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_vannuys_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_watts.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_watts_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_watts_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_watts_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_westcovina.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_westcovina_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_westcovina_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_westcovina_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_westminster.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_westminster_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_westminster_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_westminster_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_yorbalinda.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_yorbalinda_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/maps/3d_yorbalinda_dark.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_maps_3d_yorbalinda_dark_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/roller/c1.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_c1_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/roller/card.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_card_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/roller/hwy_template.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_hwy_template_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/roller/overlay.png";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_overlay_png);
		types.set (id, AssetType.IMAGE);
		#end
		id = "assets/roller/pick.flac";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_pick_flac);
		types.set (id, AssetType.BINARY);
		#end
		id = "assets/roller/pick.ogg";
		#if html5
		preload.set (id, true);
		#elseif (desktop || cpp || flash)
		classTypes.set (id, __ASSET__assets_roller_pick_ogg);
		types.set (id, AssetType.SOUND);
		#end
		
		
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

@:keep @:bind #if display private #end class __ASSET__assets_cars_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_g_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_i_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_o_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_r_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_v_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom0_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom0_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom1_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom1_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom2_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_vroom2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_cars_y_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_arrival_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_dests_arrival_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_dests_b_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_g_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_i_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_o_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_r_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_v_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_dests_y_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_dice_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_dice_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_land0_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_land0_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_land1_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_land1_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_land2_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_land2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift0_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift0_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift1_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift1_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift2_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_lift2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_bedlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_gedlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_headlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_nedlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_pedlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_redlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_die_paperdoll_wedlights_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_app_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_bg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_bgm_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_bg_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_card_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_err_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_err_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_gps_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_info_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_lucon_ttf extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_map_pdn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_map_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_etc_pop_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_pop0_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_pop1_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_pop2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_push_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_push0_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_push1_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_push2_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_etc_slide_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_field_l_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_field_m_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_field_r_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_keys_blank_down_pdn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_keys_blank_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_keys_blank_up_pdn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_keys_blank_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_key_undo_blank_down_pdn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_key_undo_blank_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_key_undo_blank_up_pdn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_key_undo_blank_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_login_login_down_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_login_login_up_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_login_pass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_lvl_exp_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_lvl_fireworks_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_lvl_up_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_anaheim_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_azusa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_bellflower_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_beverlyhills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_brea_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_buenapark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_burbank_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_calpoly_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_carson_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_chinohills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_cityofindustry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_claremont_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_commerce_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_compton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_corona_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_culvercity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_cypress_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_diamondbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_dominguezhills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_elmonte_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_fountainvalley_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_fullerton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_gardena_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_gardengrove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_glendale_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_hawthorne_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_highlandpark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_huntingtonbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_lacanada_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_lakeviewterrace_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_lax_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_longbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_losangeles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_lynwood_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_montereypark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_northlongbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_orange_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_palosverdes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_panoramacity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_pasadena_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_pomona_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_rosemead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_sandimas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_sanfernando_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_sanpedro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_santaana_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_santaclarita_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_santafesprings_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_santamonica_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_southelmonte_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_studiocity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_sunland_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_torrance_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_usc_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_vannuys_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_watts_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_westcovina_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_westminster_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_2d_yorbalinda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_anaheim_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_anaheim_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_azusa_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_azusa_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_bellflower_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_bellflower_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_beverlyhills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_beverlyhills_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_brea_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_brea_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_buenapark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_buenapark_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_burbank_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_burbank_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_calpoly_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_calpoly_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_carson_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_carson_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_chinohills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_chinohills_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_cityofindustry_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_cityofindustry_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_claremont_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_claremont_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_commerce_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_commerce_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_compton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_compton_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_corona_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_corona_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_culvercity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_culvercity_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_cypress_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_cypress_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_diamondbar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_diamondbar_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_dominguezhills_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_dominguezhills_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_elmonte_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_elmonte_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_fountainvalley_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_fountainvalley_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_fullerton_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_fullerton_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_gardena_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_gardena_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_gardengrove_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_gardengrove_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_glendale_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_glendale_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_hawthorne_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_hawthorne_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_highlandpark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_highlandpark_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_huntingtonbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_huntingtonbeach_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lacanada_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lacanada_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lakeviewterrace_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lakeviewterrace_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lax_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lax_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_longbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_longbeach_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_losangeles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_losangeles_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lynwood_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_lynwood_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_montereypark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_montereypark_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_northlongbeach_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_northlongbeach_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_orange_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_orange_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_palosverdes_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_palosverdes_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_panoramacity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_panoramacity_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_pasadena_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_pasadena_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_pomona_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_pomona_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_rosemead_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_rosemead_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sandimas_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sandimas_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sanfernando_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sanfernando_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sanpedro_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sanpedro_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santaana_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santaana_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santaclarita_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santaclarita_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santafesprings_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santafesprings_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santamonica_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_santamonica_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_southelmonte_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_southelmonte_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_studiocity_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_studiocity_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sunland_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_sunland_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_torrance_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_torrance_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_usc_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_usc_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_vannuys_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_vannuys_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_watts_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_watts_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_westcovina_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_westcovina_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_westminster_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_westminster_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_yorbalinda_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_maps_3d_yorbalinda_dark_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_roller_c1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_roller_card_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_roller_hwy_template_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_roller_overlay_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_roller_pick_flac extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_roller_pick_ogg extends null { }


#elseif (desktop || cpp)

@:image("Assets/cars/b.png") #if display private #end class __ASSET__assets_cars_b_png extends lime.graphics.Image {}
@:image("Assets/cars/g.png") #if display private #end class __ASSET__assets_cars_g_png extends lime.graphics.Image {}
@:image("Assets/cars/i.png") #if display private #end class __ASSET__assets_cars_i_png extends lime.graphics.Image {}
@:image("Assets/cars/o.png") #if display private #end class __ASSET__assets_cars_o_png extends lime.graphics.Image {}
@:image("Assets/cars/r.png") #if display private #end class __ASSET__assets_cars_r_png extends lime.graphics.Image {}
@:image("Assets/cars/v.png") #if display private #end class __ASSET__assets_cars_v_png extends lime.graphics.Image {}
@:file("Assets/cars/vroom0.flac") #if display private #end class __ASSET__assets_cars_vroom0_flac extends haxe.io.Bytes {}@:file("Assets/cars/vroom0.ogg") #if display private #end class __ASSET__assets_cars_vroom0_ogg extends haxe.io.Bytes {}
@:file("Assets/cars/vroom1.flac") #if display private #end class __ASSET__assets_cars_vroom1_flac extends haxe.io.Bytes {}@:file("Assets/cars/vroom1.ogg") #if display private #end class __ASSET__assets_cars_vroom1_ogg extends haxe.io.Bytes {}
@:file("Assets/cars/vroom2.flac") #if display private #end class __ASSET__assets_cars_vroom2_flac extends haxe.io.Bytes {}@:file("Assets/cars/vroom2.ogg") #if display private #end class __ASSET__assets_cars_vroom2_ogg extends haxe.io.Bytes {}
@:image("Assets/cars/y.png") #if display private #end class __ASSET__assets_cars_y_png extends lime.graphics.Image {}
@:file("Assets/dests/arrival.flac") #if display private #end class __ASSET__assets_dests_arrival_flac extends haxe.io.Bytes {}@:file("Assets/dests/arrival.ogg") #if display private #end class __ASSET__assets_dests_arrival_ogg extends haxe.io.Bytes {}
@:image("Assets/dests/b.png") #if display private #end class __ASSET__assets_dests_b_png extends lime.graphics.Image {}
@:image("Assets/dests/g.png") #if display private #end class __ASSET__assets_dests_g_png extends lime.graphics.Image {}
@:image("Assets/dests/i.png") #if display private #end class __ASSET__assets_dests_i_png extends lime.graphics.Image {}
@:image("Assets/dests/o.png") #if display private #end class __ASSET__assets_dests_o_png extends lime.graphics.Image {}
@:image("Assets/dests/r.png") #if display private #end class __ASSET__assets_dests_r_png extends lime.graphics.Image {}
@:image("Assets/dests/v.png") #if display private #end class __ASSET__assets_dests_v_png extends lime.graphics.Image {}
@:image("Assets/dests/y.png") #if display private #end class __ASSET__assets_dests_y_png extends lime.graphics.Image {}
@:image("Assets/die/dice.png") #if display private #end class __ASSET__assets_die_dice_png extends lime.graphics.Image {}
@:image("Assets/die/dice_dark.png") #if display private #end class __ASSET__assets_die_dice_dark_png extends lime.graphics.Image {}
@:file("Assets/die/land0.flac") #if display private #end class __ASSET__assets_die_land0_flac extends haxe.io.Bytes {}@:file("Assets/die/land0.ogg") #if display private #end class __ASSET__assets_die_land0_ogg extends haxe.io.Bytes {}
@:file("Assets/die/land1.flac") #if display private #end class __ASSET__assets_die_land1_flac extends haxe.io.Bytes {}@:file("Assets/die/land1.ogg") #if display private #end class __ASSET__assets_die_land1_ogg extends haxe.io.Bytes {}
@:file("Assets/die/land2.flac") #if display private #end class __ASSET__assets_die_land2_flac extends haxe.io.Bytes {}@:file("Assets/die/land2.ogg") #if display private #end class __ASSET__assets_die_land2_ogg extends haxe.io.Bytes {}
@:file("Assets/die/lift0.flac") #if display private #end class __ASSET__assets_die_lift0_flac extends haxe.io.Bytes {}@:file("Assets/die/lift0.ogg") #if display private #end class __ASSET__assets_die_lift0_ogg extends haxe.io.Bytes {}
@:file("Assets/die/lift1.flac") #if display private #end class __ASSET__assets_die_lift1_flac extends haxe.io.Bytes {}@:file("Assets/die/lift1.ogg") #if display private #end class __ASSET__assets_die_lift1_ogg extends haxe.io.Bytes {}
@:file("Assets/die/lift2.flac") #if display private #end class __ASSET__assets_die_lift2_flac extends haxe.io.Bytes {}@:file("Assets/die/lift2.ogg") #if display private #end class __ASSET__assets_die_lift2_ogg extends haxe.io.Bytes {}
@:image("Assets/die/paperdoll.png") #if display private #end class __ASSET__assets_die_paperdoll_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_bedlights.png") #if display private #end class __ASSET__assets_die_paperdoll_bedlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_gedlights.png") #if display private #end class __ASSET__assets_die_paperdoll_gedlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_headlights.png") #if display private #end class __ASSET__assets_die_paperdoll_headlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_nedlights.png") #if display private #end class __ASSET__assets_die_paperdoll_nedlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_pedlights.png") #if display private #end class __ASSET__assets_die_paperdoll_pedlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_redlights.png") #if display private #end class __ASSET__assets_die_paperdoll_redlights_png extends lime.graphics.Image {}
@:image("Assets/die/paperdoll_wedlights.png") #if display private #end class __ASSET__assets_die_paperdoll_wedlights_png extends lime.graphics.Image {}
@:image("Assets/etc/app.png") #if display private #end class __ASSET__assets_etc_app_png extends lime.graphics.Image {}
@:image("Assets/etc/bg.png") #if display private #end class __ASSET__assets_etc_bg_png extends lime.graphics.Image {}
@:file("Assets/etc/bgm.ogg") #if display private #end class __ASSET__assets_etc_bgm_ogg extends haxe.io.Bytes {}
@:image("Assets/etc/bg_dark.png") #if display private #end class __ASSET__assets_etc_bg_dark_png extends lime.graphics.Image {}
@:image("Assets/etc/card.png") #if display private #end class __ASSET__assets_etc_card_png extends lime.graphics.Image {}
@:file("Assets/etc/err.flac") #if display private #end class __ASSET__assets_etc_err_flac extends haxe.io.Bytes {}@:file("Assets/etc/err.ogg") #if display private #end class __ASSET__assets_etc_err_ogg extends haxe.io.Bytes {}
@:image("Assets/etc/gps.png") #if display private #end class __ASSET__assets_etc_gps_png extends lime.graphics.Image {}
@:image("Assets/etc/icon.png") #if display private #end class __ASSET__assets_etc_icon_png extends lime.graphics.Image {}
@:image("Assets/etc/info.png") #if display private #end class __ASSET__assets_etc_info_png extends lime.graphics.Image {}
@:font("Assets/etc/lucon.ttf") #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font {}
@:file("Assets/etc/map.pdn") #if display private #end class __ASSET__assets_etc_map_pdn extends haxe.io.Bytes {}@:image("Assets/etc/map.png") #if display private #end class __ASSET__assets_etc_map_png extends lime.graphics.Image {}
@:file("Assets/etc/pop.flac") #if display private #end class __ASSET__assets_etc_pop_flac extends haxe.io.Bytes {}@:file("Assets/etc/pop0.ogg") #if display private #end class __ASSET__assets_etc_pop0_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/pop1.ogg") #if display private #end class __ASSET__assets_etc_pop1_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/pop2.ogg") #if display private #end class __ASSET__assets_etc_pop2_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/push.flac") #if display private #end class __ASSET__assets_etc_push_flac extends haxe.io.Bytes {}@:file("Assets/etc/push0.ogg") #if display private #end class __ASSET__assets_etc_push0_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/push1.ogg") #if display private #end class __ASSET__assets_etc_push1_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/push2.ogg") #if display private #end class __ASSET__assets_etc_push2_ogg extends haxe.io.Bytes {}
@:file("Assets/etc/slide.ogg") #if display private #end class __ASSET__assets_etc_slide_ogg extends haxe.io.Bytes {}
@:image("Assets/field/l.png") #if display private #end class __ASSET__assets_field_l_png extends lime.graphics.Image {}
@:image("Assets/field/m.png") #if display private #end class __ASSET__assets_field_m_png extends lime.graphics.Image {}
@:image("Assets/field/r.png") #if display private #end class __ASSET__assets_field_r_png extends lime.graphics.Image {}
@:file("Assets/keys/blank_down.pdn") #if display private #end class __ASSET__assets_keys_blank_down_pdn extends haxe.io.Bytes {}@:image("Assets/keys/blank_down.png") #if display private #end class __ASSET__assets_keys_blank_down_png extends lime.graphics.Image {}
@:file("Assets/keys/blank_up.pdn") #if display private #end class __ASSET__assets_keys_blank_up_pdn extends haxe.io.Bytes {}@:image("Assets/keys/blank_up.png") #if display private #end class __ASSET__assets_keys_blank_up_png extends lime.graphics.Image {}
@:file("Assets/key_undo/blank_down.pdn") #if display private #end class __ASSET__assets_key_undo_blank_down_pdn extends haxe.io.Bytes {}@:image("Assets/key_undo/blank_down.png") #if display private #end class __ASSET__assets_key_undo_blank_down_png extends lime.graphics.Image {}
@:file("Assets/key_undo/blank_up.pdn") #if display private #end class __ASSET__assets_key_undo_blank_up_pdn extends haxe.io.Bytes {}@:image("Assets/key_undo/blank_up.png") #if display private #end class __ASSET__assets_key_undo_blank_up_png extends lime.graphics.Image {}
@:image("Assets/login/login_down.png") #if display private #end class __ASSET__assets_login_login_down_png extends lime.graphics.Image {}
@:image("Assets/login/login_up.png") #if display private #end class __ASSET__assets_login_login_up_png extends lime.graphics.Image {}
@:image("Assets/login/pass.png") #if display private #end class __ASSET__assets_login_pass_png extends lime.graphics.Image {}
@:image("Assets/lvl/exp.png") #if display private #end class __ASSET__assets_lvl_exp_png extends lime.graphics.Image {}
@:image("Assets/lvl/fireworks.png") #if display private #end class __ASSET__assets_lvl_fireworks_png extends lime.graphics.Image {}
@:file("Assets/lvl/up.ogg") #if display private #end class __ASSET__assets_lvl_up_ogg extends haxe.io.Bytes {}
@:image("Assets/maps/2d_anaheim.png") #if display private #end class __ASSET__assets_maps_2d_anaheim_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_azusa.png") #if display private #end class __ASSET__assets_maps_2d_azusa_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_bellflower.png") #if display private #end class __ASSET__assets_maps_2d_bellflower_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_beverlyhills.png") #if display private #end class __ASSET__assets_maps_2d_beverlyhills_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_brea.png") #if display private #end class __ASSET__assets_maps_2d_brea_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_buenapark.png") #if display private #end class __ASSET__assets_maps_2d_buenapark_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_burbank.png") #if display private #end class __ASSET__assets_maps_2d_burbank_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_calpoly.png") #if display private #end class __ASSET__assets_maps_2d_calpoly_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_carson.png") #if display private #end class __ASSET__assets_maps_2d_carson_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_chinohills.png") #if display private #end class __ASSET__assets_maps_2d_chinohills_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_cityofindustry.png") #if display private #end class __ASSET__assets_maps_2d_cityofindustry_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_claremont.png") #if display private #end class __ASSET__assets_maps_2d_claremont_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_commerce.png") #if display private #end class __ASSET__assets_maps_2d_commerce_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_compton.png") #if display private #end class __ASSET__assets_maps_2d_compton_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_corona.png") #if display private #end class __ASSET__assets_maps_2d_corona_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_culvercity.png") #if display private #end class __ASSET__assets_maps_2d_culvercity_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_cypress.png") #if display private #end class __ASSET__assets_maps_2d_cypress_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_diamondbar.png") #if display private #end class __ASSET__assets_maps_2d_diamondbar_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_dominguezhills.png") #if display private #end class __ASSET__assets_maps_2d_dominguezhills_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_elmonte.png") #if display private #end class __ASSET__assets_maps_2d_elmonte_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_fountainvalley.png") #if display private #end class __ASSET__assets_maps_2d_fountainvalley_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_fullerton.png") #if display private #end class __ASSET__assets_maps_2d_fullerton_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_gardena.png") #if display private #end class __ASSET__assets_maps_2d_gardena_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_gardengrove.png") #if display private #end class __ASSET__assets_maps_2d_gardengrove_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_glendale.png") #if display private #end class __ASSET__assets_maps_2d_glendale_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_hawthorne.png") #if display private #end class __ASSET__assets_maps_2d_hawthorne_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_highlandpark.png") #if display private #end class __ASSET__assets_maps_2d_highlandpark_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_huntingtonbeach.png") #if display private #end class __ASSET__assets_maps_2d_huntingtonbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_lacanada.png") #if display private #end class __ASSET__assets_maps_2d_lacanada_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_lakeviewterrace.png") #if display private #end class __ASSET__assets_maps_2d_lakeviewterrace_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_lax.png") #if display private #end class __ASSET__assets_maps_2d_lax_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_longbeach.png") #if display private #end class __ASSET__assets_maps_2d_longbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_losangeles.png") #if display private #end class __ASSET__assets_maps_2d_losangeles_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_lynwood.png") #if display private #end class __ASSET__assets_maps_2d_lynwood_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_montereypark.png") #if display private #end class __ASSET__assets_maps_2d_montereypark_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_northlongbeach.png") #if display private #end class __ASSET__assets_maps_2d_northlongbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_orange.png") #if display private #end class __ASSET__assets_maps_2d_orange_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_palosverdes.png") #if display private #end class __ASSET__assets_maps_2d_palosverdes_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_panoramacity.png") #if display private #end class __ASSET__assets_maps_2d_panoramacity_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_pasadena.png") #if display private #end class __ASSET__assets_maps_2d_pasadena_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_pomona.png") #if display private #end class __ASSET__assets_maps_2d_pomona_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_rosemead.png") #if display private #end class __ASSET__assets_maps_2d_rosemead_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_sandimas.png") #if display private #end class __ASSET__assets_maps_2d_sandimas_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_sanfernando.png") #if display private #end class __ASSET__assets_maps_2d_sanfernando_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_sanpedro.png") #if display private #end class __ASSET__assets_maps_2d_sanpedro_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_santaana.png") #if display private #end class __ASSET__assets_maps_2d_santaana_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_santaclarita.png") #if display private #end class __ASSET__assets_maps_2d_santaclarita_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_santafesprings.png") #if display private #end class __ASSET__assets_maps_2d_santafesprings_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_santamonica.png") #if display private #end class __ASSET__assets_maps_2d_santamonica_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_southelmonte.png") #if display private #end class __ASSET__assets_maps_2d_southelmonte_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_studiocity.png") #if display private #end class __ASSET__assets_maps_2d_studiocity_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_sunland.png") #if display private #end class __ASSET__assets_maps_2d_sunland_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_torrance.png") #if display private #end class __ASSET__assets_maps_2d_torrance_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_usc.png") #if display private #end class __ASSET__assets_maps_2d_usc_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_vannuys.png") #if display private #end class __ASSET__assets_maps_2d_vannuys_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_watts.png") #if display private #end class __ASSET__assets_maps_2d_watts_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_westcovina.png") #if display private #end class __ASSET__assets_maps_2d_westcovina_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_westminster.png") #if display private #end class __ASSET__assets_maps_2d_westminster_png extends lime.graphics.Image {}
@:image("Assets/maps/2d_yorbalinda.png") #if display private #end class __ASSET__assets_maps_2d_yorbalinda_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_anaheim.png") #if display private #end class __ASSET__assets_maps_3d_anaheim_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_anaheim_dark.png") #if display private #end class __ASSET__assets_maps_3d_anaheim_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_azusa.png") #if display private #end class __ASSET__assets_maps_3d_azusa_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_azusa_dark.png") #if display private #end class __ASSET__assets_maps_3d_azusa_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_bellflower.png") #if display private #end class __ASSET__assets_maps_3d_bellflower_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_bellflower_dark.png") #if display private #end class __ASSET__assets_maps_3d_bellflower_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_beverlyhills.png") #if display private #end class __ASSET__assets_maps_3d_beverlyhills_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_beverlyhills_dark.png") #if display private #end class __ASSET__assets_maps_3d_beverlyhills_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_brea.png") #if display private #end class __ASSET__assets_maps_3d_brea_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_brea_dark.png") #if display private #end class __ASSET__assets_maps_3d_brea_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_buenapark.png") #if display private #end class __ASSET__assets_maps_3d_buenapark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_buenapark_dark.png") #if display private #end class __ASSET__assets_maps_3d_buenapark_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_burbank.png") #if display private #end class __ASSET__assets_maps_3d_burbank_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_burbank_dark.png") #if display private #end class __ASSET__assets_maps_3d_burbank_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_calpoly.png") #if display private #end class __ASSET__assets_maps_3d_calpoly_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_calpoly_dark.png") #if display private #end class __ASSET__assets_maps_3d_calpoly_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_carson.png") #if display private #end class __ASSET__assets_maps_3d_carson_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_carson_dark.png") #if display private #end class __ASSET__assets_maps_3d_carson_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_chinohills.png") #if display private #end class __ASSET__assets_maps_3d_chinohills_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_chinohills_dark.png") #if display private #end class __ASSET__assets_maps_3d_chinohills_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_cityofindustry.png") #if display private #end class __ASSET__assets_maps_3d_cityofindustry_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_cityofindustry_dark.png") #if display private #end class __ASSET__assets_maps_3d_cityofindustry_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_claremont.png") #if display private #end class __ASSET__assets_maps_3d_claremont_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_claremont_dark.png") #if display private #end class __ASSET__assets_maps_3d_claremont_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_commerce.png") #if display private #end class __ASSET__assets_maps_3d_commerce_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_commerce_dark.png") #if display private #end class __ASSET__assets_maps_3d_commerce_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_compton.png") #if display private #end class __ASSET__assets_maps_3d_compton_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_compton_dark.png") #if display private #end class __ASSET__assets_maps_3d_compton_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_corona.png") #if display private #end class __ASSET__assets_maps_3d_corona_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_corona_dark.png") #if display private #end class __ASSET__assets_maps_3d_corona_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_culvercity.png") #if display private #end class __ASSET__assets_maps_3d_culvercity_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_culvercity_dark.png") #if display private #end class __ASSET__assets_maps_3d_culvercity_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_cypress.png") #if display private #end class __ASSET__assets_maps_3d_cypress_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_cypress_dark.png") #if display private #end class __ASSET__assets_maps_3d_cypress_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_diamondbar.png") #if display private #end class __ASSET__assets_maps_3d_diamondbar_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_diamondbar_dark.png") #if display private #end class __ASSET__assets_maps_3d_diamondbar_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_dominguezhills.png") #if display private #end class __ASSET__assets_maps_3d_dominguezhills_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_dominguezhills_dark.png") #if display private #end class __ASSET__assets_maps_3d_dominguezhills_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_elmonte.png") #if display private #end class __ASSET__assets_maps_3d_elmonte_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_elmonte_dark.png") #if display private #end class __ASSET__assets_maps_3d_elmonte_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_fountainvalley.png") #if display private #end class __ASSET__assets_maps_3d_fountainvalley_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_fountainvalley_dark.png") #if display private #end class __ASSET__assets_maps_3d_fountainvalley_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_fullerton.png") #if display private #end class __ASSET__assets_maps_3d_fullerton_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_fullerton_dark.png") #if display private #end class __ASSET__assets_maps_3d_fullerton_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_gardena.png") #if display private #end class __ASSET__assets_maps_3d_gardena_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_gardena_dark.png") #if display private #end class __ASSET__assets_maps_3d_gardena_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_gardengrove.png") #if display private #end class __ASSET__assets_maps_3d_gardengrove_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_gardengrove_dark.png") #if display private #end class __ASSET__assets_maps_3d_gardengrove_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_glendale.png") #if display private #end class __ASSET__assets_maps_3d_glendale_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_glendale_dark.png") #if display private #end class __ASSET__assets_maps_3d_glendale_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_hawthorne.png") #if display private #end class __ASSET__assets_maps_3d_hawthorne_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_hawthorne_dark.png") #if display private #end class __ASSET__assets_maps_3d_hawthorne_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_highlandpark.png") #if display private #end class __ASSET__assets_maps_3d_highlandpark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_highlandpark_dark.png") #if display private #end class __ASSET__assets_maps_3d_highlandpark_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_huntingtonbeach.png") #if display private #end class __ASSET__assets_maps_3d_huntingtonbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_huntingtonbeach_dark.png") #if display private #end class __ASSET__assets_maps_3d_huntingtonbeach_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lacanada.png") #if display private #end class __ASSET__assets_maps_3d_lacanada_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lacanada_dark.png") #if display private #end class __ASSET__assets_maps_3d_lacanada_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lakeviewterrace.png") #if display private #end class __ASSET__assets_maps_3d_lakeviewterrace_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lakeviewterrace_dark.png") #if display private #end class __ASSET__assets_maps_3d_lakeviewterrace_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lax.png") #if display private #end class __ASSET__assets_maps_3d_lax_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lax_dark.png") #if display private #end class __ASSET__assets_maps_3d_lax_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_longbeach.png") #if display private #end class __ASSET__assets_maps_3d_longbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_longbeach_dark.png") #if display private #end class __ASSET__assets_maps_3d_longbeach_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_losangeles.png") #if display private #end class __ASSET__assets_maps_3d_losangeles_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_losangeles_dark.png") #if display private #end class __ASSET__assets_maps_3d_losangeles_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lynwood.png") #if display private #end class __ASSET__assets_maps_3d_lynwood_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_lynwood_dark.png") #if display private #end class __ASSET__assets_maps_3d_lynwood_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_montereypark.png") #if display private #end class __ASSET__assets_maps_3d_montereypark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_montereypark_dark.png") #if display private #end class __ASSET__assets_maps_3d_montereypark_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_northlongbeach.png") #if display private #end class __ASSET__assets_maps_3d_northlongbeach_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_northlongbeach_dark.png") #if display private #end class __ASSET__assets_maps_3d_northlongbeach_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_orange.png") #if display private #end class __ASSET__assets_maps_3d_orange_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_orange_dark.png") #if display private #end class __ASSET__assets_maps_3d_orange_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_palosverdes.png") #if display private #end class __ASSET__assets_maps_3d_palosverdes_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_palosverdes_dark.png") #if display private #end class __ASSET__assets_maps_3d_palosverdes_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_panoramacity.png") #if display private #end class __ASSET__assets_maps_3d_panoramacity_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_panoramacity_dark.png") #if display private #end class __ASSET__assets_maps_3d_panoramacity_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_pasadena.png") #if display private #end class __ASSET__assets_maps_3d_pasadena_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_pasadena_dark.png") #if display private #end class __ASSET__assets_maps_3d_pasadena_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_pomona.png") #if display private #end class __ASSET__assets_maps_3d_pomona_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_pomona_dark.png") #if display private #end class __ASSET__assets_maps_3d_pomona_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_rosemead.png") #if display private #end class __ASSET__assets_maps_3d_rosemead_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_rosemead_dark.png") #if display private #end class __ASSET__assets_maps_3d_rosemead_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sandimas.png") #if display private #end class __ASSET__assets_maps_3d_sandimas_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sandimas_dark.png") #if display private #end class __ASSET__assets_maps_3d_sandimas_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sanfernando.png") #if display private #end class __ASSET__assets_maps_3d_sanfernando_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sanfernando_dark.png") #if display private #end class __ASSET__assets_maps_3d_sanfernando_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sanpedro.png") #if display private #end class __ASSET__assets_maps_3d_sanpedro_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sanpedro_dark.png") #if display private #end class __ASSET__assets_maps_3d_sanpedro_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santaana.png") #if display private #end class __ASSET__assets_maps_3d_santaana_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santaana_dark.png") #if display private #end class __ASSET__assets_maps_3d_santaana_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santaclarita.png") #if display private #end class __ASSET__assets_maps_3d_santaclarita_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santaclarita_dark.png") #if display private #end class __ASSET__assets_maps_3d_santaclarita_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santafesprings.png") #if display private #end class __ASSET__assets_maps_3d_santafesprings_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santafesprings_dark.png") #if display private #end class __ASSET__assets_maps_3d_santafesprings_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santamonica.png") #if display private #end class __ASSET__assets_maps_3d_santamonica_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_santamonica_dark.png") #if display private #end class __ASSET__assets_maps_3d_santamonica_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_southelmonte.png") #if display private #end class __ASSET__assets_maps_3d_southelmonte_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_southelmonte_dark.png") #if display private #end class __ASSET__assets_maps_3d_southelmonte_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_studiocity.png") #if display private #end class __ASSET__assets_maps_3d_studiocity_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_studiocity_dark.png") #if display private #end class __ASSET__assets_maps_3d_studiocity_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sunland.png") #if display private #end class __ASSET__assets_maps_3d_sunland_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_sunland_dark.png") #if display private #end class __ASSET__assets_maps_3d_sunland_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_torrance.png") #if display private #end class __ASSET__assets_maps_3d_torrance_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_torrance_dark.png") #if display private #end class __ASSET__assets_maps_3d_torrance_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_usc.png") #if display private #end class __ASSET__assets_maps_3d_usc_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_usc_dark.png") #if display private #end class __ASSET__assets_maps_3d_usc_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_vannuys.png") #if display private #end class __ASSET__assets_maps_3d_vannuys_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_vannuys_dark.png") #if display private #end class __ASSET__assets_maps_3d_vannuys_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_watts.png") #if display private #end class __ASSET__assets_maps_3d_watts_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_watts_dark.png") #if display private #end class __ASSET__assets_maps_3d_watts_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_westcovina.png") #if display private #end class __ASSET__assets_maps_3d_westcovina_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_westcovina_dark.png") #if display private #end class __ASSET__assets_maps_3d_westcovina_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_westminster.png") #if display private #end class __ASSET__assets_maps_3d_westminster_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_westminster_dark.png") #if display private #end class __ASSET__assets_maps_3d_westminster_dark_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_yorbalinda.png") #if display private #end class __ASSET__assets_maps_3d_yorbalinda_png extends lime.graphics.Image {}
@:image("Assets/maps/3d_yorbalinda_dark.png") #if display private #end class __ASSET__assets_maps_3d_yorbalinda_dark_png extends lime.graphics.Image {}
@:image("Assets/roller/c1.png") #if display private #end class __ASSET__assets_roller_c1_png extends lime.graphics.Image {}
@:image("Assets/roller/card.png") #if display private #end class __ASSET__assets_roller_card_png extends lime.graphics.Image {}
@:image("Assets/roller/hwy_template.png") #if display private #end class __ASSET__assets_roller_hwy_template_png extends lime.graphics.Image {}
@:image("Assets/roller/overlay.png") #if display private #end class __ASSET__assets_roller_overlay_png extends lime.graphics.Image {}
@:file("Assets/roller/pick.flac") #if display private #end class __ASSET__assets_roller_pick_flac extends haxe.io.Bytes {}@:file("Assets/roller/pick.ogg") #if display private #end class __ASSET__assets_roller_pick_ogg extends haxe.io.Bytes {}




#else

@:keep #if display private #end class __ASSET__assets_etc_lucon_ttf extends lime.text.Font { public function new () { #if !html5 __fontPath = "assets/etc/lucon"; #end name = "Lucida Console"; super (); }}


#end

#if (openfl && !flash)

@:keep #if display private #end class __ASSET__OPENFL__assets_etc_lucon_ttf extends openfl.text.Font { public function new () { var font = new __ASSET__assets_etc_lucon_ttf (); src = font.src; name = font.name; super (); }}


#end
#end