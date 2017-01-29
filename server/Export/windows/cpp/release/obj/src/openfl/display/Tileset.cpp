// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__Tileset_TileData
#include <openfl/display/_Tileset/TileData.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_18_new,"openfl.display.Tileset","new",0x154abbfc,"openfl.display.Tileset.new","openfl/display/Tileset.hx",18,0x8bc15676)
HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_37_addRect,"openfl.display.Tileset","addRect",0x4caf7981,"openfl.display.Tileset.addRect","openfl/display/Tileset.hx",37,0x8bc15676)
HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_50_clone,"openfl.display.Tileset","clone",0xb9a11df9,"openfl.display.Tileset.clone","openfl/display/Tileset.hx",50,0x8bc15676)
HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_67_getRect,"openfl.display.Tileset","getRect",0xe2f4e676,"openfl.display.Tileset.getRect","openfl/display/Tileset.hx",67,0x8bc15676)
HX_DEFINE_STACK_FRAME(_hx_pos_7b61decb5082045e_87_set_bitmapData,"openfl.display.Tileset","set_bitmapData",0x56e7e85a,"openfl.display.Tileset.set_bitmapData","openfl/display/Tileset.hx",87,0x8bc15676)
namespace openfl{
namespace display{

void Tileset_obj::__construct( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_18_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bitmapData,"bitmapData")
            	HX_STACK_ARG(rects,"rects")
HXLINE(  20)		this->_hx___data = ::Array_obj< ::Dynamic>::__new();
HXLINE(  22)		this->set_bitmapData(bitmapData);
HXLINE(  24)		if (hx::IsNotNull( rects )) {
HXLINE(  26)			HX_VARI( int,_g) = (int)0;
HXDLIN(  26)			while((_g < rects->length)){
HXLINE(  26)				HX_VARI(  ::openfl::geom::Rectangle,rect) = rects->__get(_g).StaticCast<  ::openfl::geom::Rectangle >();
HXDLIN(  26)				_g = (_g + (int)1);
HXLINE(  28)				this->addRect(rect);
            			}
            		}
            	}

Dynamic Tileset_obj::__CreateEmpty() { return new Tileset_obj; }

void *Tileset_obj::_hx_vtable = 0;

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tileset_obj > _hx_result = new Tileset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Tileset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09a41eea;
}

int Tileset_obj::addRect( ::openfl::geom::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_37_addRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
HXLINE(  39)		if (hx::IsNull( rect )) {
HXLINE(  39)			return (int)-1;
            		}
HXLINE(  41)		HX_VARI(  ::openfl::display::_Tileset::TileData,tileData) =  ::openfl::display::_Tileset::TileData_obj::__alloc( HX_CTX ,rect);
HXLINE(  42)		tileData->_hx___update(this->bitmapData);
HXLINE(  43)		this->_hx___data->push(tileData);
HXLINE(  45)		return (this->_hx___data->length - (int)1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,addRect,return )

 ::openfl::display::Tileset Tileset_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_50_clone)
            	HX_STACK_THIS(this)
HXLINE(  52)		HX_VARI(  ::openfl::display::Tileset,tileset) =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,this->bitmapData,null());
HXLINE(  53)		HX_VARI(  ::openfl::geom::Rectangle,rect) =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  55)		{
HXLINE(  55)			HX_VARI( int,_g) = (int)0;
HXDLIN(  55)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_hx___data;
HXDLIN(  55)			while((_g < _g1->length)){
HXLINE(  55)				HX_VARI(  ::openfl::display::_Tileset::TileData,tileData) = _g1->__get(_g).StaticCast<  ::openfl::display::_Tileset::TileData >();
HXDLIN(  55)				_g = (_g + (int)1);
HXLINE(  57)				rect->setTo(tileData->x,tileData->y,tileData->width,tileData->height);
HXLINE(  58)				tileset->addRect(rect);
            			}
            		}
HXLINE(  62)		return tileset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,clone,return )

 ::openfl::geom::Rectangle Tileset_obj::getRect(int id){
            	HX_GC_STACKFRAME(&_hx_pos_7b61decb5082045e_67_getRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if ((id < this->_hx___data->length)) {
HXLINE(  69)			_hx_tmp = (id >= (int)0);
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  71)			return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,this->_hx___data->__get(id).StaticCast<  ::openfl::display::_Tileset::TileData >()->x,this->_hx___data->__get(id).StaticCast<  ::openfl::display::_Tileset::TileData >()->y,this->_hx___data->__get(id).StaticCast<  ::openfl::display::_Tileset::TileData >()->width,this->_hx___data->__get(id).StaticCast<  ::openfl::display::_Tileset::TileData >()->height);
            		}
HXLINE(  75)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getRect,return )

 ::openfl::display::BitmapData Tileset_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_7b61decb5082045e_87_set_bitmapData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  89)		this->bitmapData = value;
HXLINE(  91)		{
HXLINE(  91)			HX_VARI( int,_g) = (int)0;
HXDLIN(  91)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_hx___data;
HXDLIN(  91)			while((_g < _g1->length)){
HXLINE(  91)				HX_VARI(  ::openfl::display::_Tileset::TileData,data) = _g1->__get(_g).StaticCast<  ::openfl::display::_Tileset::TileData >();
HXDLIN(  91)				_g = (_g + (int)1);
HXLINE(  93)				data->_hx___update(this->bitmapData);
            			}
            		}
HXLINE(  97)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,set_bitmapData,return )


hx::ObjectPtr< Tileset_obj > Tileset_obj::__new( ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects) {
	hx::ObjectPtr< Tileset_obj > __this = new Tileset_obj();
	__this->__construct(bitmapData,rects);
	return __this;
}

hx::ObjectPtr< Tileset_obj > Tileset_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData,::Array< ::Dynamic> rects) {
	Tileset_obj *__this = (Tileset_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Tileset_obj), true, "openfl.display.Tileset"));
	*(void **)__this = Tileset_obj::_hx_vtable;
	__this->__construct(bitmapData,rects);
	return __this;
}

Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(_hx___data,"__data");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___data,"__data");
}

hx::Val Tileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { return hx::Val( _hx___data); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addRect") ) { return hx::Val( addRect_dyn()); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return hx::Val( getRect_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Tileset_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__data") ) { _hx___data=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Tileset_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Tileset_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tileset_obj,_hx___data),HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Tileset_obj_sStaticStorageInfo = 0;
#endif

static ::String Tileset_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("__data","\x4a","\xb9","\x5b","\xf1"),
	HX_HCSTRING("addRect","\xe5","\x8f","\xe4","\x87"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	::String(null()) };

static void Tileset_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tileset_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#endif

hx::Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Object *dummy = new Tileset_obj;
	Tileset_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Tileset","\x0a","\x4e","\x4e","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Tileset_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Tileset_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tileset_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tileset_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tileset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tileset_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display