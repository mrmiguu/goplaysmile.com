// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_openal__ALSource_ALSource_Impl_
#include <lime/audio/openal/_ALSource/ALSource_Impl_.h>
#endif

namespace lime{
namespace audio{
namespace openal{
namespace _ALSource{

void ALSource_Impl__obj::__construct() { }

Dynamic ALSource_Impl__obj::__CreateEmpty() { return new ALSource_Impl__obj; }

hx::ObjectPtr< ALSource_Impl__obj > ALSource_Impl__obj::__new()
{
	hx::ObjectPtr< ALSource_Impl__obj > _hx_result = new ALSource_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ALSource_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALSource_Impl__obj > _hx_result = new ALSource_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic ALSource_Impl__obj::_new( ::Dynamic handle){
            	HX_STACK_FRAME("lime.audio.openal._ALSource.ALSource_Impl_","_new",0x3a4da078,"lime.audio.openal._ALSource.ALSource_Impl_._new","lime/audio/openal/ALSource.hx",12,0xf64e0f91)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  12)		return handle;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALSource_Impl__obj,_new,return )


ALSource_Impl__obj::ALSource_Impl__obj()
{
}

bool ALSource_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ALSource_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ALSource_Impl__obj_sStaticStorageInfo = 0;
#endif

static void ALSource_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALSource_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALSource_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALSource_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ALSource_Impl__obj::__mClass;

static ::String ALSource_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ALSource_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.openal._ALSource.ALSource_Impl_","\xb7","\xac","\x3f","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALSource_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ALSource_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ALSource_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALSource_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALSource_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALSource_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALSource_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace audio
} // end namespace openal
} // end namespace _ALSource
