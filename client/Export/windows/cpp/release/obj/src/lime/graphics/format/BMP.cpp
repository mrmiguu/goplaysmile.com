// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ec97b87f3ed1dc6b_17_encode,"lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",17,0xe68a6e47)
namespace lime{
namespace graphics{
namespace format{

void BMP_obj::__construct() { }

Dynamic BMP_obj::__CreateEmpty() { return new BMP_obj; }

void *BMP_obj::_hx_vtable = 0;

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BMP_obj > _hx_result = new BMP_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BMP_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5328312e;
}

 ::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image, ::lime::graphics::format::BMPType type){
            	HX_GC_STACKFRAME(&_hx_pos_ec97b87f3ed1dc6b_17_encode)
            	HX_STACK_ARG(image,"image")
            	HX_STACK_ARG(type,"type")
HXLINE(  19)		bool _hx_tmp;
HXDLIN(  19)		if (!(image->get_premultiplied())) {
HXLINE(  19)			_hx_tmp = (image->get_format() != (int)0);
            		}
            		else {
HXLINE(  19)			_hx_tmp = true;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  23)			image = image->clone();
HXLINE(  24)			image->set_premultiplied(false);
HXLINE(  25)			image->set_format((int)0);
            		}
HXLINE(  29)		if (hx::IsNull( type )) {
HXLINE(  31)			type = ::lime::graphics::format::BMPType_obj::RGB_dyn();
            		}
HXLINE(  35)		HX_VARI( int,fileHeaderLength) = (int)14;
HXLINE(  36)		HX_VARI( int,infoHeaderLength) = (int)40;
HXLINE(  37)		HX_VARI( int,pixelValuesLength) = ((image->width * image->height) * (int)4);
HXLINE(  39)		if (hx::IsNotNull( type )) {
HXLINE(  39)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE(  52)					pixelValuesLength = ((((image->width * (int)3) + hx::Mod((image->width * (int)3),(int)4)) + (image->height * (int)3)) + (image->height * (int)3));
            				}
            				break;
            				case (int)1: {
HXLINE(  43)					infoHeaderLength = (int)108;
            				}
            				break;
            				case (int)2: {
HXLINE(  47)					fileHeaderLength = (int)0;
HXLINE(  48)					pixelValuesLength = (pixelValuesLength + (image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE(  58)		HX_VARI(  ::haxe::io::Bytes,data) = ::haxe::io::Bytes_obj::alloc(((fileHeaderLength + infoHeaderLength) + pixelValuesLength));
HXLINE(  59)		HX_VARI( int,position) = (int)0;
HXLINE(  61)		if ((fileHeaderLength > (int)0)) {
HXLINE(  63)			{
HXLINE(  63)				position = (int)1;
HXDLIN(  63)				data->b[(int)0] = (int)66;
            			}
HXLINE(  64)			{
HXLINE(  64)				position = (int)2;
HXDLIN(  64)				data->b[(int)1] = (int)77;
            			}
HXLINE(  65)			{
HXLINE(  65)				HX_VARI( int,v) = data->length;
HXDLIN(  65)				data->b[(int)2] = v;
HXDLIN(  65)				data->b[(int)3] = ((int)v >> (int)(int)8);
HXDLIN(  65)				data->b[(int)4] = ((int)v >> (int)(int)16);
HXDLIN(  65)				data->b[(int)5] = hx::UShr(v,(int)24);
            			}
HXDLIN(  65)			position = (int)6;
HXLINE(  66)			{
HXLINE(  66)				data->b[(int)6] = (int)0;
HXDLIN(  66)				data->b[(int)7] = (int)0;
            			}
HXDLIN(  66)			position = (int)8;
HXLINE(  67)			{
HXLINE(  67)				data->b[(int)8] = (int)0;
HXDLIN(  67)				data->b[(int)9] = (int)0;
            			}
HXDLIN(  67)			position = (int)10;
HXLINE(  68)			{
HXLINE(  68)				HX_VARI_NAME( int,v1,"v") = (fileHeaderLength + infoHeaderLength);
HXDLIN(  68)				data->b[(int)10] = v1;
HXDLIN(  68)				data->b[(int)11] = ((int)v1 >> (int)(int)8);
HXDLIN(  68)				data->b[(int)12] = ((int)v1 >> (int)(int)16);
HXDLIN(  68)				data->b[(int)13] = hx::UShr(v1,(int)24);
            			}
HXDLIN(  68)			position = (int)14;
            		}
HXLINE(  72)		{
HXLINE(  72)			data->b[position] = infoHeaderLength;
HXDLIN(  72)			data->b[(position + (int)1)] = ((int)infoHeaderLength >> (int)(int)8);
HXDLIN(  72)			data->b[(position + (int)2)] = ((int)infoHeaderLength >> (int)(int)16);
HXDLIN(  72)			data->b[(position + (int)3)] = hx::UShr(infoHeaderLength,(int)24);
            		}
HXDLIN(  72)		position = (position + (int)4);
HXLINE(  73)		{
HXLINE(  73)			HX_VARI_NAME( int,v2,"v") = image->width;
HXDLIN(  73)			data->b[position] = v2;
HXDLIN(  73)			data->b[(position + (int)1)] = ((int)v2 >> (int)(int)8);
HXDLIN(  73)			data->b[(position + (int)2)] = ((int)v2 >> (int)(int)16);
HXDLIN(  73)			data->b[(position + (int)3)] = hx::UShr(v2,(int)24);
            		}
HXDLIN(  73)		position = (position + (int)4);
HXLINE(  74)		{
HXLINE(  74)			HX_VAR_NAME( int,v3,"v");
HXDLIN(  74)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::ICO_dyn() )) {
HXLINE(  74)				v3 = (image->height * (int)2);
            			}
            			else {
HXLINE(  74)				v3 = image->height;
            			}
HXDLIN(  74)			data->b[position] = v3;
HXDLIN(  74)			data->b[(position + (int)1)] = ((int)v3 >> (int)(int)8);
HXDLIN(  74)			data->b[(position + (int)2)] = ((int)v3 >> (int)(int)16);
HXDLIN(  74)			data->b[(position + (int)3)] = hx::UShr(v3,(int)24);
            		}
HXDLIN(  74)		position = (position + (int)4);
HXLINE(  75)		{
HXLINE(  75)			data->b[position] = (int)1;
HXDLIN(  75)			data->b[(position + (int)1)] = (int)0;
            		}
HXDLIN(  75)		position = (position + (int)2);
HXLINE(  76)		{
HXLINE(  76)			HX_VAR_NAME( int,v4,"v");
HXDLIN(  76)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::RGB_dyn() )) {
HXLINE(  76)				v4 = (int)24;
            			}
            			else {
HXLINE(  76)				v4 = (int)32;
            			}
HXDLIN(  76)			data->b[position] = v4;
HXDLIN(  76)			data->b[(position + (int)1)] = ((int)v4 >> (int)(int)8);
            		}
HXDLIN(  76)		position = (position + (int)2);
HXLINE(  77)		{
HXLINE(  77)			HX_VAR_NAME( int,v5,"v");
HXDLIN(  77)			if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  77)				v5 = (int)3;
            			}
            			else {
HXLINE(  77)				v5 = (int)0;
            			}
HXDLIN(  77)			data->b[position] = v5;
HXDLIN(  77)			data->b[(position + (int)1)] = ((int)v5 >> (int)(int)8);
HXDLIN(  77)			data->b[(position + (int)2)] = ((int)v5 >> (int)(int)16);
HXDLIN(  77)			data->b[(position + (int)3)] = hx::UShr(v5,(int)24);
            		}
HXDLIN(  77)		position = (position + (int)4);
HXLINE(  78)		{
HXLINE(  78)			data->b[position] = pixelValuesLength;
HXDLIN(  78)			data->b[(position + (int)1)] = ((int)pixelValuesLength >> (int)(int)8);
HXDLIN(  78)			data->b[(position + (int)2)] = ((int)pixelValuesLength >> (int)(int)16);
HXDLIN(  78)			data->b[(position + (int)3)] = hx::UShr(pixelValuesLength,(int)24);
            		}
HXDLIN(  78)		position = (position + (int)4);
HXLINE(  79)		{
HXLINE(  79)			data->b[position] = (int)11824;
HXDLIN(  79)			data->b[(position + (int)1)] = (int)46;
HXDLIN(  79)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  79)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  79)		position = (position + (int)4);
HXLINE(  80)		{
HXLINE(  80)			data->b[position] = (int)11824;
HXDLIN(  80)			data->b[(position + (int)1)] = (int)46;
HXDLIN(  80)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  80)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  80)		position = (position + (int)4);
HXLINE(  81)		{
HXLINE(  81)			data->b[position] = (int)0;
HXDLIN(  81)			data->b[(position + (int)1)] = (int)0;
HXDLIN(  81)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  81)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  81)		position = (position + (int)4);
HXLINE(  82)		{
HXLINE(  82)			data->b[position] = (int)0;
HXDLIN(  82)			data->b[(position + (int)1)] = (int)0;
HXDLIN(  82)			data->b[(position + (int)2)] = (int)0;
HXDLIN(  82)			data->b[(position + (int)3)] = (int)0;
            		}
HXDLIN(  82)		position = (position + (int)4);
HXLINE(  84)		if (hx::IsEq( type,::lime::graphics::format::BMPType_obj::BITFIELD_dyn() )) {
HXLINE(  86)			{
HXLINE(  86)				data->b[position] = (int)16711680;
HXDLIN(  86)				data->b[(position + (int)1)] = (int)65280;
HXDLIN(  86)				data->b[(position + (int)2)] = (int)255;
HXDLIN(  86)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  86)			position = (position + (int)4);
HXLINE(  87)			{
HXLINE(  87)				data->b[position] = (int)65280;
HXDLIN(  87)				data->b[(position + (int)1)] = (int)255;
HXDLIN(  87)				data->b[(position + (int)2)] = (int)0;
HXDLIN(  87)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  87)			position = (position + (int)4);
HXLINE(  88)			{
HXLINE(  88)				data->b[position] = (int)255;
HXDLIN(  88)				data->b[(position + (int)1)] = (int)0;
HXDLIN(  88)				data->b[(position + (int)2)] = (int)0;
HXDLIN(  88)				data->b[(position + (int)3)] = (int)0;
            			}
HXDLIN(  88)			position = (position + (int)4);
HXLINE(  89)			{
HXLINE(  89)				data->b[position] = (int)-16777216;
HXDLIN(  89)				data->b[(position + (int)1)] = (int)-65536;
HXDLIN(  89)				data->b[(position + (int)2)] = (int)-256;
HXDLIN(  89)				data->b[(position + (int)3)] = (int)255;
            			}
HXDLIN(  89)			position = (position + (int)4);
HXLINE(  91)			{
HXLINE(  91)				position = (position + (int)1);
HXDLIN(  91)				data->b[(position - (int)1)] = (int)32;
            			}
HXLINE(  92)			{
HXLINE(  92)				position = (position + (int)1);
HXDLIN(  92)				data->b[(position - (int)1)] = (int)110;
            			}
HXLINE(  93)			{
HXLINE(  93)				position = (position + (int)1);
HXDLIN(  93)				data->b[(position - (int)1)] = (int)105;
            			}
HXLINE(  94)			{
HXLINE(  94)				position = (position + (int)1);
HXDLIN(  94)				data->b[(position - (int)1)] = (int)87;
            			}
HXLINE(  96)			{
HXLINE(  96)				HX_VARI( int,_g) = (int)0;
HXDLIN(  96)				while((_g < (int)48)){
HXLINE(  96)					_g = (_g + (int)1);
HXLINE(  98)					{
HXLINE(  98)						position = (position + (int)1);
HXDLIN(  98)						data->b[(position - (int)1)] = (int)0;
            					}
            				}
            			}
            		}
