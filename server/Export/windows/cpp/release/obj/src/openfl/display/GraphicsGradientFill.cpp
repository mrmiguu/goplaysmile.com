// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsGradientFill
#include <openfl/display/GraphicsGradientFill.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4c1d0f133e7c9cd_25_new,"openfl.display.GraphicsGradientFill","new",0xc9ac905a,"openfl.display.GraphicsGradientFill.new","openfl/display/GraphicsGradientFill.hx",25,0x0dfeaf94)
namespace openfl{
namespace display{

void GraphicsGradientFill_obj::__construct( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0);
            	HX_STACKFRAME(&_hx_pos_e4c1d0f133e7c9cd_25_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(colors,"colors")
            	HX_STACK_ARG(alphas,"alphas")
            	HX_STACK_ARG(ratios,"ratios")
            	HX_STACK_ARG(matrix,"matrix")
            	HX_STACK_ARG(spreadMethod,"spreadMethod")
            	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
            	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
HXLINE(  27)		if (hx::IsNull( type )) {
HXLINE(  29)			type = (int)0;
            		}
HXLINE(  33)		if (hx::IsNull( spreadMethod )) {
HXLINE(  35)			spreadMethod = (int)0;
            		}
HXLINE(  39)		if (hx::IsNull( interpolationMethod )) {
HXLINE(  41)			interpolationMethod = (int)1;
            		}
HXLINE(  45)		this->type = type;
HXLINE(  46)		this->colors = colors;
HXLINE(  47)		this->alphas = alphas;
HXLINE(  48)		this->ratios = ratios;
HXLINE(  49)		this->matrix = matrix;
HXLINE(  50)		this->spreadMethod = spreadMethod;
HXLINE(  51)		this->interpolationMethod = interpolationMethod;
HXLINE(  52)		this->focalPointRatio = focalPointRatio;
HXLINE(  53)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::GRADIENT_dyn();
HXLINE(  54)		this->_hx___graphicsFillType = ::openfl::display::GraphicsFillType_obj::GRADIENT_FILL_dyn();
            	}

Dynamic GraphicsGradientFill_obj::__CreateEmpty() { return new GraphicsGradientFill_obj; }

void *GraphicsGradientFill_obj::_hx_vtable = 0;

Dynamic GraphicsGradientFill_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsGradientFill_obj > _hx_result = new GraphicsGradientFill_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool GraphicsGradientFill_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79383450;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsFill_obj _hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsFill= {
};

void *GraphicsGradientFill_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsData;
		case (int)0xc2d06665: return &_hx_openfl_display_GraphicsGradientFill__hx_openfl_display_IGraphicsFill;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


hx::ObjectPtr< GraphicsGradientFill_obj > GraphicsGradientFill_obj::__new( ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,hx::Null< Float >  __o_focalPointRatio) {
	hx::ObjectPtr< GraphicsGradientFill_obj > __this = new GraphicsGradientFill_obj();
	__this->__construct(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,__o_focalPointRatio);
	return __this;
}

hx::ObjectPtr< GraphicsGradientFill_obj > GraphicsGradientFill_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic type,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,hx::Null< Float >  __o_focalPointRatio) {
	GraphicsGradientFill_obj *__this = (GraphicsGradientFill_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsGradientFill_obj), true, "openfl.display.GraphicsGradientFill"));
	*(void **)__this = GraphicsGradientFill_obj::_hx_vtable;
	__this->__construct(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,__o_focalPointRatio);
	return __this;
}

GraphicsGradientFill_obj::GraphicsGradientFill_obj()
{
}

void GraphicsGradientFill_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsGradientFill);
	HX_MARK_MEMBER_NAME(alphas,"alphas");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_MARK_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(ratios,"ratios");
	HX_MARK_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
	HX_MARK_END_CLASS();
}

void GraphicsGradientFill_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alphas,"alphas");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(focalPointRatio,"focalPointRatio");
	HX_VISIT_MEMBER_NAME(interpolationMethod,"interpolationMethod");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(ratios,"ratios");
	HX_VISIT_MEMBER_NAME(spreadMethod,"spreadMethod");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_VISIT_MEMBER_NAME(_hx___graphicsFillType,"__graphicsFillType");
}

hx::Val GraphicsGradientFill_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { return hx::Val( alphas); }
		if (HX_FIELD_EQ(inName,"colors") ) { return hx::Val( colors); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		if (HX_FIELD_EQ(inName,"ratios") ) { return hx::Val( ratios); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { return hx::Val( spreadMethod); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { return hx::Val( focalPointRatio); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType); }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { return hx::Val( _hx___graphicsFillType); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { return hx::Val( interpolationMethod); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GraphicsGradientFill_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"alphas") ) { alphas=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratios") ) { ratios=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spreadMethod") ) { spreadMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"focalPointRatio") ) { focalPointRatio=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast<  ::openfl::display::GraphicsDataType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__graphicsFillType") ) { _hx___graphicsFillType=inValue.Cast<  ::openfl::display::GraphicsFillType >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolationMethod") ) { interpolationMethod=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsGradientFill_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0"));
	outFields->push(HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb"));
	outFields->push(HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	outFields->push(HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsGradientFill_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GraphicsGradientFill_obj,alphas),HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GraphicsGradientFill_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsFloat,(int)offsetof(GraphicsGradientFill_obj,focalPointRatio),HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsGradientFill_obj,interpolationMethod),HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GraphicsGradientFill_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(GraphicsGradientFill_obj,ratios),HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsGradientFill_obj,spreadMethod),HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsGradientFill_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsGradientFill_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{hx::fsObject /*::openfl::display::GraphicsFillType*/ ,(int)offsetof(GraphicsGradientFill_obj,_hx___graphicsFillType),HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GraphicsGradientFill_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsGradientFill_obj_sMemberFields[] = {
	HX_HCSTRING("alphas","\x55","\xcb","\x3b","\x42"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("focalPointRatio","\x60","\x71","\xca","\xc0"),
	HX_HCSTRING("interpolationMethod","\x25","\x8f","\xf4","\xc8"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("ratios","\x08","\x35","\x8a","\xbb"),
	HX_HCSTRING("spreadMethod","\xb4","\x05","\x24","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void GraphicsGradientFill_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsGradientFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsGradientFill_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsGradientFill_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsGradientFill_obj::__mClass;

void GraphicsGradientFill_obj::__register()
{
	hx::Object *dummy = new GraphicsGradientFill_obj;
	GraphicsGradientFill_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsGradientFill","\x68","\x1b","\x1b","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsGradientFill_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsGradientFill_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsGradientFill_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsGradientFill_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsGradientFill_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsGradientFill_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
