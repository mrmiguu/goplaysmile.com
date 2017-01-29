// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_utils_compress_LZMA
#include <lime/utils/compress/LZMA.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_68d4b449d54d9a89_28_compress,"lime.utils.compress.LZMA","compress",0xfe03fbf8,"lime.utils.compress.LZMA.compress","lime/utils/compress/LZMA.hx",28,0x3a5f97c7)
HX_DEFINE_STACK_FRAME(_hx_pos_68d4b449d54d9a89_59_decompress,"lime.utils.compress.LZMA","decompress",0xf62f7df9,"lime.utils.compress.LZMA.decompress","lime/utils/compress/LZMA.hx",59,0x3a5f97c7)
namespace lime{
namespace utils{
namespace compress{

void LZMA_obj::__construct() { }

Dynamic LZMA_obj::__CreateEmpty() { return new LZMA_obj; }

void *LZMA_obj::_hx_vtable = 0;

Dynamic LZMA_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LZMA_obj > _hx_result = new LZMA_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LZMA_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69a0af1c;
}

 ::haxe::io::Bytes LZMA_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_68d4b449d54d9a89_28_compress)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  28)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  28)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_compress(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,compress,return )

 ::haxe::io::Bytes LZMA_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_68d4b449d54d9a89_59_decompress)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  59)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  59)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_lzma_decompress(hx::DynamicPtr(bytes),hx::DynamicPtr(bytes1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LZMA_obj,decompress,return )


LZMA_obj::LZMA_obj()
{
}

bool LZMA_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LZMA_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LZMA_obj_sStaticStorageInfo = 0;
#endif

static void LZMA_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LZMA_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LZMA_obj::__mClass,"__mClass");
};

#endif

hx::Class LZMA_obj::__mClass;

static ::String LZMA_obj_sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	::String(null())
};

void LZMA_obj::__register()
{
	hx::Object *dummy = new LZMA_obj;
	LZMA_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.LZMA","\xd8","\x8e","\x8f","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LZMA_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LZMA_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LZMA_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LZMA_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LZMA_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LZMA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LZMA_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
