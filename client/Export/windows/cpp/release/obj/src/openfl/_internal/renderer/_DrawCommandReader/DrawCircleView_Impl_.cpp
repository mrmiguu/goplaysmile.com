// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawCircleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawCircleView_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da30b9c34d98d85b_292__new,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","_new",0xd771db4e,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",292,0xbbdbd1ae)
HX_DEFINE_STACK_FRAME(_hx_pos_da30b9c34d98d85b_293_get_x,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_x",0x417b0ec2,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",293,0xbbdbd1ae)
HX_DEFINE_STACK_FRAME(_hx_pos_da30b9c34d98d85b_294_get_y,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_y",0x417b0ec3,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",294,0xbbdbd1ae)
HX_DEFINE_STACK_FRAME(_hx_pos_da30b9c34d98d85b_295_get_radius,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_radius",0xc711b5c8,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_radius","openfl/_internal/renderer/DrawCommandReader.hx",295,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawCircleView_Impl__obj::__construct() { }

Dynamic DrawCircleView_Impl__obj::__CreateEmpty() { return new DrawCircleView_Impl__obj; }

void *DrawCircleView_Impl__obj::_hx_vtable = 0;

Dynamic DrawCircleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawCircleView_Impl__obj > _hx_result = new DrawCircleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawCircleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39da5b0f;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawCircleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_292__new)
            	HX_STACK_ARG(d,"d")
HXLINE( 292)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,_new,return )

Float DrawCircleView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_293_get_x)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 293)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_x,return )

Float DrawCircleView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_294_get_y)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 294)		return this1->buffer->f->__get((this1->fPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_y,return )

Float DrawCircleView_Impl__obj::get_radius( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_295_get_radius)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 295)		return this1->buffer->f->__get((this1->fPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_radius,return )


DrawCircleView_Impl__obj::DrawCircleView_Impl__obj()
{
}

bool DrawCircleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { outValue = get_radius_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawCircleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawCircleView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void DrawCircleView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawCircleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawCircleView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawCircleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawCircleView_Impl__obj::__mClass;

static ::String DrawCircleView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_radius","\x1b","\x40","\x7e","\xa1"),
	::String(null())
};

void DrawCircleView_Impl__obj::__register()
{
	hx::Object *dummy = new DrawCircleView_Impl__obj;
	DrawCircleView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","\xa1","\x61","\xf1","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCircleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawCircleView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawCircleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawCircleView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawCircleView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCircleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCircleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
