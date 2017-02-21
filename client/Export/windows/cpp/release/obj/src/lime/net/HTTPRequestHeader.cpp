// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_27fdfe9151c47db1_17_new,"lime.net.HTTPRequestHeader","new",0x37ed5b1c,"lime.net.HTTPRequestHeader.new","lime/net/HTTPRequestHeader.hx",17,0x41d61d56)
namespace lime{
namespace net{

void HTTPRequestHeader_obj::__construct(::String name,::String __o_value){
::String value = __o_value.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_27fdfe9151c47db1_17_new)
HXLINE(  19)		this->name = name;
HXLINE(  20)		this->value = value;
            	}

Dynamic HTTPRequestHeader_obj::__CreateEmpty() { return new HTTPRequestHeader_obj; }

void *HTTPRequestHeader_obj::_hx_vtable = 0;

Dynamic HTTPRequestHeader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPRequestHeader_obj > _hx_result = new HTTPRequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HTTPRequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2dc89a34;
}


HTTPRequestHeader_obj::HTTPRequestHeader_obj()
{
}

void HTTPRequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPRequestHeader);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void HTTPRequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val HTTPRequestHeader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HTTPRequestHeader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPRequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HTTPRequestHeader_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HTTPRequestHeader_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(HTTPRequestHeader_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HTTPRequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String HTTPRequestHeader_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void HTTPRequestHeader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPRequestHeader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPRequestHeader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPRequestHeader_obj::__mClass,"__mClass");
};

#endif

hx::Class HTTPRequestHeader_obj::__mClass;

void HTTPRequestHeader_obj::__register()
{
	hx::Object *dummy = new HTTPRequestHeader_obj;
	HTTPRequestHeader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net.HTTPRequestHeader","\x2a","\xdd","\x2a","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HTTPRequestHeader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HTTPRequestHeader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPRequestHeader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPRequestHeader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPRequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPRequestHeader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
