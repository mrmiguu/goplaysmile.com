// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#define INCLUDED_openfl__internal_stage3D_SamplerState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a3b6e1b35b0e3bd8_17_new)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)

namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES SamplerState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SamplerState_obj OBJ_;
		SamplerState_obj();

	public:
		enum { _hx_ClassId = 0x6c998e6c };

		void __construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.stage3D.SamplerState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.stage3D.SamplerState"); }

		hx::ObjectPtr< SamplerState_obj > __new(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid) {
			hx::ObjectPtr< SamplerState_obj > __this = new SamplerState_obj();
			__this->__construct(minFilter,magFilter,wrapModeS,wrapModeT,__o_lodBias,__o_maxAniso,__o_ignoreSampler,__o_centroid);
			return __this;
		}

		static hx::ObjectPtr< SamplerState_obj > __alloc(hx::Ctx *_hx_ctx,int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso,hx::Null< bool >  __o_ignoreSampler,hx::Null< bool >  __o_centroid) {
			SamplerState_obj *__this = (SamplerState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerState_obj), false, "openfl._internal.stage3D.SamplerState"));
			*(void **)__this = SamplerState_obj::_hx_vtable;
{
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
bool ignoreSampler = __o_ignoreSampler.Default(false);
bool centroid = __o_centroid.Default(false);
            	HX_STACKFRAME(&_hx_pos_a3b6e1b35b0e3bd8_17_new)
            	HX_STACK_THIS(__this)
            	HX_STACK_ARG(minFilter,"minFilter")
            	HX_STACK_ARG(magFilter,"magFilter")
            	HX_STACK_ARG(wrapModeS,"wrapModeS")
            	HX_STACK_ARG(wrapModeT,"wrapModeT")
            	HX_STACK_ARG(lodBias,"lodBias")
            	HX_STACK_ARG(maxAniso,"maxAniso")
            	HX_STACK_ARG(ignoreSampler,"ignoreSampler")
            	HX_STACK_ARG(centroid,"centroid")
HXLINE(  19)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->minFilter = minFilter;
HXLINE(  20)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->magFilter = magFilter;
HXLINE(  21)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->wrapModeS = wrapModeS;
HXLINE(  22)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->wrapModeT = wrapModeT;
HXLINE(  23)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->lodBias = lodBias;
HXLINE(  24)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->maxAniso = maxAniso;
HXLINE(  25)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->ignoreSampler = ignoreSampler;
HXLINE(  26)		( ( ::openfl::_internal::stage3D::SamplerState)(__this) )->centroid = centroid;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SamplerState","\x09","\x30","\xd2","\x83"); }

		bool centroid;
		bool ignoreSampler;
		Float lodBias;
		int magFilter;
		Float maxAniso;
		int minFilter;
		int wrapModeS;
		int wrapModeT;
		void copyFrom( ::openfl::_internal::stage3D::SamplerState other);
		::Dynamic copyFrom_dyn();

		bool equals( ::openfl::_internal::stage3D::SamplerState other);
		::Dynamic equals_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_SamplerState */ 
