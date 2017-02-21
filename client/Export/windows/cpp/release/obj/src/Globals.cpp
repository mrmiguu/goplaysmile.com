// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Animatible
#include <Animatible.h>
#endif
#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Globals
#include <Globals.h>
#endif
#ifndef INCLUDED_IButton
#include <IButton.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Radio
#include <Radio.h>
#endif
#ifndef INCLUDED_SpriteSheet
#include <SpriteSheet.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Terrain
#include <Terrain.h>
#endif
#ifndef INCLUDED_Viewport
#include <Viewport.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_26_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",26,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_8_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",8,0x4ea1ef2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e641650405b6e704_29_player,"Globals","player",0x7eb9e67f,"Globals.player","Globals.hx",29,0x4ea1ef2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e641650405b6e704_37_me,"Globals","me",0x4ea1f376,"Globals.me","Globals.hx",37,0x4ea1ef2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e641650405b6e704_41_errSfx,"Globals","errSfx",0x9854353e,"Globals.errSfx","Globals.hx",41,0x4ea1ef2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e641650405b6e704_45_pushSfx,"Globals","pushSfx",0x4f1225ed,"Globals.pushSfx","Globals.hx",45,0x4ea1ef2e)
HX_LOCAL_STACK_FRAME(_hx_pos_e641650405b6e704_49_popSfx,"Globals","popSfx",0x42bb0292,"Globals.popSfx","Globals.hx",49,0x4ea1ef2e)

void Globals_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(int i){
            			HX_GC_STACKFRAME(&_hx_pos_e641650405b6e704_26_new)
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e641650405b6e704_8_new)
HXLINE(  23)		this->players =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  22)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  22)		{
HXLINE(  22)			int _g1 = (int)0;
HXDLIN(  22)			while((_g1 < (int)3)){
HXLINE(  22)				_g1 = (_g1 + (int)1);
HXDLIN(  22)				int n = (_g1 - (int)1);
HXDLIN(  22)				_g->push(::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + ((HX_("etc/pop",d6,87,6f,e9) + n) + HX_(".ogg",e1,64,bc,1e)))));
            			}
            		}
HXDLIN(  22)		this->pops = _g;
HXLINE(  21)		::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  21)		{
HXLINE(  21)			int _g11 = (int)0;
HXDLIN(  21)			while((_g11 < (int)3)){
HXLINE(  21)				_g11 = (_g11 + (int)1);
HXDLIN(  21)				int n1 = (_g11 - (int)1);
HXDLIN(  21)				_g2->push(::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + ((HX_("etc/push",f5,e3,2b,58) + n1) + HX_(".ogg",e1,64,bc,1e)))));
            			}
            		}
HXDLIN(  21)		this->pushes = _g2;
HXLINE(  20)		this->err = ::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + HX_("etc/err.ogg",8b,b3,2e,cc)));
HXLINE(  19)		this->user = HX_("",00,00,00,00);
HXLINE(  11)		this->inGame =  ::Game_obj::__alloc( HX_CTX );
HXLINE(  10)		this->toFrom =  ::Game_obj::__alloc( HX_CTX );
HXLINE(   9)		this->login =  ::Game_obj::__alloc( HX_CTX );
HXLINE(  26)		this->roll =  ::Dynamic(new _hx_Closure_0());
            	}

Dynamic Globals_obj::__CreateEmpty() { return new Globals_obj; }

void *Globals_obj::_hx_vtable = 0;

Dynamic Globals_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Globals_obj > _hx_result = new Globals_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Globals_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x393ec1ac;
}

 ::Player Globals_obj::player(::String user){
            	HX_GC_STACKFRAME(&_hx_pos_e641650405b6e704_29_player)
HXLINE(  30)		if (!(this->players->exists(user))) {
HXLINE(  31)			::Dynamic this1 = this->players;
HXDLIN(  31)			 ::Player v =  ::Player_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),user);
HXDLIN(  31)			( ( ::haxe::ds::StringMap)(this1) )->set(user,v);
            		}
HXLINE(  33)		return this->players->get(user).StaticCast<  ::Player >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,player,return )

 ::Player Globals_obj::me(){
            	HX_STACKFRAME(&_hx_pos_e641650405b6e704_37_me)
HXLINE(  37)		return this->player(this->user);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,me,return )

void Globals_obj::errSfx(){
            	HX_STACKFRAME(&_hx_pos_e641650405b6e704_41_errSfx)
HXLINE(  41)		this->err->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,errSfx,(void))

void Globals_obj::pushSfx(){
            	HX_STACKFRAME(&_hx_pos_e641650405b6e704_45_pushSfx)
HXLINE(  45)		::Array< ::Dynamic> _hx_tmp = this->pushes;
HXDLIN(  45)		_hx_tmp->__get(::Std_obj::random(this->pushes->length)).StaticCast<  ::openfl::media::Sound >()->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,pushSfx,(void))

void Globals_obj::popSfx(){
            	HX_STACKFRAME(&_hx_pos_e641650405b6e704_49_popSfx)
HXLINE(  49)		::Array< ::Dynamic> _hx_tmp = this->pops;
HXDLIN(  49)		_hx_tmp->__get(::Std_obj::random(this->pushes->length)).StaticCast<  ::openfl::media::Sound >()->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Globals_obj,popSfx,(void))


hx::ObjectPtr< Globals_obj > Globals_obj::__new() {
	hx::ObjectPtr< Globals_obj > __this = new Globals_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Globals_obj > Globals_obj::__alloc(hx::Ctx *_hx_ctx) {
	Globals_obj *__this = (Globals_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Globals_obj), true, "Globals"));
	*(void **)__this = Globals_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Globals_obj::Globals_obj()
{
}

void Globals_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Globals);
	HX_MARK_MEMBER_NAME(login,"login");
	HX_MARK_MEMBER_NAME(toFrom,"toFrom");
	HX_MARK_MEMBER_NAME(inGame,"inGame");
	HX_MARK_MEMBER_NAME(radio,"radio");
	HX_MARK_MEMBER_NAME(outbox,"outbox");
	HX_MARK_MEMBER_NAME(roll,"roll");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(toFromText,"toFromText");
	HX_MARK_MEMBER_NAME(l,"l");
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(err,"err");
	HX_MARK_MEMBER_NAME(pushes,"pushes");
	HX_MARK_MEMBER_NAME(pops,"pops");
	HX_MARK_MEMBER_NAME(players,"players");
	HX_MARK_END_CLASS();
}

void Globals_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(login,"login");
	HX_VISIT_MEMBER_NAME(toFrom,"toFrom");
	HX_VISIT_MEMBER_NAME(inGame,"inGame");
	HX_VISIT_MEMBER_NAME(radio,"radio");
	HX_VISIT_MEMBER_NAME(outbox,"outbox");
	HX_VISIT_MEMBER_NAME(roll,"roll");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(toFromText,"toFromText");
	HX_VISIT_MEMBER_NAME(l,"l");
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(err,"err");
	HX_VISIT_MEMBER_NAME(pushes,"pushes");
	HX_VISIT_MEMBER_NAME(pops,"pops");
	HX_VISIT_MEMBER_NAME(players,"players");
}

