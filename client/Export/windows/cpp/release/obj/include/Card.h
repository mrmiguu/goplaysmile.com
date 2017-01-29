// Generated by Haxe 3.3.0
#ifndef INCLUDED_Card
#define INCLUDED_Card

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Animation
#include <Animation.h>
#endif
HX_DECLARE_CLASS0(Animatible)
HX_DECLARE_CLASS0(Animation)
HX_DECLARE_CLASS0(Card)
HX_DECLARE_CLASS0(Globals)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)



class HXCPP_CLASS_ATTRIBUTES Card_obj : public  ::Animation_obj
{
	public:
		typedef  ::Animation_obj super;
		typedef Card_obj OBJ_;
		Card_obj();

	public:
		void __construct( ::Globals g,::String name, ::openfl::display::Sprite roller);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Card")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Card"); }
		static hx::ObjectPtr< Card_obj > __new( ::Globals g,::String name, ::openfl::display::Sprite roller);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Card_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Card","\xf0","\x49","\x93","\x2c"); }

		 ::openfl::display::Sprite sprite;
		Int h;
		Int target;
		 ::openfl::media::Sound pick;
		 ::openfl::media::Sound arrival;
		::Array< ::Dynamic> vrooms;
		Int current;
		::Array< Int > instr;
		 ::openfl::display::Sprite roller;
		 ::openfl::display::Tile focus;
		 ::openfl::display::Tile _hx_double;
		 ::Globals g;
		void i(Int y);
		::Dynamic i_dyn();

		void sel();
		::Dynamic sel_dyn();

		void begin();

		void during();

		void end();

		void progress();
		::Dynamic progress_dyn();

};


#endif /* INCLUDED_Card */ 
