// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95b9f64939bcf38c_10_new,"lime.graphics.opengl.GLBuffer","new",0x02a9f3ac,"lime.graphics.opengl.GLBuffer.new","lime/graphics/opengl/GLBuffer.hx",10,0xd18082c3)
HX_DEFINE_STACK_FRAME(_hx_pos_95b9f64939bcf38c_15_getType,"lime.graphics.opengl.GLBuffer","getType",0xcda35bbc,"lime.graphics.opengl.GLBuffer.getType","lime/graphics/opengl/GLBuffer.hx",15,0xd18082c3)
namespace lime{
namespace graphics{
namespace opengl{

void GLBuffer_obj::__construct(int version, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_95b9f64939bcf38c_10_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(version,"version")
            	HX_STACK_ARG(id,"id")
HXLINE(  10)		super::__construct(version,id);
            	}

Dynamic GLBuffer_obj::__CreateEmpty() { return new GLBuffer_obj; }

void *GLBuffer_obj::_hx_vtable = 0;

Dynamic GLBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBuffer_obj > _hx_result = new GLBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GLBuffer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5f297af8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5f297af8;
	} else {
		return inClassId==(int)0x6ce04d1b;
	}
}

::String GLBuffer_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_95b9f64939bcf38c_15_getType)
            	HX_STACK_THIS(this)
HXLINE(  15)		return HX_("Buffer",20,31,29,05);
            	}



hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__new(int version, ::Dynamic id) {
	hx::ObjectPtr< GLBuffer_obj > __this = new GLBuffer_obj();
	__this->__construct(version,id);
	return __this;
}

hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__alloc(hx::Ctx *_hx_ctx,int version, ::Dynamic id) {
	GLBuffer_obj *__this = (GLBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLBuffer_obj), true, "lime.graphics.opengl.GLBuffer"));
	*(void **)__this = GLBuffer_obj::_hx_vtable;
	__this->__construct(version,id);
	return __this;
}

GLBuffer_obj::GLBuffer_obj()
{
}

hx::Val GLBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLBuffer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	::String(null()) };

static void GLBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBuffer_obj::__mClass;

void GLBuffer_obj::__register()
{
	hx::Object *dummy = new GLBuffer_obj;
	GLBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.GLBuffer","\xba","\xed","\x6b","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
