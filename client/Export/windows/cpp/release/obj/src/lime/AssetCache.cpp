// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_AssetCache
#include <lime/AssetCache.h>
#endif

namespace lime{

void AssetCache_obj::__construct(){
            	HX_STACK_FRAME("lime.AssetCache","new",0xe0eaad7d,"lime.AssetCache.new","lime/Assets.hx",1000,0x48c77341)
            	HX_STACK_THIS(this)
HXLINE(1004)		this->enabled = true;
HXLINE(1012)		this->audio =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1013)		this->font =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1014)		this->image =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1015)		this->version = (int)341487;
            	}

Dynamic AssetCache_obj::__CreateEmpty() { return new AssetCache_obj; }

hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

void AssetCache_obj::clear(::String prefix){
            	HX_STACK_FRAME("lime.AssetCache","clear",0xa2398fea,"lime.AssetCache.clear","lime/Assets.hx",1025,0x48c77341)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(prefix,"prefix")
HXLINE(1025)		Bool _hx_tmp = hx::IsNull( prefix );
HXDLIN(1025)		if (_hx_tmp) {
HXLINE(1027)			this->audio =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1028)			this->font =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1029)			this->image =  ::haxe::ds::StringMap_obj::__new();
            		}
            		else {
HXLINE(1033)			HX_VARI(  ::Dynamic,keys) = this->audio->keys();
HXLINE(1035)			while(true){
HXLINE(1035)				Bool _hx_tmp1 = !(( (Bool)( ::Dynamic(keys->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1035)				if (_hx_tmp1) {
HXLINE(1035)					goto _hx_goto_0;
            				}
HXDLIN(1035)				HX_VARI( ::String,key) = ( (::String)( ::Dynamic(keys->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1037)				Bool _hx_tmp2 = ::StringTools_obj::startsWith(key,prefix);
HXDLIN(1037)				if (_hx_tmp2) {
HXLINE(1039)					this->audio->remove(key);
            				}
            			}
            			_hx_goto_0:;
HXLINE(1045)			HX_VARI_NAME(  ::Dynamic,keys1,"keys") = this->font->keys();
HXLINE(1047)			while(true){
HXLINE(1047)				Bool _hx_tmp3 = !(( (Bool)( ::Dynamic(keys1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1047)				if (_hx_tmp3) {
HXLINE(1047)					goto _hx_goto_1;
            				}
HXDLIN(1047)				HX_VARI_NAME( ::String,key1,"key") = ( (::String)( ::Dynamic(keys1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1049)				Bool _hx_tmp4 = ::StringTools_obj::startsWith(key1,prefix);
HXDLIN(1049)				if (_hx_tmp4) {
HXLINE(1051)					this->font->remove(key1);
            				}
            			}
            			_hx_goto_1:;
HXLINE(1057)			HX_VARI_NAME(  ::Dynamic,keys2,"keys") = this->image->keys();
HXLINE(1059)			while(true){
HXLINE(1059)				Bool _hx_tmp5 = !(( (Bool)( ::Dynamic(keys2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1059)				if (_hx_tmp5) {
HXLINE(1059)					goto _hx_goto_2;
            				}
HXDLIN(1059)				HX_VARI_NAME( ::String,key2,"key") = ( (::String)( ::Dynamic(keys2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1061)				Bool _hx_tmp6 = ::StringTools_obj::startsWith(key2,prefix);
HXDLIN(1061)				if (_hx_tmp6) {
HXLINE(1063)					this->image->remove(key2);
            				}
            			}
            			_hx_goto_2:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(audio,"audio");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audio,"audio");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(version,"version");
}

hx::Val AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { return hx::Val( audio); }
		if (HX_FIELD_EQ(inName,"image") ) { return hx::Val( image); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return hx::Val( enabled); }
		if (HX_FIELD_EQ(inName,"version") ) { return hx::Val( version); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AssetCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"audio") ) { audio=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetCache_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,audio),HX_HCSTRING("audio","\xd6","\x78","\x80","\x27")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsInt,(int)offsetof(AssetCache_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetCache_obj_sMemberFields[] = {
	HX_HCSTRING("audio","\xd6","\x78","\x80","\x27"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void AssetCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.AssetCache","\x0b","\x2b","\x55","\x63");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime