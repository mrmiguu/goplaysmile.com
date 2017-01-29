// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_audio_FlashAudioContext
#include <lime/audio/FlashAudioContext.h>
#endif

namespace lime{
namespace audio{

void FlashAudioContext_obj::__construct(){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","new",0xd15df86a,"lime.audio.FlashAudioContext.new","lime/audio/FlashAudioContext.hx",12,0xbb50a608)
            	HX_STACK_THIS(this)
            	}

Dynamic FlashAudioContext_obj::__CreateEmpty() { return new FlashAudioContext_obj; }

hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__new()
{
	hx::ObjectPtr< FlashAudioContext_obj > _hx_result = new FlashAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlashAudioContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlashAudioContext_obj > _hx_result = new FlashAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::audio::AudioBuffer FlashAudioContext_obj::createBuffer( ::Dynamic stream, ::Dynamic context){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","createBuffer",0xd64383d2,"lime.audio.FlashAudioContext.createBuffer","lime/audio/FlashAudioContext.hx",26,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stream,"stream")
            	HX_STACK_ARG(context,"context")
HXLINE(  26)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlashAudioContext_obj,createBuffer,return )

Int FlashAudioContext_obj::getBytesLoaded( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getBytesLoaded",0xb339da10,"lime.audio.FlashAudioContext.getBytesLoaded","lime/audio/FlashAudioContext.hx",42,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(  42)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesLoaded,return )

Int FlashAudioContext_obj::getBytesTotal( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getBytesTotal",0xad490c19,"lime.audio.FlashAudioContext.getBytesTotal","lime/audio/FlashAudioContext.hx",57,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(  57)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesTotal,return )

 ::Dynamic FlashAudioContext_obj::getID3( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getID3",0x0b7a1b58,"lime.audio.FlashAudioContext.getID3","lime/audio/FlashAudioContext.hx",72,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getID3,return )

Bool FlashAudioContext_obj::getIsBuffering( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getIsBuffering",0xa97f99d8,"lime.audio.FlashAudioContext.getIsBuffering","lime/audio/FlashAudioContext.hx",87,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE(  87)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsBuffering,return )

Bool FlashAudioContext_obj::getIsURLInaccessible( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getIsURLInaccessible",0x2645b2e0,"lime.audio.FlashAudioContext.getIsURLInaccessible","lime/audio/FlashAudioContext.hx",102,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 102)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsURLInaccessible,return )

Float FlashAudioContext_obj::getLength( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getLength",0x4a4ce9a6,"lime.audio.FlashAudioContext.getLength","lime/audio/FlashAudioContext.hx",117,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 117)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getLength,return )

::String FlashAudioContext_obj::getURL( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","getURL",0x0b8342af,"lime.audio.FlashAudioContext.getURL","lime/audio/FlashAudioContext.hx",132,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 132)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getURL,return )

void FlashAudioContext_obj::close( ::lime::audio::AudioBuffer buffer){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","close",0x0e4ed642,"lime.audio.FlashAudioContext.close","lime/audio/FlashAudioContext.hx",137,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,close,(void))

Float FlashAudioContext_obj::extract( ::lime::audio::AudioBuffer buffer, ::Dynamic target,Float length,hx::Null< Float >  __o_startPosition){
Float startPosition = __o_startPosition.Default(-1);
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","extract",0x602aaa4b,"lime.audio.FlashAudioContext.extract","lime/audio/FlashAudioContext.hx",160,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(target,"target")
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(startPosition,"startPosition")
HXLINE( 160)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,extract,return )

void FlashAudioContext_obj::load( ::lime::audio::AudioBuffer buffer, ::Dynamic stream, ::Dynamic context){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","load",0x5f907adc,"lime.audio.FlashAudioContext.load","lime/audio/FlashAudioContext.hx",165,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(stream,"stream")
            	HX_STACK_ARG(context,"context")
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,load,(void))

void FlashAudioContext_obj::loadCompressedDataFromByteArray( ::lime::audio::AudioBuffer buffer, ::Dynamic bytes,Int bytesLength){
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","loadCompressedDataFromByteArray",0x525c92e0,"lime.audio.FlashAudioContext.loadCompressedDataFromByteArray","lime/audio/FlashAudioContext.hx",178,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(bytesLength,"bytesLength")
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,loadCompressedDataFromByteArray,(void))

void FlashAudioContext_obj::loadPCMFromByteArray( ::lime::audio::AudioBuffer buffer, ::Dynamic bytes,Int samples,::String format,hx::Null< Bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
Bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","loadPCMFromByteArray",0x7dd47e29,"lime.audio.FlashAudioContext.loadPCMFromByteArray","lime/audio/FlashAudioContext.hx",191,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(samples,"samples")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(stereo,"stereo")
            	HX_STACK_ARG(sampleRate,"sampleRate")
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlashAudioContext_obj,loadPCMFromByteArray,(void))

 ::Dynamic FlashAudioContext_obj::play( ::lime::audio::AudioBuffer buffer,hx::Null< Float >  __o_startTime,hx::Null< Int >  __o_loops, ::Dynamic sndTransform){
Float startTime = __o_startTime.Default(0);
Int loops = __o_loops.Default(0);
            	HX_STACK_FRAME("lime.audio.FlashAudioContext","play",0x62330eaa,"lime.audio.FlashAudioContext.play","lime/audio/FlashAudioContext.hx",214,0xbb50a608)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(buffer,"buffer")
            	HX_STACK_ARG(startTime,"startTime")
            	HX_STACK_ARG(loops,"loops")
            	HX_STACK_ARG(sndTransform,"sndTransform")
HXLINE( 214)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,play,return )


FlashAudioContext_obj::FlashAudioContext_obj()
{
}

hx::Val FlashAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getID3") ) { return hx::Val( getID3_dyn()); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return hx::Val( getURL_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return hx::Val( extract_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return hx::Val( createBuffer_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBytesTotal") ) { return hx::Val( getBytesTotal_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBytesLoaded") ) { return hx::Val( getBytesLoaded_dyn()); }
		if (HX_FIELD_EQ(inName,"getIsBuffering") ) { return hx::Val( getIsBuffering_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getIsURLInaccessible") ) { return hx::Val( getIsURLInaccessible_dyn()); }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return hx::Val( loadPCMFromByteArray_dyn()); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return hx::Val( loadCompressedDataFromByteArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlashAudioContext_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlashAudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashAudioContext_obj_sMemberFields[] = {
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("getBytesLoaded","\xda","\xb9","\x68","\x21"),
	HX_HCSTRING("getBytesTotal","\x8f","\xb3","\x4c","\xa2"),
	HX_HCSTRING("getID3","\x22","\x21","\x1f","\xa3"),
	HX_HCSTRING("getIsBuffering","\xa2","\x79","\xae","\x17"),
	HX_HCSTRING("getIsURLInaccessible","\x2a","\x86","\x55","\x6d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("extract","\x41","\xb5","\xea","\x78"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	::String(null()) };

static void FlashAudioContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashAudioContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class FlashAudioContext_obj::__mClass;

void FlashAudioContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.audio.FlashAudioContext","\x78","\x3b","\xd3","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlashAudioContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlashAudioContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlashAudioContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashAudioContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashAudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashAudioContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace audio
