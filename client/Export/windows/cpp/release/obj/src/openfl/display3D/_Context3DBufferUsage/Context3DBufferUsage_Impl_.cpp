// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_02fecb2b926e493f_12_fromString,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","fromString",0xbc8bc5e1,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.fromString","openfl/display3D/Context3DBufferUsage.hx",12,0x57541062)
HX_LOCAL_STACK_FRAME(_hx_pos_02fecb2b926e493f_24_toString,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","toString",0xe8f23b32,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.toString","openfl/display3D/Context3DBufferUsage.hx",24,0x57541062)
HX_LOCAL_STACK_FRAME(_hx_pos_02fecb2b926e493f_7_boot,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","boot",0x95a9b3b8,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.boot","openfl/display3D/Context3DBufferUsage.hx",7,0x57541062)
HX_LOCAL_STACK_FRAME(_hx_pos_02fecb2b926e493f_8_boot,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","boot",0x95a9b3b8,"openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_.boot","openfl/display3D/Context3DBufferUsage.hx",8,0x57541062)
namespace openfl{
namespace display3D{
namespace _Context3DBufferUsage{

void Context3DBufferUsage_Impl__obj::__construct() { }

Dynamic Context3DBufferUsage_Impl__obj::__CreateEmpty() { return new Context3DBufferUsage_Impl__obj; }

void *Context3DBufferUsage_Impl__obj::_hx_vtable = 0;

Dynamic Context3DBufferUsage_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Context3DBufferUsage_Impl__obj > _hx_result = new Context3DBufferUsage_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DBufferUsage_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3108c5a2;
}

 ::Dynamic Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW;

 ::Dynamic Context3DBufferUsage_Impl__obj::STATIC_DRAW;

 ::Dynamic Context3DBufferUsage_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_02fecb2b926e493f_12_fromString)
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("dynamicDraw",23,23,fe,67)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("staticDraw",d2,23,1c,a4)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBufferUsage_Impl__obj,fromString,return )

::String Context3DBufferUsage_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_02fecb2b926e493f_24_toString)
HXLINE(  24)		switch((int)(value)){
            			case (int)0: {
HXLINE(  24)				return HX_("dynamicDraw",23,23,fe,67);
            			}
            			break;
            			case (int)1: {
HXLINE(  24)				return HX_("staticDraw",d2,23,1c,a4);
            			}
            			break;
            			default:{
HXLINE(  24)				return null();
            			}
            		}
HXDLIN(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DBufferUsage_Impl__obj,toString,return )


Context3DBufferUsage_Impl__obj::Context3DBufferUsage_Impl__obj()
{
}

bool Context3DBufferUsage_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Context3DBufferUsage_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Context3DBufferUsage_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DBufferUsage_Impl__obj::STATIC_DRAW,HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Context3DBufferUsage_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_Impl__obj::STATIC_DRAW,"STATIC_DRAW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DBufferUsage_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_Impl__obj::STATIC_DRAW,"STATIC_DRAW");
};

#endif

hx::Class Context3DBufferUsage_Impl__obj::__mClass;

static ::String Context3DBufferUsage_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void Context3DBufferUsage_Impl__obj::__register()
{
	hx::Object *dummy = new Context3DBufferUsage_Impl__obj;
	Context3DBufferUsage_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DBufferUsage.Context3DBufferUsage_Impl_","\xa8","\x5e","\xc0","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DBufferUsage_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DBufferUsage_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Context3DBufferUsage_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DBufferUsage_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DBufferUsage_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DBufferUsage_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DBufferUsage_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DBufferUsage_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_02fecb2b926e493f_7_boot)
HXLINE(   7)		DYNAMIC_DRAW = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_02fecb2b926e493f_8_boot)
HXLINE(   8)		STATIC_DRAW = (int)1;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBufferUsage
