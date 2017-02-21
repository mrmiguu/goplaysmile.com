// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__Tileset_TileData
#include <openfl/display/_Tileset/TileData.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_029037f60b2e15cf_122_new,"openfl.display._Tileset.TileData","new",0xde68fe79,"openfl.display._Tileset.TileData.new","openfl/display/Tileset.hx",122,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_029037f60b2e15cf_136___update,"openfl.display._Tileset.TileData","__update",0x8e850870,"openfl.display._Tileset.TileData.__update","openfl/display/Tileset.hx",136,0x8bc15676)
namespace openfl{
namespace display{
namespace _Tileset{

void TileData_obj::__construct( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_029037f60b2e15cf_122_new)
HXLINE( 122)		if (hx::IsNotNull( rect )) {
HXLINE( 124)			this->x = ::Std_obj::_hx_int(rect->x);
HXLINE( 125)			this->y = ::Std_obj::_hx_int(rect->y);
HXLINE( 126)			this->width = ::Std_obj::_hx_int(rect->width);
HXLINE( 127)			this->height = ::Std_obj::_hx_int(rect->height);
            		}
            	}

Dynamic TileData_obj::__CreateEmpty() { return new TileData_obj; }

void *TileData_obj::_hx_vtable = 0;

Dynamic TileData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TileData_obj > _hx_result = new TileData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TileData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11a5dbdf;
}

void TileData_obj::_hx___update( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_029037f60b2e15cf_136___update)
HXLINE( 136)		if (hx::IsNotNull( bitmapData )) {
HXLINE( 138)			this->_hx___uvX = ((Float)this->x / (Float)bitmapData->width);
HXLINE( 139)			this->_hx___uvY = ((Float)this->y / (Float)bitmapData->height);
HXLINE( 140)			this->_hx___uvWidth = ((Float)(this->x + this->width) / (Float)bitmapData->width);
HXLINE( 141)			this->_hx___uvHeight = ((Float)(this->y + this->height) / (Float)bitmapData->height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileData_obj,_hx___update,(void))


hx::ObjectPtr< TileData_obj > TileData_obj::__new( ::openfl::geom::Rectangle rect) {
	hx::ObjectPtr< TileData_obj > __this = new TileData_obj();
	__this->__construct(rect);
	return __this;
}

hx::ObjectPtr< TileData_obj > TileData_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::geom::Rectangle rect) {
	TileData_obj *__this = (TileData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TileData_obj), true, "openfl.display._Tileset.TileData"));
	*(void **)__this = TileData_obj::_hx_vtable;
	__this->__construct(rect);
	return __this;
}

TileData_obj::TileData_obj()
{
}

void TileData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___uvHeight,"__uvHeight");
	HX_MARK_MEMBER_NAME(_hx___uvWidth,"__uvWidth");
	HX_MARK_MEMBER_NAME(_hx___uvX,"__uvX");
	HX_MARK_MEMBER_NAME(_hx___uvY,"__uvY");
	HX_MARK_END_CLASS();
}

void TileData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___uvHeight,"__uvHeight");
	HX_VISIT_MEMBER_NAME(_hx___uvWidth,"__uvWidth");
	HX_VISIT_MEMBER_NAME(_hx___uvX,"__uvX");
	HX_VISIT_MEMBER_NAME(_hx___uvY,"__uvY");
}

hx::Val TileData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		if (HX_FIELD_EQ(inName,"__uvX") ) { return hx::Val( _hx___uvX); }
		if (HX_FIELD_EQ(inName,"__uvY") ) { return hx::Val( _hx___uvY); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return hx::Val( _hx___update_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__uvWidth") ) { return hx::Val( _hx___uvWidth); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__uvHeight") ) { return hx::Val( _hx___uvHeight); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return hx::Val( _hx___bitmapData); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TileData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvX") ) { _hx___uvX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvY") ) { _hx___uvY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__uvWidth") ) { _hx___uvWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__uvHeight") ) { _hx___uvHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"));
	outFields->push(HX_HCSTRING("__uvHeight","\x48","\xd4","\x0b","\x29"));
	outFields->push(HX_HCSTRING("__uvWidth","\xc5","\x50","\x4a","\x0e"));
	outFields->push(HX_HCSTRING("__uvX","\xb7","\x8f","\x35","\xf2"));
	outFields->push(HX_HCSTRING("__uvY","\xb8","\x8f","\x35","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TileData_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TileData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(TileData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(TileData_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TileData_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(TileData_obj,_hx___bitmapData),HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c")},
	{hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvHeight),HX_HCSTRING("__uvHeight","\x48","\xd4","\x0b","\x29")},
	{hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvWidth),HX_HCSTRING("__uvWidth","\xc5","\x50","\x4a","\x0e")},
	{hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvX),HX_HCSTRING("__uvX","\xb7","\x8f","\x35","\xf2")},
	{hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvY),HX_HCSTRING("__uvY","\xb8","\x8f","\x35","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TileData_obj_sStaticStorageInfo = 0;
#endif

static ::String TileData_obj_sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__bitmapData","\xd9","\x30","\x54","\x6c"),
	HX_HCSTRING("__uvHeight","\x48","\xd4","\x0b","\x29"),
	HX_HCSTRING("__uvWidth","\xc5","\x50","\x4a","\x0e"),
	HX_HCSTRING("__uvX","\xb7","\x8f","\x35","\xf2"),
	HX_HCSTRING("__uvY","\xb8","\x8f","\x35","\xf2"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void TileData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TileData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileData_obj::__mClass,"__mClass");
};

#endif

hx::Class TileData_obj::__mClass;

void TileData_obj::__register()
{
	hx::Object *dummy = new TileData_obj;
	TileData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._Tileset.TileData","\x07","\x4e","\xa0","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TileData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TileData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TileData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _Tileset
