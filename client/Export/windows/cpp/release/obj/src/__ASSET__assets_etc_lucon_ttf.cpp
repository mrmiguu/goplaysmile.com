// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_etc_lucon_ttf
#include <__ASSET__assets_etc_lucon_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dbaef8fa3ee16f7e_696_new,"__ASSET__assets_etc_lucon_ttf","new",0xa27036db,"__ASSET__assets_etc_lucon_ttf.new","DefaultAssetLibrary.hx",696,0x0fc48912)

void __ASSET__assets_etc_lucon_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dbaef8fa3ee16f7e_696_new)
            	HX_STACK_THIS(this)
HXLINE( 696)		this->_hx___fontPath = HX_("assets/etc/lucon.ttf",8a,7b,49,6b);
HXDLIN( 696)		this->name = HX_("Lucida Console",e3,71,b4,0b);
HXDLIN( 696)		super::__construct(null());
            	}

Dynamic __ASSET__assets_etc_lucon_ttf_obj::__CreateEmpty() { return new __ASSET__assets_etc_lucon_ttf_obj; }

void *__ASSET__assets_etc_lucon_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__assets_etc_lucon_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__assets_etc_lucon_ttf_obj > _hx_result = new __ASSET__assets_etc_lucon_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__assets_etc_lucon_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6aed2e71) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6aed2e71;
	} else {
		return inClassId==(int)0x77072d69;
	}
}


hx::ObjectPtr< __ASSET__assets_etc_lucon_ttf_obj > __ASSET__assets_etc_lucon_ttf_obj::__new() {
	hx::ObjectPtr< __ASSET__assets_etc_lucon_ttf_obj > __this = new __ASSET__assets_etc_lucon_ttf_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< __ASSET__assets_etc_lucon_ttf_obj > __ASSET__assets_etc_lucon_ttf_obj::__alloc(hx::Ctx *_hx_ctx) {
	__ASSET__assets_etc_lucon_ttf_obj *__this = (__ASSET__assets_etc_lucon_ttf_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__assets_etc_lucon_ttf_obj), true, "__ASSET__assets_etc_lucon_ttf"));
	*(void **)__this = __ASSET__assets_etc_lucon_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__assets_etc_lucon_ttf_obj::__ASSET__assets_etc_lucon_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__assets_etc_lucon_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *__ASSET__assets_etc_lucon_ttf_obj_sStaticStorageInfo = 0;
#endif

static void __ASSET__assets_etc_lucon_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__assets_etc_lucon_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__assets_etc_lucon_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_etc_lucon_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__assets_etc_lucon_ttf_obj::__mClass;

void __ASSET__assets_etc_lucon_ttf_obj::__register()
{
	hx::Object *dummy = new __ASSET__assets_etc_lucon_ttf_obj;
	__ASSET__assets_etc_lucon_ttf_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__assets_etc_lucon_ttf","\x69","\x2d","\x07","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__assets_etc_lucon_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__assets_etc_lucon_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__assets_etc_lucon_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__assets_etc_lucon_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__assets_etc_lucon_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

