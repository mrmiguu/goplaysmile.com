// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Animatible
#include <Animatible.h>
#endif
#ifndef INCLUDED_Die
#include <Die.h>
#endif
#ifndef INCLUDED_Paperdoll
#include <Paperdoll.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_620dbfbebad67122_31_new,"Paperdoll","new",0xbff10ca9,"Paperdoll.new","Paperdoll.hx",31,0x492efae7)
HX_DEFINE_STACK_FRAME(_hx_pos_620dbfbebad67122_58_begin,"Paperdoll","begin",0x7ef18ab2,"Paperdoll.begin","Paperdoll.hx",58,0x492efae7)
HX_DEFINE_STACK_FRAME(_hx_pos_620dbfbebad67122_59_during,"Paperdoll","during",0x9ecd2b18,"Paperdoll.during","Paperdoll.hx",59,0x492efae7)
HX_DEFINE_STACK_FRAME(_hx_pos_620dbfbebad67122_61_end,"Paperdoll","end",0xbfea4024,"Paperdoll.end","Paperdoll.hx",61,0x492efae7)
HX_DEFINE_STACK_FRAME(_hx_pos_620dbfbebad67122_64_transition,"Paperdoll","transition",0x98d45c6c,"Paperdoll.transition","Paperdoll.hx",64,0x492efae7)

void Paperdoll_obj::__construct(::String name, ::Die d){
            	HX_GC_STACKFRAME(&_hx_pos_620dbfbebad67122_31_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(d,"d")
HXLINE(  33)		super::__construct();
HXLINE(  35)		this->frames = d->frames;
HXLINE(  36)		this->states = d->states;
HXLINE(  37)		this->delay = d->delay;
HXLINE(  38)		this->mouseEnabled = false;
HXLINE(  40)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + ((HX_("die/paperdoll_",d7,23,8d,2f) + name) + HX_(".png",3b,2d,bd,1e))),null());
HXLINE(  41)		this->w = png->width;
HXLINE(  42)		this->h = ::Std_obj::_hx_int(((Float)png->height / (Float)this->states));
HXLINE(  44)		this->set_x(d->get_x());
HXLINE(  45)		Float _hx_tmp = d->get_y();
HXDLIN(  45)		this->set_y((_hx_tmp + ((Float)d->get_height() / (Float)(int)2)));
HXLINE(  47)		HX_VARI( int,map) = this->w;
HXDLIN(  47)		HX_VARI_NAME( int,map1,"map") = this->h;
HXDLIN(  47)		HX_VARI( ::Array< ::Dynamic>,_g) = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  47)		{
HXLINE(  47)			HX_VARI( int,_g2) = (int)0;
HXDLIN(  47)			HX_VARI( int,_g1) = this->states;
HXDLIN(  47)			while((_g2 < _g1)){
HXLINE(  47)				_g2 = (_g2 + (int)1);
HXDLIN(  47)				_g->push( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,((_g2 - (int)1) * this->h),this->w,this->h));
            			}
            		}
HXDLIN(  47)		HX_VARI_NAME(  ::openfl::display::Tilemap,map2,"map") =  ::openfl::display::Tilemap_obj::__alloc( HX_CTX ,map,map1, ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png,_g),null());
HXLINE(  48)		this->addChild(map2);
HXLINE(  50)		HX_VARI_NAME( ::Array< ::Dynamic>,_g11,"_g1") = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  50)		{
HXLINE(  50)			HX_VARI( int,_g3) = (int)0;
HXDLIN(  50)			HX_VARI_NAME( int,_g21,"_g2") = this->states;
HXDLIN(  50)			while((_g3 < _g21)){
HXLINE(  50)				_g3 = (_g3 + (int)1);
HXDLIN(  50)				_g11->push( ::openfl::display::Tile_obj::__alloc( HX_CTX ,(_g3 - (int)1),null(),null(),null(),null(),null()));
            			}
            		}
