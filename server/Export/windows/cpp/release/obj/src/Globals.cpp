// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Card
#include <Card.h>
#endif
#ifndef INCLUDED_Globals
#include <Globals.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Terrain
#include <Terrain.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_15_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",15,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_16_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",16,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_17_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",17,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_18_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",18,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_19_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",19,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_20_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",20,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_7_new,"Globals","new",0x7f13d682,"Globals.new","Globals.hx",7,0x4ea1ef2e)
HX_DEFINE_STACK_FRAME(_hx_pos_e641650405b6e704_24_player,"Globals","player",0x7eb9e67f,"Globals.player","Globals.hx",24,0x4ea1ef2e)

void Globals_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run( ::Player p){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_15_new)
            			HX_STACK_ARG(p,"p")
HXLINE(  15)			int _hx_tmp;
HXDLIN(  15)			if (p->on((int)405)) {
HXLINE(  15)				_hx_tmp = (int)0;
            			}
            			else {
HXLINE(  15)				_hx_tmp = (int)1;
            			}
HXDLIN(  15)			p->go(_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::Player p1){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_16_new)
            			HX_STACK_ARG(p1,"p1")
HXLINE(  16)			p1->go((int)0);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		void _hx_run( ::Player p2){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_17_new)
            			HX_STACK_ARG(p2,"p2")
HXLINE(  17)			p2->to(HX_("beverlyhills",65,97,b3,6a));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            		void _hx_run( ::Player p3){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_18_new)
            			HX_STACK_ARG(p3,"p3")
HXLINE(  18)			p3->go((int)2);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            		void _hx_run( ::Player p4){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_19_new)
            			HX_STACK_ARG(p4,"p4")
HXLINE(  19)			p4->to(HX_("beverlyhills",65,97,b3,6a));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_5) HXARGC(1)
            		void _hx_run( ::Player p5){
            			HX_STACKFRAME(&_hx_pos_e641650405b6e704_20_new)
            			HX_STACK_ARG(p5,"p5")
HXLINE(  20)			p5->go((int)3);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_e641650405b6e704_7_new)
            	HX_STACK_THIS(this)
HXLINE(  14)		this->c1 =  ::Card_obj::__alloc( HX_CTX ,HX_("c1",6e,56,00,00), ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()), ::Dynamic(new _hx_Closure_2()), ::Dynamic(new _hx_Closure_3()), ::Dynamic(new _hx_Closure_4()), ::Dynamic(new _hx_Closure_5()));
HXLINE(  11)		this->sockets = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  10)		this->players =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE(   9)		this->out = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   8)		this->t =  ::Terrain_obj::__alloc( HX_CTX );
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

 ::Player Globals_obj::player( ::sys::net::Socket s){
            	HX_STACKFRAME(&_hx_pos_e641650405b6e704_24_player)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
HXLINE(  24)		return this->players->get(s).StaticCast<  ::Player >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Globals_obj,player,return )


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
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(out,"out");
	HX_MARK_MEMBER_NAME(players,"players");
	HX_MARK_MEMBER_NAME(sockets,"sockets");
	HX_MARK_MEMBER_NAME(c1,"c1");
	HX_MARK_END_CLASS();
}

void Globals_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(out,"out");
	HX_VISIT_MEMBER_NAME(players,"players");
	HX_VISIT_MEMBER_NAME(sockets,"sockets");
	HX_VISIT_MEMBER_NAME(c1,"c1");
}

hx::Val Globals_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { return hx::Val( t); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"c1") ) { return hx::Val( c1); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { return hx::Val( out); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return hx::Val( player_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { return hx::Val( players); }
		if (HX_FIELD_EQ(inName,"sockets") ) { return hx::Val( sockets); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Globals_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast<  ::Terrain >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"c1") ) { c1=inValue.Cast<  ::Card >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"out") ) { out=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"players") ) { players=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sockets") ) { sockets=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Globals_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"));
	outFields->push(HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"));
	outFields->push(HX_HCSTRING("sockets","\x60","\xb1","\x73","\x57"));
	outFields->push(HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Globals_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Terrain*/ ,(int)offsetof(Globals_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Globals_obj,out),HX_HCSTRING("out","\x8e","\xa0","\x54","\x00")},
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Globals_obj,players),HX_HCSTRING("players","\xf2","\x09","\x15","\x8a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Globals_obj,sockets),HX_HCSTRING("sockets","\x60","\xb1","\x73","\x57")},
	{hx::fsObject /*::Card*/ ,(int)offsetof(Globals_obj,c1),HX_HCSTRING("c1","\x6e","\x56","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Globals_obj_sStaticStorageInfo = 0;
#endif

static ::String Globals_obj_sMemberFields[] = {
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("out","\x8e","\xa0","\x54","\x00"),
	HX_HCSTRING("players","\xf2","\x09","\x15","\x8a"),
	HX_HCSTRING("sockets","\x60","\xb1","\x73","\x57"),
	HX_HCSTRING("c1","\x6e","\x56","\x00","\x00"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
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
