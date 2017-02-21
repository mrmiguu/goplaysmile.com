// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeHTTPRequest
#include <lime/_backend/native/NativeHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_95_new,"lime.net._HTTPRequest_Bytes","new",0xc45547d0,"lime.net._HTTPRequest_Bytes.new","lime/net/HTTPRequest.hx",95,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_102_fromBytes,"lime.net._HTTPRequest_Bytes","fromBytes",0x58799e11,"lime.net._HTTPRequest_Bytes.fromBytes","lime/net/HTTPRequest.hx",102,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_121_load,"lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",121,0x339db723)
HX_LOCAL_STACK_FRAME(_hx_pos_d0a88ab7a13f72d7_107_load,"lime.net._HTTPRequest_Bytes","load",0x04fea4b6,"lime.net._HTTPRequest_Bytes.load","lime/net/HTTPRequest.hx",107,0x339db723)
namespace lime{
namespace net{

void _HTTPRequest_Bytes_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_95_new)
HXLINE(  95)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_Bytes_obj::__CreateEmpty() { return new _HTTPRequest_Bytes_obj; }

void *_HTTPRequest_Bytes_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_Bytes_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _HTTPRequest_Bytes_obj > _hx_result = new _HTTPRequest_Bytes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_Bytes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x041f8278) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x041f8278;
	} else {
		return inClassId==(int)0x618df855;
	}
}

 ::Dynamic _HTTPRequest_Bytes_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_102_fromBytes)
HXLINE( 102)		return bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_HTTPRequest_Bytes_obj,fromBytes,return )

 ::lime::app::Future _HTTPRequest_Bytes_obj::load(::String uri){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::lime::net::_HTTPRequest_Bytes,_gthis, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_121_load)
HXLINE( 123)			_gthis->responseData = _gthis->fromBytes(bytes);
HXLINE( 124)			promise->complete(_gthis->responseData);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_d0a88ab7a13f72d7_107_load)
HXLINE( 107)		 ::lime::net::_HTTPRequest_Bytes _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 109)		if (hx::IsNotNull( uri )) {
HXLINE( 111)			this->uri = uri;
            		}
HXLINE( 115)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 116)		 ::lime::app::Future future = this->backend->loadData(this->uri,null());
HXLINE( 118)		future->onProgress(promise->progress_dyn());
HXLINE( 119)		future->onError(promise->error_dyn());
HXLINE( 121)		future->onComplete( ::Dynamic(new _hx_Closure_0(_gthis,promise)));
HXLINE( 128)		return promise->future;
            	}



hx::ObjectPtr< _HTTPRequest_Bytes_obj > _HTTPRequest_Bytes_obj::__new(::String uri) {
	hx::ObjectPtr< _HTTPRequest_Bytes_obj > __this = new _HTTPRequest_Bytes_obj();
	__this->__construct(uri);
	return __this;
}

hx::ObjectPtr< _HTTPRequest_Bytes_obj > _HTTPRequest_Bytes_obj::__alloc(hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_Bytes_obj *__this = (_HTTPRequest_Bytes_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_Bytes_obj), true, "lime.net._HTTPRequest_Bytes"));
	*(void **)__this = _HTTPRequest_Bytes_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_Bytes_obj::_HTTPRequest_Bytes_obj()
{
}

hx::Val _HTTPRequest_Bytes_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return hx::Val( fromBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *_HTTPRequest_Bytes_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *_HTTPRequest_Bytes_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_Bytes_obj_sMemberFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	::String(null()) };

static void _HTTPRequest_Bytes_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_HTTPRequest_Bytes_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _HTTPRequest_Bytes_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_Bytes_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_Bytes_obj::__mClass;

void _HTTPRequest_Bytes_obj::__register()
{
	hx::Object *dummy = new _HTTPRequest_Bytes_obj;
	_HTTPRequest_Bytes_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_Bytes","\xde","\x5f","\x09","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _HTTPRequest_Bytes_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_HTTPRequest_Bytes_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_Bytes_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _HTTPRequest_Bytes_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_Bytes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_Bytes_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
