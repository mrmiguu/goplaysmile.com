// Generated by Haxe 3.4.0
#ifndef INCLUDED_Dests
#define INCLUDED_Dests

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Dests)
HX_DECLARE_CLASS2(openfl,display,Tile)



class HXCPP_CLASS_ATTRIBUTES Dests_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Dests_obj OBJ_;
		Dests_obj();

	public:
		enum { _hx_ClassId = 0x6a59a7b1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Dests")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Dests"); }
		static hx::ObjectPtr< Dests_obj > __new();
		static hx::ObjectPtr< Dests_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Dests_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Dests","\xb1","\xa7","\x59","\x6a"); }

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


#endif /* INCLUDED_Dests */ 
