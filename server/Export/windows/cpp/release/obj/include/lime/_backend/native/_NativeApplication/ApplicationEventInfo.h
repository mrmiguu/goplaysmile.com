// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e0c2b4da9d832f26_691_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,ApplicationEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES ApplicationEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ApplicationEventInfo_obj OBJ_;
		ApplicationEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x7cde2bc3 };

		void __construct( ::Dynamic type,hx::Null< int >  __o_deltaTime);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.ApplicationEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.ApplicationEventInfo"); }

		hx::ObjectPtr< ApplicationEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_deltaTime) {
			hx::ObjectPtr< ApplicationEventInfo_obj > __this = new ApplicationEventInfo_obj();
			__this->__construct(type,__o_deltaTime);
			return __this;
		}

		static hx::ObjectPtr< ApplicationEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_deltaTime) {
			ApplicationEventInfo_obj *__this = (ApplicationEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ApplicationEventInfo_obj), false, "lime._backend.native._NativeApplication.ApplicationEventInfo"));
			*(void **)__this = ApplicationEventInfo_obj::_hx_vtable;
{
int deltaTime = __o_deltaTime.Default(0);
            	HX_STACKFRAME(&_hx_pos_e0c2b4da9d832f26_691_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(deltaTime,"deltaTime")
HXLINE( 693)		( ( ::lime::_backend::native::_NativeApplication::ApplicationEventInfo)(__this) )->type = type;
HXLINE( 694)		( ( ::lime::_backend::native::_NativeApplication::ApplicationEventInfo)(__this) )->deltaTime = deltaTime;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ApplicationEventInfo","\x58","\xf8","\x5f","\x3d"); }

		int deltaTime;
		int type;
		 ::lime::_backend::native::_NativeApplication::ApplicationEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_ApplicationEventInfo */ 