// Generated by Haxe 3.3.0
#ifndef INCLUDED_Type
#define INCLUDED_Type

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Type)
HX_DECLARE_CLASS0(ValueType)



class HXCPP_CLASS_ATTRIBUTES Type_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Type_obj OBJ_;
		Type_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Type")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"Type"); }
		static hx::ObjectPtr< Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Type_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37"); }

		static hx::Class getClass( ::Dynamic o);
		static ::Dynamic getClass_dyn();

		static hx::Class getSuperClass(hx::Class c);
		static ::Dynamic getSuperClass_dyn();

		static ::String getClassName(hx::Class c);
		static ::Dynamic getClassName_dyn();

		static ::String getEnumName(hx::Class e);
		static ::Dynamic getEnumName_dyn();

		static hx::Class resolveClass(::String name);
		static ::Dynamic resolveClass_dyn();

		static hx::Class resolveEnum(::String name);
		static ::Dynamic resolveEnum_dyn();

		static  ::Dynamic createInstance(hx::Class cl,::cpp::VirtualArray args);
		static ::Dynamic createInstance_dyn();

		static  ::Dynamic createEmptyInstance(hx::Class cl);
		static ::Dynamic createEmptyInstance_dyn();

		static  ::Dynamic createEnum(hx::Class e,::String constr,::cpp::VirtualArray params);
		static ::Dynamic createEnum_dyn();

		static ::Array< ::String > getInstanceFields(hx::Class c);
		static ::Dynamic getInstanceFields_dyn();

		static ::Array< ::String > getEnumConstructs(hx::Class e);
		static ::Dynamic getEnumConstructs_dyn();

		static ::hx::EnumBase _hx_typeof( ::Dynamic v);
		static ::Dynamic _hx_typeof_dyn();

		static ::cpp::VirtualArray enumParameters( ::Dynamic e);
		static ::Dynamic enumParameters_dyn();

};


#endif /* INCLUDED_Type */ 
