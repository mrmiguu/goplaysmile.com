// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Animatible
#include <Animatible.h>
#endif
#ifndef INCLUDED_SpriteSheet
#include <SpriteSheet.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_de9aac0f8bd8a0c3_29_new,"SpriteSheet","new",0x16cca22c,"SpriteSheet.new","SpriteSheet.hx",29,0x6645c6c4)
HX_DEFINE_STACK_FRAME(_hx_pos_de9aac0f8bd8a0c3_55_begin,"SpriteSheet","begin",0xf3ffc6f5,"SpriteSheet.begin","SpriteSheet.hx",55,0x6645c6c4)
HX_DEFINE_STACK_FRAME(_hx_pos_de9aac0f8bd8a0c3_56_during,"SpriteSheet","during",0x9633a975,"SpriteSheet.during","SpriteSheet.hx",56,0x6645c6c4)
HX_DEFINE_STACK_FRAME(_hx_pos_de9aac0f8bd8a0c3_57_end,"SpriteSheet","end",0x16c5d5a7,"SpriteSheet.end","SpriteSheet.hx",57,0x6645c6c4)
HX_DEFINE_STACK_FRAME(_hx_pos_de9aac0f8bd8a0c3_59_transition,"SpriteSheet","transition",0x4495cd49,"SpriteSheet.transition","SpriteSheet.hx",59,0x6645c6c4)

void SpriteSheet_obj::__construct(::String file,int frames,int states,Float delay){
            	HX_GC_STACKFRAME(&_hx_pos_de9aac0f8bd8a0c3_29_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(file,"file")
            	HX_STACK_ARG(frames,"frames")
            	HX_STACK_ARG(states,"states")
            	HX_STACK_ARG(delay,"delay")
HXLINE(  31)		super::__construct();
HXLINE(  33)		this->delay = delay;
HXLINE(  35)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + file),null());
HXLINE(  36)		HX_VARI( int,w) = ::Std_obj::_hx_int(((Float)png->width / (Float)(this->frames = frames)));
HXLINE(  37)		HX_VARI( int,h) = ::Std_obj::_hx_int(((Float)png->height / (Float)(this->states = states)));
HXLINE(  40)		HX_VARI( ::Array< ::Dynamic>,_g) = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  40)		{
HXLINE(  40)			HX_VARI( int,_g2) = (int)0;
HXDLIN(  40)			while((_g2 < states)){
HXLINE(  40)				_g2 = (_g2 + (int)1);
HXDLIN(  40)				HX_VARI( int,s) = (_g2 - (int)1);
HXLINE(  41)				{
HXLINE(  41)					HX_VARI( int,_g4) = (int)0;
HXDLIN(  41)					while((_g4 < frames)){
HXLINE(  41)						_g4 = (_g4 + (int)1);
HXDLIN(  41)						_g->push( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,((_g4 - (int)1) * w),(s * h),w,h));
            					}
            				}
            			}
            		}
HXLINE(  39)		HX_VARI(  ::openfl::display::Tilemap,map) =  ::openfl::display::Tilemap_obj::__alloc( HX_CTX ,w,h, ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png,_g),null());
HXLINE(  43)		this->addChild(map);
HXLINE(  45)		HX_VARI( ::Array< ::Dynamic>,_g1) = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  45)		{
HXLINE(  45)			HX_VARI( int,_g3) = (int)0;
HXDLIN(  45)			while((_g3 < states)){
HXLINE(  45)				_g3 = (_g3 + (int)1);
HXDLIN(  45)				HX_VARI_NAME( int,s1,"s") = (_g3 - (int)1);
HXLINE(  46)				{
HXLINE(  46)					HX_VARI( int,_g5) = (int)0;
HXDLIN(  46)					while((_g5 < frames)){
HXLINE(  46)						_g5 = (_g5 + (int)1);
HXDLIN(  46)						_g1->push( ::openfl::display::Tile_obj::__alloc( HX_CTX ,((s1 * frames) + (_g5 - (int)1)),null(),null(),null(),null(),null()));
            					}
            				}
            			}
            		}
HXLINE(  45)		this->tiles = _g1;
HXLINE(  48)		map->addTiles(this->tiles);
HXLINE(  50)		{
HXLINE(  50)			HX_VARI_NAME( int,_g21,"_g2") = (int)0;
HXDLIN(  50)			HX_VARI_NAME( ::Array< ::Dynamic>,_g31,"_g3") = this->tiles;
HXDLIN(  50)			while((_g21 < _g31->length)){
HXLINE(  50)				HX_VARI(  ::openfl::display::Tile,t) = _g31->__get(_g21).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  50)				_g21 = (_g21 + (int)1);
HXDLIN(  50)				t->visible = false;
            			}
            		}
HXLINE(  51)		this->tiles->__get(((frames * states) - (int)1)).StaticCast<  ::openfl::display::Tile >()->visible = true;
HXLINE(  52)		this->lastState = (states - (int)1);
            	}

Dynamic SpriteSheet_obj::__CreateEmpty() { return new SpriteSheet_obj; }

void *SpriteSheet_obj::_hx_vtable = 0;

Dynamic SpriteSheet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SpriteSheet_obj > _hx_result = new SpriteSheet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool SpriteSheet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x45bc2e56;
		}
	}
}

