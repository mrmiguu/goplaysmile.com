// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeRenderer
#include <lime/_backend/native/NativeRenderer.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_graphics_RenderContext_Void
#include <lime/app/_Event_lime_graphics_RenderContext_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_RendererType
#include <lime/graphics/RendererType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_967f36da67cfd2f5_14_new,"lime.graphics.Renderer","new",0x7185ed3f,"lime.graphics.Renderer.new","lime/graphics/Renderer.hx",14,0x16f09331)
HX_LOCAL_STACK_FRAME(_hx_pos_967f36da67cfd2f5_40_create,"lime.graphics.Renderer","create",0x6b7d5f7d,"lime.graphics.Renderer.create","lime/graphics/Renderer.hx",40,0x16f09331)
HX_LOCAL_STACK_FRAME(_hx_pos_967f36da67cfd2f5_47_flip,"lime.graphics.Renderer","flip",0xde6538ee,"lime.graphics.Renderer.flip","lime/graphics/Renderer.hx",47,0x16f09331)
HX_LOCAL_STACK_FRAME(_hx_pos_967f36da67cfd2f5_54_readPixels,"lime.graphics.Renderer","readPixels",0xd6a0a024,"lime.graphics.Renderer.readPixels","lime/graphics/Renderer.hx",54,0x16f09331)
HX_LOCAL_STACK_FRAME(_hx_pos_967f36da67cfd2f5_61_render,"lime.graphics.Renderer","render",0xf49763d7,"lime.graphics.Renderer.render","lime/graphics/Renderer.hx",61,0x16f09331)
namespace lime{
namespace graphics{

void Renderer_obj::__construct( ::lime::ui::Window window){
            	HX_GC_STACKFRAME(&_hx_pos_967f36da67cfd2f5_14_new)
HXLINE(  20)		this->onRender =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  19)		this->onContextRestored =  ::lime::app::_Event_lime_graphics_RenderContext_Void_obj::__alloc( HX_CTX );
HXLINE(  18)		this->onContextLost =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  29)		this->window = window;
HXLINE(  31)		this->backend =  ::lime::_backend::native::NativeRenderer_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
HXLINE(  33)		this->window->renderer = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic Renderer_obj::__CreateEmpty() { return new Renderer_obj; }

void *Renderer_obj::_hx_vtable = 0;

Dynamic Renderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Renderer_obj > _hx_result = new Renderer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Renderer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x149a6767;
}

void Renderer_obj::create(){
            	HX_STACKFRAME(&_hx_pos_967f36da67cfd2f5_40_create)
HXLINE(  40)		this->backend->create();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,create,(void))

void Renderer_obj::flip(){
            	HX_STACKFRAME(&_hx_pos_967f36da67cfd2f5_47_flip)
HXLINE(  47)		this->backend->flip();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,flip,(void))

 ::lime::graphics::Image Renderer_obj::readPixels( ::lime::math::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_967f36da67cfd2f5_54_readPixels)
HXLINE(  54)		return this->backend->readPixels(rect);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,readPixels,return )

void Renderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_967f36da67cfd2f5_61_render)
HXLINE(  61)		this->backend->render();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Renderer_obj,render,(void))


hx::ObjectPtr< Renderer_obj > Renderer_obj::__new( ::lime::ui::Window window) {
	hx::ObjectPtr< Renderer_obj > __this = new Renderer_obj();
	__this->__construct(window);
	return __this;
}

hx::ObjectPtr< Renderer_obj > Renderer_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::ui::Window window) {
	Renderer_obj *__this = (Renderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Renderer_obj), true, "lime.graphics.Renderer"));
	*(void **)__this = Renderer_obj::_hx_vtable;
	__this->__construct(window);
	return __this;
}

Renderer_obj::Renderer_obj()
{
}

void Renderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Renderer);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(onContextLost,"onContextLost");
	HX_MARK_MEMBER_NAME(onContextRestored,"onContextRestored");
	HX_MARK_MEMBER_NAME(onRender,"onRender");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(backend,"backend");
	HX_MARK_END_CLASS();
}

void Renderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(onContextLost,"onContextLost");
	HX_VISIT_MEMBER_NAME(onContextRestored,"onContextRestored");
	HX_VISIT_MEMBER_NAME(onRender,"onRender");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(backend,"backend");
}

hx::Val Renderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		if (HX_FIELD_EQ(inName,"flip") ) { return hx::Val( flip_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return hx::Val( window); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context); }
		if (HX_FIELD_EQ(inName,"backend") ) { return hx::Val( backend); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { return hx::Val( onRender); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPixels") ) { return hx::Val( readPixels_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return hx::Val( onContextLost); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContextRestored") ) { return hx::Val( onContextRestored); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Renderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::lime::graphics::RendererType >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backend") ) { backend=inValue.Cast<  ::lime::_backend::native::NativeRenderer >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRender") ) { onRender=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onContextLost") ) { onContextLost=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onContextRestored") ) { onContextRestored=inValue.Cast<  ::lime::app::_Event_lime_graphics_RenderContext_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Renderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"));
	outFields->push(HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2"));
	outFields->push(HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Renderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(Renderer_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Renderer_obj,onContextLost),HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87")},
	{hx::fsObject /*::lime::app::_Event_lime_graphics_RenderContext_Void*/ ,(int)offsetof(Renderer_obj,onContextRestored),HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Renderer_obj,onRender),HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4")},
	{hx::fsObject /*::lime::graphics::RendererType*/ ,(int)offsetof(Renderer_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(Renderer_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::lime::_backend::native::NativeRenderer*/ ,(int)offsetof(Renderer_obj,backend),HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Renderer_obj_sStaticStorageInfo = 0;
#endif

static ::String Renderer_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"),
	HX_HCSTRING("onContextRestored","\x06","\x18","\x47","\xe2"),
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("backend","\x14","\xbc","\x87","\xfb"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("flip","\xad","\x12","\xbe","\x43"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null()) };

static void Renderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Renderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

hx::Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Object *dummy = new Renderer_obj;
	Renderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Renderer","\xcd","\xe1","\x20","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Renderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Renderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Renderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Renderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Renderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Renderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
