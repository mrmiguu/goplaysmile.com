// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b906d913b8eb08d_10_new,"lime.graphics.opengl.GLRenderbuffer","new",0xd3352e02,"lime.graphics.opengl.GLRenderbuffer.new","lime/graphics/opengl/GLRenderbuffer.hx",10,0x63850e6d)
HX_DEFINE_STACK_FRAME(_hx_pos_5b906d913b8eb08d_15_getType,"lime.graphics.opengl.GLRenderbuffer","getType",0x01c97912,"lime.graphics.opengl.GLRenderbuffer.getType","lime/graphics/opengl/GLRenderbuffer.hx",15,0x63850e6d)
namespace lime{
namespace graphics{
namespace opengl{

void GLRenderbuffer_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_5b906d913b8eb08d_10_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(id,"id")
HXLINE(  10)		super::__construct(version,id);
            	}

Dynamic GLRenderbuffer_obj::__CreateEmpty() { return new GLRenderbuffer_obj; }

void *GLRenderbuffer_obj::_hx_vtable = 0;

Dynamic GLRenderbuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRenderbuffer_obj > _hx_result = new GLRenderbuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLRenderbuffer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6261d4ce) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6261d4ce;
	} else {
		return inClassId==(int)0x6ce04d1b;
	}
}

::String GLRenderbuffer_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_5b906d913b8eb08d_15_getType)
            	HX_STACK_THIS(this)
HXLINE(  15)		return HX_("Renderbuffer",f6,98,68,d3);
            	}



hx::ObjectPtr< GLRenderbuffer_obj > GLRenderbuffer_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLRenderbuffer_obj > __this = new GLRenderbuffer_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLRenderbuffer_obj > GLRenderbuffer_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLRenderbuffer_obj *__this = (GLRenderbuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLRenderbuffer_obj), true, "lime.graphics.opengl.GLRenderbuffer"));
	*(void **)__this = GLRenderbuffer_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLRenderbuffer_obj::GLRenderbuffer_obj()
{
}

hx::Val GLRenderbuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLRenderbuffer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLRenderbuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLRenderbuffer_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLRenderbuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRenderbuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderbuffer_obj::__mClass;

void GLRenderbuffer_obj::__register()
{
	hx::Object *dummy = new GLRenderbuffer_obj;
	GLRenderbuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLRenderbuffer","\x10","\xc5","\x49","\xb5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLRenderbuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLRenderbuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderbuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRenderbuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderbuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderbuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
