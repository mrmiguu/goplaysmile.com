// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c5f39c48023aa9de_27_new,"openfl.text.TextFormat","new",0xfdb2c999,"openfl.text.TextFormat.new","openfl/text/TextFormat.hx",27,0xd3329397)
HX_DEFINE_STACK_FRAME(_hx_pos_c5f39c48023aa9de_46_clone,"openfl.text.TextFormat","clone",0x965d8cd6,"openfl.text.TextFormat.clone","openfl/text/TextFormat.hx",46,0xd3329397)
HX_DEFINE_STACK_FRAME(_hx_pos_c5f39c48023aa9de_67___merge,"openfl.text.TextFormat","__merge",0x0ccb8551,"openfl.text.TextFormat.__merge","openfl/text/TextFormat.hx",67,0xd3329397)
namespace openfl{
namespace text{

void TextFormat_obj::__construct(::String font, ::Dynamic size, ::Dynamic color, ::Dynamic bold, ::Dynamic italic, ::Dynamic underline,::String url,::String target, ::Dynamic align, ::Dynamic leftMargin, ::Dynamic rightMargin, ::Dynamic indent, ::Dynamic leading){
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_27_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(font,"font")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(color,"color")
            	HX_STACK_ARG(bold,"bold")
            	HX_STACK_ARG(italic,"italic")
            	HX_STACK_ARG(underline,"underline")
            	HX_STACK_ARG(url,"url")
            	HX_STACK_ARG(target,"target")
            	HX_STACK_ARG(align,"align")
            	HX_STACK_ARG(leftMargin,"leftMargin")
            	HX_STACK_ARG(rightMargin,"rightMargin")
            	HX_STACK_ARG(indent,"indent")
            	HX_STACK_ARG(leading,"leading")
HXLINE(  29)		this->font = font;
HXLINE(  30)		this->size = size;
HXLINE(  31)		this->color = color;
HXLINE(  32)		this->bold = bold;
HXLINE(  33)		this->italic = italic;
HXLINE(  34)		this->underline = underline;
HXLINE(  35)		this->url = url;
HXLINE(  36)		this->target = target;
HXLINE(  37)		this->align = align;
HXLINE(  38)		this->leftMargin = leftMargin;
HXLINE(  39)		this->rightMargin = rightMargin;
HXLINE(  40)		this->indent = indent;
HXLINE(  41)		this->leading = leading;
            	}

Dynamic TextFormat_obj::__CreateEmpty() { return new TextFormat_obj; }

void *TextFormat_obj::_hx_vtable = 0;

Dynamic TextFormat_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFormat_obj > _hx_result = new TextFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12]);
	return _hx_result;
}

bool TextFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08d025e9;
}

 ::openfl::text::TextFormat TextFormat_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c5f39c48023aa9de_46_clone)
            	HX_STACK_THIS(this)
HXLINE(  48)		HX_VARI(  ::openfl::text::TextFormat,newFormat) =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,this->font,this->size,this->color,this->bold,this->italic,this->underline,this->url,this->target,null(),null(),null(),null(),null());
HXLINE(  50)		newFormat->align = this->align;
HXLINE(  51)		newFormat->leftMargin = this->leftMargin;
HXLINE(  52)		newFormat->rightMargin = this->rightMargin;
HXLINE(  53)		newFormat->indent = this->indent;
HXLINE(  54)		newFormat->leading = this->leading;
HXLINE(  56)		newFormat->blockIndent = this->blockIndent;
HXLINE(  57)		newFormat->bullet = this->bullet;
HXLINE(  58)		newFormat->kerning = this->kerning;
HXLINE(  59)		newFormat->letterSpacing = this->letterSpacing;
HXLINE(  60)		newFormat->tabStops = this->tabStops;
HXLINE(  62)		return newFormat;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextFormat_obj,clone,return )

