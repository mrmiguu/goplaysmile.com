// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_35_new,"lime.app.Preloader","new",0x922e2422,"lime.app.Preloader.new","lime/app/Preloader.hx",35,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_106_addLibrary,"lime.app.Preloader","addLibrary",0x179adb58,"lime.app.Preloader.addLibrary","lime/app/Preloader.hx",106,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_113_addLibraryName,"lime.app.Preloader","addLibraryName",0x8cc005c3,"lime.app.Preloader.addLibraryName","lime/app/Preloader.hx",113,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_122_create,"lime.app.Preloader","create",0x6b66587a,"lime.app.Preloader.create","lime/app/Preloader.hx",122,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_136_load,"lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",136,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_148_load,"lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",148,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_168_load,"lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",168,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_185_load,"lime.app.Preloader","load",0x54e69024,"lime.app.Preloader.load","lime/app/Preloader.hx",185,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_205_start,"lime.app.Preloader","start",0xfff3bca4,"lime.app.Preloader.start","lime/app/Preloader.hx",205,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_224_update,"lime.app.Preloader","update",0x765c7787,"lime.app.Preloader.update","lime/app/Preloader.hx",224,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_231_updateProgress,"lime.app.Preloader","updateProgress",0x07568a54,"lime.app.Preloader.updateProgress","lime/app/Preloader.hx",231,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_247_updateProgress,"lime.app.Preloader","updateProgress",0x07568a54,"lime.app.Preloader.updateProgress","lime/app/Preloader.hx",247,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_278_updateProgress,"lime.app.Preloader","updateProgress",0x07568a54,"lime.app.Preloader.updateProgress","lime/app/Preloader.hx",278,0xcf198510)
HX_DEFINE_STACK_FRAME(_hx_pos_cca4b94e0005514f_303_updateProgress,"lime.app.Preloader","updateProgress",0x07568a54,"lime.app.Preloader.updateProgress","lime/app/Preloader.hx",303,0xcf198510)
namespace lime{
namespace app{

void Preloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_cca4b94e0005514f_35_new)
            	HX_STACK_THIS(this)
HXLINE(  46)		this->bytesTotalCache =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  44)		this->bytesLoadedCache2 =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  43)		this->bytesLoadedCache =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->onProgress =  ::lime::app::_Event_Int_Int_Void_obj::__alloc( HX_CTX );
HXLINE(  39)		this->onComplete =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  61)		this->bytesLoaded = (int)0;
HXLINE(  62)		this->bytesTotal = (int)0;
HXLINE(  63)		this->libraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  64)		this->libraryNames = ::Array_obj< ::String >::__new();
HXLINE(  66)		this->onProgress->add(this->update_dyn(),null(),null());
            	}

Dynamic Preloader_obj::__CreateEmpty() { return new Preloader_obj; }

void *Preloader_obj::_hx_vtable = 0;

Dynamic Preloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Preloader_obj > _hx_result = new Preloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Preloader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x669a9732;
}

void Preloader_obj::addLibrary( ::lime::utils::AssetLibrary library){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_106_addLibrary)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(library,"library")
HXLINE( 106)		this->libraries->push(library);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibrary,(void))

void Preloader_obj::addLibraryName(::String name){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_113_addLibraryName)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE( 113)		if ((this->libraryNames->indexOf(name,null()) == (int)-1)) {
HXLINE( 115)			this->libraryNames->push(name);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,addLibraryName,(void))

void Preloader_obj::create( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_122_create)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(config,"config")
            	}


HX_DEFINE_DYNAMIC_FUNC1(Preloader_obj,create,(void))

void Preloader_obj::load(){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_136_load)
            	HX_STACK_THIS(this)
HXLINE( 136)		HX_VARI(  ::lime::app::Preloader,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE( 138)		{
HXLINE( 138)			HX_VARI( int,_g) = (int)0;
HXDLIN( 138)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->libraries;
HXDLIN( 138)			while((_g < _g1->length)){
HXLINE( 138)				HX_VARI(  ::lime::utils::AssetLibrary,library) = _g1->__get(_g).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 138)				_g = (_g + (int)1);
HXLINE( 140)				 ::lime::app::Preloader _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 140)				_hx_tmp->bytesTotal = (_hx_tmp->bytesTotal + library->bytesTotal);
            			}
            		}
