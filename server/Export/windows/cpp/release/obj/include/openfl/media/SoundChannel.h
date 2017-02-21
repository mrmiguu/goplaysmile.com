// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_media_SoundChannel
#define INCLUDED_openfl_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,media,AudioSource)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES SoundChannel_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();

	public:
		enum { _hx_ClassId = 0x1b643044 };

		void __construct( ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.media.SoundChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.media.SoundChannel"); }
		static hx::ObjectPtr< SoundChannel_obj > __new( ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform);
		static hx::ObjectPtr< SoundChannel_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundChannel","\xd4","\xaf","\x1c","\xa9"); }

		Float leftPeak;
		Float rightPeak;
		bool _hx___isValid;
		 ::openfl::media::SoundTransform _hx___soundTransform;
		 ::lime::media::AudioSource _hx___source;
		void stop();
		::Dynamic stop_dyn();

		void _hx___dispose();
		::Dynamic _hx___dispose_dyn();

		void _hx___updateTransform();
		::Dynamic _hx___updateTransform_dyn();

		Float get_position();
		::Dynamic get_position_dyn();

		Float set_position(Float value);
		::Dynamic set_position_dyn();

		 ::openfl::media::SoundTransform get_soundTransform();
		::Dynamic get_soundTransform_dyn();

		 ::openfl::media::SoundTransform set_soundTransform( ::openfl::media::SoundTransform value);
		::Dynamic set_soundTransform_dyn();

		void source_onComplete();
		::Dynamic source_onComplete_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundChannel */ 
