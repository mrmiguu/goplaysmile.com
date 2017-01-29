// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoMaskManager_obj::__construct( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","new",0x3e0aed8c,"openfl._internal.renderer.cairo.CairoMaskManager.new","openfl/_internal/renderer/cairo/CairoMaskManager.hx",19,0xc9e099a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  19)		super::__construct(renderSession);
            	}

Dynamic CairoMaskManager_obj::__CreateEmpty() { return new CairoMaskManager_obj; }

hx::ObjectPtr< CairoMaskManager_obj > CairoMaskManager_obj::__new( ::openfl::_internal::renderer::RenderSession renderSession)
{
	hx::ObjectPtr< CairoMaskManager_obj > _hx_result = new CairoMaskManager_obj();
	_hx_result->__construct(renderSession);
	return _hx_result;
}

Dynamic CairoMaskManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoMaskManager_obj > _hx_result = new CairoMaskManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void CairoMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushMask",0xb35b173a,"openfl._internal.renderer.cairo.CairoMaskManager.pushMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",24,0xc9e099a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
HXLINE(  26)		HX_VARI(  ::lime::graphics::cairo::Cairo,cairo) = this->renderSession->cairo;
HXLINE(  28)		cairo->save();
HXLINE(  31)		HX_VARI(  ::openfl::geom::Matrix,transform) = mask->_hx___getRenderTransform();
HXLINE(  33)		 ::lime::math::Matrix3 _hx_tmp = transform->_hx___toMatrix3();
HXDLIN(  33)		cairo->set_matrix(_hx_tmp);
HXLINE(  35)		cairo->newPath();
HXLINE(  36)		mask->_hx___renderCairoMask(this->renderSession);
HXLINE(  37)		cairo->clip();
            	}


void CairoMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushObject",0xebe1048d,"openfl._internal.renderer.cairo.CairoMaskManager.pushObject","openfl/_internal/renderer/cairo/CairoMaskManager.hx",44,0xc9e099a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  46)		Bool _hx_tmp;
HXDLIN(  46)		if (handleScrollRect) {
HXLINE(  46)			_hx_tmp = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  48)			this->pushRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE(  52)		Bool _hx_tmp1 = hx::IsNotNull( object->_hx___mask );
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  54)			this->pushMask(object->_hx___mask);
            		}
            	}


void CairoMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","pushRect",0xb6ac2372,"openfl._internal.renderer.cairo.CairoMaskManager.pushRect","openfl/_internal/renderer/cairo/CairoMaskManager.hx",61,0xc9e099a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
HXLINE(  63)		HX_VARI(  ::lime::graphics::cairo::Cairo,cairo) = this->renderSession->cairo;
HXLINE(  64)		cairo->save();
HXLINE(  66)		cairo->set_matrix( ::lime::math::Matrix3_obj::__new(transform->a,transform->c,transform->b,transform->d,transform->tx,transform->ty));
HXLINE(  68)		cairo->newPath();
HXLINE(  69)		cairo->rectangle(rect->x,rect->y,rect->width,rect->height);
HXLINE(  70)		cairo->clip();
            	}


void CairoMaskManager_obj::popMask(){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popMask",0x1cbc8a49,"openfl._internal.renderer.cairo.CairoMaskManager.popMask","openfl/_internal/renderer/cairo/CairoMaskManager.hx",77,0xc9e099a4)
            	HX_STACK_THIS(this)
HXLINE(  77)		this->renderSession->cairo->restore();
            	}


void CairoMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< Bool >  __o_handleScrollRect){
Bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popObject",0x86d0995c,"openfl._internal.renderer.cairo.CairoMaskManager.popObject","openfl/_internal/renderer/cairo/CairoMaskManager.hx",82,0xc9e099a4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  84)		Bool _hx_tmp = hx::IsNotNull( object->_hx___mask );
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  86)			this->popMask();
            		}
HXLINE(  90)		Bool _hx_tmp1;
HXDLIN(  90)		if (handleScrollRect) {
HXLINE(  90)			_hx_tmp1 = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE(  90)			_hx_tmp1 = false;
            		}
HXDLIN(  90)		if (_hx_tmp1) {
HXLINE(  92)			this->popRect();
            		}
            	}


void CairoMaskManager_obj::popRect(){
            	HX_STACK_FRAME("openfl._internal.renderer.cairo.CairoMaskManager","popRect",0x200d9681,"openfl._internal.renderer.cairo.CairoMaskManager.popRect","openfl/_internal/renderer/cairo/CairoMaskManager.hx",101,0xc9e099a4)
            	HX_STACK_THIS(this)
HXLINE( 101)		this->renderSession->cairo->restore();
            	}



CairoMaskManager_obj::CairoMaskManager_obj()
{
}

hx::Val CairoMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return hx::Val( popMask_dyn()); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return hx::Val( popRect_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return hx::Val( pushMask_dyn()); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return hx::Val( pushRect_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoMaskManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoMaskManager_obj_sStaticStorageInfo = 0;
#endif

static ::String CairoMaskManager_obj_sMemberFields[] = {
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	::String(null()) };

static void CairoMaskManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoMaskManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoMaskManager_obj::__mClass;

void CairoMaskManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoMaskManager","\x9a","\x77","\x92","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoMaskManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CairoMaskManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CairoMaskManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoMaskManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoMaskManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoMaskManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