HXLINE( 144)		this->loadedLibraries = (int)-1;
HXLINE( 146)		{
HXLINE( 146)			HX_VARI_NAME( int,_g2,"_g") = (int)0;
HXDLIN( 146)			HX_VARI_NAME( ::Array< ::Dynamic>,_g11,"_g1") = this->libraries;
HXDLIN( 146)			while((_g2 < _g11->length)){
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::lime::app::Preloader,_gthis, ::lime::utils::AssetLibrary,library1) HXARGC(2)
            				void _hx_run(int loaded,int total){
            					HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_148_load)
            					HX_STACK_ARG(loaded,"loaded")
            					HX_STACK_ARG(total,"total")
HXLINE( 150)					if (!(_gthis->bytesLoadedCache->exists(library1))) {
HXLINE( 152)						 ::lime::app::Preloader _gthis1 = _gthis;
HXDLIN( 152)						_gthis1->bytesLoaded = (_gthis1->bytesLoaded + loaded);
            					}
            					else {
HXLINE( 156)						 ::lime::app::Preloader _gthis2 = _gthis;
HXDLIN( 156)						int _gthis3 = _gthis2->bytesLoaded;
HXDLIN( 156)						_gthis2->bytesLoaded = (_gthis3 + (loaded - _gthis->bytesLoadedCache->get(library1)));
            					}
HXLINE( 160)					_gthis->bytesLoadedCache->set(library1,loaded);
HXLINE( 162)					if (!(_gthis->simulateProgress)) {
HXLINE( 164)						_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            					}
            				}
            				HX_END_LOCAL_FUNC2((void))

            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::lime::app::Preloader,_gthis, ::lime::utils::AssetLibrary,library1) HXARGC(1)
            				void _hx_run( ::lime::utils::AssetLibrary _){
            					HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_168_load)
            					HX_STACK_ARG(_,"_")
HXLINE( 170)					if (!(_gthis->bytesLoadedCache->exists(library1))) {
HXLINE( 172)						 ::lime::app::Preloader _gthis4 = _gthis;
HXDLIN( 172)						_gthis4->bytesLoaded = (_gthis4->bytesLoaded + library1->bytesTotal);
            					}
            					else {
HXLINE( 176)						 ::lime::app::Preloader _gthis5 = _gthis;
HXDLIN( 176)						int _gthis6 = _gthis5->bytesLoaded;
HXDLIN( 176)						HX_VARI_NAME( int,library2,"library") = library1->bytesTotal;
HXDLIN( 176)						_gthis5->bytesLoaded = (_gthis6 + (library2 - _gthis->bytesLoadedCache->get(library1)));
            					}
HXLINE( 180)					_gthis->loadedLibraries++;
HXLINE( 181)					_gthis->updateProgress();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            				void _hx_run( ::Dynamic e){
            					HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_185_load)
            					HX_STACK_ARG(e,"e")
HXLINE( 185)					::haxe::Log_obj::trace(e,hx::SourceInfo(HX_("Preloader.hx",28,58,3f,c7),185,HX_("lime.app.Preloader",30,2b,c5,4e),HX_("load",26,9a,b7,47)));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 146)				HX_VARI_NAME(  ::lime::utils::AssetLibrary,library1,"library") = _g11->__get(_g2).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN( 146)				_g2 = (_g2 + (int)1);
HXLINE( 148)				library1->load()->onProgress( ::Dynamic(new _hx_Closure_0(_gthis,library1)))->onComplete( ::Dynamic(new _hx_Closure_1(_gthis,library1)))->onError( ::Dynamic(new _hx_Closure_2()));
            			}
            		}
