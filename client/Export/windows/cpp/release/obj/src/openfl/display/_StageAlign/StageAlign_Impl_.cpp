// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif

namespace openfl{
namespace display{
namespace _StageAlign{

void StageAlign_Impl__obj::__construct() { }

Dynamic StageAlign_Impl__obj::__CreateEmpty() { return new StageAlign_Impl__obj; }

hx::ObjectPtr< StageAlign_Impl__obj > StageAlign_Impl__obj::__new()
{
	hx::ObjectPtr< StageAlign_Impl__obj > _hx_result = new StageAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StageAlign_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageAlign_Impl__obj > _hx_result = new StageAlign_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic StageAlign_Impl__obj::BOTTOM;

 ::Dynamic StageAlign_Impl__obj::BOTTOM_LEFT;

 ::Dynamic StageAlign_Impl__obj::BOTTOM_RIGHT;

 ::Dynamic StageAlign_Impl__obj::LEFT;

 ::Dynamic StageAlign_Impl__obj::RIGHT;

 ::Dynamic StageAlign_Impl__obj::TOP;

 ::Dynamic StageAlign_Impl__obj::TOP_LEFT;

 ::Dynamic StageAlign_Impl__obj::TOP_RIGHT;

 ::Dynamic StageAlign_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","fromString",0x4e30c8b0,"openfl.display._StageAlign.StageAlign_Impl_.fromString","openfl/display/StageAlign.hx",17,0x49ee790b)
            	HX_STACK_ARG(value,"value")
HXLINE(  17)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bottom",eb,e6,78,65)) ){
HXLINE(  17)			return (int)0;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bottomLeft",92,6c,97,2c)) ){
HXLINE(  17)			return (int)1;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bottomRight",f1,a0,f4,4e)) ){
HXLINE(  17)			return (int)2;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE(  17)			return (int)3;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  17)			return (int)4;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("top",95,66,58,00)) ){
HXLINE(  17)			return (int)5;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("topLeft",3c,09,c1,e8)) ){
HXLINE(  17)			return (int)6;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("topRight",07,19,34,37)) ){
HXLINE(  17)			return (int)7;
HXDLIN(  17)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  17)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  17)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,fromString,return )

::String StageAlign_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","toString",0xe3319c41,"openfl.display._StageAlign.StageAlign_Impl_.toString","openfl/display/StageAlign.hx",35,0x49ee790b)
            	HX_STACK_ARG(value,"value")
HXLINE(  35)		switch((int)(value)){
            			case (int)0: {
HXLINE(  35)				return HX_("bottom",eb,e6,78,65);
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				return HX_("bottomLeft",92,6c,97,2c);
            			}
            			break;
            			case (int)2: {
HXLINE(  35)				return HX_("bottomRight",f1,a0,f4,4e);
            			}
            			break;
            			case (int)3: {
HXLINE(  35)				return HX_("left",07,08,b0,47);
            			}
            			break;
            			case (int)4: {
HXLINE(  35)				return HX_("right",dc,0b,64,e9);
            			}
            			break;
            			case (int)5: {
HXLINE(  35)				return HX_("top",95,66,58,00);
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return HX_("topLeft",3c,09,c1,e8);
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				return HX_("topRight",07,19,34,37);
            			}
            			break;
            			default:{
HXLINE(  35)				return null();
            			}
            		}
HXDLIN(  35)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageAlign_Impl__obj,toString,return )


StageAlign_Impl__obj::StageAlign_Impl__obj()
{
}

bool StageAlign_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *StageAlign_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo StageAlign_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM,HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM_LEFT,HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::BOTTOM_RIGHT,HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP,HX_HCSTRING("TOP","\x75","\x02","\x40","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP_LEFT,HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageAlign_Impl__obj::TOP_RIGHT,HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StageAlign_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_MARK_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageAlign_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_LEFT,"BOTTOM_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::BOTTOM_RIGHT,"BOTTOM_RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_LEFT,"TOP_LEFT");
	HX_VISIT_MEMBER_NAME(StageAlign_Impl__obj::TOP_RIGHT,"TOP_RIGHT");
};

#endif

hx::Class StageAlign_Impl__obj::__mClass;

static ::String StageAlign_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("BOTTOM","\xeb","\x92","\xfb","\x17"),
	HX_HCSTRING("BOTTOM_LEFT","\x1b","\xe5","\x32","\x10"),
	HX_HCSTRING("BOTTOM_RIGHT","\x28","\xa0","\x62","\x93"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TOP","\x75","\x02","\x40","\x00"),
	HX_HCSTRING("TOP_LEFT","\x51","\xe1","\xbb","\x7b"),
	HX_HCSTRING("TOP_RIGHT","\x32","\x53","\xb6","\x3f"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void StageAlign_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageAlign.StageAlign_Impl_","\x79","\x5b","\xcd","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageAlign_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageAlign_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StageAlign_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageAlign_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageAlign_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageAlign_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageAlign_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageAlign_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",6,0x49ee790b)
HXLINE(   6)		BOTTOM = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",7,0x49ee790b)
HXLINE(   7)		BOTTOM_LEFT = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",8,0x49ee790b)
HXLINE(   8)		BOTTOM_RIGHT = (int)2;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",9,0x49ee790b)
HXLINE(   9)		LEFT = (int)3;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",10,0x49ee790b)
HXLINE(  10)		RIGHT = (int)4;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",11,0x49ee790b)
HXLINE(  11)		TOP = (int)5;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",12,0x49ee790b)
HXLINE(  12)		TOP_LEFT = (int)6;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageAlign.StageAlign_Impl_","boot",0xfaa1a147,"openfl.display._StageAlign.StageAlign_Impl_.boot","openfl/display/StageAlign.hx",13,0x49ee790b)
HXLINE(  13)		TOP_RIGHT = (int)7;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageAlign
