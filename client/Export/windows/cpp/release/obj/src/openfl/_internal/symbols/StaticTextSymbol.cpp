// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_FontSymbol
#include <openfl/_internal/symbols/FontSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextRecord
#include <openfl/_internal/symbols/StaticTextRecord.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_StaticTextSymbol
#include <openfl/_internal/symbols/StaticTextSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

namespace openfl{
namespace _internal{
namespace symbols{

void StaticTextSymbol_obj::__construct(){
            	HX_STACK_FRAME("openfl._internal.symbols.StaticTextSymbol","new",0x75321c28,"openfl._internal.symbols.StaticTextSymbol.new","openfl/_internal/symbols/StaticTextSymbol.hx",20,0x451958e5)
            	HX_STACK_THIS(this)
HXLINE(  20)		super::__construct();
            	}

Dynamic StaticTextSymbol_obj::__CreateEmpty() { return new StaticTextSymbol_obj; }

hx::ObjectPtr< StaticTextSymbol_obj > StaticTextSymbol_obj::__new()
{
	hx::ObjectPtr< StaticTextSymbol_obj > _hx_result = new StaticTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StaticTextSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticTextSymbol_obj > _hx_result = new StaticTextSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::display::DisplayObject StaticTextSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_STACK_FRAME("openfl._internal.symbols.StaticTextSymbol","__createObject",0xe6e27b33,"openfl._internal.symbols.StaticTextSymbol.__createObject","openfl/_internal/symbols/StaticTextSymbol.hx",25,0x451958e5)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(swf,"swf")
HXLINE(  27)		HX_VARI(  ::openfl::display::Shape,shape) =  ::openfl::display::Shape_obj::__new();
HXLINE(  28)		HX_VARI(  ::openfl::display::Graphics,graphics) = shape->get_graphics();
HXLINE(  30)		Bool _hx_tmp = hx::IsNotNull( this->rendered );
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  32)			 ::openfl::display::Graphics _hx_tmp1 = this->rendered->get_graphics();
HXDLIN(  32)			graphics->copyFrom(_hx_tmp1);
HXLINE(  33)			return shape;
            		}
HXLINE(  37)		Bool _hx_tmp2 = hx::IsNotNull( this->records );
HXDLIN(  37)		if (_hx_tmp2) {
HXLINE(  39)			HX_VARI(  ::openfl::_internal::symbols::FontSymbol,font) = null();
HXLINE(  40)			HX_VARI( Int,color) = (int)16777215;
HXLINE(  41)			HX_VARI( Float,offsetX) = this->matrix->tx;
HXLINE(  42)			HX_VARI( Float,offsetY) = this->matrix->ty;
HXLINE(  44)			{
HXLINE(  44)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  44)				HX_VARI( ::Array< ::Dynamic>,_g1) = this->records;
HXDLIN(  44)				while((_g < _g1->length)){
HXLINE(  44)					HX_VARI(  ::openfl::_internal::symbols::StaticTextRecord,record) = _g1->__get(_g).StaticCast<  ::openfl::_internal::symbols::StaticTextRecord >();
HXDLIN(  44)					++_g;
HXLINE(  46)					Bool _hx_tmp3 = hx::IsNotNull( record->fontID );
HXDLIN(  46)					if (_hx_tmp3) {
HXLINE(  46)						Int key = record->fontID;
HXDLIN(  46)						 ::openfl::_internal::symbols::SWFSymbol _hx_tmp4 = swf->symbols->get(key).StaticCast<  ::openfl::_internal::symbols::SWFSymbol >();
HXDLIN(  46)						font = ( ( ::openfl::_internal::symbols::FontSymbol)(_hx_tmp4) );
            					}
HXLINE(  47)					Bool _hx_tmp5 = hx::IsNotNull( record->offsetX );
HXDLIN(  47)					if (_hx_tmp5) {
HXLINE(  47)						offsetX = (this->matrix->tx + (record->offsetX * ((Float)0.05)));
            					}
HXLINE(  48)					Bool _hx_tmp6 = hx::IsNotNull( record->offsetY );
HXDLIN(  48)					if (_hx_tmp6) {
HXLINE(  48)						offsetY = (this->matrix->ty + (record->offsetY * ((Float)0.05)));
            					}
HXLINE(  49)					Bool _hx_tmp7 = hx::IsNotNull( record->color );
HXDLIN(  49)					if (_hx_tmp7) {
HXLINE(  49)						color = record->color;
            					}
HXLINE(  51)					Bool _hx_tmp8 = hx::IsNotNull( font );
HXDLIN(  51)					if (_hx_tmp8) {
HXLINE(  53)						HX_VARI( Float,scale) = (((Float)record->fontHeight / (Float)(int)1024) * ((Float)0.05));
HXLINE(  55)						HX_VAR( Int,index);
HXLINE(  58)						{
HXLINE(  58)							HX_VARI( Int,_g3) = (int)0;
HXDLIN(  58)							HX_VARI( Int,_g2) = record->glyphs->length;
HXDLIN(  58)							while((_g3 < _g2)){
HXLINE(  58)								HX_VARI( Int,i) = _g3++;
HXLINE(  60)								index = record->glyphs->__get(i);
HXLINE(  62)								{
HXLINE(  62)									HX_VARI( Int,_g4) = (int)0;
HXDLIN(  62)									HX_VARI( ::Array< ::Dynamic>,_g5) = font->glyphs->__get(index).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  62)									while((_g4 < _g5->length)){
HXLINE(  62)										HX_VARI( ::hx::EnumBase,command) = _g5->__get(_g4).StaticCast< ::hx::EnumBase >();
HXDLIN(  62)										++_g4;
HXLINE(  64)										Int _hx_tmp9 = ( ( ::hx::EnumBase)(command) )->_hx_getIndex();
HXDLIN(  64)										switch((int)(_hx_tmp9)){
            											case (int)1: {
HXLINE(  68)												graphics->beginFill(((int)color & (int)(int)16777215),((Float)((int)((int)color >> (int)(int)24) & (int)(int)255) / (Float)(int)255));
            											}
            											break;
            											case (int)3: {
HXLINE(  72)												graphics->curveTo(((command->_hx_getFloat(0) * scale) + offsetX),((command->_hx_getFloat(1) * scale) + offsetY),((command->_hx_getFloat(2) * scale) + offsetX),((command->_hx_getFloat(3) * scale) + offsetY));
            											}
            											break;
            											case (int)4: {
HXLINE(  76)												graphics->endFill();
            											}
            											break;
            											case (int)5: {
HXLINE(  78)												HX_VARI(  ::Dynamic,miterLimit) = command->_hx_getObject(7);
HXDLIN(  78)												HX_VARI(  ::Dynamic,joints) = command->_hx_getObject(6);
HXDLIN(  78)												HX_VARI(  ::Dynamic,caps) = command->_hx_getObject(5);
HXDLIN(  78)												HX_VARI(  ::Dynamic,scaleMode) = command->_hx_getObject(4);
HXDLIN(  78)												HX_VARI(  ::Dynamic,pixelHinting) = command->_hx_getObject(3);
HXDLIN(  78)												HX_VARI(  ::Dynamic,alpha) = command->_hx_getObject(2);
HXDLIN(  78)												HX_VARI_NAME(  ::Dynamic,color1,"color") = command->_hx_getObject(1);
HXDLIN(  78)												HX_VARI(  ::Dynamic,thickness) = command->_hx_getObject(0);
HXLINE(  80)												Bool _hx_tmp10 = hx::IsNotNull( thickness );
HXDLIN(  80)												if (_hx_tmp10) {
HXLINE(  82)													graphics->lineStyle(thickness,color1,alpha,pixelHinting,scaleMode,caps,joints,miterLimit);
            												}
            												else {
HXLINE(  86)													graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
            												}
            											}
            											break;
            											case (int)6: {
HXLINE(  92)												graphics->lineTo(((command->_hx_getFloat(0) * scale) + offsetX),((command->_hx_getFloat(1) * scale) + offsetY));
            											}
            											break;
            											case (int)7: {
HXLINE(  96)												graphics->moveTo(((command->_hx_getFloat(0) * scale) + offsetX),((command->_hx_getFloat(1) * scale) + offsetY));
            											}
            											break;
            											default:{
            											}
            										}
            									}
            								}
HXLINE( 104)								hx::AddEq(offsetX,(record->advances->__get(i) * ((Float)0.05)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 114)		this->records = null();
HXLINE( 115)		this->rendered =  ::openfl::display::Shape_obj::__new();
HXLINE( 116)		 ::openfl::display::Graphics _hx_tmp11 = this->rendered->get_graphics();
HXDLIN( 116)		 ::openfl::display::Graphics _hx_tmp12 = shape->get_graphics();
HXDLIN( 116)		_hx_tmp11->copyFrom(_hx_tmp12);
HXLINE( 118)		return shape;
            	}



StaticTextSymbol_obj::StaticTextSymbol_obj()
{
}

void StaticTextSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StaticTextSymbol);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(records,"records");
	HX_MARK_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StaticTextSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(records,"records");
	HX_VISIT_MEMBER_NAME(rendered,"rendered");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val StaticTextSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { return hx::Val( records); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { return hx::Val( rendered); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val StaticTextSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"records") ) { records=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rendered") ) { rendered=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StaticTextSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"));
	outFields->push(HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo StaticTextSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(StaticTextSymbol_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(StaticTextSymbol_obj,records),HX_HCSTRING("records","\xc2","\x48","\xfb","\x30")},
	{hx::fsObject /*::openfl::display::Shape*/ ,(int)offsetof(StaticTextSymbol_obj,rendered),HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *StaticTextSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String StaticTextSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("records","\xc2","\x48","\xfb","\x30"),
	HX_HCSTRING("rendered","\x35","\xc5","\xdb","\xb2"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void StaticTextSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StaticTextSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StaticTextSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class StaticTextSymbol_obj::__mClass;

void StaticTextSymbol_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.StaticTextSymbol","\x36","\x28","\x1f","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StaticTextSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(StaticTextSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StaticTextSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StaticTextSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticTextSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticTextSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
