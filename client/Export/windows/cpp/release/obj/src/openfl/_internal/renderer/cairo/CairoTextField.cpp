// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontOptions_CairoFontOptions_Impl_
#include <lime/graphics/cairo/_CairoFontOptions/CairoFontOptions_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoTextField
#include <openfl/_internal/renderer/cairo/CairoTextField.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextEngine
#include <openfl/_internal/text/TextEngine.h>
#endif
#ifndef INCLUDED_openfl__internal_text_TextLayoutGroup
#include <openfl/_internal/text/TextLayoutGroup.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0e9241bd5d873906_29_render,"openfl._internal.renderer.cairo.CairoTextField","render",0xabb9797e,"openfl._internal.renderer.cairo.CairoTextField.render","openfl/_internal/renderer/cairo/CairoTextField.hx",29,0xfadfb778)
namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{

void CairoTextField_obj::__construct() { }

Dynamic CairoTextField_obj::__CreateEmpty() { return new CairoTextField_obj; }

void *CairoTextField_obj::_hx_vtable = 0;

Dynamic CairoTextField_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoTextField_obj > _hx_result = new CairoTextField_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoTextField_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76dbe9c2;
}

void CairoTextField_obj::render( ::openfl::text::TextField textField, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::geom::Matrix transform){
            	HX_GC_STACKFRAME(&_hx_pos_0e9241bd5d873906_29_render)
HXLINE(  33)		 ::openfl::_internal::text::TextEngine textEngine = textField->_hx___textEngine;
HXLINE(  34)		 ::openfl::geom::Rectangle bounds = textEngine->bounds;
HXLINE(  35)		 ::openfl::display::Graphics graphics = textField->_hx___graphics;
HXLINE(  36)		 ::lime::graphics::cairo::Cairo cairo = graphics->_hx___cairo;
HXLINE(  38)		if (textField->_hx___dirty) {
HXLINE(  40)			textField->_hx___updateLayout();
HXLINE(  42)			if (hx::IsNull( graphics->_hx___bounds )) {
HXLINE(  44)				graphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXLINE(  48)			graphics->_hx___bounds->copyFrom(bounds);
            		}
HXLINE(  55)		graphics->_hx___update();
HXLINE(  57)		int width = graphics->_hx___width;
HXLINE(  58)		int height = graphics->_hx___height;
HXLINE(  60)		bool renderable;
HXDLIN(  60)		bool renderable1;
HXDLIN(  60)		if (!(textEngine->border)) {
HXLINE(  60)			renderable1 = textEngine->background;
            		}
            		else {
HXLINE(  60)			renderable1 = true;
            		}
HXDLIN(  60)		if (!(renderable1)) {
HXLINE(  60)			if (hx::IsNotNull( textEngine->text )) {
HXLINE(  60)				renderable = (textEngine->text != HX_("",00,00,00,00));
            			}
            			else {
HXLINE(  60)				renderable = false;
            			}
            		}
            		else {
HXLINE(  60)			renderable = true;
            		}
HXLINE(  62)		if (hx::IsNotNull( cairo )) {
HXLINE(  64)			 ::Dynamic surface = cairo->get_target();
HXLINE(  66)			bool _hx_tmp;
HXDLIN(  66)			if (!(!(renderable))) {
HXLINE(  66)				if (graphics->_hx___dirty) {
HXLINE(  66)					if ((width == ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_width(surface))) {
HXLINE(  66)						_hx_tmp = (height != ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::get_height(surface));
            					}
            					else {
HXLINE(  66)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  66)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE(  66)				_hx_tmp = true;
            			}
HXDLIN(  66)			if (_hx_tmp) {
HXLINE(  68)				graphics->_hx___cairo = null();
HXLINE(  69)				graphics->_hx___bitmap = null();
HXLINE(  70)				graphics->_hx___visible = false;
HXLINE(  71)				cairo = null();
            			}
            		}
HXLINE(  77)		bool _hx_tmp1;
HXDLIN(  77)		bool _hx_tmp2;
HXDLIN(  77)		bool _hx_tmp3;
HXDLIN(  77)		if ((width > (int)0)) {
HXLINE(  77)			_hx_tmp3 = (height <= (int)0);
            		}
            		else {
HXLINE(  77)			_hx_tmp3 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp3)) {
HXLINE(  77)			if (!(textField->_hx___dirty)) {
HXLINE(  77)				_hx_tmp2 = !(graphics->_hx___dirty);
            			}
            			else {
HXLINE(  77)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = true;
            		}
HXDLIN(  77)		if (!(_hx_tmp2)) {
HXLINE(  77)			_hx_tmp1 = !(renderable);
            		}
            		else {
HXLINE(  77)			_hx_tmp1 = true;
            		}
HXDLIN(  77)		if (_hx_tmp1) {
HXLINE(  79)			textField->_hx___dirty = false;
HXLINE(  80)			return;
            		}
HXLINE(  84)		if (hx::IsNull( cairo )) {
HXLINE(  86)			 ::openfl::display::BitmapData bitmap =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,width,height,true,(int)0);
HXLINE(  87)			 ::Dynamic surface1 = bitmap->getSurface();
HXLINE(  88)			graphics->_hx___cairo =  ::lime::graphics::cairo::Cairo_obj::__alloc( HX_CTX ,surface1);
HXLINE(  89)			graphics->_hx___visible = true;
HXLINE(  90)			graphics->_hx___managed = true;
HXLINE(  92)			graphics->_hx___bitmap = bitmap;
HXLINE(  94)			cairo = graphics->_hx___cairo;
HXLINE(  96)			 ::Dynamic options = ::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::_new();
HXLINE(  98)			bool _hx_tmp4;
HXDLIN(  98)			if (hx::IsEq( textEngine->antiAliasType,(int)0 )) {
HXLINE(  98)				_hx_tmp4 = (textEngine->sharpness == (int)400);
            			}
            			else {
HXLINE(  98)				_hx_tmp4 = false;
            			}
HXDLIN(  98)			if (_hx_tmp4) {
HXLINE( 100)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,(int)1);
HXLINE( 101)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,(int)1);
HXLINE( 102)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,(int)1);
            			}
            			else {
HXLINE( 106)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintStyle(options,(int)2);
HXLINE( 107)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_hintMetrics(options,(int)1);
HXLINE( 108)				::lime::graphics::cairo::_CairoFontOptions::CairoFontOptions_Impl__obj::set_antialias(options,(int)5);
            			}
HXLINE( 112)			cairo->set_fontOptions(options);
            		}
HXLINE( 116)		if (renderSession->roundPixels) {
HXLINE( 118)			 ::lime::math::Matrix3 matrix = graphics->_hx___renderTransform->_hx___toMatrix3();
HXLINE( 119)			matrix->tx = ::Math_obj::round(matrix->tx);
HXLINE( 120)			matrix->ty = ::Math_obj::round(matrix->ty);
HXLINE( 121)			cairo->set_matrix(matrix);
            		}
            		else {
HXLINE( 125)			cairo->set_matrix(graphics->_hx___renderTransform->_hx___toMatrix3());
            		}
HXLINE( 129)		if (textEngine->border) {
HXLINE( 131)			int _hx_tmp5 = ::Std_obj::_hx_int((bounds->width - (int)1));
HXDLIN( 131)			cairo->rectangle(((Float)0.5),((Float)0.5),_hx_tmp5,::Std_obj::_hx_int((bounds->height - (int)1)));
            		}
            		else {
HXLINE( 135)			cairo->rectangle((int)0,(int)0,bounds->width,bounds->height);
            		}
HXLINE( 139)		if (!(textEngine->background)) {
HXLINE( 141)			cairo->set_operator((int)0);
HXLINE( 142)			cairo->paint();
HXLINE( 143)			cairo->set_operator((int)2);
            		}
            		else {
HXLINE( 147)			int color = textEngine->backgroundColor;
HXLINE( 148)			Float r = ((Float)hx::UShr(((int)color & (int)(int)16711680),(int)16) / (Float)(int)255);
HXLINE( 149)			Float g = ((Float)hx::UShr(((int)color & (int)(int)65280),(int)8) / (Float)(int)255);
HXLINE( 150)			Float b = ((Float)((int)color & (int)(int)255) / (Float)(int)255);
HXLINE( 152)			cairo->setSourceRGB(r,g,b);
HXLINE( 153)			cairo->fillPreserve();
            		}
