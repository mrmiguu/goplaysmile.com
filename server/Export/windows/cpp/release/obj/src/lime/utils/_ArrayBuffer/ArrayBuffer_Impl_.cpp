// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_
#include <lime/utils/_ArrayBuffer/ArrayBuffer_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0c0adae4738ab368_13__new,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_","_new",0x3fa42e74,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_._new","lime/utils/ArrayBuffer.hx",13,0x9f41eedd)
namespace lime{
namespace utils{
namespace _ArrayBuffer{

void ArrayBuffer_Impl__obj::__construct() { }

Dynamic ArrayBuffer_Impl__obj::__CreateEmpty() { return new ArrayBuffer_Impl__obj; }

void *ArrayBuffer_Impl__obj::_hx_vtable = 0;

Dynamic ArrayBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayBuffer_Impl__obj > _hx_result = new ArrayBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07bd9007;
}

 ::haxe::io::Bytes ArrayBuffer_Impl__obj::_new(int byteLength){
            	HX_STACKFRAME(&_hx_pos_0c0adae4738ab368_13__new)
            	HX_STACK_ARG(byteLength,"byteLength")
HXLINE(  13)		return ::haxe::io::Bytes_obj::alloc(byteLength);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,_new,return )


ArrayBuffer_Impl__obj::ArrayBuffer_Impl__obj()
{
}

bool ArrayBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArrayBuffer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArrayBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

static void ArrayBuffer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayBuffer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayBuffer_Impl__obj::__mClass;

static ::String ArrayBuffer_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ArrayBuffer_Impl__obj::__register()
{
	hx::Object *dummy = new ArrayBuffer_Impl__obj;
	ArrayBuffer_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._ArrayBuffer.ArrayBuffer_Impl_","\x3b","\xe0","\xeb","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayBuffer_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArrayBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBuffer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayBuffer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBuffer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _ArrayBuffer
