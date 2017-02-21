// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4056b9d72619ced0_357_new,"openfl.events._EventDispatcher.Listener","new",0x63be323b,"openfl.events._EventDispatcher.Listener.new","openfl/events/EventDispatcher.hx",357,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_4056b9d72619ced0_368_match,"openfl.events._EventDispatcher.Listener","match",0xdf4e17e0,"openfl.events._EventDispatcher.Listener.match","openfl/events/EventDispatcher.hx",368,0xe2270714)
namespace openfl{
namespace events{
namespace _EventDispatcher{

void Listener_obj::__construct( ::Dynamic callback,bool useCapture,int priority){
            	HX_STACKFRAME(&_hx_pos_4056b9d72619ced0_357_new)
HXLINE( 359)		this->callback = callback;
HXLINE( 360)		this->useCapture = useCapture;
HXLINE( 361)		this->priority = priority;
            	}

Dynamic Listener_obj::__CreateEmpty() { return new Listener_obj; }

void *Listener_obj::_hx_vtable = 0;

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Listener_obj > _hx_result = new Listener_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Listener_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c02fe3f;
}

bool Listener_obj::match( ::Dynamic callback,bool useCapture){
            	HX_STACKFRAME(&_hx_pos_4056b9d72619ced0_368_match)
HXLINE( 368)		if (::Reflect_obj::compareMethods(this->callback,callback)) {
HXLINE( 368)			return (this->useCapture == useCapture);
            		}
            		else {
HXLINE( 368)			return false;
            		}
HXDLIN( 368)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,match,return )


hx::ObjectPtr< Listener_obj > Listener_obj::__new( ::Dynamic callback,bool useCapture,int priority) {
	hx::ObjectPtr< Listener_obj > __this = new Listener_obj();
	__this->__construct(callback,useCapture,priority);
	return __this;
}

hx::ObjectPtr< Listener_obj > Listener_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic callback,bool useCapture,int priority) {
	Listener_obj *__this = (Listener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Listener_obj), true, "openfl.events._EventDispatcher.Listener"));
	*(void **)__this = Listener_obj::_hx_vtable;
	__this->__construct(callback,useCapture,priority);
	return __this;
}

Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(useCapture,"useCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(useCapture,"useCapture");
}

hx::Val Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return hx::Val( match_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback); }
		if (HX_FIELD_EQ(inName,"priority") ) { return hx::Val( priority); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { return hx::Val( useCapture); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Listener_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { useCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"));
	outFields->push(HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Listener_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Listener_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsInt,(int)offsetof(Listener_obj,priority),HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb")},
	{hx::fsBool,(int)offsetof(Listener_obj,useCapture),HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Listener_obj_sStaticStorageInfo = 0;
#endif

static ::String Listener_obj_sMemberFields[] = {
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("priority","\x64","\x7b","\x3e","\xbb"),
	HX_HCSTRING("useCapture","\xff","\xf2","\x04","\xaa"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	::String(null()) };

static void Listener_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Listener_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

hx::Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Object *dummy = new Listener_obj;
	Listener_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events._EventDispatcher.Listener","\xc9","\xf8","\x1b","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Listener_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Listener_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Listener_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Listener_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Listener_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher
