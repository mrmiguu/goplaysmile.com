// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be8b948d7a24647f_448_new,"openfl.display3D._Program3D.Uniform","new",0x7e26e3a7,"openfl.display3D._Program3D.Uniform.new","openfl/display3D/Program3D.hx",448,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_be8b948d7a24647f_453_flush,"openfl.display3D._Program3D.Uniform","flush",0xe9cf15cb,"openfl.display3D._Program3D.Uniform.flush","openfl/display3D/Program3D.hx",453,0x0a985b04)
HX_LOCAL_STACK_FRAME(_hx_pos_be8b948d7a24647f_473___getRegisters,"openfl.display3D._Program3D.Uniform","__getRegisters",0x59704473,"openfl.display3D._Program3D.Uniform.__getRegisters","openfl/display3D/Program3D.hx",473,0x0a985b04)
namespace openfl{
namespace display3D{
namespace _Program3D{

void Uniform_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_be8b948d7a24647f_448_new)
HXLINE( 448)		this->isDirty = true;
            	}

Dynamic Uniform_obj::__CreateEmpty() { return new Uniform_obj; }

void *Uniform_obj::_hx_vtable = 0;

Dynamic Uniform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uniform_obj > _hx_result = new Uniform_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Uniform_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e21a45f;
}

void Uniform_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_be8b948d7a24647f_453_flush)
HXLINE( 455)		int index = (this->regIndex * (int)4);
HXLINE( 456)		{
HXLINE( 456)			int _g = this->type;
HXDLIN( 456)			switch((int)(_g)){
            				case (int)35664: {
HXLINE( 461)					int location = this->location;
HXDLIN( 461)					 ::lime::utils::ArrayBufferView v = this->_hx___getRegisters(index,(this->regCount * (int)2));
HXDLIN( 461)					::lime::graphics::opengl::GL_obj::context->uniform2fv(location,v);
            				}
            				break;
            				case (int)35665: {
HXLINE( 462)					int location1 = this->location;
HXDLIN( 462)					 ::lime::utils::ArrayBufferView v1 = this->_hx___getRegisters(index,(this->regCount * (int)3));
HXDLIN( 462)					::lime::graphics::opengl::GL_obj::context->uniform3fv(location1,v1);
            				}
            				break;
            				case (int)35666: {
HXLINE( 463)					int location2 = this->location;
HXDLIN( 463)					 ::lime::utils::ArrayBufferView v2 = this->_hx___getRegisters(index,(this->regCount * (int)4));
HXDLIN( 463)					::lime::graphics::opengl::GL_obj::context->uniform4fv(location2,v2);
            				}
            				break;
            				case (int)35674: {
HXLINE( 458)					int location3 = this->location;
HXDLIN( 458)					 ::lime::utils::ArrayBufferView v3 = this->_hx___getRegisters(index,((this->size * (int)2) * (int)2));
HXDLIN( 458)					::lime::graphics::opengl::GL_obj::context->uniformMatrix2fv(location3,false,v3);
            				}
            				break;
            				case (int)35675: {
HXLINE( 459)					int location4 = this->location;
HXDLIN( 459)					 ::lime::utils::ArrayBufferView v4 = this->_hx___getRegisters(index,((this->size * (int)3) * (int)3));
HXDLIN( 459)					::lime::graphics::opengl::GL_obj::context->uniformMatrix3fv(location4,false,v4);
            				}
            				break;
            				case (int)35676: {
HXLINE( 460)					int location5 = this->location;
HXDLIN( 460)					 ::lime::utils::ArrayBufferView v5 = this->_hx___getRegisters(index,((this->size * (int)4) * (int)4));
HXDLIN( 460)					::lime::graphics::opengl::GL_obj::context->uniformMatrix4fv(location5,false,v5);
            				}
            				break;
            				default:{
HXLINE( 464)					int location6 = this->location;
HXDLIN( 464)					 ::lime::utils::ArrayBufferView v6 = this->_hx___getRegisters(index,(this->regCount * (int)4));
HXDLIN( 464)					::lime::graphics::opengl::GL_obj::context->uniform4fv(location6,v6);
            				}
            			}
            		}
