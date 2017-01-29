// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_dom_DOMMaskManager
#include <openfl/_internal/renderer/dom/DOMMaskManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_24_new,"openfl._internal.renderer.dom.DOMMaskManager","new",0x8d658c18,"openfl._internal.renderer.dom.DOMMaskManager.new","openfl/_internal/renderer/dom/DOMMaskManager.hx",24,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_38_pushMask,"openfl._internal.renderer.dom.DOMMaskManager","pushMask",0xdaba3d2e,"openfl._internal.renderer.dom.DOMMaskManager.pushMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",38,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_43_pushObject,"openfl._internal.renderer.dom.DOMMaskManager","pushObject",0x05cc8f81,"openfl._internal.renderer.dom.DOMMaskManager.pushObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",43,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_60_pushRect,"openfl._internal.renderer.dom.DOMMaskManager","pushRect",0xde0b4966,"openfl._internal.renderer.dom.DOMMaskManager.pushRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",60,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_100_popMask,"openfl._internal.renderer.dom.DOMMaskManager","popMask",0x0cd75ed5,"openfl._internal.renderer.dom.DOMMaskManager.popMask","openfl/_internal/renderer/dom/DOMMaskManager.hx",100,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_105_popObject,"openfl._internal.renderer.dom.DOMMaskManager","popObject",0xd2b2a8e8,"openfl._internal.renderer.dom.DOMMaskManager.popObject","openfl/_internal/renderer/dom/DOMMaskManager.hx",105,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_124_popRect,"openfl._internal.renderer.dom.DOMMaskManager","popRect",0x10286b0d,"openfl._internal.renderer.dom.DOMMaskManager.popRect","openfl/_internal/renderer/dom/DOMMaskManager.hx",124,0x08bbb658)
HX_DEFINE_STACK_FRAME(_hx_pos_42992df8af89a683_145_updateClip,"openfl._internal.renderer.dom.DOMMaskManager","updateClip",0x972504c1,"openfl._internal.renderer.dom.DOMMaskManager.updateClip","openfl/_internal/renderer/dom/DOMMaskManager.hx",145,0x08bbb658)
namespace openfl{
namespace _internal{
namespace renderer{
namespace dom{

void DOMMaskManager_obj::__construct( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_24_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  26)		super::__construct(renderSession);
HXLINE(  28)		this->clipRects = ::Array_obj< ::Dynamic>::__new();
HXLINE(  29)		this->numClipRects = (int)0;
            	}

Dynamic DOMMaskManager_obj::__CreateEmpty() { return new DOMMaskManager_obj; }

void *DOMMaskManager_obj::_hx_vtable = 0;

Dynamic DOMMaskManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DOMMaskManager_obj > _hx_result = new DOMMaskManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DOMMaskManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02b763fc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02b763fc;
	} else {
		return inClassId==(int)0x02dbba02;
	}
}

void DOMMaskManager_obj::pushMask( ::openfl::display::DisplayObject mask){
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_38_pushMask)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(mask,"mask")
HXLINE(  38)		 ::openfl::geom::Rectangle _hx_tmp = mask->getBounds(mask);
HXDLIN(  38)		this->pushRect(_hx_tmp,mask->_hx___getRenderTransform());
            	}


void DOMMaskManager_obj::pushObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_43_pushObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (handleScrollRect) {
HXLINE(  45)			_hx_tmp = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			this->pushRect(object->_hx___scrollRect,object->_hx___renderTransform);
            		}
HXLINE(  51)		if (hx::IsNotNull( object->_hx___mask )) {
HXLINE(  53)			this->pushMask(object->_hx___mask);
            		}
            	}


void DOMMaskManager_obj::pushRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_42992df8af89a683_60_pushRect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rect,"rect")
            	HX_STACK_ARG(transform,"transform")
HXLINE(  64)		if ((this->numClipRects == this->clipRects->length)) {
HXLINE(  66)			this->clipRects[this->numClipRects] =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE(  70)		HX_VARI(  ::openfl::geom::Rectangle,clipRect) = this->clipRects->__get(this->numClipRects).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  71)		rect->_hx___transform(clipRect,transform);
HXLINE(  73)		if ((this->numClipRects > (int)0)) {
HXLINE(  75)			HX_VARI(  ::openfl::geom::Rectangle,parentClipRect) = this->clipRects->__get((this->numClipRects - (int)1)).StaticCast<  ::openfl::geom::Rectangle >();
HXLINE(  76)			clipRect->_hx___contract(parentClipRect->x,parentClipRect->y,parentClipRect->width,parentClipRect->height);
            		}
HXLINE(  80)		if ((clipRect->height < (int)0)) {
HXLINE(  82)			clipRect->height = (int)0;
            		}
HXLINE(  86)		if ((clipRect->width < (int)0)) {
HXLINE(  88)			clipRect->width = (int)0;
            		}
HXLINE(  92)		this->currentClipRect = clipRect;
HXLINE(  93)		this->numClipRects++;
            	}


void DOMMaskManager_obj::popMask(){
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_100_popMask)
            	HX_STACK_THIS(this)
HXLINE( 100)		this->popRect();
            	}


void DOMMaskManager_obj::popObject( ::openfl::display::DisplayObject object,hx::Null< bool >  __o_handleScrollRect){
bool handleScrollRect = __o_handleScrollRect.Default(true);
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_105_popObject)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(object,"object")
            	HX_STACK_ARG(handleScrollRect,"handleScrollRect")
HXLINE( 107)		if (hx::IsNotNull( object->_hx___mask )) {
HXLINE( 109)			this->popMask();
            		}
HXLINE( 113)		bool _hx_tmp;
HXDLIN( 113)		if (handleScrollRect) {
HXLINE( 113)			_hx_tmp = hx::IsNotNull( object->_hx___scrollRect );
            		}
            		else {
HXLINE( 113)			_hx_tmp = false;
            		}
HXDLIN( 113)		if (_hx_tmp) {
HXLINE( 115)			this->popRect();
            		}
            	}


void DOMMaskManager_obj::popRect(){
            	HX_STACKFRAME(&_hx_pos_42992df8af89a683_124_popRect)
            	HX_STACK_THIS(this)
HXLINE( 124)		if ((this->numClipRects > (int)0)) {
HXLINE( 126)			this->numClipRects--;
HXLINE( 128)			if ((this->numClipRects > (int)0)) {
HXLINE( 130)				this->currentClipRect = this->clipRects->__get((this->numClipRects - (int)1)).StaticCast<  ::openfl::geom::Rectangle >();
            			}
            			else {
HXLINE( 134)				this->currentClipRect = null();
            			}
            		}
            	}


void DOMMaskManager_obj::updateClip( ::openfl::display::DisplayObject displayObject){
            	HX_GC_STACKFRAME(&_hx_pos_42992df8af89a683_145_updateClip)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(displayObject,"displayObject")
HXLINE( 145)		if (hx::IsNull( this->currentClipRect )) {
HXLINE( 147)			displayObject->_hx___worldClipChanged = hx::IsNotNull( displayObject->_hx___worldClip );
HXLINE( 148)			displayObject->_hx___worldClip = null();
            		}
            		else {
HXLINE( 152)			if (hx::IsNull( displayObject->_hx___worldClip )) {
HXLINE( 154)				displayObject->_hx___worldClip =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE( 158)			HX_VARI(  ::openfl::geom::Rectangle,clip) = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE( 159)			HX_VARI(  ::openfl::geom::Matrix,matrix) = ::openfl::geom::Matrix_obj::_hx___temp;
HXLINE( 161)			matrix->copyFrom(displayObject->_hx___renderTransform);
HXLINE( 162)			matrix->invert();
HXLINE( 164)			this->currentClipRect->_hx___transform(clip,matrix);
HXLINE( 166)			if (clip->equals(displayObject->_hx___worldClip)) {
HXLINE( 168)				displayObject->_hx___worldClipChanged = false;
            			}
            			else {
HXLINE( 172)				displayObject->_hx___worldClip->copyFrom(clip);
HXLINE( 173)				displayObject->_hx___worldClipChanged = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DOMMaskManager_obj,updateClip,(void))


hx::ObjectPtr< DOMMaskManager_obj > DOMMaskManager_obj::__new( ::openfl::_internal::renderer::RenderSession renderSession) {
	hx::ObjectPtr< DOMMaskManager_obj > __this = new DOMMaskManager_obj();
	__this->__construct(renderSession);
	return __this;
}

hx::ObjectPtr< DOMMaskManager_obj > DOMMaskManager_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_internal::renderer::RenderSession renderSession) {
	DOMMaskManager_obj *__this = (DOMMaskManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DOMMaskManager_obj), true, "openfl._internal.renderer.dom.DOMMaskManager"));
	*(void **)__this = DOMMaskManager_obj::_hx_vtable;
	__this->__construct(renderSession);
	return __this;
}