static ::Animatible_obj _hx_SpriteSheet__hx_Animatible= {
	( void (hx::Object::*)())&::SpriteSheet_obj::transition,
};

void *SpriteSheet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x79c359f6: return &_hx_SpriteSheet__hx_Animatible;
	}
	return super::_hx_getInterface(inHash);
}

void SpriteSheet_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_de9aac0f8bd8a0c3_55_begin)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSheet_obj,begin,(void))

void SpriteSheet_obj::during(){
            	HX_STACKFRAME(&_hx_pos_de9aac0f8bd8a0c3_56_during)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSheet_obj,during,(void))

void SpriteSheet_obj::end(){
            	HX_STACKFRAME(&_hx_pos_de9aac0f8bd8a0c3_57_end)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSheet_obj,end,(void))

void SpriteSheet_obj::transition(){
            	HX_STACKFRAME(&_hx_pos_de9aac0f8bd8a0c3_59_transition)
            	HX_STACK_THIS(this)
HXLINE(  61)		if ((this->frame == (int)0)) {
HXLINE(  61)			this->begin();
            		}
            		else {
HXLINE(  62)			if ((this->frame == (this->frames - (int)1))) {
HXLINE(  62)				this->end();
            			}
            		}
HXLINE(  66)		int _hx_tmp;
HXDLIN(  66)		if ((this->frame > (int)0)) {
HXLINE(  66)			_hx_tmp = this->frame;
            		}
            		else {
HXLINE(  66)			_hx_tmp = this->frames;
            		}
HXLINE(  65)		this->tiles->__get((((this->lastState * this->frames) + _hx_tmp) - (int)1)).StaticCast<  ::openfl::display::Tile >()->visible = false;
HXLINE(  68)		this->tiles->__get(((this->state * this->frames) + this->frame)).StaticCast<  ::openfl::display::Tile >()->visible = true;
HXLINE(  70)		this->lastState = this->state;
HXLINE(  72)		this->frame = hx::Mod((this->frame + (int)1),this->frames);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpriteSheet_obj,transition,(void))


hx::ObjectPtr< SpriteSheet_obj > SpriteSheet_obj::__new(::String file,int frames,int states,Float delay) {
	hx::ObjectPtr< SpriteSheet_obj > __this = new SpriteSheet_obj();
	__this->__construct(file,frames,states,delay);
	return __this;
}

hx::ObjectPtr< SpriteSheet_obj > SpriteSheet_obj::__alloc(hx::Ctx *_hx_ctx,::String file,int frames,int states,Float delay) {
	SpriteSheet_obj *__this = (SpriteSheet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SpriteSheet_obj), true, "SpriteSheet"));
	*(void **)__this = SpriteSheet_obj::_hx_vtable;
	__this->__construct(file,frames,states,delay);
	return __this;
}

SpriteSheet_obj::SpriteSheet_obj()
{
}

void SpriteSheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpriteSheet);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(animating,"animating");
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(lastState,"lastState");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpriteSheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(animating,"animating");
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(lastState,"lastState");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SpriteSheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state); }
		if (HX_FIELD_EQ(inName,"delay") ) { return hx::Val( delay); }
		if (HX_FIELD_EQ(inName,"frame") ) { return hx::Val( frame); }
		if (HX_FIELD_EQ(inName,"tiles") ) { return hx::Val( tiles); }
		if (HX_FIELD_EQ(inName,"begin") ) { return hx::Val( begin_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames); }
		if (HX_FIELD_EQ(inName,"states") ) { return hx::Val( states); }
		if (HX_FIELD_EQ(inName,"future") ) { return hx::Val( future); }
		if (HX_FIELD_EQ(inName,"during") ) { return hx::Val( during_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animating") ) { return hx::Val( animating); }
		if (HX_FIELD_EQ(inName,"lastState") ) { return hx::Val( lastState); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transition") ) { return hx::Val( transition_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SpriteSheet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animating") ) { animating=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastState") ) { lastState=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpriteSheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b"));
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SpriteSheet_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SpriteSheet_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(SpriteSheet_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsInt,(int)offsetof(SpriteSheet_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(SpriteSheet_obj,animating),HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b")},
	{hx::fsFloat,(int)offsetof(SpriteSheet_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsFloat,(int)offsetof(SpriteSheet_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsInt,(int)offsetof(SpriteSheet_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(int)offsetof(SpriteSheet_obj,lastState),HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SpriteSheet_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SpriteSheet_obj_sStaticStorageInfo = 0;
#endif

static ::String SpriteSheet_obj_sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b"),
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("during","\xc1","\x53","\x3c","\xa5"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("transition","\x95","\x8d","\xaf","\x58"),
	::String(null()) };

static void SpriteSheet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpriteSheet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpriteSheet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpriteSheet_obj::__mClass,"__mClass");
};

#endif

hx::Class SpriteSheet_obj::__mClass;

void SpriteSheet_obj::__register()
{
	hx::Object *dummy = new SpriteSheet_obj;
	SpriteSheet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("SpriteSheet","\x3a","\x5c","\xf5","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SpriteSheet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SpriteSheet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpriteSheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpriteSheet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpriteSheet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpriteSheet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

