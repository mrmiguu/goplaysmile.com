// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display__MovieClip_TimelineObject
#define INCLUDED_openfl_display__MovieClip_TimelineObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_MovieClip,TimelineObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _MovieClip{


class HXCPP_CLASS_ATTRIBUTES TimelineObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TimelineObject_obj OBJ_;
		TimelineObject_obj();

	public:
		enum { _hx_ClassId = 0x0f5242f3 };

		void __construct(int id,int depth, ::openfl::display::DisplayObject displayObject);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display._MovieClip.TimelineObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display._MovieClip.TimelineObject"); }
		static hx::ObjectPtr< TimelineObject_obj > __new(int id,int depth, ::openfl::display::DisplayObject displayObject);
		static hx::ObjectPtr< TimelineObject_obj > __alloc(hx::Ctx *_hx_ctx,int id,int depth, ::openfl::display::DisplayObject displayObject);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimelineObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TimelineObject","\x40","\x4c","\xfc","\x3c"); }

		int depth;
		 ::openfl::display::DisplayObject displayObject;
		int id;
};

} // end namespace openfl
} // end namespace display
} // end namespace _MovieClip

#endif /* INCLUDED_openfl_display__MovieClip_TimelineObject */ 
