// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__internal_swf_FilterType
#define INCLUDED_openfl__internal_swf_FilterType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,swf,FilterType)
namespace openfl{
namespace _internal{
namespace swf{


class FilterType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FilterType_obj OBJ_;

	public:
		FilterType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.swf.FilterType","\x8e","\x86","\x46","\x27"); }
		::String __ToString() const { return HX_HCSTRING("FilterType.","\x3c","\x5d","\xb0","\xae") + _hx_tag; }

		static ::openfl::_internal::swf::FilterType BlurFilter(Float blurX,Float blurY,int quality);
		static ::Dynamic BlurFilter_dyn();
		static ::openfl::_internal::swf::FilterType ColorMatrixFilter(::Array< Float > matrix);
		static ::Dynamic ColorMatrixFilter_dyn();
		static ::openfl::_internal::swf::FilterType DropShadowFilter(Float distance,Float angle,int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout,bool hideObject);
		static ::Dynamic DropShadowFilter_dyn();
		static ::openfl::_internal::swf::FilterType GlowFilter(int color,Float alpha,Float blurX,Float blurY,Float strength,int quality,bool inner,bool knockout);
		static ::Dynamic GlowFilter_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace swf

#endif /* INCLUDED_openfl__internal_swf_FilterType */ 