HXLINE( 468)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Uniform_obj,flush,(void))

 ::lime::utils::ArrayBufferView Uniform_obj::_hx___getRegisters(int index,int size){
            	HX_GC_STACKFRAME(&_hx_pos_be8b948d7a24647f_473___getRegisters)
HXLINE( 487)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 487)		if (hx::IsNotNull( size )) {
HXLINE( 487)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,size,(int)8);
            		}
            		else {
HXLINE( 487)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            		}
HXDLIN( 487)		 ::lime::utils::ArrayBufferView result = this1;
HXLINE( 489)		{
HXLINE( 489)			int _g1 = (int)0;
HXDLIN( 489)			int _g = size;
HXDLIN( 489)			while((_g1 < _g)){
HXLINE( 489)				_g1 = (_g1 + (int)1);
HXDLIN( 489)				int i = (_g1 - (int)1);
HXLINE( 491)				{
HXLINE( 491)					 ::lime::utils::ArrayBufferView this2 = this->regData;
HXDLIN( 491)					int this3 = this2->byteOffset;
HXDLIN( 491)					Float val = ::__hxcpp_memory_get_float(this2->buffer->b,(this3 + ((index + i) * (int)4)));
HXDLIN( 491)					{
HXLINE( 491)						int result1 = result->byteOffset;
HXDLIN( 491)						::__hxcpp_memory_set_float(result->buffer->b,(result1 + (i * (int)4)),val);
            					}
            				}
            			}
            		}
HXLINE( 495)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Uniform_obj,_hx___getRegisters,return )


hx::ObjectPtr< Uniform_obj > Uniform_obj::__new() {
	hx::ObjectPtr< Uniform_obj > __this = new Uniform_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Uniform_obj > Uniform_obj::__alloc(hx::Ctx *_hx_ctx) {
	Uniform_obj *__this = (Uniform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uniform_obj), true, "openfl.display3D._Program3D.Uniform"));
	*(void **)__this = Uniform_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Uniform_obj::Uniform_obj()
{
}

void Uniform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Uniform);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(location,"location");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(regData,"regData");
	HX_MARK_MEMBER_NAME(regIndex,"regIndex");
	HX_MARK_MEMBER_NAME(regCount,"regCount");
	HX_MARK_MEMBER_NAME(isDirty,"isDirty");
	HX_MARK_END_CLASS();
}

void Uniform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(location,"location");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(regData,"regData");
	HX_VISIT_MEMBER_NAME(regIndex,"regIndex");
	HX_VISIT_MEMBER_NAME(regCount,"regCount");
	HX_VISIT_MEMBER_NAME(isDirty,"isDirty");
}

hx::Val Uniform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return hx::Val( flush_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { return hx::Val( regData); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return hx::Val( isDirty); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { return hx::Val( location); }
		if (HX_FIELD_EQ(inName,"regIndex") ) { return hx::Val( regIndex); }
		if (HX_FIELD_EQ(inName,"regCount") ) { return hx::Val( regCount); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__getRegisters") ) { return hx::Val( _hx___getRegisters_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Uniform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"regData") ) { regData=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isDirty") ) { isDirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"location") ) { location=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regIndex") ) { regIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"regCount") ) { regCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Uniform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"));
	outFields->push(HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"));
	outFields->push(HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"));
	outFields->push(HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Uniform_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Uniform_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Uniform_obj,location),HX_HCSTRING("location","\x35","\x6e","\x46","\xe5")},
	{hx::fsInt,(int)offsetof(Uniform_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Uniform_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(Uniform_obj,regData),HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regIndex),HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60")},
	{hx::fsInt,(int)offsetof(Uniform_obj,regCount),HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec")},
	{hx::fsBool,(int)offsetof(Uniform_obj,isDirty),HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Uniform_obj_sStaticStorageInfo = 0;
#endif

static ::String Uniform_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("location","\x35","\x6e","\x46","\xe5"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("regData","\x9e","\x95","\x1c","\x62"),
	HX_HCSTRING("regIndex","\x1e","\xe1","\x72","\x60"),
	HX_HCSTRING("regCount","\xdb","\x8a","\xc1","\xec"),
	HX_HCSTRING("isDirty","\xc8","\xf3","\x55","\x76"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("__getRegisters","\x5a","\x10","\x29","\xeb"),
	::String(null()) };

static void Uniform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Uniform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uniform_obj::__mClass,"__mClass");
};

#endif

hx::Class Uniform_obj::__mClass;

void Uniform_obj::__register()
{
	hx::Object *dummy = new Uniform_obj;
	Uniform_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Program3D.Uniform","\x35","\x84","\x9c","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Uniform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Uniform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Uniform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Uniform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uniform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uniform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Program3D