HXLINE( 193)		{
HXLINE( 193)			HX_VARI_NAME( int,_g3,"_g") = (int)0;
HXDLIN( 193)			HX_VARI_NAME( ::Array< ::String >,_g12,"_g1") = this->libraryNames;
HXDLIN( 193)			while((_g3 < _g12->length)){
HXLINE( 193)				_g3 = (_g3 + (int)1);
HXLINE( 195)				 ::lime::app::Preloader _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 195)				_hx_tmp1->bytesTotal = (_hx_tmp1->bytesTotal + (int)200);
            			}
            		}
HXLINE( 199)		this->loadedLibraries++;
HXLINE( 200)		this->updateProgress();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,load,(void))

void Preloader_obj::start(){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_205_start)
            	HX_STACK_THIS(this)
HXLINE( 207)		if (this->complete) {
HXLINE( 207)			return;
            		}
HXLINE( 209)		this->complete = true;
HXLINE( 219)		this->onComplete->dispatch();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,start,(void))

void Preloader_obj::update(int loaded,int total){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_224_update)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(loaded,"loaded")
            	HX_STACK_ARG(total,"total")
            	}


HX_DEFINE_DYNAMIC_FUNC2(Preloader_obj,update,(void))

void Preloader_obj::updateProgress(){
            	HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_231_updateProgress)
            	HX_STACK_THIS(this)
HXLINE( 231)		HX_VARI(  ::lime::app::Preloader,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE( 233)		if (!(this->simulateProgress)) {
HXLINE( 235)			this->onProgress->dispatch(this->bytesLoaded,this->bytesTotal);
            		}
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if ((this->loadedLibraries == this->libraries->length)) {
HXLINE( 239)			_hx_tmp = !(this->initLibraryNames);
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 241)			this->initLibraryNames = true;
HXLINE( 243)			{
HXLINE( 243)				HX_VARI( int,_g) = (int)0;
HXDLIN( 243)				HX_VARI( ::Array< ::String >,_g1) = this->libraryNames;
HXDLIN( 243)				while((_g < _g1->length)){
            					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0,::String,name, ::lime::app::Preloader,_gthis) HXARGC(2)
            					void _hx_run(int loaded,int total){
            						HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_247_updateProgress)
            						HX_STACK_ARG(loaded,"loaded")
            						HX_STACK_ARG(total,"total")
HXLINE( 247)						if ((total > (int)0)) {
HXLINE( 249)							if (!(_gthis->bytesTotalCache->exists(name))) {
HXLINE( 251)								_gthis->bytesTotalCache->set(name,total);
HXLINE( 252)								 ::lime::app::Preloader _gthis1 = _gthis;
HXDLIN( 252)								_gthis1->bytesTotal = (_gthis1->bytesTotal + (total - (int)200));
            							}
HXLINE( 256)							if ((loaded > total)) {
HXLINE( 256)								loaded = total;
            							}
HXLINE( 258)							if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 260)								 ::lime::app::Preloader _gthis2 = _gthis;
HXDLIN( 260)								_gthis2->bytesLoaded = (_gthis2->bytesLoaded + loaded);
            							}
            							else {
HXLINE( 264)								 ::lime::app::Preloader _gthis3 = _gthis;
HXDLIN( 264)								int _gthis4 = _gthis3->bytesLoaded;
HXDLIN( 264)								_gthis3->bytesLoaded = (_gthis4 + (loaded - _gthis->bytesLoadedCache2->get(name)));
            							}
HXLINE( 268)							_gthis->bytesLoadedCache2->set(name,loaded);
HXLINE( 270)							if (!(_gthis->simulateProgress)) {
HXLINE( 272)								_gthis->onProgress->dispatch(_gthis->bytesLoaded,_gthis->bytesTotal);
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC2((void))

            					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1,::String,name, ::lime::app::Preloader,_gthis) HXARGC(1)
            					void _hx_run( ::lime::utils::AssetLibrary library){
            						HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_278_updateProgress)
            						HX_STACK_ARG(library,"library")
HXLINE( 280)						HX_VARI_NAME( int,total1,"total") = (int)200;
HXLINE( 282)						if (_gthis->bytesTotalCache->exists(name)) {
HXLINE( 284)							total1 = ( (int)(_gthis->bytesTotalCache->get(name)) );
            						}
HXLINE( 288)						if (!(_gthis->bytesLoadedCache2->exists(name))) {
HXLINE( 290)							 ::lime::app::Preloader _gthis5 = _gthis;
HXDLIN( 290)							_gthis5->bytesLoaded = (_gthis5->bytesLoaded + total1);
            						}
            						else {
HXLINE( 294)							 ::lime::app::Preloader _gthis6 = _gthis;
HXDLIN( 294)							int _gthis7 = _gthis6->bytesLoaded;
HXDLIN( 294)							_gthis6->bytesLoaded = (_gthis7 + (total1 - _gthis->bytesLoadedCache2->get(name)));
            						}
HXLINE( 298)						_gthis->loadedLibraries++;
HXLINE( 299)						_gthis->updateProgress();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            					void _hx_run( ::Dynamic e){
            						HX_STACKFRAME(&_hx_pos_cca4b94e0005514f_303_updateProgress)
            						HX_STACK_ARG(e,"e")
HXLINE( 303)						::haxe::Log_obj::trace(e,hx::SourceInfo(HX_("Preloader.hx",28,58,3f,c7),303,HX_("lime.app.Preloader",30,2b,c5,4e),HX_("updateProgress",d6,ea,54,bb)));
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 243)					HX_VARI( ::String,name) = _g1->__get(_g);
HXDLIN( 243)					_g = (_g + (int)1);
HXLINE( 245)					::lime::utils::Assets_obj::loadLibrary(name)->onProgress( ::Dynamic(new _hx_Closure_0(name,_gthis)))->onComplete( ::Dynamic(new _hx_Closure_1(name,_gthis)))->onError( ::Dynamic(new _hx_Closure_2()));
            				}
            			}
            		}
HXLINE( 311)		bool _hx_tmp1;
HXDLIN( 311)		if (!(this->simulateProgress)) {
HXLINE( 311)			_hx_tmp1 = (this->loadedLibraries == (this->libraries->length + this->libraryNames->length));
            		}
            		else {
HXLINE( 311)			_hx_tmp1 = false;
            		}
HXDLIN( 311)		if (_hx_tmp1) {
HXLINE( 313)			this->start();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Preloader_obj,updateProgress,(void))


hx::ObjectPtr< Preloader_obj > Preloader_obj::__new() {
	hx::ObjectPtr< Preloader_obj > __this = new Preloader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Preloader_obj > Preloader_obj::__alloc(hx::Ctx *_hx_ctx) {
	Preloader_obj *__this = (Preloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Preloader_obj), true, "lime.app.Preloader"));
	*(void **)__this = Preloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Preloader_obj::Preloader_obj()
{
}

void Preloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Preloader);
	HX_MARK_MEMBER_NAME(complete,"complete");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_MARK_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_MARK_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_MARK_MEMBER_NAME(libraries,"libraries");
	HX_MARK_MEMBER_NAME(libraryNames,"libraryNames");
	HX_MARK_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_MARK_MEMBER_NAME(loadedStage,"loadedStage");
	HX_MARK_MEMBER_NAME(simulateProgress,"simulateProgress");
	HX_MARK_END_CLASS();
}

void Preloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(complete,"complete");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(onProgress,"onProgress");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache,"bytesLoadedCache");
	HX_VISIT_MEMBER_NAME(bytesLoadedCache2,"bytesLoadedCache2");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesTotalCache,"bytesTotalCache");
	HX_VISIT_MEMBER_NAME(initLibraryNames,"initLibraryNames");
	HX_VISIT_MEMBER_NAME(libraries,"libraries");
	HX_VISIT_MEMBER_NAME(libraryNames,"libraryNames");
	HX_VISIT_MEMBER_NAME(loadedLibraries,"loadedLibraries");
	HX_VISIT_MEMBER_NAME(loadedStage,"loadedStage");
	HX_VISIT_MEMBER_NAME(simulateProgress,"simulateProgress");
}

hx::Val Preloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { return hx::Val( libraries); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal); }
		if (HX_FIELD_EQ(inName,"addLibrary") ) { return hx::Val( addLibrary_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded); }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { return hx::Val( loadedStage); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { return hx::Val( libraryNames); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addLibraryName") ) { return hx::Val( addLibraryName_dyn()); }
		if (HX_FIELD_EQ(inName,"updateProgress") ) { return hx::Val( updateProgress_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { return hx::Val( bytesTotalCache); }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { return hx::Val( loadedLibraries); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { return hx::Val( bytesLoadedCache); }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { return hx::Val( initLibraryNames); }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { return hx::Val( simulateProgress); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { return hx::Val( bytesLoadedCache2); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Preloader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { complete=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"libraries") ) { libraries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast<  ::lime::app::_Event_Int_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedStage") ) { loadedStage=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"libraryNames") ) { libraryNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bytesTotalCache") ) { bytesTotalCache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loadedLibraries") ) { loadedLibraries=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache") ) { bytesLoadedCache=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initLibraryNames") ) { initLibraryNames=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"simulateProgress") ) { simulateProgress=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bytesLoadedCache2") ) { bytesLoadedCache2=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Preloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"));
	outFields->push(HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"));
	outFields->push(HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"));
	outFields->push(HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba"));
	outFields->push(HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2"));
	outFields->push(HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"));
	outFields->push(HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf"));
	outFields->push(HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f"));
	outFields->push(HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e"));
	outFields->push(HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Preloader_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Preloader_obj,complete),HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Preloader_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsObject /*::lime::app::_Event_Int_Int_Void*/ ,(int)offsetof(Preloader_obj,onProgress),HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63")},
	{hx::fsInt,(int)offsetof(Preloader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Preloader_obj,bytesLoadedCache),HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Preloader_obj,bytesLoadedCache2),HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49")},
	{hx::fsInt,(int)offsetof(Preloader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Preloader_obj,bytesTotalCache),HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba")},
	{hx::fsBool,(int)offsetof(Preloader_obj,initLibraryNames),HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Preloader_obj,libraries),HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Preloader_obj,libraryNames),HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf")},
	{hx::fsInt,(int)offsetof(Preloader_obj,loadedLibraries),HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f")},
	{hx::fsBool,(int)offsetof(Preloader_obj,loadedStage),HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e")},
	{hx::fsBool,(int)offsetof(Preloader_obj,simulateProgress),HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Preloader_obj_sStaticStorageInfo = 0;
#endif

static ::String Preloader_obj_sMemberFields[] = {
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesLoadedCache","\x52","\xf1","\x40","\x0f"),
	HX_HCSTRING("bytesLoadedCache2","\xa0","\x36","\x92","\x49"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("bytesTotalCache","\x29","\x70","\x4f","\xba"),
	HX_HCSTRING("initLibraryNames","\xfd","\x89","\xcd","\xd2"),
	HX_HCSTRING("libraries","\x19","\x50","\xf8","\x18"),
	HX_HCSTRING("libraryNames","\xcd","\xaa","\x8b","\xdf"),
	HX_HCSTRING("loadedLibraries","\x54","\x3f","\xa7","\x0f"),
	HX_HCSTRING("loadedStage","\x79","\x60","\x2d","\x7e"),
	HX_HCSTRING("simulateProgress","\x71","\x2f","\x7f","\xa6"),
	HX_HCSTRING("addLibrary","\xda","\x52","\xfa","\xa6"),
	HX_HCSTRING("addLibraryName","\x45","\x66","\xbe","\x40"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateProgress","\xd6","\xea","\x54","\xbb"),
	::String(null()) };

static void Preloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Preloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preloader_obj::__mClass,"__mClass");
};

#endif

hx::Class Preloader_obj::__mClass;

void Preloader_obj::__register()
{
	hx::Object *dummy = new Preloader_obj;
	Preloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Preloader","\x30","\x2b","\xc5","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Preloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Preloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Preloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Preloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Preloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Preloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app