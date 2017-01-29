// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMRenderer
#include <openfl/_internal/renderer/dom/DOMRenderer.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::graphics::DOMRenderContext element){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","new",0x90a7aed0,"openfl._internal.renderer.dom.DOMRenderer.new","openfl/_internal/renderer/dom/DOMRenderer.hx",29,0xc812e2a0)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
            	HX_STACK_ARG(element,"element")
HXLINE(  31)		super::__construct(stage);
HXLINE(  33)		this->element = element;
HXLINE(  35)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__new();
HXLINE(  36)		this->renderSession->element = element;
HXLINE(  37)		this->renderSession->roundPixels = true;
HXLINE(  61)		this->renderSession->maskManager =  ::openfl::_internal::renderer::dom::DOMMaskManager_obj::__new(this->renderSession);
HXLINE(  63)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic DOMRenderer_obj::__CreateEmpty() { return new DOMRenderer_obj; }

hx::ObjectPtr< DOMRenderer_obj > DOMRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::graphics::DOMRenderContext element)
{
	hx::ObjectPtr< DOMRenderer_obj > _hx_result = new DOMRenderer_obj();
	_hx_result->__construct(stage,element);
	return _hx_result;
}

Dynamic DOMRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMRenderer_obj > _hx_result = new DOMRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void DOMRenderer_obj::clear(){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","clear",0x7c37cbfd,"openfl._internal.renderer.dom.DOMRenderer.clear","openfl/_internal/renderer/dom/DOMRenderer.hx",121,0xc812e2a0)
            	HX_STACK_THIS(this)
HXLINE( 121)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 121)		HX_VARI(  ::openfl::_Vector::ObjectVector,_g1) = this->stage->stage3Ds;
HXDLIN( 121)		while(true){
HXLINE( 121)			Int _hx_tmp = _g1->get_length();
HXDLIN( 121)			if (!((_g < _hx_tmp))) {
HXLINE( 121)				goto _hx_goto_0;
            			}
HXDLIN( 121)			HX_VARI(  ::openfl::display::Stage3D,stage3D) = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 121)			++_g;
HXLINE( 123)			stage3D->_hx___renderDOM(this->stage,this->renderSession);
            		}
            		_hx_goto_0:;
            	}


void DOMRenderer_obj::render(){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","render",0x321c32e6,"openfl._internal.renderer.dom.DOMRenderer.render","openfl/_internal/renderer/dom/DOMRenderer.hx",153,0xc812e2a0)
            	HX_STACK_THIS(this)
HXLINE( 155)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE( 157)		Bool _hx_tmp = !(this->stage->_hx___transparent);
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 159)			this->element->style->__SetField(HX_("background",ee,93,1d,26),this->stage->_hx___colorString,hx::paccDynamic);
            		}
            		else {
HXLINE( 163)			this->element->style->__SetField(HX_("background",ee,93,1d,26),HX_("none",b8,12,0a,49),hx::paccDynamic);
            		}
HXLINE( 167)		this->renderSession->z = (int)1;
HXLINE( 168)		this->stage->_hx___renderDOM(this->renderSession);
            	}


void DOMRenderer_obj::applyStyle( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession,Bool setTransform,Bool setAlpha,Bool setClip){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","applyStyle",0x6484f073,"openfl._internal.renderer.dom.DOMRenderer.applyStyle","openfl/_internal/renderer/dom/DOMRenderer.hx",68,0xc812e2a0)
            	HX_STACK_ARG(displayObject,"displayObject")
            	HX_STACK_ARG(renderSession,"renderSession")
            	HX_STACK_ARG(setTransform,"setTransform")
            	HX_STACK_ARG(setAlpha,"setAlpha")
            	HX_STACK_ARG(setClip,"setClip")
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DOMRenderer_obj,applyStyle,(void))

void DOMRenderer_obj::updateClip( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.dom.DOMRenderer","updateClip",0x2f8d2909,"openfl._internal.renderer.dom.DOMRenderer.updateClip","openfl/_internal/renderer/dom/DOMRenderer.hx",176,0xc812e2a0)
            	HX_STACK_ARG(displayObject,"displayObject")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE( 176)		( ( ::openfl::_internal::renderer::dom::DOMMaskManager)(renderSession->maskManager) )->updateClip(displayObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMRenderer_obj,updateClip,(void))


DOMRenderer_obj::DOMRenderer_obj()
{
}

void DOMRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMRenderer);
	HX_MARK_MEMBER_NAME(element,"element");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(element,"element");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DOMRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return hx::Val( element); }
	}
	return super::__Field(inName,inCallProp);
}

bool DOMRenderer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"applyStyle") ) { outValue = applyStyle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"updateClip") ) { outValue = updateClip_dyn(); return true; }
	}
	return false;
}

hx::Val DOMRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::lime::graphics::DOMRenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DOMRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(DOMRenderer_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DOMRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String DOMRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void DOMRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMRenderer_obj::__mClass;

static ::String DOMRenderer_obj_sStaticFields[] = {
	HX_HCSTRING("applyStyle","\xe3","\x20","\x6f","\x2f"),
	HX_HCSTRING("updateClip","\x79","\x59","\x77","\xfa"),
	::String(null())
};

void DOMRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMRenderer","\xde","\x46","\x5c","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMRenderer_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DOMRenderer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DOMRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