HXLINE( 157)		if (textEngine->border) {
HXLINE( 159)			int color1 = textEngine->borderColor;
HXLINE( 160)			Float r1 = ((Float)hx::UShr(((int)color1 & (int)(int)16711680),(int)16) / (Float)(int)255);
HXLINE( 161)			Float g1 = ((Float)hx::UShr(((int)color1 & (int)(int)65280),(int)8) / (Float)(int)255);
HXLINE( 162)			Float b1 = ((Float)((int)color1 & (int)(int)255) / (Float)(int)255);
HXLINE( 164)			cairo->setSourceRGB(r1,g1,b1);
HXLINE( 165)			cairo->set_lineWidth((int)1);
HXLINE( 166)			cairo->stroke();
            		}
HXLINE( 170)		bool _hx_tmp6;
HXDLIN( 170)		if (hx::IsNotNull( textEngine->text )) {
HXLINE( 170)			_hx_tmp6 = (textEngine->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 170)			_hx_tmp6 = false;
            		}
HXDLIN( 170)		if (_hx_tmp6) {
HXLINE( 172)			Float bounds1 = bounds->width;
HXDLIN( 172)			int _hx_tmp7;
HXDLIN( 172)			if (textField->get_border()) {
HXLINE( 172)				_hx_tmp7 = (int)1;
            			}
            			else {
HXLINE( 172)				_hx_tmp7 = (int)0;
            			}
HXDLIN( 172)			Float _hx_tmp8 = (bounds1 - _hx_tmp7);
HXDLIN( 172)			Float bounds2 = bounds->height;
HXDLIN( 172)			int _hx_tmp9;
HXDLIN( 172)			if (textField->get_border()) {
HXLINE( 172)				_hx_tmp9 = (int)1;
            			}
            			else {
HXLINE( 172)				_hx_tmp9 = (int)0;
            			}
HXDLIN( 172)			cairo->rectangle((int)0,(int)0,_hx_tmp8,(bounds2 - _hx_tmp9));
HXLINE( 173)			cairo->clip();
HXLINE( 175)			::String text = textEngine->text;
HXLINE( 177)			int scrollX = -(textField->get_scrollH());
HXLINE( 178)			Float scrollY = ((Float)0.0);
HXLINE( 180)			{
HXLINE( 180)				int _g1 = (int)0;
HXDLIN( 180)				int _g = (textField->get_scrollV() - (int)1);
HXDLIN( 180)				while((_g1 < _g)){
HXLINE( 180)					_g1 = (_g1 + (int)1);
HXDLIN( 180)					int i = (_g1 - (int)1);
HXLINE( 182)					scrollY = (scrollY - textEngine->lineHeights->get(i));
            				}
            			}
HXLINE( 186)			 ::Dynamic color2;
HXDLIN( 186)			Float r2;
HXDLIN( 186)			Float g2;
HXDLIN( 186)			Float b2;
HXDLIN( 186)			 ::openfl::text::Font font;
HXDLIN( 186)			int size;
HXDLIN( 186)			Float advance;
HXLINE( 188)			{
HXLINE( 188)				int _g2 = (int)0;
HXDLIN( 188)				 ::openfl::_Vector::ObjectVector _g11 = textEngine->layoutGroups;
HXDLIN( 188)				while((_g2 < _g11->get_length())){
HXLINE( 188)					 ::openfl::_internal::text::TextLayoutGroup group = _g11->get(_g2).StaticCast<  ::openfl::_internal::text::TextLayoutGroup >();
HXDLIN( 188)					_g2 = (_g2 + (int)1);
HXLINE( 190)					int group1 = group->lineIndex;
HXDLIN( 190)					if ((group1 < (textField->get_scrollV() - (int)1))) {
HXLINE( 190)						continue;
            					}
HXLINE( 191)					int group2 = group->lineIndex;
HXDLIN( 191)					int _hx_tmp10 = textField->get_scrollV();
HXDLIN( 191)					if ((group2 > ((_hx_tmp10 + textEngine->bottomScrollV) - (int)2))) {
HXLINE( 191)						goto _hx_goto_1;
            					}
HXLINE( 193)					color2 = group->format->color;
HXLINE( 194)					r2 = ((Float)hx::UShr(((int)color2 & (int)(int)16711680),(int)16) / (Float)(int)255);
HXLINE( 195)					g2 = ((Float)hx::UShr(((int)color2 & (int)(int)65280),(int)8) / (Float)(int)255);
HXLINE( 196)					b2 = ((Float)((int)color2 & (int)(int)255) / (Float)(int)255);
HXLINE( 198)					cairo->setSourceRGB(r2,g2,b2);
HXLINE( 200)					font = ::openfl::_internal::text::TextEngine_obj::getFontInstance(group->format);
HXLINE( 202)					bool _hx_tmp11;
HXDLIN( 202)					if (hx::IsNotNull( font )) {
HXLINE( 202)						_hx_tmp11 = hx::IsNotNull( group->format->size );
            					}
            					else {
HXLINE( 202)						_hx_tmp11 = false;
            					}
HXDLIN( 202)					if (_hx_tmp11) {
HXLINE( 204)						if (hx::IsNotNull( textEngine->_hx___cairoFont )) {
HXLINE( 206)							if (hx::IsNotEq( textEngine->_hx___font,font )) {
HXLINE( 208)								textEngine->_hx___cairoFont = null();
            							}
            						}
HXLINE( 214)						if (hx::IsNull( textEngine->_hx___cairoFont )) {
HXLINE( 216)							textEngine->_hx___font = font;
HXLINE( 217)							textEngine->_hx___cairoFont = ::lime::graphics::cairo::_CairoFTFontFace::CairoFTFontFace_Impl__obj::create(font,(int)0);
            						}
HXLINE( 221)						cairo->set_fontFace(textEngine->_hx___cairoFont);
HXLINE( 223)						size = ::Std_obj::_hx_int(group->format->size);
HXLINE( 224)						cairo->setFontSize(size);
HXLINE( 226)						Float _hx_tmp12 = (group->offsetX + scrollX);
HXDLIN( 226)						cairo->moveTo(_hx_tmp12,((group->offsetY + group->ascent) + scrollY));
HXLINE( 247)						cairo->showText(text.substring(group->startIndex,group->endIndex));
HXLINE( 249)						bool _hx_tmp13;
HXDLIN( 249)						if ((textField->_hx___caretIndex > (int)-1)) {
HXLINE( 249)							_hx_tmp13 = textEngine->selectable;
            						}
            						else {
HXLINE( 249)							_hx_tmp13 = false;
            						}
HXDLIN( 249)						if (_hx_tmp13) {
HXLINE( 251)							if ((textField->_hx___selectionIndex == textField->_hx___caretIndex)) {
HXLINE( 253)								bool _hx_tmp14;
HXDLIN( 253)								bool _hx_tmp15;
HXDLIN( 253)								if (textField->_hx___showCursor) {
HXLINE( 253)									_hx_tmp15 = (group->startIndex <= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 253)									_hx_tmp15 = false;
            								}
HXDLIN( 253)								if (_hx_tmp15) {
HXLINE( 253)									_hx_tmp14 = (group->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 253)									_hx_tmp14 = false;
            								}
HXDLIN( 253)								if (_hx_tmp14) {
HXLINE( 255)									advance = ((Float)0.0);
HXLINE( 257)									{
HXLINE( 257)										int _g3 = (int)0;
HXDLIN( 257)										int _g21 = (textField->_hx___caretIndex - group->startIndex);
HXDLIN( 257)										while((_g3 < _g21)){
HXLINE( 257)											_g3 = (_g3 + (int)1);
HXDLIN( 257)											int i1 = (_g3 - (int)1);
HXLINE( 259)											if ((group->advances->length <= i1)) {
HXLINE( 259)												goto _hx_goto_2;
            											}
HXLINE( 260)											advance = (advance + group->advances->__get(i1));
            										}
            										_hx_goto_2:;
            									}
HXLINE( 264)									Float _hx_tmp16 = (::Math_obj::floor((group->offsetX + advance)) + ((Float)0.5));
HXDLIN( 264)									cairo->moveTo(_hx_tmp16,(group->offsetY + ((Float)0.5)));
HXLINE( 265)									cairo->set_lineWidth((int)1);
HXLINE( 266)									Float _hx_tmp17 = (::Math_obj::floor((group->offsetX + advance)) + ((Float)0.5));
HXDLIN( 266)									cairo->lineTo(_hx_tmp17,((group->offsetY + group->height) - (int)1));
HXLINE( 267)									cairo->stroke();
            								}
            							}
            							else {
HXLINE( 271)								bool _hx_tmp18;
HXDLIN( 271)								bool _hx_tmp19;
HXDLIN( 271)								bool _hx_tmp20;
HXDLIN( 271)								bool _hx_tmp21;
HXDLIN( 271)								if ((group->startIndex <= textField->_hx___caretIndex)) {
HXLINE( 271)									_hx_tmp21 = (group->endIndex >= textField->_hx___caretIndex);
            								}
            								else {
HXLINE( 271)									_hx_tmp21 = false;
            								}
HXDLIN( 271)								if (!(_hx_tmp21)) {
HXLINE( 271)									if ((group->startIndex <= textField->_hx___selectionIndex)) {
HXLINE( 271)										_hx_tmp20 = (group->endIndex >= textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 271)										_hx_tmp20 = false;
            									}
            								}
            								else {
HXLINE( 271)									_hx_tmp20 = true;
            								}
HXDLIN( 271)								if (!(_hx_tmp20)) {
HXLINE( 271)									if ((group->startIndex > textField->_hx___caretIndex)) {
HXLINE( 271)										_hx_tmp19 = (group->endIndex < textField->_hx___selectionIndex);
            									}
            									else {
HXLINE( 271)										_hx_tmp19 = false;
            									}
            								}
            								else {
HXLINE( 271)									_hx_tmp19 = true;
            								}
HXDLIN( 271)								if (!(_hx_tmp19)) {
HXLINE( 271)									if ((group->startIndex > textField->_hx___selectionIndex)) {
HXLINE( 271)										_hx_tmp18 = (group->endIndex < textField->_hx___caretIndex);
            									}
            									else {
HXLINE( 271)										_hx_tmp18 = false;
            									}
            								}
            								else {
HXLINE( 271)									_hx_tmp18 = true;
            								}
HXDLIN( 271)								if (_hx_tmp18) {
HXLINE( 273)									int selectionStart = ::Std_obj::_hx_int(::Math_obj::min(textField->_hx___selectionIndex,textField->_hx___caretIndex));
HXLINE( 274)									int selectionEnd = ::Std_obj::_hx_int(::Math_obj::max(textField->_hx___selectionIndex,textField->_hx___caretIndex));
HXLINE( 276)									if ((group->startIndex > selectionStart)) {
HXLINE( 278)										selectionStart = group->startIndex;
            									}
HXLINE( 282)									if ((group->endIndex < selectionEnd)) {
HXLINE( 284)										selectionEnd = group->endIndex;
            									}
HXLINE( 288)									 ::openfl::geom::Rectangle start;
HXDLIN( 288)									 ::openfl::geom::Rectangle end;
HXLINE( 290)									start = textField->getCharBoundaries(selectionStart);
HXLINE( 292)									if ((selectionEnd >= textEngine->text.length)) {
HXLINE( 294)										end = textField->getCharBoundaries((textEngine->text.length - (int)1));
HXLINE( 295)										 ::openfl::geom::Rectangle end1 = end;
HXDLIN( 295)										end1->x = (end1->x + (end->width + (int)2));
            									}
            									else {
HXLINE( 299)										end = textField->getCharBoundaries(selectionEnd);
            									}
HXLINE( 303)									bool _hx_tmp22;
HXDLIN( 303)									if (hx::IsNotNull( start )) {
HXLINE( 303)										_hx_tmp22 = hx::IsNotNull( end );
            									}
            									else {
HXLINE( 303)										_hx_tmp22 = false;
            									}
HXDLIN( 303)									if (_hx_tmp22) {
HXLINE( 305)										cairo->setSourceRGB((int)0,(int)0,(int)0);
HXLINE( 306)										Float start1 = start->x;
HXDLIN( 306)										Float start2 = start->y;
HXDLIN( 306)										cairo->rectangle(start1,start2,(end->x - start->x),group->height);
HXLINE( 307)										cairo->fill();
HXLINE( 308)										cairo->setSourceRGB((int)1,(int)1,(int)1);
HXLINE( 312)										Float _hx_tmp23 = (scrollX + start->x);
HXDLIN( 312)										cairo->moveTo(_hx_tmp23,((group->offsetY + group->ascent) + scrollY));
HXLINE( 313)										cairo->showText(text.substring(selectionStart,selectionEnd));
            									}
            								}
            							}
            						}
            					}
            				}
            				_hx_goto_1:;
            			}
            		}
            		else {
HXLINE( 325)			bool _hx_tmp24;
HXDLIN( 325)			bool _hx_tmp25;
HXDLIN( 325)			if ((textField->_hx___caretIndex > (int)-1)) {
HXLINE( 325)				_hx_tmp25 = textEngine->selectable;
            			}
            			else {
HXLINE( 325)				_hx_tmp25 = false;
            			}
HXDLIN( 325)			if (_hx_tmp25) {
HXLINE( 325)				_hx_tmp24 = textField->_hx___showCursor;
            			}
            			else {
HXLINE( 325)				_hx_tmp24 = false;
            			}
HXDLIN( 325)			if (_hx_tmp24) {
HXLINE( 327)				int scrollX1 = -(textField->get_scrollH());
HXLINE( 328)				Float scrollY1 = ((Float)0.0);
HXLINE( 330)				{
HXLINE( 330)					int _g12 = (int)0;
HXDLIN( 330)					int _g4 = (textField->get_scrollV() - (int)1);
HXDLIN( 330)					while((_g12 < _g4)){
HXLINE( 330)						_g12 = (_g12 + (int)1);
HXDLIN( 330)						int i2 = (_g12 - (int)1);
HXLINE( 332)						scrollY1 = (scrollY1 - textEngine->lineHeights->get(i2));
            					}
            				}
HXLINE( 336)				 ::Dynamic color3 = textField->get_defaultTextFormat()->color;
HXLINE( 337)				Float r3 = ((Float)hx::UShr(((int)color3 & (int)(int)16711680),(int)16) / (Float)(int)255);
HXLINE( 338)				Float g3 = ((Float)hx::UShr(((int)color3 & (int)(int)65280),(int)8) / (Float)(int)255);
HXLINE( 339)				Float b3 = ((Float)((int)color3 & (int)(int)255) / (Float)(int)255);
HXLINE( 341)				cairo->setSourceRGB(r3,g3,b3);
HXLINE( 343)				cairo->newPath();
HXLINE( 344)				cairo->moveTo((scrollX1 + ((Float)2.5)),(scrollY1 + ((Float)2.5)));
HXLINE( 345)				cairo->set_lineWidth((int)1);
HXLINE( 346)				cairo->lineTo((scrollX1 + ((Float)2.5)),((scrollY1 + ::openfl::_internal::text::TextEngine_obj::getFormatHeight(textField->get_defaultTextFormat())) - (int)1));
HXLINE( 347)				cairo->stroke();
HXLINE( 348)				cairo->closePath();
            			}
            		}
HXLINE( 352)		graphics->_hx___bitmap->image->dirty = true;
HXLINE( 353)		graphics->_hx___bitmap->image->version++;
HXLINE( 354)		textField->_hx___dirty = false;
HXLINE( 355)		graphics->set___dirty(false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CairoTextField_obj,render,(void))


CairoTextField_obj::CairoTextField_obj()
{
}

bool CairoTextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoTextField_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CairoTextField_obj_sStaticStorageInfo = 0;
#endif

static void CairoTextField_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoTextField_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoTextField_obj::__mClass,"__mClass");
};

#endif

hx::Class CairoTextField_obj::__mClass;

static ::String CairoTextField_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CairoTextField_obj::__register()
{
	hx::Object *dummy = new CairoTextField_obj;
	CairoTextField_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.cairo.CairoTextField","\x46","\x1d","\x84","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoTextField_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoTextField_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoTextField_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoTextField_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoTextField_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoTextField_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoTextField_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo
