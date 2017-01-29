// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_53_exists,"lime.utils.Assets","exists",0x1d422f71,"lime.utils.Assets.exists","lime/utils/Assets.hx",53,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_84_getAsset,"lime.utils.Assets","getAsset",0x8d49da4f,"lime.utils.Assets.getAsset","lime/utils/Assets.hx",84,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_185_getAudioBuffer,"lime.utils.Assets","getAudioBuffer",0x84c07015,"lime.utils.Assets.getAudioBuffer","lime/utils/Assets.hx",185,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_198_getBytes,"lime.utils.Assets","getBytes",0x24a878ca,"lime.utils.Assets.getBytes","lime/utils/Assets.hx",198,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_211_getFont,"lime.utils.Assets","getFont",0x6eb05e50,"lime.utils.Assets.getFont","lime/utils/Assets.hx",211,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_225_getImage,"lime.utils.Assets","getImage",0x24798fba,"lime.utils.Assets.getImage","lime/utils/Assets.hx",225,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_230_getLibrary,"lime.utils.Assets","getLibrary",0xdfc4ad1a,"lime.utils.Assets.getLibrary","lime/utils/Assets.hx",230,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_249_getPath,"lime.utils.Assets","getPath",0x7541e626,"lime.utils.Assets.getPath","lime/utils/Assets.hx",249,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_288_getText,"lime.utils.Assets","getText",0x77e9cd2e,"lime.utils.Assets.getText","lime/utils/Assets.hx",288,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_293_isLocal,"lime.utils.Assets","isLocal",0x6de3bdec,"lime.utils.Assets.isLocal","lime/utils/Assets.hx",293,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_319_isValidAudio,"lime.utils.Assets","isValidAudio",0xfba1fa19,"lime.utils.Assets.isValidAudio","lime/utils/Assets.hx",319,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_328_isValidImage,"lime.utils.Assets","isValidImage",0x918aa09e,"lime.utils.Assets.isValidImage","lime/utils/Assets.hx",328,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_333_list,"lime.utils.Assets","list",0x96ec2eb3,"lime.utils.Assets.list","lime/utils/Assets.hx",333,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_354_loadAsset,"lime.utils.Assets","loadAsset",0x8c6c0f75,"lime.utils.Assets.loadAsset","lime/utils/Assets.hx",354,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_414_loadAsset,"lime.utils.Assets","loadAsset",0x8c6c0f75,"lime.utils.Assets.loadAsset","lime/utils/Assets.hx",414,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_443_loadAudioBuffer,"lime.utils.Assets","loadAudioBuffer",0xa72805bb,"lime.utils.Assets.loadAudioBuffer","lime/utils/Assets.hx",443,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_450_loadBytes,"lime.utils.Assets","loadBytes",0x23caadf0,"lime.utils.Assets.loadBytes","lime/utils/Assets.hx",450,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_457_loadFont,"lime.utils.Assets","loadFont",0xbb998fea,"lime.utils.Assets.loadFont","lime/utils/Assets.hx",457,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_464_loadImage,"lime.utils.Assets","loadImage",0x239bc4e0,"lime.utils.Assets.loadImage","lime/utils/Assets.hx",464,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_475_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",475,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_511_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",511,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_469_loadLibrary,"lime.utils.Assets","loadLibrary",0x93baf7c0,"lime.utils.Assets.loadLibrary","lime/utils/Assets.hx",469,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_524_loadText,"lime.utils.Assets","loadText",0xc4d2fec8,"lime.utils.Assets.loadText","lime/utils/Assets.hx",524,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_529_registerLibrary,"lime.utils.Assets","registerLibrary",0xb6301ea3,"lime.utils.Assets.registerLibrary","lime/utils/Assets.hx",529,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_556_unloadLibrary,"lime.utils.Assets","unloadLibrary",0xc816d6c7,"lime.utils.Assets.unloadLibrary","lime/utils/Assets.hx",556,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_584_library_onChange,"lime.utils.Assets","library_onChange",0x3a89dec8,"lime.utils.Assets.library_onChange","lime/utils/Assets.hx",584,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_48_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",48,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_49_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",49,0x95055f23)
HX_DEFINE_STACK_FRAME(_hx_pos_df5754140b017d9f_50_boot,"lime.utils.Assets","boot",0x90549687,"lime.utils.Assets.boot","lime/utils/Assets.hx",50,0x95055f23)
namespace lime{
namespace utils{

void Assets_obj::__construct() { }

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2b49805f;
}

 ::lime::utils::AssetCache Assets_obj::cache;

 ::haxe::ds::StringMap Assets_obj::libraries;

 ::lime::app::_Event_Void_Void Assets_obj::onChange;

bool Assets_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_53_exists)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
HXLINE(  57)		if (hx::IsNull( type )) {
HXLINE(  59)			type = HX_("BINARY",01,68,8e,9f);
            		}
HXLINE(  63)		HX_VAR( ::String,symbol_symbolName);
HXDLIN(  63)		HX_VAR(  ::lime::utils::AssetLibrary,symbol_library);
HXDLIN(  63)		HX_VARI( int,colonIndex) = id.indexOf(HX_(":",3a,00,00,00),null());
HXLINE(  53)		HX_VARI( ::String,symbol_libraryName) = id.substring((int)0,colonIndex);
HXLINE(  63)		symbol_symbolName = id.substring((colonIndex + (int)1),null());
HXDLIN(  63)		symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE(  65)		if (hx::IsNotNull( symbol_library )) {
HXLINE(  67)			return symbol_library->exists(symbol_symbolName,type);
            		}
HXLINE(  73)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

 ::Dynamic Assets_obj::getAsset(::String id,::String type,bool useCache){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_84_getAsset)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE(  88)		bool _hx_tmp;
HXDLIN(  88)		if (useCache) {
HXLINE(  88)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE(  88)			_hx_tmp = false;
            		}
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  90)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ||  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE(  94)				useCache = false;
HXDLIN(  94)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE(  98)				HX_VARI(  ::Dynamic,font) = ::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->font,id);
HXLINE( 100)				if (hx::IsNotNull( font )) {
HXLINE( 102)					return font;
            				}
HXLINE(  96)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 108)				HX_VARI(  ::lime::graphics::Image,image) = ( ( ::lime::graphics::Image)(::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->image,id)) );
HXLINE( 110)				if (::lime::utils::Assets_obj::isValidImage(image)) {
HXLINE( 112)					return image;
            				}
HXLINE( 106)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 118)				HX_VARI(  ::lime::media::AudioBuffer,audio) = ( ( ::lime::media::AudioBuffer)(::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->audio,id)) );
HXLINE( 120)				if (::lime::utils::Assets_obj::isValidAudio(audio)) {
HXLINE( 122)					return audio;
            				}
HXLINE( 116)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 128)				HX_STACK_DO_THROW((HX_("Not sure how to get template: ",a1,19,8c,ad) + id));
HXDLIN( 128)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
            		}
HXLINE( 134)		HX_VAR( ::String,symbol_symbolName);
HXDLIN( 134)		HX_VAR( ::String,symbol_libraryName);
HXDLIN( 134)		HX_VAR(  ::lime::utils::AssetLibrary,symbol_library);
HXDLIN( 134)		HX_VARI( int,colonIndex) = id.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 134)		symbol_libraryName = id.substring((int)0,colonIndex);
HXDLIN( 134)		symbol_symbolName = id.substring((colonIndex + (int)1),null());
HXDLIN( 134)		symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 136)		if (hx::IsNotNull( symbol_library )) {
HXLINE( 138)			if (symbol_library->exists(symbol_symbolName,type)) {
HXLINE( 140)				if (symbol_library->isLocal(symbol_symbolName,type)) {
HXLINE( 142)					HX_VARI(  ::Dynamic,asset) = symbol_library->getAsset(symbol_symbolName,type);
HXLINE( 144)					bool _hx_tmp1;
HXDLIN( 144)					if (useCache) {
HXLINE( 144)						_hx_tmp1 = ::lime::utils::Assets_obj::cache->enabled;
            					}
            					else {
HXLINE( 144)						_hx_tmp1 = false;
            					}
HXDLIN( 144)					if (_hx_tmp1) {
HXLINE( 146)						::lime::utils::Assets_obj::cache->set(id,type,asset);
            					}
HXLINE( 150)					return asset;
            				}
            				else {
HXLINE( 154)					::lime::utils::Log_obj::info((((type + HX_(" asset \"",d2,25,2a,5d)) + id) + HX_("\" exists, but only asynchronously",dc,ca,f2,dd)),hx::SourceInfo(HX_("Assets.hx",fb,cd,c6,67),154,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            				}
            			}
            			else {
HXLINE( 160)				::lime::utils::Log_obj::info(((((HX_("There is no ",e5,bb,ab,c5) + type) + HX_(" asset with an ID of \"",95,f2,3a,0d)) + id) + HX_("\"",22,00,00,00)),hx::SourceInfo(HX_("Assets.hx",fb,cd,c6,67),160,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            			}
            		}
            		else {
HXLINE( 166)			::lime::utils::Log_obj::info(((HX_("There is no asset library named \"",a1,83,5f,51) + symbol_libraryName) + HX_("\"",22,00,00,00)),hx::SourceInfo(HX_("Assets.hx",fb,cd,c6,67),166,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getAsset",7a,79,10,86)));
            		}
HXLINE( 172)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,getAsset,return )

 ::lime::media::AudioBuffer Assets_obj::getAudioBuffer(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_185_getAudioBuffer)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 185)		return ( ( ::lime::media::AudioBuffer)(::lime::utils::Assets_obj::getAsset(id,HX_("SOUND",af,c4,ba,fe),useCache)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getAudioBuffer,return )

 ::haxe::io::Bytes Assets_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_198_getBytes)
            	HX_STACK_ARG(id,"id")
HXLINE( 198)		return ( ( ::haxe::io::Bytes)(::lime::utils::Assets_obj::getAsset(id,HX_("BINARY",01,68,8e,9f),false)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

 ::lime::text::Font Assets_obj::getFont(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_211_getFont)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 211)		return ::lime::utils::Assets_obj::getAsset(id,HX_("FONT",cf,25,81,2e),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

 ::lime::graphics::Image Assets_obj::getImage(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_225_getImage)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 225)		return ::lime::utils::Assets_obj::getAsset(id,HX_("IMAGE",3b,57,57,3b),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getImage,return )

 ::lime::utils::AssetLibrary Assets_obj::getLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_230_getLibrary)
            	HX_STACK_ARG(name,"name")
HXLINE( 232)		bool _hx_tmp;
HXDLIN( 232)		if (hx::IsNotNull( name )) {
HXLINE( 232)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 232)			_hx_tmp = true;
            		}
HXDLIN( 232)		if (_hx_tmp) {
HXLINE( 234)			name = HX_("default",c1,d8,c3,9b);
            		}
HXLINE( 238)		return ::lime::utils::Assets_obj::libraries->get(name).StaticCast<  ::lime::utils::AssetLibrary >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getLibrary,return )

::String Assets_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_249_getPath)
            	HX_STACK_ARG(id,"id")
HXLINE( 253)		HX_VAR( ::String,symbol_symbolName);
HXDLIN( 253)		HX_VAR( ::String,symbol_libraryName);
HXDLIN( 253)		HX_VAR(  ::lime::utils::AssetLibrary,symbol_library);
HXDLIN( 253)		HX_VARI( int,colonIndex) = id.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 253)		symbol_libraryName = id.substring((int)0,colonIndex);
HXDLIN( 253)		symbol_symbolName = id.substring((colonIndex + (int)1),null());
HXDLIN( 253)		symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 255)		if (hx::IsNotNull( symbol_library )) {
HXLINE( 257)			if (symbol_library->exists(symbol_symbolName,null())) {
HXLINE( 259)				return symbol_library->getPath(symbol_symbolName);
            			}
            			else {
HXLINE( 263)				::lime::utils::Log_obj::info(((HX_("There is no asset with an ID of \"",b0,92,42,96) + id) + HX_("\"",22,00,00,00)),hx::SourceInfo(HX_("Assets.hx",fb,cd,c6,67),263,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getPath",5b,95,d4,1c)));
            			}
            		}
            		else {
HXLINE( 269)			::lime::utils::Log_obj::info(((HX_("There is no asset library named \"",a1,83,5f,51) + symbol_libraryName) + HX_("\"",22,00,00,00)),hx::SourceInfo(HX_("Assets.hx",fb,cd,c6,67),269,HX_("lime.utils.Assets",39,6e,7e,b0),HX_("getPath",5b,95,d4,1c)));
            		}
HXLINE( 275)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getPath,return )

::String Assets_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_288_getText)
            	HX_STACK_ARG(id,"id")
HXLINE( 288)		return ::lime::utils::Assets_obj::getAsset(id,HX_("TEXT",ad,94,ba,37),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

bool Assets_obj::isLocal(::String id,::String type,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_293_isLocal)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 297)		bool _hx_tmp;
HXDLIN( 297)		if (useCache) {
HXLINE( 297)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE( 297)			_hx_tmp = false;
            		}
HXDLIN( 297)		if (_hx_tmp) {
HXLINE( 299)			if (::lime::utils::Assets_obj::cache->exists(id,type)) {
HXLINE( 299)				return true;
            			}
            		}
HXLINE( 303)		HX_VAR( ::String,symbol_symbolName);
HXDLIN( 303)		HX_VAR(  ::lime::utils::AssetLibrary,symbol_library);
HXDLIN( 303)		HX_VARI( int,colonIndex) = id.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 293)		HX_VARI( ::String,symbol_libraryName) = id.substring((int)0,colonIndex);
HXLINE( 303)		symbol_symbolName = id.substring((colonIndex + (int)1),null());
HXDLIN( 303)		symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 304)		if (hx::IsNotNull( symbol_library )) {
HXLINE( 304)			return symbol_library->isLocal(symbol_symbolName,type);
            		}
            		else {
HXLINE( 304)			return false;
            		}
HXDLIN( 304)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,isLocal,return )

bool Assets_obj::isValidAudio( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_319_isValidAudio)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 319)		return hx::IsNotNull( buffer );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidAudio,return )

bool Assets_obj::isValidImage( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_328_isValidImage)
            	HX_STACK_ARG(image,"image")
HXLINE( 328)		return hx::IsNotNull( image->buffer );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,isValidImage,return )

::Array< ::String > Assets_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_333_list)
            	HX_STACK_ARG(type,"type")
HXLINE( 335)		HX_VARI( ::Array< ::String >,items) = ::Array_obj< ::String >::__new(0);
HXLINE( 337)		{
HXLINE( 337)			HX_VARI(  ::Dynamic,library) = ::lime::utils::Assets_obj::libraries->iterator();
HXDLIN( 337)			while(( (bool)(library->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 339)				HX_VARI( ::Array< ::String >,libraryItems) = ( ( ::lime::utils::AssetLibrary)(library->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) )->list(type);
HXLINE( 341)				if (hx::IsNotNull( libraryItems )) {
HXLINE( 343)					items = items->concat(libraryItems);
            				}
            			}
            		}
HXLINE( 349)		return items;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

 ::lime::app::Future Assets_obj::loadAsset(::String id,::String type,bool useCache){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_354_loadAsset)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 358)		bool _hx_tmp;
HXDLIN( 358)		if (useCache) {
HXLINE( 358)			_hx_tmp = ::lime::utils::Assets_obj::cache->enabled;
            		}
            		else {
HXLINE( 358)			_hx_tmp = false;
            		}
HXDLIN( 358)		if (_hx_tmp) {
HXLINE( 360)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ||  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 364)				useCache = false;
HXDLIN( 364)				goto _hx_goto_15;
            			}
            			if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 368)				HX_VARI(  ::Dynamic,font) = ::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->font,id);
HXLINE( 370)				if (hx::IsNotNull( font )) {
HXLINE( 372)					return ::lime::app::Future_obj::withValue(font);
            				}
HXLINE( 366)				goto _hx_goto_15;
            			}
            			if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 378)				HX_VARI(  ::lime::graphics::Image,image) = ( ( ::lime::graphics::Image)(::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->image,id)) );
HXLINE( 380)				if (::lime::utils::Assets_obj::isValidImage(image)) {
HXLINE( 382)					return ::lime::app::Future_obj::withValue(image);
            				}
HXLINE( 376)				goto _hx_goto_15;
            			}
            			if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ||  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 388)				HX_VARI(  ::lime::media::AudioBuffer,audio) = ( ( ::lime::media::AudioBuffer)(::haxe::IMap_obj::get(::lime::utils::Assets_obj::cache->audio,id)) );
HXLINE( 390)				if (::lime::utils::Assets_obj::isValidAudio(audio)) {
HXLINE( 392)					return ::lime::app::Future_obj::withValue(audio);
            				}
HXLINE( 386)				goto _hx_goto_15;
            			}
            			if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 398)				HX_STACK_DO_THROW((HX_("Not sure how to get template: ",a1,19,8c,ad) + id));
HXDLIN( 398)				goto _hx_goto_15;
            			}
            			_hx_goto_15:;
            		}
HXLINE( 404)		HX_VAR( ::String,symbol_symbolName);
HXDLIN( 404)		HX_VAR( ::String,symbol_libraryName);
HXDLIN( 404)		HX_VAR(  ::lime::utils::AssetLibrary,symbol_library);
HXDLIN( 404)		HX_VARI( int,colonIndex) = id.indexOf(HX_(":",3a,00,00,00),null());
HXDLIN( 404)		symbol_libraryName = id.substring((int)0,colonIndex);
HXDLIN( 404)		symbol_symbolName = id.substring((colonIndex + (int)1),null());
HXDLIN( 404)		symbol_library = ::lime::utils::Assets_obj::getLibrary(symbol_libraryName);
HXLINE( 406)		if (hx::IsNotNull( symbol_library )) {
HXLINE( 408)			if (symbol_library->exists(symbol_symbolName,type)) {
HXLINE( 410)				HX_VARI(  ::lime::app::Future,future) = symbol_library->loadAsset(symbol_symbolName,type);
HXLINE( 412)				bool _hx_tmp1;
HXDLIN( 412)				if (useCache) {
HXLINE( 412)					_hx_tmp1 = ::lime::utils::Assets_obj::cache->enabled;
            				}
            				else {
HXLINE( 412)					_hx_tmp1 = false;
            				}
HXDLIN( 412)				if (_hx_tmp1) {
            					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,id,::String,type) HXARGC(1)
            					void _hx_run( ::Dynamic asset){
            						HX_STACKFRAME(&_hx_pos_df5754140b017d9f_414_loadAsset)
            						HX_STACK_ARG(asset,"asset")
HXLINE( 414)						::lime::utils::Assets_obj::cache->set(id,type,asset);
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 414)					future->onComplete( ::Dynamic(new _hx_Closure_0(id,type)));
            				}
HXLINE( 418)				return future;
            			}
            			else {
HXLINE( 422)				return ::lime::app::Future_obj::withError(((((HX_("[Assets] There is no ",46,99,ff,3e) + type) + HX_(" asset with an ID of \"",95,f2,3a,0d)) + id) + HX_("\"",22,00,00,00)));
            			}
            		}
            		else {
HXLINE( 428)			return ::lime::app::Future_obj::withError(((HX_("[Assets] There is no asset library named \"",a0,b4,0a,cd) + symbol_libraryName) + HX_("\"",22,00,00,00)));
            		}
HXLINE( 406)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,loadAsset,return )

 ::lime::app::Future Assets_obj::loadAudioBuffer(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_443_loadAudioBuffer)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 443)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("SOUND",af,c4,ba,fe),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadAudioBuffer,return )

 ::lime::app::Future Assets_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_450_loadBytes)
            	HX_STACK_ARG(id,"id")
HXLINE( 450)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("BINARY",01,68,8e,9f),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadBytes,return )

 ::lime::app::Future Assets_obj::loadFont(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_457_loadFont)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 457)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("FONT",cf,25,81,2e),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadFont,return )

 ::lime::app::Future Assets_obj::loadImage(::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_464_loadImage)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(useCache,"useCache")
HXLINE( 464)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("IMAGE",3b,57,57,3b),useCache);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,loadImage,return )

 ::lime::app::Future Assets_obj::loadLibrary(::String name){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run(::String data){
            			HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_475_loadLibrary)
            			HX_STACK_ARG(data,"data")
HXLINE( 478)			HX_VARI(  ::lime::utils::AssetManifest,manifest) = ::lime::utils::AssetManifest_obj::parse(data);
HXLINE( 480)			if (hx::IsNull( manifest )) {
HXLINE( 482)				promise->error(((HX_("[Assets] Cannot parse asset manifest for library \"",ce,e6,9e,49) + name) + HX_("\"",22,00,00,00)));
HXLINE( 483)				return;
            			}
HXLINE( 495)			HX_VARI(  ::lime::utils::AssetLibrary,library) = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 497)			if (hx::IsNull( library )) {
HXLINE( 499)				promise->error(((HX_("[Assets] Cannot open library \"",c3,ba,55,51) + name) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 503)				::lime::utils::Assets_obj::libraries->set(name,library);
HXLINE( 504)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 505)				 ::lime::app::Future _hx_tmp = library->load();
HXDLIN( 505)				promise->completeWith(_hx_tmp);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1,::String,name, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_511_loadLibrary)
            			HX_STACK_ARG(_,"_")
HXLINE( 511)			promise->error(((HX_("[Assets] There is no asset library named \"",a0,b4,0a,cd) + name) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_469_loadLibrary)
            	HX_STACK_ARG(name,"name")
HXLINE( 471)		HX_VARI(  ::lime::app::Promise_lime_utils_AssetLibrary,promise) =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 475)		::lime::utils::Assets_obj::loadText(((HX_("libraries/",f6,c5,4d,c0) + name) + HX_(".json",56,f1,d6,c2)))->onComplete( ::Dynamic(new _hx_Closure_0(name,promise)))->onError( ::Dynamic(new _hx_Closure_1(name,promise)));
HXLINE( 517)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadLibrary,return )

 ::lime::app::Future Assets_obj::loadText(::String id){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_524_loadText)
            	HX_STACK_ARG(id,"id")
HXLINE( 524)		return ::lime::utils::Assets_obj::loadAsset(id,HX_("TEXT",ad,94,ba,37),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,loadText,return )

void Assets_obj::registerLibrary(::String name, ::lime::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_529_registerLibrary)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(library,"library")
HXLINE( 531)		if (::lime::utils::Assets_obj::libraries->exists(name)) {
HXLINE( 533)			if (hx::IsEq( ::lime::utils::Assets_obj::libraries->get(name).StaticCast<  ::lime::utils::AssetLibrary >(),library )) {
HXLINE( 535)				return;
            			}
            			else {
HXLINE( 539)				::lime::utils::Assets_obj::unloadLibrary(name);
            			}
            		}
HXLINE( 545)		if (hx::IsNotNull( library )) {
HXLINE( 547)			library->onChange->add(::lime::utils::Assets_obj::library_onChange_dyn(),null(),null());
            		}
HXLINE( 551)		::lime::utils::Assets_obj::libraries->set(name,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,registerLibrary,(void))

void Assets_obj::unloadLibrary(::String name){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_556_unloadLibrary)
            	HX_STACK_ARG(name,"name")
HXLINE( 560)		HX_VARI(  ::lime::utils::AssetLibrary,library) = ::lime::utils::Assets_obj::libraries->get(name).StaticCast<  ::lime::utils::AssetLibrary >();
HXLINE( 562)		if (hx::IsNotNull( library )) {
HXLINE( 564)			::lime::utils::Assets_obj::cache->clear((name + HX_(":",3a,00,00,00)));
HXLINE( 565)			library->onChange->remove(::lime::utils::Assets_obj::library_onChange_dyn());
HXLINE( 566)			library->unload();
            		}
HXLINE( 570)		::lime::utils::Assets_obj::libraries->remove(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,unloadLibrary,(void))

void Assets_obj::library_onChange(){
            	HX_STACKFRAME(&_hx_pos_df5754140b017d9f_584_library_onChange)
HXLINE( 586)		::lime::utils::Assets_obj::cache->clear(null());
HXLINE( 587)		::lime::utils::Assets_obj::onChange->dispatch();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,library_onChange,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isLocal") ) { outValue = isLocal_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { outValue = onChange; return true; }
		if (HX_FIELD_EQ(inName,"getAsset") ) { outValue = getAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getImage") ) { outValue = getImage_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadFont") ) { outValue = loadFont_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadText") ) { outValue = loadText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { outValue = libraries; return true; }
		if (HX_FIELD_EQ(inName,"loadAsset") ) { outValue = loadAsset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadImage") ) { outValue = loadImage_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getLibrary") ) { outValue = getLibrary_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"loadLibrary") ) { outValue = loadLibrary_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isValidAudio") ) { outValue = isValidAudio_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isValidImage") ) { outValue = isValidImage_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unloadLibrary") ) { outValue = unloadLibrary_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { outValue = getAudioBuffer_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { outValue = loadAudioBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"registerLibrary") ) { outValue = registerLibrary_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"library_onChange") ) { outValue = library_onChange_dyn(); return true; }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast<  ::lime::utils::AssetCache >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=ioValue.Cast<  ::lime::app::_Event_Void_Void >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Assets_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Assets_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::AssetCache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::libraries,HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(void *) &Assets_obj::onChange,HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Assets_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_MARK_MEMBER_NAME(Assets_obj::onChange,"onChange");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Assets_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::libraries,"libraries");
	HX_VISIT_MEMBER_NAME(Assets_obj::onChange,"onChange");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String Assets_obj_sStaticFields[] = {
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getLibrary","\x05","\xad","\xd1","\x8e"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("isValidAudio","\xc4","\x0a","\xdf","\x47"),
	HX_HCSTRING("isValidImage","\x49","\xb1","\xc7","\xdd"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAsset","\xea","\xb5","\x70","\x41"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadFont","\x15","\x2f","\x60","\xb4"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadLibrary","\x75","\xe5","\x0d","\x10"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	HX_HCSTRING("registerLibrary","\xd8","\x8a","\x84","\xf2"),
	HX_HCSTRING("unloadLibrary","\xbc","\x5b","\x48","\x31"),
	HX_HCSTRING("library_onChange","\xf3","\x20","\x14","\xc8"),
	::String(null())
};

void Assets_obj::__register()
{
	hx::Object *dummy = new Assets_obj;
	Assets_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Assets","\x39","\x6e","\x7e","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = Assets_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Assets_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Assets_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_48_boot)
HXLINE(  48)		cache =  ::lime::utils::AssetCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_49_boot)
HXLINE(  49)		libraries =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_df5754140b017d9f_50_boot)
HXLINE(  50)		onChange =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace utils