HXDLIN(  50)		this->tiles = _g11;
HXLINE(  51)		map2->addTiles(this->tiles);
HXLINE(  53)		{
HXLINE(  53)			HX_VARI_NAME( int,_g22,"_g2") = (int)0;
HXDLIN(  53)			HX_VARI_NAME( ::Array< ::Dynamic>,_g31,"_g3") = this->tiles;
HXDLIN(  53)			while((_g22 < _g31->length)){
HXLINE(  53)				HX_VARI(  ::openfl::display::Tile,t) = _g31->__get(_g22).StaticCast<  ::openfl::display::Tile >();
HXDLIN(  53)				_g22 = (_g22 + (int)1);
HXDLIN(  53)				t->visible = false;
            			}
            		}
HXLINE(  54)		this->tiles->__get((this->state = (this->states - (int)1))).StaticCast<  ::openfl::display::Tile >()->visible = true;
HXLINE(  55)		this->lastState = this->state;
            	}

Dynamic Paperdoll_obj::__CreateEmpty() { return new Paperdoll_obj; }

void *Paperdoll_obj::_hx_vtable = 0;

Dynamic Paperdoll_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Paperdoll_obj > _hx_result = new Paperdoll_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Paperdoll_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x11198437) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x11198437;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

static ::Animatible_obj _hx_Paperdoll__hx_Animatible= {
	( void (hx::Object::*)())&::Paperdoll_obj::transition,
};

void *Paperdoll_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x79c359f6: return &_hx_Paperdoll__hx_Animatible;
	}
	return super::_hx_getInterface(inHash);
}

void Paperdoll_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_620dbfbebad67122_58_begin)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Paperdoll_obj,begin,(void))

void Paperdoll_obj::during(){
            	HX_STACKFRAME(&_hx_pos_620dbfbebad67122_59_during)
            	HX_STACK_THIS(this)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Paperdoll_obj,during,(void))

void Paperdoll_obj::end(){
            	HX_STACKFRAME(&_hx_pos_620dbfbebad67122_61_end)
            	HX_STACK_THIS(this)
HXLINE(  61)		this->animating = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Paperdoll_obj,end,(void))

void Paperdoll_obj::transition(){
            	HX_STACKFRAME(&_hx_pos_620dbfbebad67122_64_transition)
            	HX_STACK_THIS(this)
HXLINE(  66)		if ((this->frame != (int)0)) {
HXLINE(  67)			if ((this->frame == (this->frames - (int)1))) {
HXLINE(  67)				this->end();
            			}
            		}
HXLINE(  70)		switch((int)(this->frame)){
            			case (int)0: {
HXLINE(  72)				this->set_rotation((int)90);
HXDLIN(  72)				{
HXLINE(  72)					HX_VARI(  ::Paperdoll,_g) = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)					_g->set_y((_g->get_y() - (int)20));
            				}
HXDLIN(  72)				{
HXLINE(  72)					HX_VARI_NAME(  ::Paperdoll,_g1,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  72)					_g1->set_x((_g1->get_x() + this->w));
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  73)				this->set_rotation((int)0);
HXDLIN(  73)				{
HXLINE(  73)					HX_VARI_NAME(  ::Paperdoll,_g2,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)					_g2->set_y((_g2->get_y() - (int)40));
            				}
HXDLIN(  73)				{
HXLINE(  73)					HX_VARI_NAME(  ::Paperdoll,_g3,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)					_g3->set_x((_g3->get_x() - this->w));
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  74)				this->set_rotation((int)-90);
HXDLIN(  74)				{
HXLINE(  74)					HX_VARI_NAME(  ::Paperdoll,_g4,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  74)					_g4->set_y((_g4->get_y() - (int)20));
            				}
HXDLIN(  74)				{
HXLINE(  74)					HX_VARI_NAME(  ::Paperdoll,_g5,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  74)					_g5->set_y((_g5->get_y() + this->h));
            				}
            			}
            			break;
            			case (int)3: {
HXLINE(  75)				this->set_rotation((int)-180);
HXDLIN(  75)				{
HXLINE(  75)					HX_VARI_NAME(  ::Paperdoll,_g6,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)					_g6->set_y((_g6->get_y() + (int)20));
            				}
HXDLIN(  75)				{
HXLINE(  75)					HX_VARI_NAME(  ::Paperdoll,_g7,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  75)					_g7->set_x((_g7->get_x() + this->w));
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  76)				this->set_rotation((int)-270);
HXDLIN(  76)				{
HXLINE(  76)					HX_VARI_NAME(  ::Paperdoll,_g8,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  76)					_g8->set_y((_g8->get_y() + (int)40));
            				}
HXDLIN(  76)				{
HXLINE(  76)					HX_VARI_NAME(  ::Paperdoll,_g9,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  76)					_g9->set_y((_g9->get_y() - this->h));
            				}
            			}
            			break;
            			case (int)5: {
HXLINE(  77)				this->set_rotation((int)0);
HXDLIN(  77)				{
HXLINE(  77)					HX_VARI_NAME(  ::Paperdoll,_g10,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)					_g10->set_y((_g10->get_y() + (int)20));
            				}
HXDLIN(  77)				{
HXLINE(  77)					HX_VARI_NAME(  ::Paperdoll,_g11,"_g") = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  77)					_g11->set_x((_g11->get_x() - this->w));
            				}
            			}
            			break;
            		}
