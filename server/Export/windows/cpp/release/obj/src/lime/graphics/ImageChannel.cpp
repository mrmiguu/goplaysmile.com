// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
namespace lime{
namespace graphics{

::lime::graphics::ImageChannel ImageChannel_obj::ALPHA;

::lime::graphics::ImageChannel ImageChannel_obj::BLUE;

::lime::graphics::ImageChannel ImageChannel_obj::GREEN;

::lime::graphics::ImageChannel ImageChannel_obj::RED;

bool ImageChannel_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) { outValue = ImageChannel_obj::ALPHA; return true; }
	if (inName==HX_("BLUE",9a,0a,da,2b)) { outValue = ImageChannel_obj::BLUE; return true; }
	if (inName==HX_("GREEN",a3,46,db,17)) { outValue = ImageChannel_obj::GREEN; return true; }
	if (inName==HX_("RED",31,75,3e,00)) { outValue = ImageChannel_obj::RED; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ImageChannel_obj)

int ImageChannel_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 3;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return 2;
	if (inName==HX_("GREEN",a3,46,db,17)) return 1;
	if (inName==HX_("RED",31,75,3e,00)) return 0;
	return super::__FindIndex(inName);
}

int ImageChannel_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return 0;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return 0;
	if (inName==HX_("GREEN",a3,46,db,17)) return 0;
	if (inName==HX_("RED",31,75,3e,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val ImageChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALPHA",3e,df,84,9f)) return ALPHA;
	if (inName==HX_("BLUE",9a,0a,da,2b)) return BLUE;
	if (inName==HX_("GREEN",a3,46,db,17)) return GREEN;
	if (inName==HX_("RED",31,75,3e,00)) return RED;
	return super::__Field(inName,inCallProp);
}

static ::String ImageChannel_obj_sStaticFields[] = {
	HX_("RED",31,75,3e,00),
	HX_("GREEN",a3,46,db,17),
	HX_("BLUE",9a,0a,da,2b),
	HX_("ALPHA",3e,df,84,9f),
	::String(null())
};

static void ImageChannel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageChannel_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(ImageChannel_obj::RED,"RED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageChannel_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(ImageChannel_obj::RED,"RED");
};
#endif

hx::Class ImageChannel_obj::__mClass;

Dynamic __Create_ImageChannel_obj() { return new ImageChannel_obj; }

void ImageChannel_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.graphics.ImageChannel","\x32","\xa4","\xe9","\xce"), hx::TCanCast< ImageChannel_obj >,ImageChannel_obj_sStaticFields,0,
	&__Create_ImageChannel_obj, &__Create,
	&super::__SGetClass(), &CreateImageChannel_obj, ImageChannel_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ImageChannel_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ImageChannel_obj::__GetStatic;
}

void ImageChannel_obj::__boot()
{
ALPHA = hx::CreateEnum< ImageChannel_obj >(HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),3,0);
BLUE = hx::CreateEnum< ImageChannel_obj >(HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),2,0);
GREEN = hx::CreateEnum< ImageChannel_obj >(HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),1,0);
RED = hx::CreateEnum< ImageChannel_obj >(HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),0,0);
}


} // end namespace lime
} // end namespace graphics
