// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_87aa2d206f2b4265_16_flush,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","flush",0x2a892755,"lime.graphics.cairo._CairoSurface.CairoSurface_Impl_.flush","lime/graphics/cairo/CairoSurface.hx",16,0x58ce1be8)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoSurface{

void CairoSurface_Impl__obj::__construct() { }

Dynamic CairoSurface_Impl__obj::__CreateEmpty() { return new CairoSurface_Impl__obj; }

void *CairoSurface_Impl__obj::_hx_vtable = 0;

Dynamic CairoSurface_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoSurface_Impl__obj > _hx_result = new CairoSurface_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoSurface_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b9a0b05;
}

void CairoSurface_Impl__obj::flush( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_87aa2d206f2b4265_16_flush)
HXLINE(  16)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_surface_flush(hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoSurface_Impl__obj,flush,(void))


CairoSurface_Impl__obj::CairoSurface_Impl__obj()
{
}

bool CairoSurface_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { outValue = flush_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoSurface_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoSurface_Impl__obj_sStaticStorageInfo = 0;
#endif

static void CairoSurface_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoSurface_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoSurface_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CairoSurface_Impl__obj::__mClass;

static ::String CairoSurface_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	::String(null())
};

void CairoSurface_Impl__obj::__register()
{
	hx::Object *dummy = new CairoSurface_Impl__obj;
	CairoSurface_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoSurface.CairoSurface_Impl_","\x3f","\x72","\x19","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoSurface_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoSurface_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoSurface_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoSurface_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoSurface_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoSurface_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoSurface_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoSurface
