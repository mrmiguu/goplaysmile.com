// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__CapsStyle_CapsStyle_Impl_
#include <openfl/display/_CapsStyle/CapsStyle_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_12_fromString,"openfl.display._CapsStyle.CapsStyle_Impl_","fromString",0xfe761d8c,"openfl.display._CapsStyle.CapsStyle_Impl_.fromString","openfl/display/CapsStyle.hx",12,0x1f3162da)
HX_DEFINE_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_25_toString,"openfl.display._CapsStyle.CapsStyle_Impl_","toString",0xedfcc21d,"openfl.display._CapsStyle.CapsStyle_Impl_.toString","openfl/display/CapsStyle.hx",25,0x1f3162da)
HX_DEFINE_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_6_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",6,0x1f3162da)
HX_DEFINE_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_7_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",7,0x1f3162da)
HX_DEFINE_STACK_FRAME(_hx_pos_8e2965ce4f780c2f_8_boot,"openfl.display._CapsStyle.CapsStyle_Impl_","boot",0xb135a923,"openfl.display._CapsStyle.CapsStyle_Impl_.boot","openfl/display/CapsStyle.hx",8,0x1f3162da)
namespace openfl{
namespace display{
namespace _CapsStyle{

void CapsStyle_Impl__obj::__construct() { }

Dynamic CapsStyle_Impl__obj::__CreateEmpty() { return new CapsStyle_Impl__obj; }

void *CapsStyle_Impl__obj::_hx_vtable = 0;

Dynamic CapsStyle_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CapsStyle_Impl__obj > _hx_result = new CapsStyle_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CapsStyle_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cd0830d;
}

 ::Dynamic CapsStyle_Impl__obj::NONE;

 ::Dynamic CapsStyle_Impl__obj::ROUND;

 ::Dynamic CapsStyle_Impl__obj::SQUARE;

 ::Dynamic CapsStyle_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_12_fromString)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("round",4e,f8,65,ed)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("square",9d,00,f2,58)) ){
HXLINE(  12)			return (int)2;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,fromString,return )

::String CapsStyle_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_25_toString)
            	HX_STACK_ARG(value,"value")
HXLINE(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("none",b8,12,0a,49);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return HX_("round",4e,f8,65,ed);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return HX_("square",9d,00,f2,58);
            			}
            			break;
            			default:{
HXLINE(  25)				return null();
            			}
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CapsStyle_Impl__obj,toString,return )


CapsStyle_Impl__obj::CapsStyle_Impl__obj()
{
}

bool CapsStyle_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *CapsStyle_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CapsStyle_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::ROUND,HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CapsStyle_Impl__obj::SQUARE,HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CapsStyle_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_MARK_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CapsStyle_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::ROUND,"ROUND");
	HX_VISIT_MEMBER_NAME(CapsStyle_Impl__obj::SQUARE,"SQUARE");
};

#endif

hx::Class CapsStyle_Impl__obj::__mClass;

static ::String CapsStyle_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("ROUND","\x2e","\x30","\x54","\x6b"),
	HX_HCSTRING("SQUARE","\x9d","\xac","\x74","\x0b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void CapsStyle_Impl__obj::__register()
{
	hx::Object *dummy = new CapsStyle_Impl__obj;
	CapsStyle_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._CapsStyle.CapsStyle_Impl_","\x1d","\x61","\xee","\x43");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CapsStyle_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CapsStyle_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CapsStyle_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CapsStyle_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CapsStyle_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CapsStyle_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CapsStyle_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CapsStyle_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_6_boot)
HXLINE(   6)		NONE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_7_boot)
HXLINE(   7)		ROUND = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8e2965ce4f780c2f_8_boot)
HXLINE(   8)		SQUARE = (int)2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _CapsStyle
