// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__internal_renderer_console_ConsoleRenderer
#define INCLUDED_openfl__internal_renderer_console_ConsoleRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,graphics,ConsoleRenderContext)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS4(openfl,_internal,renderer,console,ConsoleRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace console{


class HXCPP_CLASS_ATTRIBUTES ConsoleRenderer_obj : public  ::openfl::_internal::renderer::AbstractRenderer_obj
{
	public:
		typedef  ::openfl::_internal::renderer::AbstractRenderer_obj super;
		typedef ConsoleRenderer_obj OBJ_;
		ConsoleRenderer_obj();

	public:
		enum { _hx_ClassId = 0x2c820b8e };

		void __construct( ::openfl::display::Stage stage, ::lime::graphics::ConsoleRenderContext ctx);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.renderer.console.ConsoleRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.renderer.console.ConsoleRenderer"); }
		static hx::ObjectPtr< ConsoleRenderer_obj > __new( ::openfl::display::Stage stage, ::lime::graphics::ConsoleRenderContext ctx);
		static hx::ObjectPtr< ConsoleRenderer_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::graphics::ConsoleRenderContext ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConsoleRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConsoleRenderer","\x9a","\x23","\x5d","\xae"); }

		void render();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace console

#endif /* INCLUDED_openfl__internal_renderer_console_ConsoleRenderer */ 
