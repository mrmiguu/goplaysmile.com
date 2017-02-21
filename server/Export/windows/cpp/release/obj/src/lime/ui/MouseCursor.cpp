// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
namespace lime{
namespace ui{

::lime::ui::MouseCursor MouseCursor_obj::ARROW;

::lime::ui::MouseCursor MouseCursor_obj::CROSSHAIR;

::lime::ui::MouseCursor MouseCursor_obj::CUSTOM;

::lime::ui::MouseCursor MouseCursor_obj::DEFAULT;

::lime::ui::MouseCursor MouseCursor_obj::MOVE;

::lime::ui::MouseCursor MouseCursor_obj::POINTER;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NESW;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NS;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_NWSE;

::lime::ui::MouseCursor MouseCursor_obj::RESIZE_WE;

::lime::ui::MouseCursor MouseCursor_obj::TEXT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT;

::lime::ui::MouseCursor MouseCursor_obj::WAIT_ARROW;

bool MouseCursor_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) { outValue = MouseCursor_obj::ARROW; return true; }
	if (inName==HX_("CROSSHAIR",82,b6,20,86)) { outValue = MouseCursor_obj::CROSSHAIR; return true; }
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = MouseCursor_obj::CUSTOM; return true; }
	if (inName==HX_("DEFAULT",a1,ac,97,1b)) { outValue = MouseCursor_obj::DEFAULT; return true; }
	if (inName==HX_("MOVE",11,ab,21,33)) { outValue = MouseCursor_obj::MOVE; return true; }
	if (inName==HX_("POINTER",9d,94,f5,d0)) { outValue = MouseCursor_obj::POINTER; return true; }
	if (inName==HX_("RESIZE_NESW",06,4a,f8,ea)) { outValue = MouseCursor_obj::RESIZE_NESW; return true; }
	if (inName==HX_("RESIZE_NS",f0,84,63,a7)) { outValue = MouseCursor_obj::RESIZE_NS; return true; }
	if (inName==HX_("RESIZE_NWSE",86,f2,05,eb)) { outValue = MouseCursor_obj::RESIZE_NWSE; return true; }
	if (inName==HX_("RESIZE_WE",b9,8c,63,a7)) { outValue = MouseCursor_obj::RESIZE_WE; return true; }
	if (inName==HX_("TEXT",ad,94,ba,37)) { outValue = MouseCursor_obj::TEXT; return true; }
	if (inName==HX_("WAIT",75,22,b3,39)) { outValue = MouseCursor_obj::WAIT; return true; }
	if (inName==HX_("WAIT_ARROW",1f,e1,6c,7c)) { outValue = MouseCursor_obj::WAIT_ARROW; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(MouseCursor_obj)

int MouseCursor_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return 0;
	if (inName==HX_("CROSSHAIR",82,b6,20,86)) return 1;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 12;
	if (inName==HX_("DEFAULT",a1,ac,97,1b)) return 2;
	if (inName==HX_("MOVE",11,ab,21,33)) return 3;
	if (inName==HX_("POINTER",9d,94,f5,d0)) return 4;
	if (inName==HX_("RESIZE_NESW",06,4a,f8,ea)) return 5;
	if (inName==HX_("RESIZE_NS",f0,84,63,a7)) return 6;
	if (inName==HX_("RESIZE_NWSE",86,f2,05,eb)) return 7;
	if (inName==HX_("RESIZE_WE",b9,8c,63,a7)) return 8;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 9;
	if (inName==HX_("WAIT",75,22,b3,39)) return 10;
	if (inName==HX_("WAIT_ARROW",1f,e1,6c,7c)) return 11;
	return super::__FindIndex(inName);
}

