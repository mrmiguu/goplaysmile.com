// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_
#define INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_PixelSnapping,PixelSnapping_Impl_)

namespace openfl{
namespace display{
namespace _PixelSnapping{


class HXCPP_CLASS_ATTRIBUTES PixelSnapping_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PixelSnapping_Impl__obj OBJ_;
		PixelSnapping_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._PixelSnapping.PixelSnapping_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._PixelSnapping.PixelSnapping_Impl_"); }
		static hx::ObjectPtr< PixelSnapping_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PixelSnapping_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("PixelSnapping_Impl_","\x62","\x58","\x36","\x94"); }

		static void __boot();
		static  ::Dynamic ALWAYS;
		static  ::Dynamic AUTO;
		static  ::Dynamic NEVER;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(Int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _PixelSnapping

#endif /* INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_ */ 
