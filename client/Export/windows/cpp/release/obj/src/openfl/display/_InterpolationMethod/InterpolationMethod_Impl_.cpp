// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_
#include <openfl/display/_InterpolationMethod/InterpolationMethod_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_11_fromString,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","fromString",0x8e1d4c22,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.fromString","openfl/display/InterpolationMethod.hx",11,0x1fa1c725)
HX_DEFINE_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_23_toString,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","toString",0x7209ff33,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.toString","openfl/display/InterpolationMethod.hx",23,0x1fa1c725)
HX_DEFINE_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_6_boot,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","boot",0x602d2339,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.boot","openfl/display/InterpolationMethod.hx",6,0x1fa1c725)
HX_DEFINE_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_7_boot,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","boot",0x602d2339,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.boot","openfl/display/InterpolationMethod.hx",7,0x1fa1c725)
namespace openfl{
namespace display{
namespace _InterpolationMethod{

void InterpolationMethod_Impl__obj::__construct() { }

Dynamic InterpolationMethod_Impl__obj::__CreateEmpty() { return new InterpolationMethod_Impl__obj; }

void *InterpolationMethod_Impl__obj::_hx_vtable = 0;

Dynamic InterpolationMethod_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InterpolationMethod_Impl__obj > _hx_result = new InterpolationMethod_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InterpolationMethod_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x705fa56d;
}

 ::Dynamic InterpolationMethod_Impl__obj::LINEAR_RGB;

 ::Dynamic InterpolationMethod_Impl__obj::RGB;

 ::Dynamic InterpolationMethod_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_11_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  11)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("linearRGB",28,a2,44,d9)) ){
HXLINE(  11)			return (int)0;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("rgb",0d,db,56,00)) ){
HXLINE(  11)			return (int)1;
HXDLIN(  11)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  11)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  11)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,fromString,return )

::String InterpolationMethod_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_23_toString)
            	HX_STACK_ARG(value,"value")
HXLINE(  23)		switch((int)(value)){
            			case (int)0: {
HXLINE(  23)				return HX_("linearRGB",28,a2,44,d9);
            			}
            			break;
            			case (int)1: {
HXLINE(  23)				return HX_("rgb",0d,db,56,00);
            			}
            			break;
            			default:{
HXLINE(  23)				return null();
            			}
            		}
HXDLIN(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,toString,return )


InterpolationMethod_Impl__obj::InterpolationMethod_Impl__obj()
{
}

bool InterpolationMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *InterpolationMethod_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo InterpolationMethod_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &InterpolationMethod_Impl__obj::LINEAR_RGB,HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InterpolationMethod_Impl__obj::RGB,HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void InterpolationMethod_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InterpolationMethod_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#endif

hx::Class InterpolationMethod_Impl__obj::__mClass;

static ::String InterpolationMethod_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("LINEAR_RGB","\x53","\x10","\xb2","\x52"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void InterpolationMethod_Impl__obj::__register()
{
	hx::Object *dummy = new InterpolationMethod_Impl__obj;
	InterpolationMethod_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._InterpolationMethod.InterpolationMethod_Impl_","\xc7","\x1e","\x15","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InterpolationMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InterpolationMethod_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(InterpolationMethod_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< InterpolationMethod_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InterpolationMethod_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InterpolationMethod_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InterpolationMethod_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InterpolationMethod_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_6_boot)
HXLINE(   6)		LINEAR_RGB = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_7_boot)
HXLINE(   7)		RGB = (int)1;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _InterpolationMethod