HXLINE(  80)		this->tiles->__get(this->lastState).StaticCast<  ::openfl::display::Tile >()->visible = false;
HXLINE(  81)		this->tiles->__get(this->state).StaticCast<  ::openfl::display::Tile >()->visible = true;
HXLINE(  82)		this->lastState = this->state;
HXLINE(  83)		this->frame = hx::Mod((this->frame + (int)1),this->frames);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Paperdoll_obj,transition,(void))


hx::ObjectPtr< Paperdoll_obj > Paperdoll_obj::__new(::String name, ::Die d) {
	hx::ObjectPtr< Paperdoll_obj > __this = new Paperdoll_obj();
	__this->__construct(name,d);
	return __this;
}

hx::ObjectPtr< Paperdoll_obj > Paperdoll_obj::__alloc(hx::Ctx *_hx_ctx,::String name, ::Die d) {
	Paperdoll_obj *__this = (Paperdoll_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Paperdoll_obj), true, "Paperdoll"));
	*(void **)__this = Paperdoll_obj::_hx_vtable;
	__this->__construct(name,d);
	return __this;
}

Paperdoll_obj::Paperdoll_obj()
{
}

void Paperdoll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Paperdoll);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(animating,"animating");
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(lastState,"lastState");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Paperdoll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(animating,"animating");
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(lastState,"lastState");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Paperdoll_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return hx::Val( w); }
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h); }
		break;
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

hx::Val Paperdoll_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		break;
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

void Paperdoll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b"));
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"));
	outFields->push(HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0"));
	outFields->push(HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Paperdoll_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Paperdoll_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,states),HX_HCSTRING("states","\x42","\xd9","\xfb","\x05")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsBool,(int)offsetof(Paperdoll_obj,animating),HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b")},
	{hx::fsFloat,(int)offsetof(Paperdoll_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsFloat,(int)offsetof(Paperdoll_obj,delay),HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,frame),HX_HCSTRING("frame","\x2d","\x78","\x83","\x06")},
	{hx::fsInt,(int)offsetof(Paperdoll_obj,lastState),HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Paperdoll_obj,tiles),HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Paperdoll_obj_sStaticStorageInfo = 0;
#endif

static ::String Paperdoll_obj_sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("states","\x42","\xd9","\xfb","\x05"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("animating","\x1e","\xee","\x34","\x4b"),
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("frame","\x2d","\x78","\x83","\x06"),
	HX_HCSTRING("lastState","\xdb","\xa3","\xb8","\xd0"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("during","\xc1","\x53","\x3c","\xa5"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("transition","\x95","\x8d","\xaf","\x58"),
	::String(null()) };

static void Paperdoll_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paperdoll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Paperdoll_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paperdoll_obj::__mClass,"__mClass");
};

#endif

hx::Class Paperdoll_obj::__mClass;

void Paperdoll_obj::__register()
{
	hx::Object *dummy = new Paperdoll_obj;
	Paperdoll_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Paperdoll","\x37","\x84","\x19","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Paperdoll_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Paperdoll_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Paperdoll_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Paperdoll_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paperdoll_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paperdoll_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
