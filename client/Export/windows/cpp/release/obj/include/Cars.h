// Generated by Haxe 3.4.0
#ifndef INCLUDED_Cars
#define INCLUDED_Cars

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Cars)
HX_DECLARE_CLASS2(openfl,display,Tile)



class HXCPP_CLASS_ATTRIBUTES Cars_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Cars_obj OBJ_;
		Cars_obj();

	public:
		enum { _hx_ClassId = 0x2c9349ff };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Cars")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Cars"); }
		static hx::ObjectPtr< Cars_obj > __new();
		static hx::ObjectPtr< Cars_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cars_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Cars","\xff","\x49","\x93","\x2c"); }

		static void __boot();
		static int WIDTH;
		static int HEIGHT;
		 ::openfl::display::Tile r;
		 ::openfl::display::Tile o;
		 ::openfl::display::Tile y;
		 ::openfl::display::Tile g;
		 ::openfl::display::Tile b;
		 ::openfl::display::Tile i;
		 ::openfl::display::Tile v;
};


#endif /* INCLUDED_Cars */ 
