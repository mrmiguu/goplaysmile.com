// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShape
#include <openfl/_internal/renderer/opengl/GLShape.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3b6a827a10880e4c_26_render,"openfl._internal.renderer.opengl.GLShape","render",0x6f8c5eac,"openfl._internal.renderer.opengl.GLShape.render","openfl/_internal/renderer/opengl/GLShape.hx",26,0xf928bb48)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLShape_obj::__construct() { }

Dynamic GLShape_obj::__CreateEmpty() { return new GLShape_obj; }

void *GLShape_obj::_hx_vtable = 0;

Dynamic GLShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLShape_obj > _hx_result = new GLShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48dff322;
}

void GLShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_3b6a827a10880e4c_26_render)
            	HX_STACK_ARG(shape,"shape")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		if (!(!(shape->_hx___renderable))) {
HXLINE(  28)			_hx_tmp = (shape->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  28)			_hx_tmp = true;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			return;
            		}
HXLINE(  30)		HX_VARI(  ::openfl::display::Graphics,graphics) = shape->_hx___graphics;
HXLINE(  32)		if (hx::IsNotNull( graphics )) {
HXLINE(  37)			::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(graphics,renderSession,shape->_hx___renderTransform);
HXLINE(  42)			bool _hx_tmp1;
HXDLIN(  42)			if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  42)				_hx_tmp1 = graphics->_hx___visible;
            			}
            			else {
HXLINE(  42)				_hx_tmp1 = false;
            			}
HXDLIN(  42)			if (_hx_tmp1) {
HXLINE(  44)				HX_VARI(  ::openfl::_internal::renderer::opengl::GLRenderer,renderer) = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXLINE(  45)				HX_VARI(  ::lime::_backend::native::NativeGLRenderContext,gl) = renderSession->gl;
HXLINE(  47)				renderSession->blendModeManager->setBlendMode(shape->get_blendMode());
HXLINE(  48)				renderSession->maskManager->pushObject(shape,null());
HXLINE(  50)				HX_VARI(  ::openfl::display::Shader,shader) = renderSession->filterManager->pushObject(shape);
HXLINE(  52)				shader->get_data()->uImage0->input = graphics->_hx___bitmap;
HXLINE(  53)				shader->get_data()->uImage0->smoothing = renderSession->allowSmoothing;
HXLINE(  54)				shader->get_data()->uMatrix->value = renderer->getMatrix(graphics->_hx___worldTransform);
HXLINE(  56)				renderSession->shaderManager->setShader(shader);
HXLINE(  58)				HX_VARI_NAME( int,gl1,"gl") = gl->ARRAY_BUFFER;
HXDLIN(  58)				gl->bindBuffer(gl1,graphics->_hx___bitmap->getBuffer(gl,shape->_hx___worldAlpha));
HXLINE(  59)				gl->vertexAttribPointer(shader->get_data()->aPosition->index,(int)3,gl->FLOAT,false,(int)24,(int)0);
HXLINE(  60)				gl->vertexAttribPointer(shader->get_data()->aTexCoord->index,(int)2,gl->FLOAT,false,(int)24,(int)12);
HXLINE(  61)				gl->vertexAttribPointer(shader->get_data()->aAlpha->index,(int)1,gl->FLOAT,false,(int)24,(int)20);
HXLINE(  63)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  65)				renderSession->filterManager->popObject(shape);
HXLINE(  66)				renderSession->maskManager->popObject(shape,null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLShape_obj,render,(void))


GLShape_obj::GLShape_obj()
{
}

bool GLShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLShape_obj_sStaticStorageInfo = 0;
#endif

static void GLShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLShape_obj::__mClass,"__mClass");
};

#endif

hx::Class GLShape_obj::__mClass;

static ::String GLShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void GLShape_obj::__register()
{
	hx::Object *dummy = new GLShape_obj;
	GLShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLShape","\x58","\x5e","\x97","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