int MouseCursor_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return 0;
	if (inName==HX_("CROSSHAIR",82,b6,20,86)) return 0;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 0;
	if (inName==HX_("DEFAULT",a1,ac,97,1b)) return 0;
	if (inName==HX_("MOVE",11,ab,21,33)) return 0;
	if (inName==HX_("POINTER",9d,94,f5,d0)) return 0;
	if (inName==HX_("RESIZE_NESW",06,4a,f8,ea)) return 0;
	if (inName==HX_("RESIZE_NS",f0,84,63,a7)) return 0;
	if (inName==HX_("RESIZE_NWSE",86,f2,05,eb)) return 0;
	if (inName==HX_("RESIZE_WE",b9,8c,63,a7)) return 0;
	if (inName==HX_("TEXT",ad,94,ba,37)) return 0;
	if (inName==HX_("WAIT",75,22,b3,39)) return 0;
	if (inName==HX_("WAIT_ARROW",1f,e1,6c,7c)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val MouseCursor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ARROW",a9,b1,7d,a3)) return ARROW;
	if (inName==HX_("CROSSHAIR",82,b6,20,86)) return CROSSHAIR;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM;
	if (inName==HX_("DEFAULT",a1,ac,97,1b)) return DEFAULT;
	if (inName==HX_("MOVE",11,ab,21,33)) return MOVE;
	if (inName==HX_("POINTER",9d,94,f5,d0)) return POINTER;
	if (inName==HX_("RESIZE_NESW",06,4a,f8,ea)) return RESIZE_NESW;
	if (inName==HX_("RESIZE_NS",f0,84,63,a7)) return RESIZE_NS;
	if (inName==HX_("RESIZE_NWSE",86,f2,05,eb)) return RESIZE_NWSE;
	if (inName==HX_("RESIZE_WE",b9,8c,63,a7)) return RESIZE_WE;
	if (inName==HX_("TEXT",ad,94,ba,37)) return TEXT;
	if (inName==HX_("WAIT",75,22,b3,39)) return WAIT;
	if (inName==HX_("WAIT_ARROW",1f,e1,6c,7c)) return WAIT_ARROW;
	return super::__Field(inName,inCallProp);
}

static ::String MouseCursor_obj_sStaticFields[] = {
	HX_("ARROW",a9,b1,7d,a3),
	HX_("CROSSHAIR",82,b6,20,86),
	HX_("DEFAULT",a1,ac,97,1b),
	HX_("MOVE",11,ab,21,33),
	HX_("POINTER",9d,94,f5,d0),
	HX_("RESIZE_NESW",06,4a,f8,ea),
	HX_("RESIZE_NS",f0,84,63,a7),
	HX_("RESIZE_NWSE",86,f2,05,eb),
	HX_("RESIZE_WE",b9,8c,63,a7),
	HX_("TEXT",ad,94,ba,37),
	HX_("WAIT",75,22,b3,39),
	HX_("WAIT_ARROW",1f,e1,6c,7c),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

static void MouseCursor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_MARK_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseCursor_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::ARROW,"ARROW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CROSSHAIR,"CROSSHAIR");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::CUSTOM,"CUSTOM");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::DEFAULT,"DEFAULT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::POINTER,"POINTER");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NESW,"RESIZE_NESW");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NS,"RESIZE_NS");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_NWSE,"RESIZE_NWSE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::RESIZE_WE,"RESIZE_WE");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT,"WAIT");
	HX_VISIT_MEMBER_NAME(MouseCursor_obj::WAIT_ARROW,"WAIT_ARROW");
};
#endif

hx::Class MouseCursor_obj::__mClass;

Dynamic __Create_MouseCursor_obj() { return new MouseCursor_obj; }

void MouseCursor_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.ui.MouseCursor","\xda","\x7e","\xbc","\x47"), hx::TCanCast< MouseCursor_obj >,MouseCursor_obj_sStaticFields,0,
	&__Create_MouseCursor_obj, &__Create,
	&super::__SGetClass(), &CreateMouseCursor_obj, MouseCursor_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , MouseCursor_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &MouseCursor_obj::__GetStatic;
}

void MouseCursor_obj::__boot()
{
ARROW = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("ARROW","\xa9","\xb1","\x7d","\xa3"),0,0);
CROSSHAIR = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("CROSSHAIR","\x82","\xb6","\x20","\x86"),1,0);
CUSTOM = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("CUSTOM","\xb1","\x33","\x15","\xf2"),12,0);
DEFAULT = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("DEFAULT","\xa1","\xac","\x97","\x1b"),2,0);
MOVE = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("MOVE","\x11","\xab","\x21","\x33"),3,0);
POINTER = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("POINTER","\x9d","\x94","\xf5","\xd0"),4,0);
RESIZE_NESW = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NESW","\x06","\x4a","\xf8","\xea"),5,0);
RESIZE_NS = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NS","\xf0","\x84","\x63","\xa7"),6,0);
RESIZE_NWSE = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_NWSE","\x86","\xf2","\x05","\xeb"),7,0);
RESIZE_WE = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("RESIZE_WE","\xb9","\x8c","\x63","\xa7"),8,0);
TEXT = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),9,0);
WAIT = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("WAIT","\x75","\x22","\xb3","\x39"),10,0);
WAIT_ARROW = hx::CreateEnum< MouseCursor_obj >(HX_HCSTRING("WAIT_ARROW","\x1f","\xe1","\x6c","\x7c"),11,0);
}


} // end namespace lime
} // end namespace ui
