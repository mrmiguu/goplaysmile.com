// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#define INCLUDED_lime_net_HTTPRequestHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_27fdfe9151c47db1_17_new)
HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)

namespace lime{
namespace net{


class HXCPP_CLASS_ATTRIBUTES HTTPRequestHeader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HTTPRequestHeader_obj OBJ_;
		HTTPRequestHeader_obj();

	public:
		enum { _hx_ClassId = 0x2dc89a34 };

		void __construct(::String name,::String __o_value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net.HTTPRequestHeader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.net.HTTPRequestHeader"); }

		hx::ObjectPtr< HTTPRequestHeader_obj > __new(::String name,::String __o_value) {
			hx::ObjectPtr< HTTPRequestHeader_obj > __this = new HTTPRequestHeader_obj();
			__this->__construct(name,__o_value);
			return __this;
		}

		static hx::ObjectPtr< HTTPRequestHeader_obj > __alloc(hx::Ctx *_hx_ctx,::String name,::String __o_value) {
			HTTPRequestHeader_obj *__this = (HTTPRequestHeader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTTPRequestHeader_obj), true, "lime.net.HTTPRequestHeader"));
			*(void **)__this = HTTPRequestHeader_obj::_hx_vtable;
{
::String value = __o_value.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_27fdfe9151c47db1_17_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(value,"value")
HXLINE(  19)		( ( ::lime::net::HTTPRequestHeader)(__this) )->name = name;
HXLINE(  20)		( ( ::lime::net::HTTPRequestHeader)(__this) )->value = value;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HTTPRequestHeader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HTTPRequestHeader","\x94","\x99","\xb5","\xe9"); }

		::String name;
		::String value;
};

} // end namespace lime
} // end namespace net

#endif /* INCLUDED_lime_net_HTTPRequestHeader */ 
