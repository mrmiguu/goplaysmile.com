// Generated by Haxe 3.4.0
#ifndef INCLUDED_Globals
#define INCLUDED_Globals

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Animatible)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(Globals)
HX_DECLARE_CLASS0(IButton)
HX_DECLARE_CLASS0(Level)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Radio)
HX_DECLARE_CLASS0(SpriteSheet)
HX_DECLARE_CLASS0(Terrain)
HX_DECLARE_CLASS0(Viewport)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES Globals_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Globals_obj OBJ_;
		Globals_obj();

	public:
		enum { _hx_ClassId = 0x393ec1ac };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Globals")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Globals"); }
		static hx::ObjectPtr< Globals_obj > __new();
		static hx::ObjectPtr< Globals_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Globals_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Globals","\x90","\x2d","\x8a","\xe1"); }

		 ::Game login;
		 ::Game toFrom;
		 ::Game inGame;
		 ::Radio radio;
		::Array< ::String > outbox;
		 ::Dynamic roll;
		Dynamic roll_dyn() { return roll;}
		 ::Terrain t;
		 ::Viewport v;
		 ::openfl::text::TextField toFromText;
		 ::Level l;
		::String user;
		 ::openfl::media::Sound err;
		::Array< ::Dynamic> pushes;
		::Array< ::Dynamic> pops;
		 ::haxe::ds::StringMap players;
		 ::Player player(::String user);
		::Dynamic player_dyn();

		 ::Player me();
		::Dynamic me_dyn();

		void errSfx();
		::Dynamic errSfx_dyn();

		void pushSfx();
		::Dynamic pushSfx_dyn();

		void popSfx();
		::Dynamic popSfx_dyn();

};


#endif /* INCLUDED_Globals */ 