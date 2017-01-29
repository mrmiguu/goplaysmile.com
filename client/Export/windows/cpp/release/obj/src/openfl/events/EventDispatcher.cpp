// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_25_new,"openfl.events.EventDispatcher","new",0xd41245fc,"openfl.events.EventDispatcher.new","openfl/events/EventDispatcher.hx",25,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_34_addEventListener,"openfl.events.EventDispatcher","addEventListener",0xf79f44b1,"openfl.events.EventDispatcher.addEventListener","openfl/events/EventDispatcher.hx",34,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_85_dispatchEvent,"openfl.events.EventDispatcher","dispatchEvent",0x2230d79c,"openfl.events.EventDispatcher.dispatchEvent","openfl/events/EventDispatcher.hx",85,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_102_hasEventListener,"openfl.events.EventDispatcher","hasEventListener",0x132567d8,"openfl.events.EventDispatcher.hasEventListener","openfl/events/EventDispatcher.hx",102,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_111_removeEventListener,"openfl.events.EventDispatcher","removeEventListener",0x40c1f566,"openfl.events.EventDispatcher.removeEventListener","openfl/events/EventDispatcher.hx",111,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_154_toString,"openfl.events.EventDispatcher","toString",0x34d48590,"openfl.events.EventDispatcher.toString","openfl/events/EventDispatcher.hx",154,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_166_willTrigger,"openfl.events.EventDispatcher","willTrigger",0x7a1765e2,"openfl.events.EventDispatcher.willTrigger","openfl/events/EventDispatcher.hx",166,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_171___dispatchEvent,"openfl.events.EventDispatcher","__dispatchEvent",0x417d6f7c,"openfl.events.EventDispatcher.__dispatchEvent","openfl/events/EventDispatcher.hx",171,0xe2270714)
HX_DEFINE_STACK_FRAME(_hx_pos_e38539b7b6ad7309_243___sortByPriority,"openfl.events.EventDispatcher","__sortByPriority",0x7512cd5d,"openfl.events.EventDispatcher.__sortByPriority","openfl/events/EventDispatcher.hx",243,0xe2270714)
namespace openfl{
namespace events{

void EventDispatcher_obj::__construct(::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_25_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
HXLINE(  25)		if (hx::IsNotNull( target )) {
HXLINE(  27)			this->_hx___targetDispatcher = target;
            		}
            	}

Dynamic EventDispatcher_obj::__CreateEmpty() { return new EventDispatcher_obj; }

void *EventDispatcher_obj::_hx_vtable = 0;

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EventDispatcher_obj > _hx_result = new EventDispatcher_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EventDispatcher_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b123bf8;
}

static ::openfl::events::IEventDispatcher_obj _hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher= {
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< bool > ,hx::Null< int > ,hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::addEventListener,
	( bool (hx::Object::*)( ::openfl::events::Event))&::openfl::events::EventDispatcher_obj::dispatchEvent,
	( bool (hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::hasEventListener,
	( void (hx::Object::*)(::String, ::Dynamic,hx::Null< bool > ))&::openfl::events::EventDispatcher_obj::removeEventListener,
	( bool (hx::Object::*)(::String))&::openfl::events::EventDispatcher_obj::willTrigger,
};

void *EventDispatcher_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_openfl_events_EventDispatcher__hx_openfl_events_IEventDispatcher;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void EventDispatcher_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_34_addEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  36)		if (hx::IsNull( listener )) {
HXLINE(  36)			return;
            		}
HXLINE(  38)		if (hx::IsNull( this->_hx___eventMap )) {
HXLINE(  40)			this->_hx___eventMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  41)			this->_hx___iterators =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  45)		if (!(this->_hx___eventMap->exists(type))) {
HXLINE(  47)			HX_VARI( ::Array< ::Dynamic>,list) = ::Array_obj< ::Dynamic>::__new();
HXLINE(  48)			list->push( ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
HXLINE(  50)			HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE(  52)			this->_hx___eventMap->set(type,list);
HXLINE(  53)			this->_hx___iterators->set(type,::Array_obj< ::Dynamic>::__new(1)->init(0,iterator));
            		}
            		else {
HXLINE(  57)			HX_VARI_NAME( ::Array< ::Dynamic>,list1,"list") = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE(  59)			{
HXLINE(  59)				HX_VARI( int,_g1) = (int)0;
HXDLIN(  59)				HX_VARI( int,_g) = list1->length;
HXDLIN(  59)				while((_g1 < _g)){
HXLINE(  59)					_g1 = (_g1 + (int)1);
HXLINE(  61)					if (list1->__get((_g1 - (int)1)).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE(  61)						return;
            					}
            				}
            			}
HXLINE(  65)			HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE(  67)			{
HXLINE(  67)				HX_VARI_NAME( int,_g2,"_g") = (int)0;
HXDLIN(  67)				while((_g2 < iterators->length)){
HXLINE(  67)					HX_VARI_NAME(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator1,"iterator") = iterators->__get(_g2).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN(  67)					_g2 = (_g2 + (int)1);
HXLINE(  69)					if (iterator1->active) {
HXLINE(  71)						iterator1->copy();
            					}
            				}
            			}
HXLINE(  77)			list1->push( ::openfl::events::_EventDispatcher::Listener_obj::__alloc( HX_CTX ,listener,useCapture,priority));
HXLINE(  78)			list1->sort(::openfl::events::EventDispatcher_obj::_hx___sortByPriority_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_85_dispatchEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE(  87)		if (hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE(  89)			event->target = this->_hx___targetDispatcher;
            		}
            		else {
HXLINE(  93)			event->target = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  97)		return this->_hx___dispatchEvent(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_102_hasEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 104)		if (hx::IsNull( this->_hx___eventMap )) {
HXLINE( 104)			return false;
            		}
HXLINE( 106)		return this->_hx___eventMap->exists(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

void EventDispatcher_obj::removeEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_111_removeEventListener)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 113)			_hx_tmp = hx::IsNull( listener );
            		}
            		else {
HXLINE( 113)			_hx_tmp = true;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 113)			return;
            		}
HXLINE( 115)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 116)		if (hx::IsNull( list )) {
HXLINE( 116)			return;
            		}
HXLINE( 118)		HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 120)		{
HXLINE( 120)			HX_VARI( int,_g1) = (int)0;
HXDLIN( 120)			HX_VARI( int,_g) = list->length;
HXDLIN( 120)			while((_g1 < _g)){
HXLINE( 120)				_g1 = (_g1 + (int)1);
HXDLIN( 120)				HX_VARI( int,i) = (_g1 - (int)1);
HXLINE( 122)				if (list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >()->match(listener,useCapture)) {
HXLINE( 124)					{
HXLINE( 124)						HX_VARI( int,_g2) = (int)0;
HXDLIN( 124)						while((_g2 < iterators->length)){
HXLINE( 124)							HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) = iterators->__get(_g2).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXDLIN( 124)							_g2 = (_g2 + (int)1);
HXLINE( 126)							iterator->remove(list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >(),i);
            						}
            					}
HXLINE( 130)					list->removeRange(i,(int)1);
HXLINE( 131)					goto _hx_goto_6;
            				}
            			}
            			_hx_goto_6:;
            		}
HXLINE( 137)		if ((list->length == (int)0)) {
HXLINE( 139)			this->_hx___eventMap->remove(type);
HXLINE( 140)			this->_hx___iterators->remove(type);
            		}
HXLINE( 144)		if (!(( (bool)(this->_hx___eventMap->iterator()->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) ))) {
HXLINE( 146)			this->_hx___eventMap = null();
HXLINE( 147)			this->_hx___iterators = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_154_toString)
            	HX_STACK_THIS(this)
HXLINE( 156)		HX_VARI( ::String,full) = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
HXLINE( 157)		HX_VARI_NAME( ::String,_hx_short,"short") = ( (::String)(full.split(HX_(".",2e,00,00,00))->pop()) );
HXLINE( 159)		return ((HX_("[object ",86,f9,3d,d7) + _hx_short) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger(::String type){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_166_willTrigger)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 166)		return this->hasEventListener(type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

bool EventDispatcher_obj::_hx___dispatchEvent( ::openfl::events::Event event){
            	HX_GC_STACKFRAME(&_hx_pos_e38539b7b6ad7309_171___dispatchEvent)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
HXLINE( 173)		bool _hx_tmp;
HXDLIN( 173)		if (hx::IsNotNull( this->_hx___eventMap )) {
HXLINE( 173)			_hx_tmp = hx::IsNull( event );
            		}
            		else {
HXLINE( 173)			_hx_tmp = true;
            		}
HXDLIN( 173)		if (_hx_tmp) {
HXLINE( 173)			return true;
            		}
HXLINE( 175)		HX_VARI( ::String,type) = event->type;
HXLINE( 177)		HX_VARI( ::Array< ::Dynamic>,list) = ( (::Array< ::Dynamic>)(this->_hx___eventMap->get(type)) );
HXLINE( 178)		if (hx::IsNull( list )) {
HXLINE( 178)			return true;
            		}
HXLINE( 180)		if (hx::IsNull( event->target )) {
HXLINE( 182)			if (hx::IsNotNull( this->_hx___targetDispatcher )) {
HXLINE( 184)				event->target = this->_hx___targetDispatcher;
            			}
            			else {
HXLINE( 188)				event->target = hx::ObjectPtr<OBJ_>(this);
            			}
            		}
HXLINE( 194)		event->currentTarget = hx::ObjectPtr<OBJ_>(this);
HXLINE( 196)		HX_VARI( bool,capture) = (event->eventPhase == (int)1);
HXLINE( 199)		HX_VARI( ::Array< ::Dynamic>,iterators) = ( (::Array< ::Dynamic>)(this->_hx___iterators->get(type)) );
HXLINE( 200)		HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,iterator) = iterators->__get((int)0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >();
HXLINE( 202)		if (iterator->active) {
HXLINE( 204)			iterator =  ::openfl::events::_EventDispatcher::DispatchIterator_obj::__alloc( HX_CTX ,list);
HXLINE( 205)			iterators->push(iterator);
            		}
HXLINE( 209)		iterator->reset(list);
HXLINE( 211)		{
HXLINE( 211)			HX_VARI(  ::openfl::events::_EventDispatcher::DispatchIterator,listener) = iterator;
HXDLIN( 211)			while(listener->hasNext()){
HXLINE( 211)				HX_VARI_NAME(  ::openfl::events::_EventDispatcher::Listener,listener1,"listener") = listener->next();
HXLINE( 213)				if (hx::IsNull( listener1 )) {
HXLINE( 213)					continue;
            				}
HXLINE( 215)				if ((listener1->useCapture == capture)) {
HXLINE( 218)					listener1->callback(event);
HXLINE( 220)					if (event->_hx___isCanceledNow) {
HXLINE( 222)						goto _hx_goto_11;
            					}
            				}
            			}
            			_hx_goto_11:;
            		}
HXLINE( 230)		if (hx::IsNotEq( iterator,iterators->__get((int)0).StaticCast<  ::openfl::events::_EventDispatcher::DispatchIterator >() )) {
HXLINE( 232)			iterators->remove(iterator);
            		}
HXLINE( 236)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,_hx___dispatchEvent,return )

int EventDispatcher_obj::_hx___sortByPriority( ::openfl::events::_EventDispatcher::Listener l1, ::openfl::events::_EventDispatcher::Listener l2){
            	HX_STACKFRAME(&_hx_pos_e38539b7b6ad7309_243___sortByPriority)
            	HX_STACK_ARG(l1,"l1")
            	HX_STACK_ARG(l2,"l2")
HXLINE( 243)		if ((l1->priority == l2->priority)) {
HXLINE( 243)			return (int)0;
            		}
            		else {
HXLINE( 243)			if ((l1->priority > l2->priority)) {
HXLINE( 243)				return (int)-1;
            			}
            			else {
HXLINE( 243)				return (int)1;
            			}
            		}
HXDLIN( 243)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,_hx___sortByPriority,return )


hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::Dynamic target) {
	hx::ObjectPtr< EventDispatcher_obj > __this = new EventDispatcher_obj();
	__this->__construct(target);
	return __this;
}

hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic target) {
	EventDispatcher_obj *__this = (EventDispatcher_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(EventDispatcher_obj), true, "openfl.events.EventDispatcher"));
	*(void **)__this = EventDispatcher_obj::_hx_vtable;
	__this->__construct(target);
	return __this;
}

EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_MARK_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_MARK_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___eventMap,"__eventMap");
	HX_VISIT_MEMBER_NAME(_hx___iterators,"__iterators");
	HX_VISIT_MEMBER_NAME(_hx___targetDispatcher,"__targetDispatcher");
}

hx::Val EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return hx::Val( _hx___eventMap); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { return hx::Val( _hx___iterators); }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return hx::Val( willTrigger_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return hx::Val( dispatchEvent_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__dispatchEvent") ) { return hx::Val( _hx___dispatchEvent_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn()); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hx::Val( hasEventListener_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return hx::Val( _hx___targetDispatcher); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return hx::Val( removeEventListener_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { outValue = _hx___sortByPriority_dyn(); return true; }
	}
	return false;
}

hx::Val EventDispatcher_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { _hx___eventMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__iterators") ) { _hx___iterators=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { _hx___targetDispatcher=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"));
	outFields->push(HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1"));
	outFields->push(HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EventDispatcher_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___eventMap),HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,_hx___iterators),HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1")},
	{hx::fsObject /*::openfl::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,_hx___targetDispatcher),HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EventDispatcher_obj_sStaticStorageInfo = 0;
#endif

static ::String EventDispatcher_obj_sMemberFields[] = {
	HX_HCSTRING("__eventMap","\xc2","\xf9","\x0a","\x64"),
	HX_HCSTRING("__iterators","\xa5","\xaf","\x92","\xc1"),
	HX_HCSTRING("__targetDispatcher","\x78","\x03","\x5d","\x88"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	HX_HCSTRING("__dispatchEvent","\xe0","\xff","\x16","\x4e"),
	::String(null()) };

static void EventDispatcher_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EventDispatcher_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String EventDispatcher_obj_sStaticFields[] = {
	HX_HCSTRING("__sortByPriority","\x79","\x94","\xd7","\x6e"),
	::String(null())
};

void EventDispatcher_obj::__register()
{
	hx::Object *dummy = new EventDispatcher_obj;
	EventDispatcher_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.EventDispatcher","\x0a","\xd8","\x08","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EventDispatcher_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(EventDispatcher_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EventDispatcher_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EventDispatcher_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EventDispatcher_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EventDispatcher_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events