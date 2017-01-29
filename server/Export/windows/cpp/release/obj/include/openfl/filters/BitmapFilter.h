// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_filters_BitmapFilter
#define INCLUDED_openfl_filters_BitmapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES BitmapFilter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BitmapFilter_obj OBJ_;
		BitmapFilter_obj();

	public:
		enum { _hx_ClassId = 0x4f68d692 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.filters.BitmapFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.filters.BitmapFilter"); }
		static hx::ObjectPtr< BitmapFilter_obj > __new();
		static hx::ObjectPtr< BitmapFilter_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BitmapFilter","\x27","\x0d","\x67","\x58"); }

		bool _hx___cacheObject;
		int _hx___numPasses;
		virtual  ::openfl::filters::BitmapFilter clone();
		::Dynamic clone_dyn();

		virtual void _hx___applyFilter( ::openfl::display::BitmapData sourceBitmapData, ::openfl::display::BitmapData destBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);
		::Dynamic _hx___applyFilter_dyn();

		virtual  ::openfl::display::Shader _hx___initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass);
		::Dynamic _hx___initShader_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilter */ 
