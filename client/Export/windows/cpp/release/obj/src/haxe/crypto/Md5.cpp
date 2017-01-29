// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_73_new,"haxe.crypto.Md5","new",0x90507feb,"haxe.crypto.Md5.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",73,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_79_bitOR,"haxe.crypto.Md5","bitOR",0xbf34737b,"haxe.crypto.Md5.bitOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",79,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_85_bitXOR,"haxe.crypto.Md5","bitXOR",0x8eb76a23,"haxe.crypto.Md5.bitXOR","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",85,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_91_bitAND,"haxe.crypto.Md5","bitAND",0x8ea5f55f,"haxe.crypto.Md5.bitAND","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",91,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_94_addme,"haxe.crypto.Md5","addme",0x2873c404,"haxe.crypto.Md5.addme","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",94,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_100_hex,"haxe.crypto.Md5","hex",0x904bf266,"haxe.crypto.Md5.hex","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",100,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_173_rol,"haxe.crypto.Md5","rol",0x9053919a,"haxe.crypto.Md5.rol","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",173,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_177_cmn,"haxe.crypto.Md5","cmn",0x90482e0f,"haxe.crypto.Md5.cmn","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",177,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_181_ff,"haxe.crypto.Md5","ff",0xde352415,"haxe.crypto.Md5.ff","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",181,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_185_gg,"haxe.crypto.Md5","gg",0xde3524f5,"haxe.crypto.Md5.gg","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",185,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_189_hh,"haxe.crypto.Md5","hh",0xde3525d5,"haxe.crypto.Md5.hh","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",189,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_193_ii,"haxe.crypto.Md5","ii",0xde3526b5,"haxe.crypto.Md5.ii","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",193,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_196_doEncode,"haxe.crypto.Md5","doEncode",0x943f9096,"haxe.crypto.Md5.doEncode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",196,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_29_encode,"haxe.crypto.Md5","encode",0x979f4b6b,"haxe.crypto.Md5.encode","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",29,0xa59e361e)
HX_DEFINE_STACK_FRAME(_hx_pos_4ede4f7f368b7211_139_str2blks,"haxe.crypto.Md5","str2blks",0x2f788968,"haxe.crypto.Md5.str2blks","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/Md5.hx",139,0xa59e361e)
namespace haxe{
namespace crypto{

void Md5_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_73_new)
            	HX_STACK_THIS(this)
            	}

Dynamic Md5_obj::__CreateEmpty() { return new Md5_obj; }

void *Md5_obj::_hx_vtable = 0;

Dynamic Md5_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Md5_obj > _hx_result = new Md5_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Md5_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x292551b3;
}

int Md5_obj::bitOR(int a,int b){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_79_bitOR)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  79)		return ((int)((int)((int)hx::UShr(a,(int)1) | (int)hx::UShr(b,(int)1)) << (int)(int)1) | (int)((int)((int)a & (int)(int)1) | (int)((int)b & (int)(int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitOR,return )

int Md5_obj::bitXOR(int a,int b){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_85_bitXOR)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  85)		return ((int)((int)((int)hx::UShr(a,(int)1) ^ (int)hx::UShr(b,(int)1)) << (int)(int)1) | (int)((int)((int)a & (int)(int)1) ^ (int)((int)b & (int)(int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitXOR,return )

int Md5_obj::bitAND(int a,int b){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_91_bitAND)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE(  91)		return ((int)((int)((int)hx::UShr(a,(int)1) & (int)hx::UShr(b,(int)1)) << (int)(int)1) | (int)((int)((int)a & (int)(int)1) & (int)((int)b & (int)(int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitAND,return )

int Md5_obj::addme(int x,int y){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_94_addme)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  95)		HX_VARI( int,lsw) = (((int)x & (int)(int)65535) + ((int)y & (int)(int)65535));
HXLINE(  97)		return ((int)((int)((((int)x >> (int)(int)16) + ((int)y >> (int)(int)16)) + ((int)lsw >> (int)(int)16)) << (int)(int)16) | (int)((int)lsw & (int)(int)65535));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,addme,return )

::String Md5_obj::hex(::Array< int > a){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_100_hex)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
HXLINE( 101)		HX_VARI( ::String,str) = HX_("",00,00,00,00);
HXLINE( 103)		{
HXLINE( 103)			HX_VARI( int,_g) = (int)0;
HXDLIN( 103)			while((_g < a->length)){
HXLINE( 103)				HX_VARI( int,num) = a->__get(_g);
HXDLIN( 103)				_g = (_g + (int)1);
HXLINE( 104)				{
HXLINE( 104)					HX_VARI( int,_g1) = (int)0;
HXDLIN( 104)					while((_g1 < (int)4)){
HXLINE( 104)						_g1 = (_g1 + (int)1);
HXDLIN( 104)						HX_VARI( int,j) = (_g1 - (int)1);
HXLINE( 105)						HX_VARI_NAME( ::String,str1,"str") = HX_("0123456789abcdef",68,7e,d5,ef).charAt(((int)((int)num >> (int)((j * (int)8) + (int)4)) & (int)(int)15));
HXDLIN( 105)						str = (str + (str1 + HX_("0123456789abcdef",68,7e,d5,ef).charAt(((int)((int)num >> (int)(j * (int)8)) & (int)(int)15))));
            					}
            				}
            			}
            		}
HXLINE( 107)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,hex,return )

int Md5_obj::rol(int num,int cnt){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_173_rol)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(num,"num")
            	HX_STACK_ARG(cnt,"cnt")
HXLINE( 173)		return ((int)((int)num << (int)cnt) | (int)hx::UShr(num,((int)32 - cnt)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,rol,return )

int Md5_obj::cmn(int q,int a,int b,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_177_cmn)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(q,"q")
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE( 177)		return this->addme(this->rol(this->addme(this->addme(a,q),this->addme(x,t)),s),b);
            	}


HX_DEFINE_DYNAMIC_FUNC6(Md5_obj,cmn,return )

int Md5_obj::ff(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_181_ff)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE( 181)		return this->cmn(this->bitOR(this->bitAND(b,c),this->bitAND(~(b),d)),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ff,return )

int Md5_obj::gg(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_185_gg)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE( 185)		return this->cmn(this->bitOR(this->bitAND(b,d),this->bitAND(c,~(d))),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,gg,return )

int Md5_obj::hh(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_189_hh)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE( 189)		return this->cmn(this->bitXOR(this->bitXOR(b,c),d),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,hh,return )

int Md5_obj::ii(int a,int b,int c,int d,int x,int s,int t){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_193_ii)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE( 193)		return this->cmn(this->bitXOR(c,this->bitOR(b,~(d))),a,b,x,s,t);
            	}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ii,return )

::Array< int > Md5_obj::doEncode(::Array< int > x){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_196_doEncode)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 198)		HX_VARI( int,a) = (int)1732584193;
HXLINE( 199)		HX_VARI( int,b) = (int)-271733879;
HXLINE( 200)		HX_VARI( int,c) = (int)-1732584194;
HXLINE( 201)		HX_VARI( int,d) = (int)271733878;
HXLINE( 205)		HX_VARI( int,i) = (int)0;
HXLINE( 206)		while((i < x->length)){
HXLINE( 207)			HX_VARI( int,olda) = a;
HXLINE( 208)			HX_VARI( int,oldb) = b;
HXLINE( 209)			HX_VARI( int,oldc) = c;
HXLINE( 210)			HX_VARI( int,oldd) = d;
HXLINE( 213)			a = this->ff(a,b,c,d,x->__get(i),(int)7,(int)-680876936);
HXLINE( 214)			d = this->ff(d,a,b,c,x->__get((i + (int)1)),(int)12,(int)-389564586);
HXLINE( 215)			c = this->ff(c,d,a,b,x->__get((i + (int)2)),(int)17,(int)606105819);
HXLINE( 216)			b = this->ff(b,c,d,a,x->__get((i + (int)3)),(int)22,(int)-1044525330);
HXLINE( 217)			a = this->ff(a,b,c,d,x->__get((i + (int)4)),(int)7,(int)-176418897);
HXLINE( 218)			d = this->ff(d,a,b,c,x->__get((i + (int)5)),(int)12,(int)1200080426);
HXLINE( 219)			c = this->ff(c,d,a,b,x->__get((i + (int)6)),(int)17,(int)-1473231341);
HXLINE( 220)			b = this->ff(b,c,d,a,x->__get((i + (int)7)),(int)22,(int)-45705983);
HXLINE( 221)			a = this->ff(a,b,c,d,x->__get((i + (int)8)),(int)7,(int)1770035416);
HXLINE( 222)			d = this->ff(d,a,b,c,x->__get((i + (int)9)),(int)12,(int)-1958414417);
HXLINE( 223)			c = this->ff(c,d,a,b,x->__get((i + (int)10)),(int)17,(int)-42063);
HXLINE( 224)			b = this->ff(b,c,d,a,x->__get((i + (int)11)),(int)22,(int)-1990404162);
HXLINE( 225)			a = this->ff(a,b,c,d,x->__get((i + (int)12)),(int)7,(int)1804603682);
HXLINE( 226)			d = this->ff(d,a,b,c,x->__get((i + (int)13)),(int)12,(int)-40341101);
HXLINE( 227)			c = this->ff(c,d,a,b,x->__get((i + (int)14)),(int)17,(int)-1502002290);
HXLINE( 228)			b = this->ff(b,c,d,a,x->__get((i + (int)15)),(int)22,(int)1236535329);
HXLINE( 229)			a = this->gg(a,b,c,d,x->__get((i + (int)1)),(int)5,(int)-165796510);
HXLINE( 230)			d = this->gg(d,a,b,c,x->__get((i + (int)6)),(int)9,(int)-1069501632);
HXLINE( 231)			c = this->gg(c,d,a,b,x->__get((i + (int)11)),(int)14,(int)643717713);
HXLINE( 232)			b = this->gg(b,c,d,a,x->__get(i),(int)20,(int)-373897302);
HXLINE( 233)			a = this->gg(a,b,c,d,x->__get((i + (int)5)),(int)5,(int)-701558691);
HXLINE( 234)			d = this->gg(d,a,b,c,x->__get((i + (int)10)),(int)9,(int)38016083);
HXLINE( 235)			c = this->gg(c,d,a,b,x->__get((i + (int)15)),(int)14,(int)-660478335);
HXLINE( 236)			b = this->gg(b,c,d,a,x->__get((i + (int)4)),(int)20,(int)-405537848);
HXLINE( 237)			a = this->gg(a,b,c,d,x->__get((i + (int)9)),(int)5,(int)568446438);
HXLINE( 238)			d = this->gg(d,a,b,c,x->__get((i + (int)14)),(int)9,(int)-1019803690);
HXLINE( 239)			c = this->gg(c,d,a,b,x->__get((i + (int)3)),(int)14,(int)-187363961);
HXLINE( 240)			b = this->gg(b,c,d,a,x->__get((i + (int)8)),(int)20,(int)1163531501);
HXLINE( 241)			a = this->gg(a,b,c,d,x->__get((i + (int)13)),(int)5,(int)-1444681467);
HXLINE( 242)			d = this->gg(d,a,b,c,x->__get((i + (int)2)),(int)9,(int)-51403784);
HXLINE( 243)			c = this->gg(c,d,a,b,x->__get((i + (int)7)),(int)14,(int)1735328473);
HXLINE( 244)			b = this->gg(b,c,d,a,x->__get((i + (int)12)),(int)20,(int)-1926607734);
HXLINE( 245)			a = this->hh(a,b,c,d,x->__get((i + (int)5)),(int)4,(int)-378558);
HXLINE( 246)			d = this->hh(d,a,b,c,x->__get((i + (int)8)),(int)11,(int)-2022574463);
HXLINE( 247)			c = this->hh(c,d,a,b,x->__get((i + (int)11)),(int)16,(int)1839030562);
HXLINE( 248)			b = this->hh(b,c,d,a,x->__get((i + (int)14)),(int)23,(int)-35309556);
HXLINE( 249)			a = this->hh(a,b,c,d,x->__get((i + (int)1)),(int)4,(int)-1530992060);
HXLINE( 250)			d = this->hh(d,a,b,c,x->__get((i + (int)4)),(int)11,(int)1272893353);
HXLINE( 251)			c = this->hh(c,d,a,b,x->__get((i + (int)7)),(int)16,(int)-155497632);
HXLINE( 252)			b = this->hh(b,c,d,a,x->__get((i + (int)10)),(int)23,(int)-1094730640);
HXLINE( 253)			a = this->hh(a,b,c,d,x->__get((i + (int)13)),(int)4,(int)681279174);
HXLINE( 254)			d = this->hh(d,a,b,c,x->__get(i),(int)11,(int)-358537222);
HXLINE( 255)			c = this->hh(c,d,a,b,x->__get((i + (int)3)),(int)16,(int)-722521979);
HXLINE( 256)			b = this->hh(b,c,d,a,x->__get((i + (int)6)),(int)23,(int)76029189);
HXLINE( 257)			a = this->hh(a,b,c,d,x->__get((i + (int)9)),(int)4,(int)-640364487);
HXLINE( 258)			d = this->hh(d,a,b,c,x->__get((i + (int)12)),(int)11,(int)-421815835);
HXLINE( 259)			c = this->hh(c,d,a,b,x->__get((i + (int)15)),(int)16,(int)530742520);
HXLINE( 260)			b = this->hh(b,c,d,a,x->__get((i + (int)2)),(int)23,(int)-995338651);
HXLINE( 261)			a = this->ii(a,b,c,d,x->__get(i),(int)6,(int)-198630844);
HXLINE( 262)			d = this->ii(d,a,b,c,x->__get((i + (int)7)),(int)10,(int)1126891415);
HXLINE( 263)			c = this->ii(c,d,a,b,x->__get((i + (int)14)),(int)15,(int)-1416354905);
HXLINE( 264)			b = this->ii(b,c,d,a,x->__get((i + (int)5)),(int)21,(int)-57434055);
HXLINE( 265)			a = this->ii(a,b,c,d,x->__get((i + (int)12)),(int)6,(int)1700485571);
HXLINE( 266)			d = this->ii(d,a,b,c,x->__get((i + (int)3)),(int)10,(int)-1894986606);
HXLINE( 267)			c = this->ii(c,d,a,b,x->__get((i + (int)10)),(int)15,(int)-1051523);
HXLINE( 268)			b = this->ii(b,c,d,a,x->__get((i + (int)1)),(int)21,(int)-2054922799);
HXLINE( 269)			a = this->ii(a,b,c,d,x->__get((i + (int)8)),(int)6,(int)1873313359);
HXLINE( 270)			d = this->ii(d,a,b,c,x->__get((i + (int)15)),(int)10,(int)-30611744);
HXLINE( 271)			c = this->ii(c,d,a,b,x->__get((i + (int)6)),(int)15,(int)-1560198380);
HXLINE( 272)			b = this->ii(b,c,d,a,x->__get((i + (int)13)),(int)21,(int)1309151649);
HXLINE( 273)			a = this->ii(a,b,c,d,x->__get((i + (int)4)),(int)6,(int)-145523070);
HXLINE( 274)			d = this->ii(d,a,b,c,x->__get((i + (int)11)),(int)10,(int)-1120210379);
HXLINE( 275)			c = this->ii(c,d,a,b,x->__get((i + (int)2)),(int)15,(int)718787259);
HXLINE( 276)			b = this->ii(b,c,d,a,x->__get((i + (int)9)),(int)21,(int)-343485551);
HXLINE( 278)			a = this->addme(a,olda);
HXLINE( 279)			b = this->addme(b,oldb);
HXLINE( 280)			c = this->addme(c,oldc);
HXLINE( 281)			d = this->addme(d,oldd);
HXLINE( 283)			i = (i + (int)16);
            		}
HXLINE( 285)		return ::Array_obj< int >::__new(4)->init(0,a)->init(1,b)->init(2,c)->init(3,d);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,doEncode,return )

::String Md5_obj::encode(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_4ede4f7f368b7211_29_encode)
            	HX_STACK_ARG(s,"s")
HXLINE(  35)		HX_VARI(  ::haxe::crypto::Md5,m) =  ::haxe::crypto::Md5_obj::__alloc( HX_CTX );
HXLINE(  37)		return m->hex(m->doEncode(::haxe::crypto::Md5_obj::str2blks(s)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,encode,return )

::Array< int > Md5_obj::str2blks(::String str){
            	HX_STACKFRAME(&_hx_pos_4ede4f7f368b7211_139_str2blks)
            	HX_STACK_ARG(str,"str")
HXLINE( 143)		HX_VARI( int,nblk) = (((int)(str.length + (int)8) >> (int)(int)6) + (int)1);
HXLINE( 144)		HX_VARI( ::Array< int >,blks) = ::Array_obj< int >::__new();
HXLINE( 149)		blks[((nblk * (int)16) - (int)1)] = (int)0;
HXLINE( 156)		HX_VARI( int,i) = (int)0;
HXLINE( 157)		HX_VARI( int,max) = str.length;
HXLINE( 158)		HX_VARI( int,l) = (max * (int)8);
HXLINE( 159)		while((i < max)){
HXLINE( 160)			int _hx_tmp = ((int)i >> (int)(int)2);
HXDLIN( 160)			int blks1 = blks->__get(_hx_tmp);
HXDLIN( 160)			blks[_hx_tmp] = ((int)blks1 | (int)((int)str.cca(i) << (int)(hx::Mod((l + i),(int)4) * (int)8)));
HXLINE( 161)			i = (i + (int)1);
            		}
HXLINE( 163)		int _hx_tmp1 = ((int)i >> (int)(int)2);
HXDLIN( 163)		blks[_hx_tmp1] = ((int)blks->__get(_hx_tmp1) | (int)((int)(int)128 << (int)(hx::Mod((l + i),(int)4) * (int)8)));
HXLINE( 164)		HX_VARI( int,k) = ((nblk * (int)16) - (int)2);
HXLINE( 165)		blks[k] = ((int)l & (int)(int)255);
HXLINE( 166)		blks[k] = ((int)blks->__get(k) | (int)((int)((int)hx::UShr(l,(int)8) & (int)(int)255) << (int)(int)8));
HXLINE( 167)		blks[k] = ((int)blks->__get(k) | (int)((int)((int)hx::UShr(l,(int)16) & (int)(int)255) << (int)(int)16));
HXLINE( 168)		blks[k] = ((int)blks->__get(k) | (int)((int)((int)hx::UShr(l,(int)24) & (int)(int)255) << (int)(int)24));
HXLINE( 169)		return blks;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,str2blks,return )


Md5_obj::Md5_obj()
{
}

hx::Val Md5_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return hx::Val( ff_dyn()); }
		if (HX_FIELD_EQ(inName,"gg") ) { return hx::Val( gg_dyn()); }
		if (HX_FIELD_EQ(inName,"hh") ) { return hx::Val( hh_dyn()); }
		if (HX_FIELD_EQ(inName,"ii") ) { return hx::Val( ii_dyn()); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hx::Val( hex_dyn()); }
		if (HX_FIELD_EQ(inName,"rol") ) { return hx::Val( rol_dyn()); }
		if (HX_FIELD_EQ(inName,"cmn") ) { return hx::Val( cmn_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOR") ) { return hx::Val( bitOR_dyn()); }
		if (HX_FIELD_EQ(inName,"addme") ) { return hx::Val( addme_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitXOR") ) { return hx::Val( bitXOR_dyn()); }
		if (HX_FIELD_EQ(inName,"bitAND") ) { return hx::Val( bitAND_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return hx::Val( doEncode_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Md5_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { outValue = str2blks_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Md5_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Md5_obj_sStaticStorageInfo = 0;
#endif

static ::String Md5_obj_sMemberFields[] = {
	HX_HCSTRING("bitOR","\x30","\x8b","\x04","\xb3"),
	HX_HCSTRING("bitXOR","\xce","\x10","\xfc","\xf0"),
	HX_HCSTRING("bitAND","\x0a","\x9c","\xea","\xf0"),
	HX_HCSTRING("addme","\xb9","\xdb","\x43","\x1c"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	HX_HCSTRING("rol","\x0f","\xe2","\x56","\x00"),
	HX_HCSTRING("cmn","\x84","\x7e","\x4b","\x00"),
	HX_HCSTRING("ff","\x40","\x59","\x00","\x00"),
	HX_HCSTRING("gg","\x20","\x5a","\x00","\x00"),
	HX_HCSTRING("hh","\x00","\x5b","\x00","\x00"),
	HX_HCSTRING("ii","\xe0","\x5b","\x00","\x00"),
	HX_HCSTRING("doEncode","\x01","\x78","\xfb","\x8d"),
	::String(null()) };

static void Md5_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Md5_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#endif

hx::Class Md5_obj::__mClass;

static ::String Md5_obj_sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("str2blks","\xd3","\x70","\x34","\x29"),
	::String(null())
};

void Md5_obj::__register()
{
	hx::Object *dummy = new Md5_obj;
	Md5_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.crypto.Md5","\x79","\xae","\xa9","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Md5_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Md5_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Md5_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Md5_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Md5_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Md5_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Md5_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Md5_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
