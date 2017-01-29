// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo
#define INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_4be9d6956d8ea946_846_new)
HX_DECLARE_CLASS4(lime,_backend,native,_NativeApplication,KeyEventInfo)

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{


class HXCPP_CLASS_ATTRIBUTES KeyEventInfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef KeyEventInfo_obj OBJ_;
		KeyEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x7b2e1704 };

		void __construct( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._backend.native._NativeApplication.KeyEventInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._backend.native._NativeApplication.KeyEventInfo"); }

		hx::ObjectPtr< KeyEventInfo_obj > __new( ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier) {
			hx::ObjectPtr< KeyEventInfo_obj > __this = new KeyEventInfo_obj();
			__this->__construct(type,__o_windowID,__o_keyCode,__o_modifier);
			return __this;
		}

		static hx::ObjectPtr< KeyEventInfo_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic type,hx::Null< int >  __o_windowID,hx::Null< int >  __o_keyCode,hx::Null< int >  __o_modifier) {
			KeyEventInfo_obj *__this = (KeyEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KeyEventInfo_obj), false, "lime._backend.native._NativeApplication.KeyEventInfo"));
			*(void **)__this = KeyEventInfo_obj::_hx_vtable;
{
int windowID = __o_windowID.Default(0);
int keyCode = __o_keyCode.Default(0);
int modifier = __o_modifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_4be9d6956d8ea946_846_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(windowID,"windowID")
            	HX_STACK_ARG(keyCode,"keyCode")
            	HX_STACK_ARG(modifier,"modifier")
HXLINE( 848)		( ( ::lime::_backend::native::_NativeApplication::KeyEventInfo)(__this) )->type = type;
HXLINE( 849)		( ( ::lime::_backend::native::_NativeApplication::KeyEventInfo)(__this) )->windowID = windowID;
HXLINE( 850)		( ( ::lime::_backend::native::_NativeApplication::KeyEventInfo)(__this) )->keyCode = keyCode;
HXLINE( 851)		( ( ::lime::_backend::native::_NativeApplication::KeyEventInfo)(__this) )->modifier = modifier;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyEventInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("KeyEventInfo","\x29","\x38","\xa3","\x94"); }

		int keyCode;
		int modifier;
		int type;
		int windowID;
		 ::lime::_backend::native::_NativeApplication::KeyEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication

#endif /* INCLUDED_lime__backend_native__NativeApplication_KeyEventInfo */ 
