// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil
#define INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,ExtensionPackedDepthStencil)

namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES ExtensionPackedDepthStencil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ExtensionPackedDepthStencil_obj OBJ_;
		ExtensionPackedDepthStencil_obj();

	public:
		enum { _hx_ClassId = 0x5b2afe19 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ExtensionPackedDepthStencil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ExtensionPackedDepthStencil"); }

		hx::ObjectPtr< ExtensionPackedDepthStencil_obj > __new() {
			hx::ObjectPtr< ExtensionPackedDepthStencil_obj > __this = new ExtensionPackedDepthStencil_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ExtensionPackedDepthStencil_obj > __alloc(hx::Ctx *_hx_ctx) {
			ExtensionPackedDepthStencil_obj *__this = (ExtensionPackedDepthStencil_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ExtensionPackedDepthStencil_obj), false, "lime.graphics.opengl.ExtensionPackedDepthStencil"));
			*(void **)__this = ExtensionPackedDepthStencil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExtensionPackedDepthStencil_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ExtensionPackedDepthStencil","\x10","\x3e","\xf7","\x01"); }

		static void __boot();
		static int DEPTH24_STENCIL8_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_ExtensionPackedDepthStencil */ 