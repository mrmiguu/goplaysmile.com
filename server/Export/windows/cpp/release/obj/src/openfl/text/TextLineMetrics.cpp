// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextLineMetrics
#include <openfl/text/TextLineMetrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_769ce4a0cb4bebca_15_new,"openfl.text.TextLineMetrics","new",0x08194531,"openfl.text.TextLineMetrics.new","openfl/text/TextLineMetrics.hx",15,0x3c3b1fbf)
namespace openfl{
namespace text{

void TextLineMetrics_obj::__construct(Float x,Float width,Float height,Float ascent,Float descent,Float leading){
            	HX_STACKFRAME(&_hx_pos_769ce4a0cb4bebca_15_new)
HXLINE(  17)		this->x = x;
HXLINE(  18)		this->width = width;
HXLINE(  19)		this->height = height;
HXLINE(  20)		this->ascent = ascent;
HXLINE(  21)		this->descent = descent;
HXLINE(  22)		this->leading = leading;
            	}

Dynamic TextLineMetrics_obj::__CreateEmpty() { return new TextLineMetrics_obj; }

void *TextLineMetrics_obj::_hx_vtable = 0;

Dynamic TextLineMetrics_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextLineMetrics_obj > _hx_result = new TextLineMetrics_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool TextLineMetrics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x674a2a85;
}


TextLineMetrics_obj::TextLineMetrics_obj()
{
}

hx::Val TextLineMetrics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { return hx::Val( ascent); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return hx::Val( descent); }
		if (HX_FIELD_EQ(inName,"leading") ) { return hx::Val( leading); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextLineMetrics_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLineMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"));
	outFields->push(HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextLineMetrics_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,ascent),HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,descent),HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextLineMetrics_obj_sStaticStorageInfo = 0;
#endif

static ::String TextLineMetrics_obj_sMemberFields[] = {
	HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"),
	HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	::String(null()) };

static void TextLineMetrics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextLineMetrics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLineMetrics_obj::__mClass;

void TextLineMetrics_obj::__register()
{
	hx::Object *dummy = new TextLineMetrics_obj;
	TextLineMetrics_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextLineMetrics","\xbf","\xd8","\x88","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextLineMetrics_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextLineMetrics_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLineMetrics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextLineMetrics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLineMetrics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLineMetrics_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
