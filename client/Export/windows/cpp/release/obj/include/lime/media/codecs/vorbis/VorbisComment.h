// Generated by Haxe 3.4.0
#ifndef INCLUDED_lime_media_codecs_vorbis_VorbisComment
#define INCLUDED_lime_media_codecs_vorbis_VorbisComment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_9ae5a5db8095fcfe_11_new)
HX_DECLARE_CLASS4(lime,media,codecs,vorbis,VorbisComment)

namespace lime{
namespace media{
namespace codecs{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisComment_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VorbisComment_obj OBJ_;
		VorbisComment_obj();

	public:
		enum { _hx_ClassId = 0x72f7c6ad };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.codecs.vorbis.VorbisComment")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.media.codecs.vorbis.VorbisComment"); }

		hx::ObjectPtr< VorbisComment_obj > __new() {
			hx::ObjectPtr< VorbisComment_obj > __this = new VorbisComment_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< VorbisComment_obj > __alloc(hx::Ctx *_hx_ctx) {
			VorbisComment_obj *__this = (VorbisComment_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VorbisComment_obj), true, "lime.media.codecs.vorbis.VorbisComment"));
			*(void **)__this = VorbisComment_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_9ae5a5db8095fcfe_11_new)
            	HX_STACK_THIS(__this)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisComment_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VorbisComment","\x2c","\x4f","\xa7","\x75"); }

		::Array< ::String > userComments;
		::String vendor;
};

} // end namespace lime
} // end namespace media
} // end namespace codecs
} // end namespace vorbis

#endif /* INCLUDED_lime_media_codecs_vorbis_VorbisComment */ 
