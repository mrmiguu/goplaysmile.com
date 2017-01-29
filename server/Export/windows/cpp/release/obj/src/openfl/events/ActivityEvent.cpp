// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_12_new,"openfl.events.ActivityEvent","new",0x259c5826,"openfl.events.ActivityEvent.new","openfl/events/ActivityEvent.hx",12,0x98f9202a)
HX_DEFINE_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_21_clone,"openfl.events.ActivityEvent","clone",0xb6b198a3,"openfl.events.ActivityEvent.clone","openfl/events/ActivityEvent.hx",21,0x98f9202a)
HX_DEFINE_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_34_toString,"openfl.events.ActivityEvent","toString",0x46865b26,"openfl.events.ActivityEvent.toString","openfl/events/ActivityEvent.hx",34,0x98f9202a)
static const ::String _hx_array_data_a0800d34_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("activating",b0,17,b4,bd),
};
HX_DEFINE_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_7_boot,"openfl.events.ActivityEvent","boot",0xbb49c9ac,"openfl.events.ActivityEvent.boot","openfl/events/ActivityEvent.hx",7,0x98f9202a)
namespace openfl{
namespace events{

void ActivityEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool activating = __o_activating.Default(false);
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_12_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(activating,"activating")
HXLINE(  14)		super::__construct(type,bubbles,cancelable);
HXLINE(  16)		this->activating = activating;
            	}

Dynamic ActivityEvent_obj::__CreateEmpty() { return new ActivityEvent_obj; }

void *ActivityEvent_obj::_hx_vtable = 0;

Dynamic ActivityEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ActivityEvent_obj > _hx_result = new ActivityEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ActivityEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3243040d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3243040d;
	} else {
		return inClassId==(int)0x39a2f9a2;
	}
}

 ::openfl::events::Event ActivityEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_21_clone)
            	HX_STACK_THIS(this)
HXLINE(  23)		HX_VARI(  ::openfl::events::ActivityEvent,event) =  ::openfl::events::ActivityEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->activating);
HXLINE(  24)		event->target = this->target;
HXLINE(  25)		event->currentTarget = this->currentTarget;
HXLINE(  26)		event->eventPhase = this->eventPhase;
HXLINE(  27)		return event;
            	}


::String ActivityEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_34_toString)
            	HX_STACK_THIS(this)
HXLINE(  34)		return this->_hx___formatToString(HX_("ActivityEvent",ab,eb,0c,59),::Array_obj< ::String >::fromData( _hx_array_data_a0800d34_3,4));
            	}


::String ActivityEvent_obj::ACTIVITY;


hx::ObjectPtr< ActivityEvent_obj > ActivityEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating) {
	hx::ObjectPtr< ActivityEvent_obj > __this = new ActivityEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_activating);
	return __this;
}

hx::ObjectPtr< ActivityEvent_obj > ActivityEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< bool >  __o_activating) {
	ActivityEvent_obj *__this = (ActivityEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ActivityEvent_obj), true, "openfl.events.ActivityEvent"));
	*(void **)__this = ActivityEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_activating);
	return __this;
}

ActivityEvent_obj::ActivityEvent_obj()
{
}

hx::Val ActivityEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { return hx::Val( activating); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ActivityEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { activating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActivityEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ActivityEvent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ActivityEvent_obj,activating),HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ActivityEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ActivityEvent_obj::ACTIVITY,HX_HCSTRING("ACTIVITY","\xcf","\xbd","\x37","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ActivityEvent_obj_sMemberFields[] = {
	HX_HCSTRING("activating","\xb0","\x17","\xb4","\xbd"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void ActivityEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActivityEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActivityEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActivityEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#endif

hx::Class ActivityEvent_obj::__mClass;

static ::String ActivityEvent_obj_sStaticFields[] = {
	HX_HCSTRING("ACTIVITY","\xcf","\xbd","\x37","\x3f"),
	::String(null())
};

void ActivityEvent_obj::__register()
{
	hx::Object *dummy = new ActivityEvent_obj;
	ActivityEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.ActivityEvent","\x34","\x0d","\x80","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ActivityEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ActivityEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ActivityEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ActivityEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActivityEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActivityEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActivityEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ActivityEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_7_boot)
HXLINE(   7)		ACTIVITY = HX_("activity",cf,2d,b2,e5);
            	}
}

} // end namespace openfl
} // end namespace events
