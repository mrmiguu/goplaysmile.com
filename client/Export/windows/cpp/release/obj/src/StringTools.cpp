// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_45_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",45,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_115_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",115,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_183_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",183,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_211_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",211,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_245_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",245,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_262_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",262,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_287_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",287,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_315_trim,"StringTools","trim",0x2908d066,"StringTools.trim","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",315,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_331_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",331,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_386_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",386,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_396_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",396,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_488_quoteUnixArg,"StringTools","quoteUnixArg",0xc59dac56,"StringTools.quoteUnixArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",488,0xb9dbeb2d)
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_521_quoteWinArg,"StringTools","quoteWinArg",0x7e16b8f2,"StringTools.quoteWinArg","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",521,0xb9dbeb2d)
static const ::String _hx_array_data_0363db6a_23[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_0363db6a_24[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_0363db6a_25[] = {
	HX_("\\",5c,00,00,00),
};
static const ::String _hx_array_data_0363db6a_26[] = {
	HX_("\"",22,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae8d48bb73fd7d46_506_boot,"StringTools","boot",0x1d20b7b6,"StringTools.boot","C:\\HaxeToolkit\\haxe\\std/StringTools.hx",506,0xb9dbeb2d)
static const int _hx_array_data_0363db6a_28[] = {
	(int)32,(int)40,(int)41,(int)37,(int)33,(int)94,(int)34,(int)60,(int)62,(int)38,(int)124,(int)10,(int)13,(int)44,(int)59,
};

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_45_urlEncode)
HXLINE(  45)		return s.__URLEncode();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_115_urlDecode)
HXLINE( 115)		return s.__URLDecode();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_183_startsWith)
HXLINE( 189)		if ((s.length < start.length)) {
HXLINE( 190)			return false;
            		}
HXLINE( 191)		::cpp::Pointer< char > p0 = ::cpp::Pointer_obj::fromPointer(s.__s);
HXLINE( 192)		::cpp::Pointer< char > p1 = ::cpp::Pointer_obj::fromPointer(start.__s);
HXLINE( 193)		{
HXLINE( 193)			int _g1 = (int)0;
HXDLIN( 193)			int _g = start.length;
HXDLIN( 193)			while((_g1 < _g)){
HXLINE( 193)				_g1 = (_g1 + (int)1);
HXDLIN( 193)				int i = (_g1 - (int)1);
HXLINE( 194)				char & _hx_tmp = p0->at(i);
HXDLIN( 194)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 194)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 195)					return false;
            				}
            			}
            		}
HXLINE( 196)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_211_endsWith)
HXLINE( 217)		if ((s.length < end.length)) {
HXLINE( 218)			return false;
            		}
HXLINE( 219)		::cpp::Pointer< char > p0 = ::cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 219)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 220)		::cpp::Pointer< char > p1 = ::cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 221)		{
HXLINE( 221)			int _g1 = (int)0;
HXDLIN( 221)			int _g = end.length;
HXDLIN( 221)			while((_g1 < _g)){
HXLINE( 221)				_g1 = (_g1 + (int)1);
HXDLIN( 221)				int i = (_g1 - (int)1);
HXLINE( 222)				char & _hx_tmp = p01->at(i);
HXDLIN( 222)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 222)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 223)					return false;
            				}
            			}
            		}
HXLINE( 224)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_245_isSpace)
HXLINE( 249)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if (hx::IsGreater( c,(int)8 )) {
HXLINE( 250)			_hx_tmp = hx::IsLess( c,(int)14 );
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (!(_hx_tmp)) {
HXLINE( 250)			return hx::IsEq( c,(int)32 );
            		}
            		else {
HXLINE( 250)			return true;
            		}
HXDLIN( 250)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_262_ltrim)
HXLINE( 266)		int l = s.length;
HXLINE( 267)		int r = (int)0;
HXLINE( 268)		while(true){
HXLINE( 268)			bool _hx_tmp;
HXDLIN( 268)			if ((r < l)) {
HXLINE( 268)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (!(_hx_tmp)) {
HXLINE( 268)				goto _hx_goto_7;
            			}
HXLINE( 269)			r = (r + (int)1);
            		}
            		_hx_goto_7:;
HXLINE( 271)		if ((r > (int)0)) {
HXLINE( 272)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 274)			return s;
            		}
HXLINE( 271)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_287_rtrim)
HXLINE( 291)		int l = s.length;
HXLINE( 292)		int r = (int)0;
HXLINE( 293)		while(true){
HXLINE( 293)			bool _hx_tmp;
HXDLIN( 293)			if ((r < l)) {
HXLINE( 293)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - (int)1));
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
HXDLIN( 293)			if (!(_hx_tmp)) {
HXLINE( 293)				goto _hx_goto_9;
            			}
HXLINE( 294)			r = (r + (int)1);
            		}
            		_hx_goto_9:;
HXLINE( 296)		if ((r > (int)0)) {
HXLINE( 297)			return s.substr((int)0,(l - r));
            		}
            		else {
HXLINE( 299)			return s;
            		}
HXLINE( 296)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_315_trim)
HXLINE( 315)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_331_lpad)
HXLINE( 332)		if ((c.length <= (int)0)) {
HXLINE( 333)			return s;
            		}
HXLINE( 335)		while((s.length < l)){
HXLINE( 336)			s = (c + s);
            		}
HXLINE( 338)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_386_replace)
HXLINE( 386)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_396_hex)
HXLINE( 402)		::String s = HX_("",00,00,00,00);
HXLINE( 403)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 404)		while(true){
HXLINE( 405)			s = (hexChars.charAt(((int)n & (int)(int)15)) + s);
HXLINE( 406)			n = hx::UShr(n,(int)4);
HXLINE( 404)			if (!((n > (int)0))) {
HXLINE( 404)				goto _hx_goto_15;
            			}
            		}
            		_hx_goto_15:;
HXLINE( 417)		if (hx::IsNotNull( digits )) {
HXLINE( 418)			while(hx::IsLess( s.length,digits )){
HXLINE( 419)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 421)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )

::String StringTools_obj::quoteUnixArg(::String argument){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_488_quoteUnixArg)
HXLINE( 492)		if ((argument == HX_("",00,00,00,00))) {
HXLINE( 493)			return HX_("''",20,22,00,00);
            		}
HXLINE( 495)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9_@%+=:,./-]",80,28,a0,8d),HX_("",00,00,00,00))->match(argument))) {
HXLINE( 496)			return argument;
            		}
HXLINE( 500)		return ((HX_("'",27,00,00,00) + ::StringTools_obj::replace(argument,HX_("'",27,00,00,00),HX_("'\"'\"'",71,96,37,8b))) + HX_("'",27,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,quoteUnixArg,return )

::Array< int > StringTools_obj::winMetaCharacters;

::String StringTools_obj::quoteWinArg(::String argument,bool escapeMetaCharacters){
            	HX_GC_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_521_quoteWinArg)
HXLINE( 523)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[^ \t\\\\\"]+$",fe,85,ca,95),HX_("",00,00,00,00))->match(argument))) {
HXLINE( 528)			 ::StringBuf result =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 529)			bool needquote;
HXDLIN( 529)			bool needquote1;
HXDLIN( 529)			if ((argument.indexOf(HX_(" ",20,00,00,00),null()) == (int)-1)) {
HXLINE( 529)				needquote1 = (argument.indexOf(HX_("\t",09,00,00,00),null()) != (int)-1);
            			}
            			else {
HXLINE( 529)				needquote1 = true;
            			}
HXDLIN( 529)			if (!(needquote1)) {
HXLINE( 529)				needquote = (argument == HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 529)				needquote = true;
            			}
HXLINE( 531)			if (needquote) {
HXLINE( 532)				if (hx::IsNotNull( result->charBuf )) {
HXLINE( 532)					result->flush();
            				}
HXDLIN( 532)				if (hx::IsNull( result->b )) {
HXLINE( 532)					result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_23,1);
            				}
            				else {
HXLINE( 532)					result->b->push(HX_("\"",22,00,00,00));
            				}
            			}
HXLINE( 534)			 ::StringBuf bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 535)			{
HXLINE( 535)				int _g1 = (int)0;
HXDLIN( 535)				int _g = argument.length;
HXDLIN( 535)				while((_g1 < _g)){
HXLINE( 535)					_g1 = (_g1 + (int)1);
HXDLIN( 535)					int i = (_g1 - (int)1);
HXLINE( 536)					{
HXLINE( 536)						 ::Dynamic _g2 = argument.charCodeAt(i);
HXDLIN( 536)						if (hx::IsNull( _g2 )) {
HXLINE( 547)							 ::Dynamic c = _g2;
HXDLIN( 547)							{
HXLINE( 549)								if ((bs_buf->get_length() > (int)0)) {
HXLINE( 550)									{
HXLINE( 550)										::String x = bs_buf->toString();
HXDLIN( 550)										if (hx::IsNotNull( result->charBuf )) {
HXLINE( 550)											result->flush();
            										}
HXDLIN( 550)										if (hx::IsNull( result->b )) {
HXLINE( 550)											result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            										}
            										else {
HXLINE( 550)											::Array< ::String > result1 = result->b;
HXDLIN( 550)											result1->push(::Std_obj::string(x));
            										}
            									}
HXLINE( 551)									bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            								}
HXLINE( 553)								{
HXLINE( 553)									if (hx::IsNull( result->charBuf )) {
HXLINE( 553)										result->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 553)									result->charBuf->push(c);
            								}
            							}
            						}
            						else {
HXLINE( 536)							 ::Dynamic _hx_switch_0 = _g2;
            							if (  (_hx_switch_0==(int)34) ){
HXLINE( 542)								::String bs = bs_buf->toString();
HXLINE( 543)								{
HXLINE( 543)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 543)										result->flush();
            									}
HXDLIN( 543)									if (hx::IsNull( result->b )) {
HXLINE( 543)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE( 543)										::Array< ::String > result2 = result->b;
HXDLIN( 543)										result2->push(::Std_obj::string(bs));
            									}
            								}
HXLINE( 544)								{
HXLINE( 544)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 544)										result->flush();
            									}
HXDLIN( 544)									if (hx::IsNull( result->b )) {
HXLINE( 544)										result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bs));
            									}
            									else {
HXLINE( 544)										::Array< ::String > result3 = result->b;
HXDLIN( 544)										result3->push(::Std_obj::string(bs));
            									}
            								}
HXLINE( 545)								bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 546)								{
HXLINE( 546)									if (hx::IsNotNull( result->charBuf )) {
HXLINE( 546)										result->flush();
            									}
HXDLIN( 546)									if (hx::IsNull( result->b )) {
HXLINE( 546)										result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_24,1);
            									}
            									else {
HXLINE( 546)										result->b->push(HX_("\\\"",46,50,00,00));
            									}
            								}
HXLINE( 540)								goto _hx_goto_20;
            							}
            							if (  (_hx_switch_0==(int)92) ){
HXLINE( 539)								if (hx::IsNotNull( bs_buf->charBuf )) {
HXLINE( 539)									bs_buf->flush();
            								}
HXDLIN( 539)								if (hx::IsNull( bs_buf->b )) {
HXLINE( 539)									bs_buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_25,1);
            								}
            								else {
HXLINE( 539)									bs_buf->b->push(HX_("\\",5c,00,00,00));
            								}
HXDLIN( 539)								goto _hx_goto_20;
            							}
            							/* default */{
HXLINE( 547)								 ::Dynamic c1 = _g2;
HXDLIN( 547)								{
HXLINE( 549)									if ((bs_buf->get_length() > (int)0)) {
HXLINE( 550)										{
HXLINE( 550)											::String x1 = bs_buf->toString();
HXDLIN( 550)											if (hx::IsNotNull( result->charBuf )) {
HXLINE( 550)												result->flush();
            											}
HXDLIN( 550)											if (hx::IsNull( result->b )) {
HXLINE( 550)												result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            											}
            											else {
HXLINE( 550)												::Array< ::String > result4 = result->b;
HXDLIN( 550)												result4->push(::Std_obj::string(x1));
            											}
            										}
HXLINE( 551)										bs_buf =  ::StringBuf_obj::__alloc( HX_CTX );
            									}
HXLINE( 553)									{
HXLINE( 553)										if (hx::IsNull( result->charBuf )) {
HXLINE( 553)											result->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 553)										result->charBuf->push(c1);
            									}
            								}
            							}
            							_hx_goto_20:;
            						}
            					}
            				}
            			}
HXLINE( 558)			{
HXLINE( 558)				::String x2 = bs_buf->toString();
HXDLIN( 558)				if (hx::IsNotNull( result->charBuf )) {
HXLINE( 558)					result->flush();
            				}
HXDLIN( 558)				if (hx::IsNull( result->b )) {
HXLINE( 558)					result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            				}
            				else {
HXLINE( 558)					::Array< ::String > result5 = result->b;
HXDLIN( 558)					result5->push(::Std_obj::string(x2));
            				}
            			}
HXLINE( 560)			if (needquote) {
HXLINE( 561)				{
HXLINE( 561)					::String x3 = bs_buf->toString();
HXDLIN( 561)					if (hx::IsNotNull( result->charBuf )) {
HXLINE( 561)						result->flush();
            					}
HXDLIN( 561)					if (hx::IsNull( result->b )) {
HXLINE( 561)						result->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            					}
            					else {
HXLINE( 561)						::Array< ::String > result6 = result->b;
HXDLIN( 561)						result6->push(::Std_obj::string(x3));
            					}
            				}
HXLINE( 562)				{
HXLINE( 562)					if (hx::IsNotNull( result->charBuf )) {
HXLINE( 562)						result->flush();
            					}
HXDLIN( 562)					if (hx::IsNull( result->b )) {
HXLINE( 562)						result->b = ::Array_obj< ::String >::fromData( _hx_array_data_0363db6a_26,1);
            					}
            					else {
HXLINE( 562)						result->b->push(HX_("\"",22,00,00,00));
            					}
            				}
            			}
HXLINE( 565)			argument = result->toString();
            		}
HXLINE( 568)		if (escapeMetaCharacters) {
HXLINE( 569)			 ::StringBuf result7 =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 570)			{
HXLINE( 570)				int _g11 = (int)0;
HXDLIN( 570)				int _g3 = argument.length;
HXDLIN( 570)				while((_g11 < _g3)){
HXLINE( 570)					_g11 = (_g11 + (int)1);
HXDLIN( 570)					int i1 = (_g11 - (int)1);
HXLINE( 571)					 ::Dynamic c2 = argument.charCodeAt(i1);
HXLINE( 572)					if ((::StringTools_obj::winMetaCharacters->indexOf(c2,null()) >= (int)0)) {
HXLINE( 573)						if (hx::IsNull( result7->charBuf )) {
HXLINE( 573)							result7->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 573)						result7->charBuf->push((int)94);
            					}
HXLINE( 575)					{
HXLINE( 575)						if (hx::IsNull( result7->charBuf )) {
HXLINE( 575)							result7->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 575)						result7->charBuf->push(c2);
            					}
            				}
            			}
HXLINE( 577)			return result7->toString();
            		}
            		else {
HXLINE( 579)			return argument;
            		}
HXLINE( 568)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,quoteWinArg,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quoteWinArg") ) { outValue = quoteWinArg_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"quoteUnixArg") ) { outValue = quoteUnixArg_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { outValue = winMetaCharacters; return true; }
	}
	return false;
}

bool StringTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"winMetaCharacters") ) { winMetaCharacters=ioValue.Cast< ::Array< int > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StringTools_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(void *) &StringTools_obj::winMetaCharacters,HX_HCSTRING("winMetaCharacters","\x0b","\x65","\xcd","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StringTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StringTools_obj::winMetaCharacters,"winMetaCharacters");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("urlDecode","\xfd","\xb9","\x5b","\x05"),
	HX_HCSTRING("startsWith","\x77","\xc0","\xcf","\xf9"),
	HX_HCSTRING("endsWith","\x5e","\x7a","\xb6","\xdb"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("lpad","\x67","\x5c","\xb8","\x47"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	HX_HCSTRING("quoteUnixArg","\xd2","\x54","\x33","\x00"),
	HX_HCSTRING("winMetaCharacters","\x0b","\x65","\xcd","\x94"),
	HX_HCSTRING("quoteWinArg","\xf6","\xb3","\xbc","\x14"),
	::String(null())
};

void StringTools_obj::__register()
{
	hx::Object *dummy = new StringTools_obj;
	StringTools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &StringTools_obj::__SetStatic;
	__mClass->mMarkFunc = StringTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StringTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ae8d48bb73fd7d46_506_boot)
HXLINE( 506)		winMetaCharacters = ::Array_obj< int >::fromData( _hx_array_data_0363db6a_28,15);
            	}
}