HXLINE( 104)		HX_VARI(  ::haxe::io::Bytes,pixels) = image->getPixels( ::lime::math::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,image->width,image->height),(int)1);
HXLINE( 105)		HX_VARI( int,readPosition) = (int)0;
HXLINE( 106)		HX_VAR( int,a);
HXDLIN( 106)		HX_VAR( int,r);
HXDLIN( 106)		HX_VAR( int,g);
HXDLIN( 106)		HX_VAR( int,b);
HXLINE( 108)		if (hx::IsNotNull( type )) {
HXLINE( 108)			switch((int)(_hx_getEnumValueIndex(type))){
            				case (int)0: {
HXLINE( 171)					HX_VARI( int,_g1) = (int)0;
HXDLIN( 171)					HX_VARI_NAME( int,_g2,"_g") = image->height;
HXDLIN( 171)					while((_g1 < _g2)){
HXLINE( 171)						_g1 = (_g1 + (int)1);
HXLINE( 173)						readPosition = ((((image->height - (int)1) - (_g1 - (int)1)) * (int)4) * image->width);
HXLINE( 175)						{
HXLINE( 175)							HX_VARI( int,_g3) = (int)0;
HXDLIN( 175)							HX_VARI_NAME( int,_g21,"_g2") = image->width;
HXDLIN( 175)							while((_g3 < _g21)){
HXLINE( 175)								_g3 = (_g3 + (int)1);
HXLINE( 177)								readPosition = (readPosition + (int)1);
HXLINE( 178)								readPosition = (readPosition + (int)1);
HXDLIN( 178)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 179)								readPosition = (readPosition + (int)1);
HXDLIN( 179)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 180)								readPosition = (readPosition + (int)1);
HXDLIN( 180)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 182)								{
HXLINE( 182)									position = (position + (int)1);
HXDLIN( 182)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 183)								{
HXLINE( 183)									position = (position + (int)1);
HXDLIN( 183)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 184)								{
HXLINE( 184)									position = (position + (int)1);
HXDLIN( 184)									data->b[(position - (int)1)] = r;
            								}
            							}
            						}
HXLINE( 188)						{
HXLINE( 188)							HX_VARI_NAME( int,_g31,"_g3") = (int)0;
HXDLIN( 188)							HX_VARI_NAME( int,_g22,"_g2") = hx::Mod((image->width * (int)3),(int)4);
HXDLIN( 188)							while((_g31 < _g22)){
HXLINE( 188)								_g31 = (_g31 + (int)1);
HXLINE( 190)								{
HXLINE( 190)									position = (position + (int)1);
HXDLIN( 190)									data->b[(position - (int)1)] = (int)0;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 112)					HX_VARI_NAME( int,_g11,"_g1") = (int)0;
HXDLIN( 112)					HX_VARI_NAME( int,_g4,"_g") = image->height;
HXDLIN( 112)					while((_g11 < _g4)){
HXLINE( 112)						_g11 = (_g11 + (int)1);
HXLINE( 114)						readPosition = ((((image->height - (int)1) - (_g11 - (int)1)) * (int)4) * image->width);
HXLINE( 116)						{
HXLINE( 116)							HX_VARI_NAME( int,_g32,"_g3") = (int)0;
HXDLIN( 116)							HX_VARI_NAME( int,_g23,"_g2") = image->width;
HXDLIN( 116)							while((_g32 < _g23)){
HXLINE( 116)								_g32 = (_g32 + (int)1);
HXLINE( 118)								readPosition = (readPosition + (int)1);
HXDLIN( 118)								a = pixels->b->__get((readPosition - (int)1));
HXLINE( 119)								readPosition = (readPosition + (int)1);
HXDLIN( 119)								r = pixels->b->__get((readPosition - (int)1));
HXLINE( 120)								readPosition = (readPosition + (int)1);
HXDLIN( 120)								g = pixels->b->__get((readPosition - (int)1));
HXLINE( 121)								readPosition = (readPosition + (int)1);
HXDLIN( 121)								b = pixels->b->__get((readPosition - (int)1));
HXLINE( 123)								{
HXLINE( 123)									position = (position + (int)1);
HXDLIN( 123)									data->b[(position - (int)1)] = b;
            								}
HXLINE( 124)								{
HXLINE( 124)									position = (position + (int)1);
HXDLIN( 124)									data->b[(position - (int)1)] = g;
            								}
HXLINE( 125)								{
HXLINE( 125)									position = (position + (int)1);
HXDLIN( 125)									data->b[(position - (int)1)] = r;
            								}
HXLINE( 126)								{
HXLINE( 126)									position = (position + (int)1);
HXDLIN( 126)									data->b[(position - (int)1)] = a;
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 134)					HX_VARI(  ::haxe::io::Bytes,andMask) = ::haxe::io::Bytes_obj::alloc((image->width * image->height));
HXLINE( 135)					HX_VARI( int,maskPosition) = (int)0;
HXLINE( 137)					{
HXLINE( 137)						HX_VARI_NAME( int,_g12,"_g1") = (int)0;
HXDLIN( 137)						HX_VARI_NAME( int,_g5,"_g") = image->height;
HXDLIN( 137)						while((_g12 < _g5)){
HXLINE( 137)							_g12 = (_g12 + (int)1);
HXLINE( 139)							readPosition = ((((image->height - (int)1) - (_g12 - (int)1)) * (int)4) * image->width);
HXLINE( 141)							{
HXLINE( 141)								HX_VARI_NAME( int,_g33,"_g3") = (int)0;
HXDLIN( 141)								HX_VARI_NAME( int,_g24,"_g2") = image->width;
HXDLIN( 141)								while((_g33 < _g24)){
HXLINE( 141)									_g33 = (_g33 + (int)1);
HXLINE( 143)									readPosition = (readPosition + (int)1);
HXDLIN( 143)									a = pixels->b->__get((readPosition - (int)1));
HXLINE( 144)									readPosition = (readPosition + (int)1);
HXDLIN( 144)									r = pixels->b->__get((readPosition - (int)1));
HXLINE( 145)									readPosition = (readPosition + (int)1);
HXDLIN( 145)									g = pixels->b->__get((readPosition - (int)1));
HXLINE( 146)									readPosition = (readPosition + (int)1);
HXDLIN( 146)									b = pixels->b->__get((readPosition - (int)1));
HXLINE( 148)									{
HXLINE( 148)										position = (position + (int)1);
HXDLIN( 148)										data->b[(position - (int)1)] = b;
            									}
HXLINE( 149)									{
HXLINE( 149)										position = (position + (int)1);
HXDLIN( 149)										data->b[(position - (int)1)] = g;
            									}
HXLINE( 150)									{
HXLINE( 150)										position = (position + (int)1);
HXDLIN( 150)										data->b[(position - (int)1)] = r;
            									}
HXLINE( 151)									{
HXLINE( 151)										position = (position + (int)1);
HXDLIN( 151)										data->b[(position - (int)1)] = a;
            									}
HXLINE( 159)									{
HXLINE( 159)										maskPosition = (maskPosition + (int)1);
HXDLIN( 159)										andMask->b[(maskPosition - (int)1)] = (int)0;
            									}
            								}
            							}
            						}
            					}
HXLINE( 167)					data->blit(position,andMask,(int)0,(image->width * image->height));
            				}
            				break;
            			}
            		}
HXLINE( 200)		return data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BMP_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BMP_obj_sStaticStorageInfo = 0;
#endif

static void BMP_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BMP_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String BMP_obj_sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null())
};

void BMP_obj::__register()
{
	hx::Object *dummy = new BMP_obj;
	BMP_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BMP_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BMP_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BMP_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMP_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMP_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
