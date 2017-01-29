// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_utils_GLUtils
#include <lime/utils/GLUtils.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

namespace lime{
namespace utils{

void GLUtils_obj::__construct() { }

Dynamic GLUtils_obj::__CreateEmpty() { return new GLUtils_obj; }

hx::ObjectPtr< GLUtils_obj > GLUtils_obj::__new()
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic GLUtils_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLUtils_obj > _hx_result = new GLUtils_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::graphics::opengl::GLShader GLUtils_obj::compileShader(::String source,Int type){
            	HX_STACK_FRAME("lime.utils.GLUtils","compileShader",0x55bd7600,"lime.utils.GLUtils.compileShader","lime/utils/GLUtils.hx",13,0xaa32e64a)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(type,"type")
HXLINE(  15)		HX_VARI(  ::lime::graphics::opengl::GLShader,shader) = ::lime::graphics::opengl::GL_obj::context->createShader(type);
HXLINE(  16)		::lime::graphics::opengl::GL_obj::context->shaderSource(shader,source);
HXLINE(  17)		::lime::graphics::opengl::GL_obj::context->compileShader(shader);
HXLINE(  19)		Int _hx_tmp = ::lime::graphics::opengl::GL_obj::context->getShaderParameter(shader,(int)35713);
HXDLIN(  19)		if ((_hx_tmp == (int)0)) {
HXLINE(  21)			HX_VAR( ::String,message);
HXDLIN(  21)			switch((int)(type)){
            				case (int)35632: {
HXLINE(  21)					message = HX_("Error compiling fragment shader",4d,d0,be,e3);
            				}
            				break;
            				case (int)35633: {
HXLINE(  21)					message = HX_("Error compiling vertex shader",39,c9,c1,b2);
            				}
            				break;
            				default:{
HXLINE(  21)					message = HX_("Error compiling unknown shader type",d7,06,f2,00);
            				}
            			}
HXLINE(  29)			::String _hx_tmp1 = ::lime::graphics::opengl::GL_obj::context->getShaderInfoLog(shader);
HXDLIN(  29)			hx::AddEq(message,(HX_("\n",0a,00,00,00) + _hx_tmp1));
HXLINE(  30)			::lime::utils::Log_obj::error(message,hx::SourceInfo(HX_("GLUtils.hx",72,74,b2,40),30,HX_("lime.utils.GLUtils",76,27,94,e3),HX_("compileShader",f8,70,b2,da)));
            		}
HXLINE(  34)		return shader;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,compileShader,return )

 ::lime::graphics::opengl::GLProgram GLUtils_obj::createProgram(::String vertexSource,::String fragmentSource){
            	HX_STACK_FRAME("lime.utils.GLUtils","createProgram",0x574727f0,"lime.utils.GLUtils.createProgram","lime/utils/GLUtils.hx",39,0xaa32e64a)
            	HX_STACK_ARG(vertexSource,"vertexSource")
            	HX_STACK_ARG(fragmentSource,"fragmentSource")
HXLINE(  41)		HX_VARI(  ::lime::graphics::opengl::GLShader,vertexShader) = ::lime::utils::GLUtils_obj::compileShader(vertexSource,(int)35633);
HXLINE(  42)		HX_VARI(  ::lime::graphics::opengl::GLShader,fragmentShader) = ::lime::utils::GLUtils_obj::compileShader(fragmentSource,(int)35632);
HXLINE(  44)		HX_VARI(  ::lime::graphics::opengl::GLProgram,program) = ::lime::graphics::opengl::GL_obj::context->createProgram();
HXLINE(  45)		::lime::graphics::opengl::GL_obj::context->attachShader(program,vertexShader);
HXLINE(  46)		::lime::graphics::opengl::GL_obj::context->attachShader(program,fragmentShader);
HXLINE(  47)		::lime::graphics::opengl::GL_obj::context->linkProgram(program);
HXLINE(  49)		Int _hx_tmp = ::lime::graphics::opengl::GL_obj::context->getProgramParameter(program,(int)35714);
HXDLIN(  49)		if ((_hx_tmp == (int)0)) {
HXLINE(  51)			::lime::utils::Log_obj::error(HX_("Unable to initialize the shader program",f0,86,8b,39),hx::SourceInfo(HX_("GLUtils.hx",72,74,b2,40),51,HX_("lime.utils.GLUtils",76,27,94,e3),HX_("createProgram",e8,22,3c,dc)));
            		}
HXLINE(  55)		return program;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLUtils_obj,createProgram,return )


GLUtils_obj::GLUtils_obj()
{
}

bool GLUtils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"compileShader") ) { outValue = compileShader_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { outValue = createProgram_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLUtils_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLUtils_obj_sStaticStorageInfo = 0;
#endif

static void GLUtils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLUtils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLUtils_obj::__mClass,"__mClass");
};

#endif

hx::Class GLUtils_obj::__mClass;

static ::String GLUtils_obj_sStaticFields[] = {
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	::String(null())
};

void GLUtils_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.GLUtils","\x76","\x27","\x94","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLUtils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLUtils_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLUtils_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLUtils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLUtils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLUtils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLUtils_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