void TextFormat_obj::_hx___merge( ::openfl::text::TextFormat format){
            	HX_STACKFRAME(&_hx_pos_c5f39c48023aa9de_67___merge)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(format,"format")
HXLINE(  69)		if (hx::IsNotNull( format->font )) {
HXLINE(  69)			this->font = format->font;
            		}
HXLINE(  70)		if (hx::IsNotNull( format->size )) {
HXLINE(  70)			this->size = format->size;
            		}
HXLINE(  71)		if (hx::IsNotNull( format->color )) {
HXLINE(  71)			this->color = format->color;
            		}
HXLINE(  72)		if (hx::IsNotNull( format->bold )) {
HXLINE(  72)			this->bold = format->bold;
            		}
HXLINE(  73)		if (hx::IsNotNull( format->italic )) {
HXLINE(  73)			this->italic = format->italic;
            		}
HXLINE(  74)		if (hx::IsNotNull( format->underline )) {
HXLINE(  74)			this->underline = format->underline;
            		}
HXLINE(  75)		if (hx::IsNotNull( format->url )) {
HXLINE(  75)			this->url = format->url;
            		}
HXLINE(  76)		if (hx::IsNotNull( format->target )) {
HXLINE(  76)			this->target = format->target;
            		}
HXLINE(  77)		if (hx::IsNotNull( format->align )) {
HXLINE(  77)			this->align = format->align;
            		}
HXLINE(  78)		if (hx::IsNotNull( format->leftMargin )) {
HXLINE(  78)			this->leftMargin = format->leftMargin;
            		}
HXLINE(  79)		if (hx::IsNotNull( format->rightMargin )) {
HXLINE(  79)			this->rightMargin = format->rightMargin;
            		}
HXLINE(  80)		if (hx::IsNotNull( format->indent )) {
HXLINE(  80)			this->indent = format->indent;
            		}
HXLINE(  81)		if (hx::IsNotNull( format->leading )) {
HXLINE(  81)			this->leading = format->leading;
            		}
HXLINE(  82)		if (hx::IsNotNull( format->blockIndent )) {
HXLINE(  82)			this->blockIndent = format->blockIndent;
            		}
HXLINE(  83)		if (hx::IsNotNull( format->bullet )) {
HXLINE(  83)			this->bullet = format->bullet;
            		}
HXLINE(  84)		if (hx::IsNotNull( format->kerning )) {
HXLINE(  84)			this->kerning = format->kerning;
            		}
HXLINE(  85)		if (hx::IsNotNull( format->letterSpacing )) {
HXLINE(  85)			this->letterSpacing = format->letterSpacing;
            		}
HXLINE(  86)		if (hx::IsNotNull( format->tabStops )) {
HXLINE(  86)			this->tabStops = format->tabStops;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextFormat_obj,_hx___merge,(void))


TextFormat_obj::TextFormat_obj()
{
}

void TextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextFormat);
	HX_MARK_MEMBER_NAME(align,"align");
	HX_MARK_MEMBER_NAME(blockIndent,"blockIndent");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(bullet,"bullet");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(italic,"italic");
	HX_MARK_MEMBER_NAME(kerning,"kerning");
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(leftMargin,"leftMargin");
	HX_MARK_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_MARK_MEMBER_NAME(rightMargin,"rightMargin");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(tabStops,"tabStops");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(underline,"underline");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void TextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(align,"align");
	HX_VISIT_MEMBER_NAME(blockIndent,"blockIndent");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(bullet,"bullet");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(italic,"italic");
	HX_VISIT_MEMBER_NAME(kerning,"kerning");
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(leftMargin,"leftMargin");
	HX_VISIT_MEMBER_NAME(letterSpacing,"letterSpacing");
	HX_VISIT_MEMBER_NAME(rightMargin,"rightMargin");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(tabStops,"tabStops");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(underline,"underline");
	HX_VISIT_MEMBER_NAME(url,"url");
}

hx::Val TextFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { return hx::Val( bold); }
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { return hx::Val( align); }
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { return hx::Val( bullet); }
		if (HX_FIELD_EQ(inName,"indent") ) { return hx::Val( indent); }
		if (HX_FIELD_EQ(inName,"italic") ) { return hx::Val( italic); }
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { return hx::Val( kerning); }
		if (HX_FIELD_EQ(inName,"leading") ) { return hx::Val( leading); }
		if (HX_FIELD_EQ(inName,"__merge") ) { return hx::Val( _hx___merge_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { return hx::Val( tabStops); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { return hx::Val( underline); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { return hx::Val( leftMargin); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { return hx::Val( blockIndent); }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { return hx::Val( rightMargin); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { return hx::Val( letterSpacing); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextFormat_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { align=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bullet") ) { bullet=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"italic") ) { italic=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kerning") ) { kerning=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tabStops") ) { tabStops=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"underline") ) { underline=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftMargin") ) { leftMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blockIndent") ) { blockIndent=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightMargin") ) { rightMargin=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"letterSpacing") ) { letterSpacing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33"));
	outFields->push(HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"));
	outFields->push(HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"));
	outFields->push(HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"));
	outFields->push(HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	outFields->push(HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"));
	outFields->push(HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"));
	outFields->push(HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2"));
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextFormat_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,align),HX_HCSTRING("align","\xc5","\x56","\x91","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,blockIndent),HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bold),HX_HCSTRING("bold","\x85","\x81","\x1b","\x41")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,bullet),HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsString,(int)offsetof(TextFormat_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,indent),HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,italic),HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,kerning),HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,leftMargin),HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,letterSpacing),HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,rightMargin),HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextFormat_obj,tabStops),HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2")},
	{hx::fsString,(int)offsetof(TextFormat_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextFormat_obj,underline),HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87")},
	{hx::fsString,(int)offsetof(TextFormat_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String TextFormat_obj_sMemberFields[] = {
	HX_HCSTRING("align","\xc5","\x56","\x91","\x21"),
	HX_HCSTRING("blockIndent","\x99","\x6d","\xbe","\x33"),
	HX_HCSTRING("bold","\x85","\x81","\x1b","\x41"),
	HX_HCSTRING("bullet","\x42","\x92","\x90","\xd4"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"),
	HX_HCSTRING("italic","\xf0","\x2e","\x64","\x06"),
	HX_HCSTRING("kerning","\xcc","\xba","\x37","\xb0"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	HX_HCSTRING("leftMargin","\x95","\x2b","\x7e","\xe9"),
	HX_HCSTRING("letterSpacing","\x3d","\xb7","\x03","\xf5"),
	HX_HCSTRING("rightMargin","\x2a","\x3d","\xf2","\x23"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("tabStops","\x9c","\x93","\xba","\xf2"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("underline","\x0c","\x15","\xd1","\x87"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__merge","\x98","\xfb","\x24","\x70"),
	::String(null()) };

static void TextFormat_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFormat_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormat_obj::__mClass,"__mClass");
};

#endif

hx::Class TextFormat_obj::__mClass;

void TextFormat_obj::__register()
{
	hx::Object *dummy = new TextFormat_obj;
	TextFormat_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text.TextFormat","\x27","\x09","\x1e","\x68");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFormat_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextFormat_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextFormat_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFormat_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormat_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace text
