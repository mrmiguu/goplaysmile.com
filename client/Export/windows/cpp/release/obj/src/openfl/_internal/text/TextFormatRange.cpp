// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_text_TextFormatRange
#include <openfl/_internal/text/TextFormatRange.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d723d4054c78661_20_new,"openfl._internal.text.TextFormatRange","new",0x4f23249a,"openfl._internal.text.TextFormatRange.new","openfl/_internal/text/TextFormatRange.hx",20,0x601dbd55)
namespace openfl{
namespace _internal{
namespace text{

void TextFormatRange_obj::__construct( ::openfl::text::TextFormat format,int start,int end){
            	HX_STACKFRAME(&_hx_pos_0d723d4054c78661_20_new)
HXLINE(  22)		this->format = format;
HXLINE(  23)		this->start = start;
HXLINE(  24)		this->end = end;
            	}

Dynamic TextFormatRange_obj::__CreateEmpty() { return new TextFormatRange_obj; }

void *TextFormatRange_obj::_hx_vtable = 0;

Dynamic TextFormatRange_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFormatRange_obj > _hx_result = new TextFormatRange_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TextFormatRange_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24c891a0;
}


hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__new( ::openfl::text::TextFormat format,int start,int end) {
	hx::ObjectPtr< TextFormatRange_obj > __this = new TextFormatRange_obj();
	__this->__construct(format,start,end);
	return __this;
}

hx::ObjectPtr< TextFormatRange_obj > TextFormatRange_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::text::TextFormat format,int start,int end) {
	TextFormatRange_obj *__this = (TextFormatRange_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TextFormatRange_obj), true, "openfl._internal.text.TextFormatRange"));
	*(void **)__this = TextFormatRange_obj::_hx_vtable;
	__this->__construct(format,start,end);
	return __this;
}

TextFormatRange_obj::TextFormatRange_obj()
{
}

void TextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormatRange);
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void TextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(start,"start");
}

hx::Val TextFormatRange_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextFormatRange_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextFormatRange_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextFormatRange_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(TextFormatRange_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextFormatRange_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFormatRange_obj_sMemberFields[] = {
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null()) };

static void TextFormatRange_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFormatRange_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatRange_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFormatRange_obj::__mClass;

void TextFormatRange_obj::__register()
{
	hx::Object *dummy = new TextFormatRange_obj;
	TextFormatRange_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.text.TextFormatRange","\xa8","\x8f","\x22","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFormatRange_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFormatRange_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFormatRange_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFormatRange_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormatRange_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormatRange_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace text
