// Generated by Haxe 3.4.0
#ifndef INCLUDED_sys_net_Socket
#define INCLUDED_sys_net_Socket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,net,Host)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES Socket_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Socket_obj OBJ_;
		Socket_obj();

	public:
		enum { _hx_ClassId = 0x109f852f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.net.Socket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.net.Socket"); }
		static hx::ObjectPtr< Socket_obj > __new();
		static hx::ObjectPtr< Socket_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Socket_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Socket","\xd3","\xff","\xda","\x5a"); }

		static  ::Dynamic select(::Array< ::Dynamic> read,::Array< ::Dynamic> write,::Array< ::Dynamic> others, ::Dynamic timeout);
		static ::Dynamic select_dyn();

		 ::Dynamic __s;
		 ::haxe::io::Input input;
		 ::haxe::io::Output output;
		void init();
		::Dynamic init_dyn();

		void listen(int connections);
		::Dynamic listen_dyn();

		void bind( ::sys::net::Host host,int port);
		::Dynamic bind_dyn();

		 ::sys::net::Socket accept();
		::Dynamic accept_dyn();

		void setBlocking(bool b);
		::Dynamic setBlocking_dyn();

		void setFastSend(bool b);
		::Dynamic setFastSend_dyn();

};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Socket */ 