DOMMaskManager_obj::DOMMaskManager_obj()
{
}

void DOMMaskManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DOMMaskManager);
	HX_MARK_MEMBER_NAME(currentClipRect,"currentClipRect");
	HX_MARK_MEMBER_NAME(clipRects,"clipRects");
	HX_MARK_MEMBER_NAME(numClipRects,"numClipRects");
	 ::openfl::_internal::renderer::AbstractMaskManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DOMMaskManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentClipRect,"currentClipRect");
	HX_VISIT_MEMBER_NAME(clipRects,"clipRects");
	HX_VISIT_MEMBER_NAME(numClipRects,"numClipRects");
	 ::openfl::_internal::renderer::AbstractMaskManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DOMMaskManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"popMask") ) { return hx::Val( popMask_dyn()); }
		if (HX_FIELD_EQ(inName,"popRect") ) { return hx::Val( popRect_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pushMask") ) { return hx::Val( pushMask_dyn()); }
		if (HX_FIELD_EQ(inName,"pushRect") ) { return hx::Val( pushRect_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { return hx::Val( clipRects); }
		if (HX_FIELD_EQ(inName,"popObject") ) { return hx::Val( popObject_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pushObject") ) { return hx::Val( pushObject_dyn()); }
		if (HX_FIELD_EQ(inName,"updateClip") ) { return hx::Val( updateClip_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { return hx::Val( numClipRects); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentClipRect") ) { return hx::Val( currentClipRect); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DOMMaskManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"clipRects") ) { clipRects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"numClipRects") ) { numClipRects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentClipRect") ) { currentClipRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DOMMaskManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c"));
	outFields->push(HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"));
	outFields->push(HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DOMMaskManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(DOMMaskManager_obj,currentClipRect),HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DOMMaskManager_obj,clipRects),HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04")},
	{hx::fsInt,(int)offsetof(DOMMaskManager_obj,numClipRects),HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DOMMaskManager_obj_sStaticStorageInfo = 0;
#endif

static ::String DOMMaskManager_obj_sMemberFields[] = {
	HX_HCSTRING("currentClipRect","\x6d","\x49","\xbc","\x2c"),
	HX_HCSTRING("clipRects","\xdf","\x81","\xd3","\x04"),
	HX_HCSTRING("numClipRects","\xb9","\x8a","\x43","\xac"),
	HX_HCSTRING("pushMask","\xe6","\x73","\x47","\x17"),
	HX_HCSTRING("pushObject","\x39","\xe4","\x1e","\x69"),
	HX_HCSTRING("pushRect","\x1e","\x80","\x98","\x1a"),
	HX_HCSTRING("popMask","\x1d","\x67","\x11","\x43"),
	HX_HCSTRING("popObject","\x30","\x53","\xb5","\x91"),
	HX_HCSTRING("popRect","\x55","\x73","\x62","\x46"),
	HX_HCSTRING("updateClip","\x79","\x59","\x77","\xfa"),
	::String(null()) };

static void DOMMaskManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DOMMaskManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DOMMaskManager_obj::__mClass,"__mClass");
};

#endif

hx::Class DOMMaskManager_obj::__mClass;

void DOMMaskManager_obj::__register()
{
	hx::Object *dummy = new DOMMaskManager_obj;
	DOMMaskManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.dom.DOMMaskManager","\x26","\xe0","\xff","\x5f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DOMMaskManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DOMMaskManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DOMMaskManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DOMMaskManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMMaskManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMMaskManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace dom
