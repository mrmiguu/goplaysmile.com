// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasTilemap
#include <openfl/_internal/renderer/canvas/CanvasTilemap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e7071a4c3b179226_21_render,"openfl._internal.renderer.canvas.CanvasTilemap","render",0x42cdc289,"openfl._internal.renderer.canvas.CanvasTilemap.render","openfl/_internal/renderer/canvas/CanvasTilemap.hx",21,0xd031c225)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasTilemap_obj::__construct() { }

Dynamic CanvasTilemap_obj::__CreateEmpty() { return new CanvasTilemap_obj; }

void *CanvasTilemap_obj::_hx_vtable = 0;

Dynamic CanvasTilemap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasTilemap_obj > _hx_result = new CanvasTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x73185a17;
}

void CanvasTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_e7071a4c3b179226_21_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTilemap_obj,render,(void))


CanvasTilemap_obj::CanvasTilemap_obj()
{
}

bool CanvasTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CanvasTilemap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CanvasTilemap_obj_sStaticStorageInfo = 0;
#endif

static void CanvasTilemap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasTilemap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasTilemap_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasTilemap_obj::__mClass;

static ::String CanvasTilemap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CanvasTilemap_obj::__register()
{
	hx::Object *dummy = new CanvasTilemap_obj;
	CanvasTilemap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasTilemap","\xdb","\xa0","\xf2","\xd2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasTilemap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CanvasTilemap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasTilemap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasTilemap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasTilemap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
