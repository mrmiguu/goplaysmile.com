// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif


void EReg_obj::__construct(::String r,::String opt){
            	HX_STACK_FRAME("EReg","new",0x8b859e81,"EReg.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",30,0xa4513ee9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(r,"r")
            	HX_STACK_ARG(opt,"opt")
HXLINE(  31)		HX_VARI( ::Array< ::String >,a) = opt.split(HX_("g",67,00,00,00));
HXLINE(  32)		this->global = (a->length > (int)1);
HXLINE(  33)		Bool _hx_tmp = this->global;
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  34)			opt = a->join(HX_("",00,00,00,00));
            		}
HXLINE(  35)		this->r = _hx_regexp_new_options(r,opt);
            	}

Dynamic EReg_obj::__CreateEmpty() { return new EReg_obj; }

hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt)
{
	hx::ObjectPtr< EReg_obj > _hx_result = new EReg_obj();
	_hx_result->__construct(r,opt);
	return _hx_result;
}

Dynamic EReg_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EReg_obj > _hx_result = new EReg_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

Bool EReg_obj::match(::String s){
            	HX_STACK_FRAME("EReg","match",0x18fda1a6,"EReg.match","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",38,0xa4513ee9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
HXLINE(  39)		HX_VARI( Bool,p) = _hx_regexp_match(this->r,s,(int)0,s.length);
HXLINE(  40)		if (p) {
HXLINE(  41)			this->last = s;
            		}
            		else {
HXLINE(  43)			this->last = null();
            		}
HXLINE(  44)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched(Int n){
            	HX_STACK_FRAME("EReg","matched",0x8ce62f85,"EReg.matched","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",49,0xa4513ee9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
HXLINE(  49)		return _hx_regexp_matched(this->r,n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

 ::Dynamic EReg_obj::matchedPos(){
            	HX_STACK_FRAME("EReg","matchedPos",0x7007a70f,"EReg.matchedPos","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",64,0xa4513ee9)
            	HX_STACK_THIS(this)
HXLINE(  64)		return _hx_regexp_matched_pos(this->r,(int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

Bool EReg_obj::matchSub(::String s,Int pos,hx::Null< Int >  __o_len){
Int len = __o_len.Default(-1);
            	HX_STACK_FRAME("EReg","matchSub",0xbc75cb7a,"EReg.matchSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",67,0xa4513ee9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(  68)		Int _hx_tmp;
HXDLIN(  68)		if ((len < (int)0)) {
HXLINE(  68)			_hx_tmp = (s.length - pos);
            		}
            		else {
HXLINE(  68)			_hx_tmp = len;
            		}
HXDLIN(  68)		HX_VARI( Bool,p) = _hx_regexp_match(this->r,s,pos,_hx_tmp);
HXLINE(  69)		if (p) {
HXLINE(  70)			this->last = s;
            		}
            		else {
HXLINE(  72)			this->last = null();
            		}
HXLINE(  73)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC3(EReg_obj,matchSub,return )

::String EReg_obj::replace(::String s,::String by){
            	HX_STACK_FRAME("EReg","replace",0xae923ad5,"EReg.replace","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",100,0xa4513ee9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(by,"by")
HXLINE( 101)		HX_VARI(  ::StringBuf,b) =  ::StringBuf_obj::__new();
HXLINE( 102)		HX_VARI( Int,pos) = (int)0;
HXLINE( 103)		HX_VARI( Int,len) = s.length;
HXLINE( 104)		HX_VARI( ::Array< ::String >,a) = by.split(HX_("$",24,00,00,00));
HXLINE( 105)		HX_VARI( Bool,first) = true;
HXLINE( 106)		while(_hx_regexp_match(this->r,s,pos,len)){
HXLINE( 109)			HX_VARI(  ::Dynamic,p) = _hx_regexp_matched_pos(this->r,(int)0);
HXLINE( 110)			Bool _hx_tmp;
HXDLIN( 110)			if ((( (Int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) ) == (int)0)) {
HXLINE( 110)				_hx_tmp = !(first);
            			}
            			else {
HXLINE( 110)				_hx_tmp = false;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 111)				if ((( (Int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) == s.length)) {
HXLINE( 112)					goto _hx_goto_0;
            				}
HXLINE( 113)				hx::AddEq(hx::FieldRef((p).mPtr,HX_("pos",94,5d,55,00)),(int)1);
            			}
HXLINE( 115)			{
HXLINE( 115)				 ::Dynamic len1 = (( (Int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) - pos);
HXDLIN( 115)				Bool _hx_tmp1 = hx::IsNotNull( b->charBuf );
HXDLIN( 115)				if (_hx_tmp1) {
HXLINE( 115)					b->flush();
            				}
HXDLIN( 115)				::String _hx_tmp2 = s.substr(pos,len1);
HXDLIN( 115)				b->b->push(_hx_tmp2);
            			}
HXLINE( 116)			Bool _hx_tmp3 = (a->length > (int)0);
HXDLIN( 116)			if (_hx_tmp3) {
HXLINE( 117)				Bool _hx_tmp4 = hx::IsNotNull( b->charBuf );
HXDLIN( 117)				if (_hx_tmp4) {
HXLINE( 117)					b->flush();
            				}
HXDLIN( 117)				::String _hx_tmp5 = a->__get((int)0);
HXDLIN( 117)				::String _hx_tmp6 = ::Std_obj::string(_hx_tmp5);
HXDLIN( 117)				b->b->push(_hx_tmp6);
            			}
HXLINE( 118)			HX_VARI( Int,i) = (int)1;
HXLINE( 119)			while((i < a->length)){
HXLINE( 120)				HX_VARI( ::String,k) = a->__get(i);
HXLINE( 121)				HX_VARI(  ::Dynamic,c) = k.charCodeAt((int)0);
HXLINE( 123)				Bool _hx_tmp7;
HXDLIN( 123)				if (hx::IsGreaterEq( c,(int)49 )) {
HXLINE( 123)					_hx_tmp7 = hx::IsLessEq( c,(int)57 );
            				}
            				else {
HXLINE( 123)					_hx_tmp7 = false;
            				}
HXDLIN( 123)				if (_hx_tmp7) {
HXLINE( 124)					HX_VAR_NAME(  ::Dynamic,p1,"p");
HXDLIN( 124)					try {
            						HX_STACK_CATCHABLE(::String, 0);
HXLINE( 124)						 ::Dynamic _hx_tmp8 = this->r;
HXDLIN( 124)						Int _hx_tmp9 = ::Std_obj::_hx_int(c);
HXDLIN( 124)						p1 = _hx_regexp_matched_pos(_hx_tmp8,(_hx_tmp9 - (int)48));
            					}
            					catch( ::Dynamic _hx_e){
            						if (_hx_e.IsClass< ::String >() ){
            							HX_STACK_BEGIN_CATCH
            							::String e = _hx_e;
HXLINE( 124)							p1 = null();
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
HXLINE( 125)					Bool _hx_tmp10 = hx::IsNull( p1 );
HXDLIN( 125)					if (_hx_tmp10) {
HXLINE( 126)						{
HXLINE( 126)							Bool _hx_tmp11 = hx::IsNotNull( b->charBuf );
HXDLIN( 126)							if (_hx_tmp11) {
HXLINE( 126)								b->flush();
            							}
HXDLIN( 126)							b->b->push(HX_("$",24,00,00,00));
            						}
HXLINE( 127)						{
HXLINE( 127)							Bool _hx_tmp12 = hx::IsNotNull( b->charBuf );
HXDLIN( 127)							if (_hx_tmp12) {
HXLINE( 127)								b->flush();
            							}
HXDLIN( 127)							::String _hx_tmp13 = ::Std_obj::string(k);
HXDLIN( 127)							b->b->push(_hx_tmp13);
            						}
            					}
            					else {
HXLINE( 129)						{
HXLINE( 129)							Int pos1 = ( (Int)(p1->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) );
HXDLIN( 129)							 ::Dynamic len2 = p1->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic);
HXDLIN( 129)							Bool _hx_tmp14 = hx::IsNotNull( b->charBuf );
HXDLIN( 129)							if (_hx_tmp14) {
HXLINE( 129)								b->flush();
            							}
HXDLIN( 129)							::String _hx_tmp15 = s.substr(pos1,len2);
HXDLIN( 129)							b->b->push(_hx_tmp15);
            						}
HXLINE( 130)						{
HXLINE( 130)							 ::Dynamic len3 = (k.length - (int)1);
HXDLIN( 130)							Bool _hx_tmp16 = hx::IsNotNull( b->charBuf );
HXDLIN( 130)							if (_hx_tmp16) {
HXLINE( 130)								b->flush();
            							}
HXDLIN( 130)							::String _hx_tmp17 = k.substr((int)1,len3);
HXDLIN( 130)							b->b->push(_hx_tmp17);
            						}
            					}
            				}
            				else {
HXLINE( 132)					Bool _hx_tmp18 = hx::IsNull( c );
HXDLIN( 132)					if (_hx_tmp18) {
HXLINE( 133)						{
HXLINE( 133)							Bool _hx_tmp19 = hx::IsNotNull( b->charBuf );
HXDLIN( 133)							if (_hx_tmp19) {
HXLINE( 133)								b->flush();
            							}
HXDLIN( 133)							b->b->push(HX_("$",24,00,00,00));
            						}
HXLINE( 134)						++i;
HXLINE( 135)						HX_VARI( ::String,k2) = a->__get(i);
HXLINE( 136)						Bool _hx_tmp20;
HXDLIN( 136)						Bool _hx_tmp21 = hx::IsNotNull( k2 );
HXDLIN( 136)						if (_hx_tmp21) {
HXLINE( 136)							_hx_tmp20 = (k2.length > (int)0);
            						}
            						else {
HXLINE( 136)							_hx_tmp20 = false;
            						}
HXDLIN( 136)						if (_hx_tmp20) {
HXLINE( 137)							Bool _hx_tmp22 = hx::IsNotNull( b->charBuf );
HXDLIN( 137)							if (_hx_tmp22) {
HXLINE( 137)								b->flush();
            							}
HXDLIN( 137)							::String _hx_tmp23 = ::Std_obj::string(k2);
HXDLIN( 137)							b->b->push(_hx_tmp23);
            						}
            					}
            					else {
HXLINE( 139)						Bool _hx_tmp24 = hx::IsNotNull( b->charBuf );
HXDLIN( 139)						if (_hx_tmp24) {
HXLINE( 139)							b->flush();
            						}
HXDLIN( 139)						::String _hx_tmp25 = ::Std_obj::string((HX_("$",24,00,00,00) + k));
HXDLIN( 139)						b->b->push(_hx_tmp25);
            					}
            				}
HXLINE( 140)				++i;
            			}
HXLINE( 142)			HX_VARI( Int,tot) = ((( (Int)(p->__Field(HX_("pos",94,5d,55,00),hx::paccDynamic)) ) + ( (Int)(p->__Field(HX_("len",d5,4b,52,00),hx::paccDynamic)) )) - pos);
HXLINE( 143)			hx::AddEq(pos,tot);
HXLINE( 144)			hx::SubEq(len,tot);
HXLINE( 145)			first = false;
HXLINE( 106)			if (!(this->global)) {
HXLINE( 106)				goto _hx_goto_0;
            			}
            		}
            		_hx_goto_0:;
HXLINE( 147)		{
HXLINE( 147)			Bool _hx_tmp26 = hx::IsNotNull( b->charBuf );
HXDLIN( 147)			if (_hx_tmp26) {
HXLINE( 147)				b->flush();
            			}
HXDLIN( 147)			::String _hx_tmp27 = s.substr(pos,len);
HXDLIN( 147)			b->b->push(_hx_tmp27);
            		}
HXLINE( 148)		Bool _hx_tmp28 = hx::IsNotNull( b->charBuf );
HXDLIN( 148)		if (_hx_tmp28) {
HXLINE( 148)			b->flush();
            		}
HXDLIN( 148)		return b->b->join(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )


EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

hx::Val EReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return hx::Val( last); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return hx::Val( match_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return hx::Val( global); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return hx::Val( matched_dyn()); }
		if (HX_FIELD_EQ(inName,"replace") ) { return hx::Val( replace_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matchSub") ) { return hx::Val( matchSub_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchedPos") ) { return hx::Val( matchedPos_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EReg_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("last","\x56","\x0a","\xad","\x47"));
	outFields->push(HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EReg_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EReg_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(EReg_obj,last),HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsBool,(int)offsetof(EReg_obj,global),HX_HCSTRING("global","\x63","\x31","\xb2","\xa7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EReg_obj_sStaticStorageInfo = 0;
#endif

static ::String EReg_obj_sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("global","\x63","\x31","\xb2","\xa7"),
	HX_HCSTRING("match","\x45","\x49","\x23","\x03"),
	HX_HCSTRING("matched","\xe4","\x3c","\x7c","\x89"),
	HX_HCSTRING("matchedPos","\x10","\xff","\xc2","\xcb"),
	HX_HCSTRING("matchSub","\x3b","\x71","\x2b","\xc3"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	::String(null()) };

static void EReg_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EReg_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EReg_obj::__mClass,"__mClass");
};

#endif

hx::Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("EReg","\x0f","\x4a","\xda","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EReg_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EReg_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EReg_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EReg_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EReg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EReg_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

