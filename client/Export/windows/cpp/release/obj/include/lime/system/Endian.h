// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_system_Endian
#define INCLUDED_lime_system_Endian

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,_hx_system,Endian)
namespace lime{
namespace _hx_system{


class Endian_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Endian_obj OBJ_;

	public:
		Endian_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("lime.system.Endian","\x41","\x85","\x63","\xb4"); }
		::String __ToString() const { return HX_HCSTRING("Endian.","\x13","\x17","\x4e","\x0a") + _hx_tag; }

		static ::lime::_hx_system::Endian _hx_BIG_ENDIAN;
		static inline ::lime::_hx_system::Endian _hx_BIG_ENDIAN_dyn() { return _hx_BIG_ENDIAN; }
		static ::lime::_hx_system::Endian _hx_LITTLE_ENDIAN;
		static inline ::lime::_hx_system::Endian _hx_LITTLE_ENDIAN_dyn() { return _hx_LITTLE_ENDIAN; }
};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_Endian */ 
