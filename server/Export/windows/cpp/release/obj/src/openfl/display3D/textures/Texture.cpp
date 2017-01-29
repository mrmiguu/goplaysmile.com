// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_23_new,"openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",23,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_46_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",46,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_75_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",75,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_84_uploadFromBitmapData,"openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",84,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_127_uploadFromByteArray,"openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",127,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_132_uploadFromTypedArray,"openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",132,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_211___uploadATFTextureFromByteArray,"openfl.display3D.textures.Texture","__uploadATFTextureFromByteArray",0x7de383ee,"openfl.display3D.textures.Texture.__uploadATFTextureFromByteArray","openfl/display3D/textures/Texture.hx",211,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_154___getATFVersion,"openfl.display3D.textures.Texture","__getATFVersion",0x0832a0eb,"openfl.display3D.textures.Texture.__getATFVersion","openfl/display3D/textures/Texture.hx",154,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_188___readUInt24,"openfl.display3D.textures.Texture","__readUInt24",0x2184b642,"openfl.display3D.textures.Texture.__readUInt24","openfl/display3D/textures/Texture.hx",188,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_199___readUInt32,"openfl.display3D.textures.Texture","__readUInt32",0x2184b71f,"openfl.display3D.textures.Texture.__readUInt32","openfl/display3D/textures/Texture.hx",199,0x3ee19dbf)
HX_DEFINE_STACK_FRAME(_hx_pos_c910f1c2855eeb73_20_boot,"openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",20,0x3ee19dbf)
namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_23_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
            	HX_STACK_ARG(streamingLevels,"streamingLevels")
HXLINE(  25)		super::__construct(context,(int)3553);
HXLINE(  27)		this->_hx___width = width;
HXLINE(  28)		this->_hx___height = height;
HXLINE(  30)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  31)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  33)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  34)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  36)		::lime::graphics::opengl::GL_obj::context->texImage2D(this->_hx___textureTarget,(int)0,this->_hx___internalFormat,width,height,(int)0,this->_hx___format,(int)5121,null());
HXLINE(  37)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  39)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  41)		this->uploadFromTypedArray(null(),null());
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

void *Texture_obj::_hx_vtable = 0;

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Texture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x1fad1a24;
	}
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_46_uploadCompressedTextureFromByteArray)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(async,"async")
HXLINE(  46)		HX_VARI(  ::openfl::display3D::textures::Texture,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE(  48)		data->position = byteArrayOffset;
HXLINE(  49)		HX_VARI( ::String,signature) = data->readUTFBytes((int)3);
HXLINE(  50)		data->position = byteArrayOffset;
HXLINE(  52)		if ((signature == HX_("ATF",f3,9b,31,00))) {
HXLINE(  54)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  55)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  57)			this->_hx___uploadATFTextureFromByteArray(data,byteArrayOffset);
HXLINE(  59)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  60)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
            		else {
HXLINE(  66)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  67)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
HXLINE(  71)		if (async) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_75_uploadCompressedTextureFromByteArray)
HXLINE(  75)				_gthis->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  73)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_84_uploadFromBitmapData)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(miplevel,"miplevel")
            	HX_STACK_ARG(generateMipmap,"generateMipmap")
HXLINE(  96)		if (hx::IsNull( source )) {
HXLINE(  96)			return;
            		}
HXLINE(  98)		HX_VARI( int,width) = ((int)this->_hx___width >> (int)miplevel);
HXLINE(  99)		HX_VARI( int,height) = ((int)this->_hx___height >> (int)miplevel);
HXLINE( 101)		bool _hx_tmp;
HXDLIN( 101)		if ((source->width == width)) {
HXLINE( 101)			_hx_tmp = (source->height != height);
            		}
            		else {
HXLINE( 101)			_hx_tmp = true;
            		}
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 103)			HX_VARI(  ::openfl::display::BitmapData,copy) =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,(int)0);
HXLINE( 104)			copy->draw(source,null(),null(),null(),null(),null());
HXLINE( 105)			source = copy;
            		}
HXLINE( 111)		this->uploadFromTypedArray(this->_hx___getImage(source)->get_data(),miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_127_uploadFromByteArray)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 127)		HX_VARI(  ::haxe::io::Bytes,buffer) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 127)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN( 127)		if (hx::IsNotNull( buffer )) {
HXLINE( 127)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 127)			if ((byteArrayOffset < (int)0)) {
HXLINE( 127)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 127)			if ((hx::Mod(byteArrayOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 127)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 127)			HX_VARI( int,bufferByteLength) = buffer->length;
HXDLIN( 127)			HX_VARI( int,newByteLength) = bufferByteLength;
HXDLIN( 127)			{
HXLINE( 127)				newByteLength = (bufferByteLength - byteArrayOffset);
HXDLIN( 127)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 127)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 127)				if ((newByteLength < (int)0)) {
HXLINE( 127)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 127)			_this->buffer = buffer;
HXDLIN( 127)			_this->byteOffset = byteArrayOffset;
HXDLIN( 127)			_this->byteLength = newByteLength;
HXDLIN( 127)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 127)			this1 = _this;
            		}
            		else {
HXLINE( 127)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 127)		this->uploadFromTypedArray(this1,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_132_uploadFromTypedArray)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 134)		if (hx::IsNull( data )) {
HXLINE( 134)			return;
            		}
HXLINE( 136)		HX_VARI( int,width) = ((int)this->_hx___width >> (int)miplevel);
HXLINE( 137)		HX_VARI( int,height) = ((int)this->_hx___height >> (int)miplevel);
HXLINE( 139)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE( 140)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 142)		::lime::graphics::opengl::GL_obj::context->texImage2D(this->_hx___textureTarget,miplevel,this->_hx___internalFormat,width,height,(int)0,this->_hx___format,(int)5121,data);
HXLINE( 143)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 145)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE( 146)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 149)		this->_hx___trackMemoryUsage(((width * height) * (int)4));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,uploadFromTypedArray,(void))

void Texture_obj::_hx___uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_211___uploadATFTextureFromByteArray)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
HXLINE( 213)		data->position = byteArrayOffset;
HXLINE( 215)		HX_VARI( int,version) = ::openfl::display3D::textures::Texture_obj::_hx___getATFVersion(data);
HXLINE( 216)		HX_VAR( int,length);
HXDLIN( 216)		if ((version == (int)0)) {
HXLINE( 216)			length = ::openfl::display3D::textures::Texture_obj::_hx___readUInt24(data);
            		}
            		else {
HXLINE( 216)			length = ::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data);
            		}
HXLINE( 218)		if (((byteArrayOffset + length) > ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data))) {
HXLINE( 220)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE( 227)		if ((((int)data->readUnsignedByte() >> (int)(int)7) != (int)0)) {
HXLINE( 229)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF Cube maps are not supported",0a,da,6c,45)));
            		}
HXLINE( 239)		HX_VARI( int,width) = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 240)		HX_VARI( int,height) = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if ((width == this->_hx___width)) {
HXLINE( 242)			_hx_tmp = (height != this->_hx___height);
            		}
            		else {
HXLINE( 242)			_hx_tmp = true;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 244)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 248)		HX_VARI( int,mipCount) = data->readUnsignedByte();
HXLINE( 250)		{
HXLINE( 250)			HX_VARI( int,_g1) = (int)0;
HXDLIN( 250)			while((_g1 < mipCount)){
HXLINE( 250)				_g1 = (_g1 + (int)1);
HXLINE( 252)				{
HXLINE( 252)					HX_VARI( int,_g2) = (int)0;
HXDLIN( 252)					while((_g2 < (int)3)){
HXLINE( 252)						_g2 = (_g2 + (int)1);
HXLINE( 254)						HX_VAR( int,blockLength);
HXDLIN( 254)						if ((version == (int)0)) {
HXLINE( 254)							blockLength = ::openfl::display3D::textures::Texture_obj::_hx___readUInt24(data);
            						}
            						else {
HXLINE( 254)							blockLength = ::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data);
            						}
HXLINE( 262)						HX_VARI( bool,aNeg) = (blockLength < (int)0);
HXDLIN( 262)						bool _hx_tmp1;
HXDLIN( 262)						if ((aNeg != false)) {
HXLINE( 262)							_hx_tmp1 = aNeg;
            						}
            						else {
HXLINE( 262)							_hx_tmp1 = (blockLength > (int)0);
            						}
HXLINE( 278)						data->position = (data->position + blockLength);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,_hx___uploadATFTextureFromByteArray,(void))

bool Texture_obj::_hx___lowMemoryMode;

int Texture_obj::_hx___getATFVersion( ::openfl::utils::ByteArrayData data){
            	HX_GC_STACKFRAME(&_hx_pos_c910f1c2855eeb73_154___getATFVersion)
            	HX_STACK_ARG(data,"data")
HXLINE( 158)		if ((data->readUTFBytes((int)3) != HX_("ATF",f3,9b,31,00))) {
HXLINE( 160)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE( 164)		HX_VARI( int,position) = data->position;
HXLINE( 165)		HX_VARI( int,version) = (int)0;
HXLINE( 167)		HX_VARI( int,a) = (data->length - data->position);
HXDLIN( 167)		HX_VARI( bool,aNeg) = (a < (int)0);
HXDLIN( 167)		bool _hx_tmp;
HXDLIN( 167)		if ((aNeg != false)) {
HXLINE( 167)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 167)			_hx_tmp = (a >= (int)5);
            		}
HXDLIN( 167)		if (_hx_tmp) {
HXLINE( 171)			if ((::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data) == (int)255)) {
HXLINE( 173)				version = data->readUnsignedByte();
            			}
            			else {
HXLINE( 177)				data->position = position;
            			}
            		}
HXLINE( 183)		return version;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___getATFVersion,return )

int Texture_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_188___readUInt24)
            	HX_STACK_ARG(data,"data")
HXLINE( 190)		HX_VARI( int,value) = ((int)data->readUnsignedByte() << (int)(int)16);
HXLINE( 192)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 193)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 194)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___readUInt24,return )

int Texture_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_199___readUInt32)
            	HX_STACK_ARG(data,"data")
HXLINE( 201)		HX_VARI( int,value) = ((int)data->readUnsignedByte() << (int)(int)24);
HXLINE( 203)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)16));
HXLINE( 204)		value = ((int)value | (int)((int)data->readUnsignedByte() << (int)(int)8));
HXLINE( 205)		value = ((int)value | (int)data->readUnsignedByte());
HXLINE( 206)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___readUInt32,return )


hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	hx::ObjectPtr< Texture_obj > __this = new Texture_obj();
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

hx::ObjectPtr< Texture_obj > Texture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	Texture_obj *__this = (Texture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Texture_obj), true, "openfl.display3D.textures.Texture"));
	*(void **)__this = Texture_obj::_hx_vtable;
	__this->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn()); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return hx::Val( _hx___uploadATFTextureFromByteArray_dyn()); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { outValue = _hx___readUInt24_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { outValue = _hx___readUInt32_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = _hx___lowMemoryMode; return true; }
		if (HX_FIELD_EQ(inName,"__getATFVersion") ) { outValue = _hx___getATFVersion_dyn(); return true; }
	}
	return false;
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { _hx___lowMemoryMode=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Texture_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::_hx___lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	HX_HCSTRING("__getATFVersion","\x5b","\xb8","\xa0","\xe5"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null())
};

void Texture_obj::__register()
{
	hx::Object *dummy = new Texture_obj;
	Texture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c910f1c2855eeb73_20_boot)
HXLINE(  20)		_hx___lowMemoryMode = false;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures