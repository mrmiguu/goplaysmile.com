// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IOError
#include <openfl/errors/IOError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f56cae0bb14fb04e_7_new,"openfl.errors.IOError","new",0xdfaba8cf,"openfl.errors.IOError.new","openfl/errors/IOError.hx",7,0x640bffa1)
namespace openfl{
namespace errors{

void IOError_obj::__construct(::String __o_message){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_f56cae0bb14fb04e_7_new)
HXLINE(   9)		super::__construct(message,null());
HXLINE(  11)		this->name = HX_("IOError",02,9a,27,78);
            	}

Dynamic IOError_obj::__CreateEmpty() { return new IOError_obj; }

void *IOError_obj::_hx_vtable = 0;

Dynamic IOError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IOError_obj > _hx_result = new IOError_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IOError_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fc85c4d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fc85c4d;
	} else {
		return inClassId==(int)0x382d061f;
	}
}


hx::ObjectPtr< IOError_obj > IOError_obj::__new(::String __o_message) {
	hx::ObjectPtr< IOError_obj > __this = new IOError_obj();
	__this->__construct(__o_message);
	return __this;
}

hx::ObjectPtr< IOError_obj > IOError_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_message) {
	IOError_obj *__this = (IOError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IOError_obj), true, "openfl.errors.IOError"));
	*(void **)__this = IOError_obj::_hx_vtable;
	__this->__construct(__o_message);
	return __this;
}

IOError_obj::IOError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IOError_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IOError_obj_sStaticStorageInfo = 0;
#endif

static void IOError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IOError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IOError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IOError_obj::__mClass,"__mClass");
};

#endif

hx::Class IOError_obj::__mClass;

void IOError_obj::__register()
{
	hx::Object *dummy = new IOError_obj;
	IOError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.errors.IOError","\x5d","\x95","\xbd","\x5d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IOError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IOError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IOError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IOError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IOError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace errors
