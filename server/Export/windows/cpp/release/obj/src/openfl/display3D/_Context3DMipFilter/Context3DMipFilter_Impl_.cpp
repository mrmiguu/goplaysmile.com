// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DMipFilter_Context3DMipFilter_Impl_
#include <openfl/display3D/_Context3DMipFilter/Context3DMipFilter_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21404597055dc685_13_fromString,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","fromString",0x2c85cd41,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.fromString","openfl/display3D/Context3DMipFilter.hx",13,0xd6fc0d97)
HX_DEFINE_STACK_FRAME(_hx_pos_21404597055dc685_26_toString,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","toString",0x68a9aa92,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.toString","openfl/display3D/Context3DMipFilter.hx",26,0xd6fc0d97)
HX_DEFINE_STACK_FRAME(_hx_pos_21404597055dc685_7_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",7,0xd6fc0d97)
HX_DEFINE_STACK_FRAME(_hx_pos_21404597055dc685_8_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",8,0xd6fc0d97)
HX_DEFINE_STACK_FRAME(_hx_pos_21404597055dc685_9_boot,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","boot",0x265df318,"openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_.boot","openfl/display3D/Context3DMipFilter.hx",9,0xd6fc0d97)
namespace openfl{
namespace display3D{
namespace _Context3DMipFilter{

void Context3DMipFilter_Impl__obj::__construct() { }

Dynamic Context3DMipFilter_Impl__obj::__CreateEmpty() { return new Context3DMipFilter_Impl__obj; }

void *Context3DMipFilter_Impl__obj::_hx_vtable = 0;

Dynamic Context3DMipFilter_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DMipFilter_Impl__obj > _hx_result = new Context3DMipFilter_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DMipFilter_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ec7ffd4;
}

 ::Dynamic Context3DMipFilter_Impl__obj::MIPLINEAR;

 ::Dynamic Context3DMipFilter_Impl__obj::MIPNEAREST;

 ::Dynamic Context3DMipFilter_Impl__obj::MIPNONE;

 ::Dynamic Context3DMipFilter_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_13_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  13)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("miplinear",79,ca,7e,64)) ){
HXLINE(  13)			return (int)0;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mipnearest",4a,21,95,d0)) ){
HXLINE(  13)			return (int)1;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mipnone",4c,7e,07,76)) ){
HXLINE(  13)			return (int)2;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  13)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,fromString,return )

::String Context3DMipFilter_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_26_toString)
            	HX_STACK_ARG(value,"value")
HXLINE(  26)		switch((int)(value)){
            			case (int)0: {
HXLINE(  26)				return HX_("miplinear",79,ca,7e,64);
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return HX_("mipnearest",4a,21,95,d0);
            			}
            			break;
            			case (int)2: {
HXLINE(  26)				return HX_("mipnone",4c,7e,07,76);
            			}
            			break;
            			default:{
HXLINE(  26)				return null();
            			}
            		}
HXDLIN(  26)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DMipFilter_Impl__obj,toString,return )


Context3DMipFilter_Impl__obj::Context3DMipFilter_Impl__obj()
{
}

bool Context3DMipFilter_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Context3DMipFilter_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DMipFilter_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPLINEAR,HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPNEAREST,HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DMipFilter_Impl__obj::MIPNONE,HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DMipFilter_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_MARK_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DMipFilter_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPLINEAR,"MIPLINEAR");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNEAREST,"MIPNEAREST");
	HX_VISIT_MEMBER_NAME(Context3DMipFilter_Impl__obj::MIPNONE,"MIPNONE");
};

#endif

hx::Class Context3DMipFilter_Impl__obj::__mClass;

static ::String Context3DMipFilter_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("MIPLINEAR","\x59","\x3a","\xd7","\x5f"),
	HX_HCSTRING("MIPNEAREST","\x4a","\x95","\x9e","\xc2"),
	HX_HCSTRING("MIPNONE","\x2c","\x52","\xdb","\xf5"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DMipFilter_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DMipFilter_Impl__obj;
	Context3DMipFilter_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DMipFilter.Context3DMipFilter_Impl_","\x48","\x5b","\x34","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DMipFilter_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DMipFilter_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DMipFilter_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DMipFilter_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DMipFilter_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DMipFilter_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DMipFilter_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DMipFilter_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_7_boot)
HXLINE(   7)		MIPLINEAR = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_8_boot)
HXLINE(   8)		MIPNEAREST = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_21404597055dc685_9_boot)
HXLINE(   9)		MIPNONE = (int)2;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DMipFilter
