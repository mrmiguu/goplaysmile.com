// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_42_get_text,"lime.system.Clipboard","get_text",0xe647e374,"lime.system.Clipboard.get_text","lime/system/Clipboard.hx",42,0x9490b5ee)
HX_LOCAL_STACK_FRAME(_hx_pos_21630ac4203d4998_58_set_text,"lime.system.Clipboard","set_text",0x94a53ce8,"lime.system.Clipboard.set_text","lime/system/Clipboard.hx",58,0x9490b5ee)
namespace lime{
namespace _hx_system{

void Clipboard_obj::__construct() { }

Dynamic Clipboard_obj::__CreateEmpty() { return new Clipboard_obj; }

void *Clipboard_obj::_hx_vtable = 0;

Dynamic Clipboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Clipboard_obj > _hx_result = new Clipboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Clipboard_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c11bbb2;
}

::String Clipboard_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_42_get_text)
HXLINE(  42)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_get_text()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Clipboard_obj,get_text,return )

::String Clipboard_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_21630ac4203d4998_58_set_text)
HXLINE(  61)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_clipboard_set_text(value);
HXLINE(  62)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Clipboard_obj,set_text,return )


Clipboard_obj::Clipboard_obj()
{
}

bool Clipboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) { outValue = get_text(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { outValue = get_text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_text") ) { outValue = set_text_dyn(); return true; }
	}
	return false;
}

bool Clipboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways)  ioValue = set_text(ioValue); }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Clipboard_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Clipboard_obj_sStaticStorageInfo = 0;
#endif

static void Clipboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Clipboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Clipboard_obj::__mClass,"__mClass");
};

#endif

hx::Class Clipboard_obj::__mClass;

static ::String Clipboard_obj_sStaticFields[] = {
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null())
};

void Clipboard_obj::__register()
{
	hx::Object *dummy = new Clipboard_obj;
	Clipboard_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Clipboard","\xf0","\x64","\x51","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Clipboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Clipboard_obj::__SetStatic;
	__mClass->mMarkFunc = Clipboard_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Clipboard_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Clipboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Clipboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Clipboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Clipboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
