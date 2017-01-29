// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_net_curl_CURLEasy
#include <lime/net/curl/CURLEasy.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_22_cleanup,"lime.net.curl.CURLEasy","cleanup",0xf4922b1c,"lime.net.curl.CURLEasy.cleanup","lime/net/curl/CURLEasy.hx",22,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_31_duphandle,"lime.net.curl.CURLEasy","duphandle",0xc88c719f,"lime.net.curl.CURLEasy.duphandle","lime/net/curl/CURLEasy.hx",31,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_42_escape,"lime.net.curl.CURLEasy","escape",0x85152b89,"lime.net.curl.CURLEasy.escape","lime/net/curl/CURLEasy.hx",42,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_53_getinfo,"lime.net.curl.CURLEasy","getinfo",0x76b4dafc,"lime.net.curl.CURLEasy.getinfo","lime/net/curl/CURLEasy.hx",53,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_64_init,"lime.net.curl.CURLEasy","init",0x7bee9118,"lime.net.curl.CURLEasy.init","lime/net/curl/CURLEasy.hx",64,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_75_pause,"lime.net.curl.CURLEasy","pause",0xf40fc7ee,"lime.net.curl.CURLEasy.pause","lime/net/curl/CURLEasy.hx",75,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_86_perform,"lime.net.curl.CURLEasy","perform",0xc42e0799,"lime.net.curl.CURLEasy.perform","lime/net/curl/CURLEasy.hx",86,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_108_reset,"lime.net.curl.CURLEasy","reset",0x1d803ac7,"lime.net.curl.CURLEasy.reset","lime/net/curl/CURLEasy.hx",108,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_125_setopt,"lime.net.curl.CURLEasy","setopt",0x19bf59d9,"lime.net.curl.CURLEasy.setopt","lime/net/curl/CURLEasy.hx",125,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_130_setopt,"lime.net.curl.CURLEasy","setopt",0x19bf59d9,"lime.net.curl.CURLEasy.setopt","lime/net/curl/CURLEasy.hx",130,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_144_strerror,"lime.net.curl.CURLEasy","strerror",0x6e06fb7f,"lime.net.curl.CURLEasy.strerror","lime/net/curl/CURLEasy.hx",144,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_155_unescape,"lime.net.curl.CURLEasy","unescape",0xb9ec6ca2,"lime.net.curl.CURLEasy.unescape","lime/net/curl/CURLEasy.hx",155,0x6bf34539)
HX_DEFINE_STACK_FRAME(_hx_pos_d826a4b3a161bf50_163___writeCallback,"lime.net.curl.CURLEasy","__writeCallback",0x87d6499c,"lime.net.curl.CURLEasy.__writeCallback","lime/net/curl/CURLEasy.hx",163,0x6bf34539)
namespace lime{
namespace net{
namespace curl{

void CURLEasy_obj::__construct() { }

Dynamic CURLEasy_obj::__CreateEmpty() { return new CURLEasy_obj; }

void *CURLEasy_obj::_hx_vtable = 0;

Dynamic CURLEasy_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CURLEasy_obj > _hx_result = new CURLEasy_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CURLEasy_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x328bddfe;
}

void CURLEasy_obj::cleanup(Float handle){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_22_cleanup)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  22)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_cleanup(handle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,cleanup,(void))

Float CURLEasy_obj::duphandle(Float handle){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_31_duphandle)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  31)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_duphandle(handle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,duphandle,return )

::String CURLEasy_obj::escape(Float handle,::String url,int length){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_42_escape)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(length,"length")
HXLINE(  42)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_escape(handle,url,length)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,escape,return )

 ::Dynamic CURLEasy_obj::getinfo(Float handle,int info){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_53_getinfo)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(info,"info")
HXLINE(  53)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_getinfo(handle,info)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,getinfo,return )

Float CURLEasy_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_64_init)
HXLINE(  64)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_init();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CURLEasy_obj,init,return )

int CURLEasy_obj::pause(Float handle,int bitMask){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_75_pause)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(bitMask,"bitMask")
HXLINE(  75)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_pause(handle,bitMask);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CURLEasy_obj,pause,return )

int CURLEasy_obj::perform(Float handle){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_86_perform)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  86)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_perform(handle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,perform,return )

void CURLEasy_obj::reset(Float handle){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_108_reset)
            	HX_STACK_ARG(handle,"handle")
HXLINE( 108)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_reset(handle);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,reset,(void))

int CURLEasy_obj::setopt(Float handle,int option, ::Dynamic parameter){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_125_setopt)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(option,"option")
            	HX_STACK_ARG(parameter,"parameter")
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if ((option != (int)20011)) {
HXLINE( 128)			_hx_tmp = (option == (int)20079);
            		}
            		else {
HXLINE( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,a1) HXARGC(3)
            			int _hx_run( ::Dynamic a2,int a3,int a4){
            				HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_130_setopt)
            				HX_STACK_ARG(a2,"a2")
            				HX_STACK_ARG(a3,"a3")
            				HX_STACK_ARG(a4,"a4")
HXLINE( 130)				return ::lime::net::curl::CURLEasy_obj::_hx___writeCallback(a1,a2,a3,a4);
            			}
            			HX_END_LOCAL_FUNC3(return)

HXLINE( 130)			 ::Dynamic a1 = parameter;
HXDLIN( 130)			parameter =  ::Dynamic(new _hx_Closure_0(a1));
            		}
HXLINE( 133)		return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_setopt(handle,option,hx::DynamicPtr(parameter));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CURLEasy_obj,setopt,return )

::String CURLEasy_obj::strerror(int code){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_144_strerror)
            	HX_STACK_ARG(code,"code")
HXLINE( 144)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_strerror(code)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CURLEasy_obj,strerror,return )

::String CURLEasy_obj::unescape(Float handle,::String url,int inLength,int outLength){
            	HX_STACKFRAME(&_hx_pos_d826a4b3a161bf50_155_unescape)
            	HX_STACK_ARG(handle,"handle")
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(inLength,"inLength")
            	HX_STACK_ARG(outLength,"outLength")
HXLINE( 155)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_curl_easy_unescape(handle,url,inLength,outLength)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,unescape,return )

int CURLEasy_obj::_hx___writeCallback( ::Dynamic callback, ::Dynamic output,int size,int nmemb){
            	HX_GC_STACKFRAME(&_hx_pos_d826a4b3a161bf50_163___writeCallback)
            	HX_STACK_ARG(callback,"callback")
            	HX_STACK_ARG(output,"output")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(nmemb,"nmemb")
HXLINE( 166)		HX_VARI(  ::haxe::io::Bytes,bytes) = null();
HXLINE( 168)		if (hx::IsNotNull( output )) {
HXLINE( 170)			bytes =  ::haxe::io::Bytes_obj::__alloc( HX_CTX , ::Dynamic(output->__Field(HX_("length",e6,94,07,9f),hx::paccDynamic)), ::Dynamic(output->__Field(HX_("b",62,00,00,00),hx::paccDynamic)));
            		}
HXLINE( 174)		return callback(bytes,size,nmemb);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(CURLEasy_obj,_hx___writeCallback,return )


CURLEasy_obj::CURLEasy_obj()
{
}

bool CURLEasy_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reset") ) { outValue = reset_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"escape") ) { outValue = escape_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setopt") ) { outValue = setopt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"cleanup") ) { outValue = cleanup_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getinfo") ) { outValue = getinfo_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"perform") ) { outValue = perform_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strerror") ) { outValue = strerror_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"unescape") ) { outValue = unescape_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"duphandle") ) { outValue = duphandle_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__writeCallback") ) { outValue = _hx___writeCallback_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CURLEasy_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CURLEasy_obj_sStaticStorageInfo = 0;
#endif

static void CURLEasy_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CURLEasy_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CURLEasy_obj::__mClass,"__mClass");
};

#endif

hx::Class CURLEasy_obj::__mClass;

static ::String CURLEasy_obj_sStaticFields[] = {
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("duphandle","\xa7","\xa4","\xbc","\x73"),
	HX_HCSTRING("escape","\x81","\x43","\xda","\xda"),
	HX_HCSTRING("getinfo","\x04","\xbc","\x64","\x2d"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("perform","\xa1","\xe8","\xdd","\x7a"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("setopt","\xd1","\x71","\x84","\x6f"),
	HX_HCSTRING("strerror","\x77","\x01","\x3c","\x91"),
	HX_HCSTRING("unescape","\x9a","\x72","\x21","\xdd"),
	HX_HCSTRING("__writeCallback","\xa4","\x72","\x5a","\xca"),
	::String(null())
};

void CURLEasy_obj::__register()
{
	hx::Object *dummy = new CURLEasy_obj;
	CURLEasy_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.curl.CURLEasy","\x66","\xc7","\x70","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CURLEasy_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CURLEasy_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CURLEasy_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CURLEasy_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CURLEasy_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CURLEasy_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CURLEasy_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
} // end namespace curl
