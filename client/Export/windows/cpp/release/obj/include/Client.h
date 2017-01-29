// Generated by Haxe 3.4.0
#ifndef INCLUDED_Client
#define INCLUDED_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Game
#include <Game.h>
#endif
HX_DECLARE_CLASS0(Client)
HX_DECLARE_CLASS0(Connection)
HX_DECLARE_CLASS0(Field)
HX_DECLARE_CLASS0(Game)
HX_DECLARE_CLASS0(Globals)
HX_DECLARE_CLASS0(IButton)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES Client_obj : public  ::Game_obj
{
	public:
		typedef  ::Game_obj super;
		typedef Client_obj OBJ_;
		Client_obj();

	public:
		enum { _hx_ClassId = 0x3ee43e6b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Client")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Client"); }
		static hx::ObjectPtr< Client_obj > __new();
		static hx::ObjectPtr< Client_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Client_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Client","\x6b","\x3e","\xe4","\x3e"); }

		 ::Globals g;
		 ::openfl::media::Sound slide;
		 ::openfl::text::TextField loginText;
		 ::openfl::text::TextField cardText;
		 ::Connection connection;
		 ::Field userField;
		void loginState();
		::Dynamic loginState_dyn();

		void connect();
		::Dynamic connect_dyn();

		void toFromState();
		::Dynamic toFromState_dyn();

		void inGameState();
		::Dynamic inGameState_dyn();

};


#endif /* INCLUDED_Client */ 