hx::Val Globals_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return hx::Val( t); }
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v); }
		if (HX_FIELD_EQ(inName,"l") ) { return hx::Val( l); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"me") ) { return hx::Val( me_dyn()); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"err") ) { return hx::Val( err); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"roll") ) { return hx::Val( roll); }
		if (HX_FIELD_EQ(inName,"user") ) { return hx::Val( user); }
		if (HX_FIELD_EQ(inName,"pops") ) { return hx::Val( pops); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"login") ) { return hx::Val( login); }
		if (HX_FIELD_EQ(inName,"radio") ) { return hx::Val( radio); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toFrom") ) { return hx::Val( toFrom); }
		if (HX_FIELD_EQ(inName,"inGame") ) { return hx::Val( inGame); }
		if (HX_FIELD_EQ(inName,"outbox") ) { return hx::Val( outbox); }
		if (HX_FIELD_EQ(inName,"pushes") ) { return hx::Val( pushes); }
		if (HX_FIELD_EQ(inName,"player") ) { return hx::Val( player_dyn()); }
		if (HX_FIELD_EQ(inName,"errSfx") ) { return hx::Val( errSfx_dyn()); }
		if (HX_FIELD_EQ(inName,"popSfx") ) { return hx::Val( popSfx_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { return hx::Val( players); }
		if (HX_FIELD_EQ(inName,"pushSfx") ) { return hx::Val( pushSfx_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFromText") ) { return hx::Val( toFromText); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Globals_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::Terrain >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::Viewport >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l") ) { l=inValue.Cast<  ::Level >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"err") ) { err=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"roll") ) { roll=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pops") ) { pops=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"login") ) { login=inValue.Cast<  ::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radio") ) { radio=inValue.Cast<  ::Radio >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toFrom") ) { toFrom=inValue.Cast<  ::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inGame") ) { inGame=inValue.Cast<  ::Game >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outbox") ) { outbox=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushes") ) { pushes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFromText") ) { toFromText=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Globals_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("login","\x69","\xd9","\xf3","\x78"));
	outFields->push(HX_HCSTRING("toFrom","\x85","\x10","\x7c","\x79"));
	outFields->push(HX_HCSTRING("inGame","\x77","\xd2","\xc4","\x80"));
	outFields->push(HX_HCSTRING("radio","\xfb","\x10","\x18","\xe4"));
	outFields->push(HX_HCSTRING("outbox","\x3d","\x6a","\x76","\x0c"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("toFromText","\xd2","\x2f","\xe2","\x1c"));
	outFields->push(HX_HCSTRING("l","\x6c","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"));
	outFields->push(HX_HCSTRING("err","\x65","\x07","\x4d","\x00"));
	outFields->push(HX_HCSTRING("pushes","\xc8","\x14","\x2d","\x72"));
	outFields->push(HX_HCSTRING("pops","\xc2","\x81","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Globals_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Game*/ ,(int)offsetof(Globals_obj,login),HX_HCSTRING("login","\x69","\xd9","\xf3","\x78")},
	{hx::fsObject /*::Game*/ ,(int)offsetof(Globals_obj,toFrom),HX_HCSTRING("toFrom","\x85","\x10","\x7c","\x79")},
	{hx::fsObject /*::Game*/ ,(int)offsetof(Globals_obj,inGame),HX_HCSTRING("inGame","\x77","\xd2","\xc4","\x80")},
	{hx::fsObject /*::Radio*/ ,(int)offsetof(Globals_obj,radio),HX_HCSTRING("radio","\xfb","\x10","\x18","\xe4")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Globals_obj,outbox),HX_HCSTRING("outbox","\x3d","\x6a","\x76","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Globals_obj,roll),HX_HCSTRING("roll","\x7d","\xeb","\xae","\x4b")},
	{hx::fsObject /*::Terrain*/ ,(int)offsetof(Globals_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsObject /*::Viewport*/ ,(int)offsetof(Globals_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Globals_obj,toFromText),HX_HCSTRING("toFromText","\xd2","\x2f","\xe2","\x1c")},
	{hx::fsObject /*::Level*/ ,(int)offsetof(Globals_obj,l),HX_HCSTRING("l","\x6c","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(Globals_obj,user),HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Globals_obj,err),HX_HCSTRING("err","\x65","\x07","\x4d","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Globals_obj,pushes),HX_HCSTRING("pushes","\xc8","\x14","\x2d","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Globals_obj,pops),HX_HCSTRING("pops","\xc2","\x81","\x5c","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Globals_obj,players),HX_HCSTRING("players","\xf2","\x09","\x15","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Globals_obj_sStaticStorageInfo = 0;
#endif

static ::String Globals_obj_sMemberFields[] = {
	HX_HCSTRING("login","\x69","\xd9","\xf3","\x78"),
	HX_HCSTRING("toFrom","\x85","\x10","\x7c","\x79"),
	HX_HCSTRING("inGame","\x77","\xd2","\xc4","\x80"),
	HX_HCSTRING("radio","\xfb","\x10","\x18","\xe4"),
	HX_HCSTRING("outbox","\x3d","\x6a","\x76","\x0c"),
	HX_HCSTRING("roll","\x7d","\xeb","\xae","\x4b"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("toFromText","\xd2","\x2f","\xe2","\x1c"),
	HX_HCSTRING("l","\x6c","\x00","\x00","\x00"),
	HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"),
	HX_HCSTRING("err","\x65","\x07","\x4d","\x00"),
	HX_HCSTRING("pushes","\xc8","\x14","\x2d","\x72"),
	HX_HCSTRING("pops","\xc2","\x81","\x5c","\x4a"),
	HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("me","\x58","\x5f","\x00","\x00"),
	HX_HCSTRING("errSfx","\x20","\x3a","\x53","\x51"),
	HX_HCSTRING("pushSfx","\xcb","\x66","\x37","\x75"),
	HX_HCSTRING("popSfx","\x74","\x07","\xba","\xfb"),
	::String(null()) };

static void Globals_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Globals_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Globals_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Globals_obj::__mClass,"__mClass");
};

#endif

hx::Class Globals_obj::__mClass;

void Globals_obj::__register()
{
	hx::Object *dummy = new Globals_obj;
	Globals_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Globals","\x90","\x2d","\x8a","\xe1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Globals_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Globals_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Globals_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Globals_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Globals_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Globals_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

