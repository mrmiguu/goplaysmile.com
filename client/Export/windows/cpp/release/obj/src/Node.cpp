// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Node
#include <Node.h>
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


void Node_obj::__construct(::String id, ::openfl::display::Sprite sprite){
            	HX_STACK_FRAME("Node","new",0xb7119014,"Node.new","Node.hx",10,0xe41f0ddc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(sprite,"sprite")
HXLINE(  11)		super::__construct();
HXLINE(  13)		this->id = id;
HXLINE(  15)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + ((HX_("maps/3d_",76,c7,61,3a) + id) + HX_(".png",3b,2d,bd,1e))),null());
HXDLIN(  15)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__new(png,null());
HXDLIN(  15)		set->addRect(png->rect);
HXDLIN(  15)		Int _hx_tmp;
HXDLIN(  15)		_hx_tmp = ::Std_obj::_hx_int(set->getRect((int)0)->width);
HXDLIN(  15)		Int _hx_tmp1;
HXDLIN(  15)		_hx_tmp1 = ::Std_obj::_hx_int(set->getRect((int)0)->height);
HXDLIN(  15)		HX_VARI(  ::openfl::display::Tilemap,map) =  ::openfl::display::Tilemap_obj::__new(_hx_tmp,_hx_tmp1,set,null());
HXDLIN(  15)		map->addTile( ::openfl::display::Tile_obj::__new(null(),null(),null(),null(),null(),null()));
HXDLIN(  15)		HX_VARI_NAME(  ::openfl::display::Sprite,sprite1,"sprite") =  ::openfl::display::Sprite_obj::__new();
HXDLIN(  15)		sprite1->addChild(map);
HXDLIN(  15)		sprite1->set_x((int)0);
HXDLIN(  15)		sprite1->set_y((int)0);
HXDLIN(  15)		this->addChild(sprite1);
HXLINE(  17)		Float _hx_tmp2 = this->get_width();
HXDLIN(  17)		this->set_x((((Float)240.) - ((Float)_hx_tmp2 / (Float)(int)2)));
HXLINE(  18)		Float _hx_tmp3 = this->get_height();
HXDLIN(  18)		this->set_y(((int)800 - _hx_tmp3));
HXLINE(  19)		this->set_visible(false);
HXLINE(  21)		sprite->addChild(hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic Node_obj::__CreateEmpty() { return new Node_obj; }

hx::ObjectPtr< Node_obj > Node_obj::__new(::String id, ::openfl::display::Sprite sprite)
{
	hx::ObjectPtr< Node_obj > _hx_result = new Node_obj();
	_hx_result->__construct(id,sprite);
	return _hx_result;
}

Dynamic Node_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Node_obj > _hx_result = new Node_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}


Node_obj::Node_obj()
{
}

void Node_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Node);
	HX_MARK_MEMBER_NAME(id,"id");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Node_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Node_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Node_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Node_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Node_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Node_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Node_obj_sStaticStorageInfo = 0;
#endif

static ::String Node_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	::String(null()) };

static void Node_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Node_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

#endif

hx::Class Node_obj::__mClass;

void Node_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Node","\x22","\x36","\xe3","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Node_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Node_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Node_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Node_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Node_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Node_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

