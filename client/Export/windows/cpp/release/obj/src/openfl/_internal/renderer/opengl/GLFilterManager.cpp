// Generated by Haxe 3.3.0
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
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLFilterManager_obj::__construct( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","new",0xa57802be,"openfl._internal.renderer.opengl.GLFilterManager.new","openfl/_internal/renderer/opengl/GLFilterManager.hx",30,0xef502054)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderer,"renderer")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  32)		super::__construct(renderSession);
HXLINE(  34)		this->renderer = renderer;
HXLINE(  35)		this->gl = renderSession->gl;
HXLINE(  37)		this->filterDepth = (int)0;
HXLINE(  38)		this->matrix =  ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
            	}

Dynamic GLFilterManager_obj::__CreateEmpty() { return new GLFilterManager_obj; }

hx::ObjectPtr< GLFilterManager_obj > GLFilterManager_obj::__new( ::openfl::_internal::renderer::opengl::GLRenderer renderer, ::openfl::_internal::renderer::RenderSession renderSession)
{
	hx::ObjectPtr< GLFilterManager_obj > _hx_result = new GLFilterManager_obj();
	_hx_result->__construct(renderer,renderSession);
	return _hx_result;
}

Dynamic GLFilterManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFilterManager_obj > _hx_result = new GLFilterManager_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

 ::openfl::display::Shader GLFilterManager_obj::pushObject( ::openfl::display::DisplayObject object){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","pushObject",0x4b4ad99b,"openfl._internal.renderer.opengl.GLFilterManager.pushObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",43,0xef502054)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE(  47)		Bool _hx_tmp;
HXDLIN(  47)		Bool _hx_tmp1 = hx::IsNotNull( object->_hx___filters );
HXDLIN(  47)		if (_hx_tmp1) {
HXLINE(  47)			_hx_tmp = (object->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE(  47)			_hx_tmp = false;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  49)			this->renderer->getRenderTarget(true);
HXLINE(  50)			this->filterDepth++;
            		}
HXLINE(  54)		return this->renderSession->shaderManager->defaultShader;
            	}


void GLFilterManager_obj::popObject( ::openfl::display::DisplayObject object){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","popObject",0x1feca00e,"openfl._internal.renderer.opengl.GLFilterManager.popObject","openfl/_internal/renderer/opengl/GLFilterManager.hx",61,0xef502054)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
HXLINE(  61)		Bool _hx_tmp;
HXDLIN(  61)		Bool _hx_tmp1 = hx::IsNotNull( object->_hx___filters );
HXDLIN(  61)		if (_hx_tmp1) {
HXLINE(  61)			_hx_tmp = (object->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE(  61)			_hx_tmp = false;
            		}
HXDLIN(  61)		if (_hx_tmp) {
HXLINE(  63)			HX_VARI(  ::openfl::filters::BitmapFilter,filter) = object->_hx___filters->__get((int)0).StaticCast<  ::openfl::filters::BitmapFilter >();
HXLINE(  64)			HX_VAR(  ::openfl::display::BitmapData,currentTarget);
HXDLIN(  64)			HX_VAR(  ::openfl::display::Shader,shader);
HXLINE(  66)			Bool _hx_tmp2 = filter->_hx___cacheObject;
HXDLIN(  66)			if (_hx_tmp2) {
HXLINE(  68)				currentTarget = this->renderer->currentRenderTarget;
HXLINE(  69)				this->renderer->getCacheObject();
HXLINE(  71)				this->renderPass(currentTarget,this->renderSession->shaderManager->defaultShader);
            			}
HXLINE(  75)			{
HXLINE(  75)				HX_VARI( Int,_g1) = (int)0;
HXDLIN(  75)				HX_VARI( Int,_g) = filter->_hx___numPasses;
HXDLIN(  75)				while((_g1 < _g)){
HXLINE(  75)					HX_VARI( Int,i) = _g1++;
HXLINE(  77)					currentTarget = this->renderer->currentRenderTarget;
HXLINE(  78)					this->renderer->getRenderTarget(true);
HXLINE(  79)					shader = filter->_hx___initShader(this->renderSession,i);
HXLINE(  81)					this->renderPass(currentTarget,shader);
            				}
            			}
HXLINE(  87)			this->filterDepth--;
HXLINE(  88)			Bool _hx_tmp3 = (this->filterDepth > (int)0);
HXDLIN(  88)			this->renderer->getRenderTarget(_hx_tmp3);
HXLINE(  90)			this->renderPass(this->renderer->currentRenderTarget,this->renderSession->shaderManager->defaultShader);
            		}
            	}


void GLFilterManager_obj::renderPass( ::openfl::display::BitmapData target, ::openfl::display::Shader shader){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLFilterManager","renderPass",0xc987d4a9,"openfl._internal.renderer.opengl.GLFilterManager.renderPass","openfl/_internal/renderer/opengl/GLFilterManager.hx",97,0xef502054)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
            	HX_STACK_ARG(shader,"shader")
HXLINE(  99)		shader->get_data()->uImage0->input = target;
HXLINE( 100)		Bool _hx_tmp;
HXDLIN( 100)		if (this->renderSession->allowSmoothing) {
HXLINE( 100)			_hx_tmp = this->renderSession->upscaled;
            		}
            		else {
HXLINE( 100)			_hx_tmp = false;
            		}
HXDLIN( 100)		shader->get_data()->uImage0->smoothing = _hx_tmp;
HXLINE( 101)		shader->get_data()->uMatrix->value = this->renderer->getMatrix(this->matrix);
HXLINE( 103)		this->renderSession->shaderManager->setShader(shader);
HXLINE( 105)		Int _hx_tmp1 = this->gl->ARRAY_BUFFER;
HXDLIN( 105)		 ::lime::graphics::opengl::GLBuffer _hx_tmp2 = target->getBuffer(this->gl,(int)1);
HXDLIN( 105)		this->gl->bindBuffer(_hx_tmp1,_hx_tmp2);
HXLINE( 106)		this->gl->vertexAttribPointer(shader->get_data()->aPosition->index,(int)3,this->gl->FLOAT,false,(int)24,(int)0);
HXLINE( 107)		this->gl->vertexAttribPointer(shader->get_data()->aTexCoord->index,(int)2,this->gl->FLOAT,false,(int)24,(int)12);
HXLINE( 108)		this->gl->vertexAttribPointer(shader->get_data()->aAlpha->index,(int)1,this->gl->FLOAT,false,(int)24,(int)20);
HXLINE( 110)		this->gl->drawArrays(this->gl->TRIANGLE_STRIP,(int)0,(int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC2(GLFilterManager_obj,renderPass,(void))


GLFilterManager_obj::GLFilterManager_obj()
{
}

void GLFilterManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLFilterManager);
	HX_MARK_MEMBER_NAME(filterDepth,"filterDepth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLFilterManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filterDepth,"filterDepth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	 ::openfl::_internal::renderer::AbstractFilterManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLFilterManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return hx::Val( renderer); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn()); }
		if (HX_FIELD_EQ(inName,"renderPass") ) { return hx::Val( renderPass_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { return hx::Val( filterDepth); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLFilterManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::_internal::renderer::opengl::GLRenderer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterDepth") ) { filterDepth=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLFilterManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLFilterManager_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLFilterManager_obj,filterDepth),HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLFilterManager_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLFilterManager_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::GLRenderer*/ ,(int)offsetof(GLFilterManager_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLFilterManager_obj_sStaticStorageInfo = 0;
#endif

static ::String GLFilterManager_obj_sMemberFields[] = {
	HX_HCSTRING("filterDepth","\x2b","\x46","\xdc","\x86"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("renderPass","\x47","\xdf","\x5b","\xe7"),
	::String(null()) };

static void GLFilterManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFilterManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFilterManager_obj::__mClass,"__mClass");
};

#endif

hx::Class GLFilterManager_obj::__mClass;

void GLFilterManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLFilterManager","\xcc","\x8b","\x5c","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLFilterManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLFilterManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLFilterManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFilterManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFilterManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFilterManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
