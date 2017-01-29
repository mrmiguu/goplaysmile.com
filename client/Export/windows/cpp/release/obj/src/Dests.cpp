// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Dests
#include <Dests.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06aab3959293174f_5_new,"Dests","new",0xfe617523,"Dests.new","Dests.hx",5,0xab0abfad)
HX_DEFINE_STACK_FRAME(_hx_pos_06aab3959293174f_7_boot,"Dests","boot",0x8efe0a0f,"Dests.boot","Dests.hx",7,0xab0abfad)
HX_DEFINE_STACK_FRAME(_hx_pos_06aab3959293174f_8_boot,"Dests","boot",0x8efe0a0f,"Dests.boot","Dests.hx",8,0xab0abfad)

void Dests_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_06aab3959293174f_5_new)
            	HX_STACK_THIS(this)
HXLINE(  16)		HX_VARI(  ::openfl::display::Tile,tile) =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  16)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/v.png",b3,00,81,6a)),null());
HXDLIN(  16)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png,null());
HXDLIN(  16)		set->addRect(png->rect);
HXDLIN(  16)		tile->set_tileset(set);
HXDLIN(  16)		this->v = tile;
HXLINE(  15)		HX_VARI_NAME(  ::openfl::display::Tile,tile1,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  15)		HX_VARI_NAME(  ::openfl::display::BitmapData,png1,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/i.png",26,76,4b,ee)),null());
HXDLIN(  15)		HX_VARI_NAME(  ::openfl::display::Tileset,set1,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png1,null());
HXDLIN(  15)		set1->addRect(png1->rect);
HXDLIN(  15)		tile1->set_tileset(set1);
HXDLIN(  15)		this->i = tile1;
HXLINE(  14)		HX_VARI_NAME(  ::openfl::display::Tile,tile2,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  14)		HX_VARI_NAME(  ::openfl::display::BitmapData,png2,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/b.png",9f,66,7d,e6)),null());
HXDLIN(  14)		HX_VARI_NAME(  ::openfl::display::Tileset,set2,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png2,null());
HXDLIN(  14)		set2->addRect(png2->rect);
HXDLIN(  14)		tile2->set_tileset(set2);
HXDLIN(  14)		this->b = tile2;
HXLINE(  13)		HX_VARI_NAME(  ::openfl::display::Tile,tile3,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  13)		HX_VARI_NAME(  ::openfl::display::BitmapData,png3,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/g.png",24,4d,7e,c7)),null());
HXDLIN(  13)		HX_VARI_NAME(  ::openfl::display::Tileset,set3,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png3,null());
HXDLIN(  13)		set3->addRect(png3->rect);
HXDLIN(  13)		tile3->set_tileset(set3);
HXDLIN(  13)		this->g = tile3;
HXLINE(  12)		HX_VARI_NAME(  ::openfl::display::Tile,tile4,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  12)		HX_VARI_NAME(  ::openfl::display::BitmapData,png4,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/y.png",36,be,b4,24)),null());
HXDLIN(  12)		HX_VARI_NAME(  ::openfl::display::Tileset,set4,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png4,null());
HXDLIN(  12)		set4->addRect(png4->rect);
HXDLIN(  12)		tile4->set_tileset(set4);
HXDLIN(  12)		this->y = tile4;
HXLINE(  11)		HX_VARI_NAME(  ::openfl::display::Tile,tile5,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  11)		HX_VARI_NAME(  ::openfl::display::BitmapData,png5,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/o.png",2c,f1,b2,62)),null());
HXDLIN(  11)		HX_VARI_NAME(  ::openfl::display::Tileset,set5,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png5,null());
HXDLIN(  11)		set5->addRect(png5->rect);
HXDLIN(  11)		tile5->set_tileset(set5);
HXDLIN(  11)		this->o = tile5;
HXLINE(  10)		HX_VARI_NAME(  ::openfl::display::Tile,tile6,"tile") =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXDLIN(  10)		HX_VARI_NAME(  ::openfl::display::BitmapData,png6,"png") = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + HX_("dests/r.png",af,ae,e6,1c)),null());
HXDLIN(  10)		HX_VARI_NAME(  ::openfl::display::Tileset,set6,"set") =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png6,null());
HXDLIN(  10)		set6->addRect(png6->rect);
HXDLIN(  10)		tile6->set_tileset(set6);
HXDLIN(  10)		this->r = tile6;
            	}

Dynamic Dests_obj::__CreateEmpty() { return new Dests_obj; }

void *Dests_obj::_hx_vtable = 0;

Dynamic Dests_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Dests_obj > _hx_result = new Dests_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Dests_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a59a7b1;
}

int Dests_obj::WIDTH;

int Dests_obj::HEIGHT;


hx::ObjectPtr< Dests_obj > Dests_obj::__new() {
	hx::ObjectPtr< Dests_obj > __this = new Dests_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Dests_obj > Dests_obj::__alloc(hx::Ctx *_hx_ctx) {
	Dests_obj *__this = (Dests_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Dests_obj), true, "Dests"));
	*(void **)__this = Dests_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Dests_obj::Dests_obj()
{
}

void Dests_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dests);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_END_CLASS();
}

void Dests_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(v,"v");
}

hx::Val Dests_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r); }
		if (HX_FIELD_EQ(inName,"o") ) { return hx::Val( o); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		if (HX_FIELD_EQ(inName,"g") ) { return hx::Val( g); }
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b); }
		if (HX_FIELD_EQ(inName,"i") ) { return hx::Val( i); }
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Dests_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Dests_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("i","\x69","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Dests_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,i),HX_HCSTRING("i","\x69","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Tile*/ ,(int)offsetof(Dests_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Dests_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Dests_obj::WIDTH,HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48")},
	{hx::fsInt,(void *) &Dests_obj::HEIGHT,HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Dests_obj_sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("i","\x69","\x00","\x00","\x00"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	::String(null()) };

static void Dests_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Dests_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Dests_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(Dests_obj::HEIGHT,"HEIGHT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Dests_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Dests_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Dests_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(Dests_obj::HEIGHT,"HEIGHT");
};

#endif

hx::Class Dests_obj::__mClass;

static ::String Dests_obj_sStaticFields[] = {
	HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48"),
	HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4"),
	::String(null())
};

void Dests_obj::__register()
{
	hx::Object *dummy = new Dests_obj;
	Dests_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Dests","\xb1","\xa7","\x59","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Dests_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Dests_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Dests_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Dests_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Dests_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Dests_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Dests_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Dests_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_06aab3959293174f_7_boot)
HXLINE(   7)		WIDTH = (int)74;
            	}
{
            	HX_STACKFRAME(&_hx_pos_06aab3959293174f_8_boot)
HXLINE(   8)		HEIGHT = (int)74;
            	}
}
