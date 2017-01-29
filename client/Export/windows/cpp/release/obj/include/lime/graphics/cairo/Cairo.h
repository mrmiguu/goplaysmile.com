// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#define INCLUDED_lime_graphics_cairo_Cairo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS3(lime,graphics,cairo,CairoGlyph)
HX_DECLARE_CLASS2(lime,math,Matrix3)
HX_DECLARE_CLASS2(lime,math,Vector2)

namespace lime{
namespace graphics{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES Cairo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Cairo_obj OBJ_;
		Cairo_obj();

	public:
		void __construct( ::Dynamic surface);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.cairo.Cairo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.cairo.Cairo"); }
		static hx::ObjectPtr< Cairo_obj > __new( ::Dynamic surface);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cairo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Cairo","\x68","\xa0","\x46","\xd4"); }

		static void __boot();
		static Int version;
		static ::String versionString;
		static Int get_version();
		static ::Dynamic get_version_dyn();

		static ::String get_versionString();
		static ::Dynamic get_versionString_dyn();

		static void lime_cairo_arc( ::Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static ::Dynamic lime_cairo_arc_dyn();

		static void lime_cairo_arc_negative( ::Dynamic handle,Float xc,Float yc,Float radius,Float angle1,Float angle2);
		static ::Dynamic lime_cairo_arc_negative_dyn();

		static void lime_cairo_clip( ::Dynamic handle);
		static ::Dynamic lime_cairo_clip_dyn();

		static void lime_cairo_clip_preserve( ::Dynamic handle);
		static ::Dynamic lime_cairo_clip_preserve_dyn();

		static void lime_cairo_clip_extents( ::Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic lime_cairo_clip_extents_dyn();

		static void lime_cairo_close_path( ::Dynamic handle);
		static ::Dynamic lime_cairo_close_path_dyn();

		static void lime_cairo_copy_page( ::Dynamic handle);
		static ::Dynamic lime_cairo_copy_page_dyn();

		static  ::Dynamic lime_cairo_create( ::Dynamic handle);
		static ::Dynamic lime_cairo_create_dyn();

		static void lime_cairo_curve_to( ::Dynamic handle,Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static ::Dynamic lime_cairo_curve_to_dyn();

		static void lime_cairo_fill( ::Dynamic handle);
		static ::Dynamic lime_cairo_fill_dyn();

		static void lime_cairo_fill_extents( ::Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic lime_cairo_fill_extents_dyn();

		static void lime_cairo_fill_preserve( ::Dynamic handle);
		static ::Dynamic lime_cairo_fill_preserve_dyn();

		static Int lime_cairo_get_antialias( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_antialias_dyn();

		static  ::Dynamic lime_cairo_get_current_point( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_current_point_dyn();

		static  ::Dynamic lime_cairo_get_dash( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_dash_dyn();

		static Int lime_cairo_get_dash_count( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_dash_count_dyn();

		static Int lime_cairo_get_fill_rule( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_fill_rule_dyn();

		static  ::Dynamic lime_cairo_get_font_face( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_font_face_dyn();

		static  ::Dynamic lime_cairo_get_font_options( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_font_options_dyn();

		static  ::Dynamic lime_cairo_get_group_target( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_group_target_dyn();

		static Int lime_cairo_get_line_cap( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_line_cap_dyn();

		static Int lime_cairo_get_line_join( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_line_join_dyn();

		static Float lime_cairo_get_line_width( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_line_width_dyn();

		static  ::Dynamic lime_cairo_get_matrix( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_matrix_dyn();

		static Float lime_cairo_get_miter_limit( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_miter_limit_dyn();

		static Int lime_cairo_get_operator( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_operator_dyn();

		static  ::Dynamic lime_cairo_get_source( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_source_dyn();

		static  ::Dynamic lime_cairo_get_target( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_target_dyn();

		static Float lime_cairo_get_tolerance( ::Dynamic handle);
		static ::Dynamic lime_cairo_get_tolerance_dyn();

		static Bool lime_cairo_has_current_point( ::Dynamic handle);
		static ::Dynamic lime_cairo_has_current_point_dyn();

		static void lime_cairo_identity_matrix( ::Dynamic handle);
		static ::Dynamic lime_cairo_identity_matrix_dyn();

		static Bool lime_cairo_in_clip( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_in_clip_dyn();

		static Bool lime_cairo_in_fill( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_in_fill_dyn();

		static Bool lime_cairo_in_stroke( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_in_stroke_dyn();

		static void lime_cairo_line_to( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_line_to_dyn();

		static void lime_cairo_mask( ::Dynamic handle, ::Dynamic pattern);
		static ::Dynamic lime_cairo_mask_dyn();

		static void lime_cairo_mask_surface( ::Dynamic handle, ::Dynamic surface,Float x,Float y);
		static ::Dynamic lime_cairo_mask_surface_dyn();

		static void lime_cairo_move_to( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_move_to_dyn();

		static void lime_cairo_new_path( ::Dynamic handle);
		static ::Dynamic lime_cairo_new_path_dyn();

		static void lime_cairo_paint( ::Dynamic handle);
		static ::Dynamic lime_cairo_paint_dyn();

		static void lime_cairo_paint_with_alpha( ::Dynamic handle,Float alpha);
		static ::Dynamic lime_cairo_paint_with_alpha_dyn();

		static  ::Dynamic lime_cairo_pop_group( ::Dynamic handle);
		static ::Dynamic lime_cairo_pop_group_dyn();

		static void lime_cairo_pop_group_to_source( ::Dynamic handle);
		static ::Dynamic lime_cairo_pop_group_to_source_dyn();

		static void lime_cairo_push_group( ::Dynamic handle);
		static ::Dynamic lime_cairo_push_group_dyn();

		static void lime_cairo_push_group_with_content( ::Dynamic handle,Int content);
		static ::Dynamic lime_cairo_push_group_with_content_dyn();

		static void lime_cairo_rectangle( ::Dynamic handle,Float x,Float y,Float width,Float height);
		static ::Dynamic lime_cairo_rectangle_dyn();

		static void lime_cairo_rel_curve_to( ::Dynamic handle,Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		static ::Dynamic lime_cairo_rel_curve_to_dyn();

		static void lime_cairo_rel_line_to( ::Dynamic handle,Float dx,Float dy);
		static ::Dynamic lime_cairo_rel_line_to_dyn();

		static void lime_cairo_rel_move_to( ::Dynamic handle,Float dx,Float dy);
		static ::Dynamic lime_cairo_rel_move_to_dyn();

		static void lime_cairo_reset_clip( ::Dynamic handle);
		static ::Dynamic lime_cairo_reset_clip_dyn();

		static void lime_cairo_restore( ::Dynamic handle);
		static ::Dynamic lime_cairo_restore_dyn();

		static void lime_cairo_rotate( ::Dynamic handle,Float amount);
		static ::Dynamic lime_cairo_rotate_dyn();

		static void lime_cairo_save( ::Dynamic handle);
		static ::Dynamic lime_cairo_save_dyn();

		static void lime_cairo_scale( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_scale_dyn();

		static void lime_cairo_set_antialias( ::Dynamic handle,Int cap);
		static ::Dynamic lime_cairo_set_antialias_dyn();

		static void lime_cairo_set_dash( ::Dynamic handle, ::Dynamic dash);
		static ::Dynamic lime_cairo_set_dash_dyn();

		static void lime_cairo_set_fill_rule( ::Dynamic handle,Int cap);
		static ::Dynamic lime_cairo_set_fill_rule_dyn();

		static void lime_cairo_set_font_face( ::Dynamic handle, ::Dynamic face);
		static ::Dynamic lime_cairo_set_font_face_dyn();

		static void lime_cairo_set_font_options( ::Dynamic handle, ::Dynamic options);
		static ::Dynamic lime_cairo_set_font_options_dyn();

		static void lime_cairo_set_font_size( ::Dynamic handle,Float size);
		static ::Dynamic lime_cairo_set_font_size_dyn();

		static void lime_cairo_set_line_cap( ::Dynamic handle,Int cap);
		static ::Dynamic lime_cairo_set_line_cap_dyn();

		static void lime_cairo_set_line_join( ::Dynamic handle,Int join);
		static ::Dynamic lime_cairo_set_line_join_dyn();

		static void lime_cairo_set_line_width( ::Dynamic handle,Float width);
		static ::Dynamic lime_cairo_set_line_width_dyn();

		static void lime_cairo_set_matrix( ::Dynamic handle,Float a,Float b,Float c,Float d,Float tx,Float ty);
		static ::Dynamic lime_cairo_set_matrix_dyn();

		static void lime_cairo_set_miter_limit( ::Dynamic handle,Float miterLimit);
		static ::Dynamic lime_cairo_set_miter_limit_dyn();

		static void lime_cairo_set_operator( ::Dynamic handle,Int op);
		static ::Dynamic lime_cairo_set_operator_dyn();

		static void lime_cairo_set_source( ::Dynamic handle, ::Dynamic pattern);
		static ::Dynamic lime_cairo_set_source_dyn();

		static void lime_cairo_set_source_rgb( ::Dynamic handle,Float r,Float g,Float b);
		static ::Dynamic lime_cairo_set_source_rgb_dyn();

		static void lime_cairo_set_source_rgba( ::Dynamic handle,Float r,Float g,Float b,Float a);
		static ::Dynamic lime_cairo_set_source_rgba_dyn();

		static void lime_cairo_set_source_surface( ::Dynamic handle, ::Dynamic surface,Float x,Float y);
		static ::Dynamic lime_cairo_set_source_surface_dyn();

		static void lime_cairo_set_tolerance( ::Dynamic handle,Float tolerance);
		static ::Dynamic lime_cairo_set_tolerance_dyn();

		static void lime_cairo_show_glyphs( ::Dynamic handle, ::Dynamic glyphs);
		static ::Dynamic lime_cairo_show_glyphs_dyn();

		static void lime_cairo_show_page( ::Dynamic handle);
		static ::Dynamic lime_cairo_show_page_dyn();

		static void lime_cairo_show_text( ::Dynamic handle,::String text);
		static ::Dynamic lime_cairo_show_text_dyn();

		static Int lime_cairo_status( ::Dynamic handle);
		static ::Dynamic lime_cairo_status_dyn();

		static void lime_cairo_stroke( ::Dynamic handle);
		static ::Dynamic lime_cairo_stroke_dyn();

		static void lime_cairo_stroke_extents( ::Dynamic handle,Float x1,Float y1,Float x2,Float y2);
		static ::Dynamic lime_cairo_stroke_extents_dyn();

		static void lime_cairo_stroke_preserve( ::Dynamic handle);
		static ::Dynamic lime_cairo_stroke_preserve_dyn();

		static void lime_cairo_transform( ::Dynamic handle, ::Dynamic matrix);
		static ::Dynamic lime_cairo_transform_dyn();

		static void lime_cairo_translate( ::Dynamic handle,Float x,Float y);
		static ::Dynamic lime_cairo_translate_dyn();

		static Int lime_cairo_version();
		static ::Dynamic lime_cairo_version_dyn();

		static ::String lime_cairo_version_string();
		static ::Dynamic lime_cairo_version_string_dyn();

		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float) > cffi_lime_cairo_arc;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float) > &cffi_lime_cairo_arc_dyn() { return cffi_lime_cairo_arc;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float) > cffi_lime_cairo_arc_negative;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float) > &cffi_lime_cairo_arc_negative_dyn() { return cffi_lime_cairo_arc_negative;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_clip;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_clip_dyn() { return cffi_lime_cairo_clip;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_clip_preserve;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_clip_preserve_dyn() { return cffi_lime_cairo_clip_preserve;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > cffi_lime_cairo_clip_extents;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > &cffi_lime_cairo_clip_extents_dyn() { return cffi_lime_cairo_clip_extents;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_close_path;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_close_path_dyn() { return cffi_lime_cairo_close_path;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_copy_page;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_copy_page_dyn() { return cffi_lime_cairo_copy_page;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_create;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_create_dyn() { return cffi_lime_cairo_create;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > cffi_lime_cairo_curve_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > &cffi_lime_cairo_curve_to_dyn() { return cffi_lime_cairo_curve_to;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_fill;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_fill_dyn() { return cffi_lime_cairo_fill;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > cffi_lime_cairo_fill_extents;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > &cffi_lime_cairo_fill_extents_dyn() { return cffi_lime_cairo_fill_extents;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_fill_preserve;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_fill_preserve_dyn() { return cffi_lime_cairo_fill_preserve;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_antialias;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_antialias_dyn() { return cffi_lime_cairo_get_antialias;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_current_point;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_current_point_dyn() { return cffi_lime_cairo_get_current_point;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_dash;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_dash_dyn() { return cffi_lime_cairo_get_dash;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_dash_count;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_dash_count_dyn() { return cffi_lime_cairo_get_dash_count;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_fill_rule;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_fill_rule_dyn() { return cffi_lime_cairo_get_fill_rule;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_font_face;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_font_face_dyn() { return cffi_lime_cairo_get_font_face;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_font_options;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_font_options_dyn() { return cffi_lime_cairo_get_font_options;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_group_target;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_group_target_dyn() { return cffi_lime_cairo_get_group_target;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_line_cap;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_line_cap_dyn() { return cffi_lime_cairo_get_line_cap;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_line_join;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_line_join_dyn() { return cffi_lime_cairo_get_line_join;}
		static ::cpp::Function<  Float( ::hx::Object *) > cffi_lime_cairo_get_line_width;
		static ::cpp::Function<  Float( ::hx::Object *) > &cffi_lime_cairo_get_line_width_dyn() { return cffi_lime_cairo_get_line_width;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_matrix;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_matrix_dyn() { return cffi_lime_cairo_get_matrix;}
		static ::cpp::Function<  Float( ::hx::Object *) > cffi_lime_cairo_get_miter_limit;
		static ::cpp::Function<  Float( ::hx::Object *) > &cffi_lime_cairo_get_miter_limit_dyn() { return cffi_lime_cairo_get_miter_limit;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_get_operator;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_get_operator_dyn() { return cffi_lime_cairo_get_operator;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_source;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_source_dyn() { return cffi_lime_cairo_get_source;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_get_target;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_get_target_dyn() { return cffi_lime_cairo_get_target;}
		static ::cpp::Function<  Float( ::hx::Object *) > cffi_lime_cairo_get_tolerance;
		static ::cpp::Function<  Float( ::hx::Object *) > &cffi_lime_cairo_get_tolerance_dyn() { return cffi_lime_cairo_get_tolerance;}
		static ::cpp::Function<  Bool( ::hx::Object *) > cffi_lime_cairo_has_current_point;
		static ::cpp::Function<  Bool( ::hx::Object *) > &cffi_lime_cairo_has_current_point_dyn() { return cffi_lime_cairo_has_current_point;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_identity_matrix;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_identity_matrix_dyn() { return cffi_lime_cairo_identity_matrix;}
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > cffi_lime_cairo_in_clip;
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > &cffi_lime_cairo_in_clip_dyn() { return cffi_lime_cairo_in_clip;}
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > cffi_lime_cairo_in_fill;
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > &cffi_lime_cairo_in_fill_dyn() { return cffi_lime_cairo_in_fill;}
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > cffi_lime_cairo_in_stroke;
		static ::cpp::Function<  Bool( ::hx::Object *,Float,Float) > &cffi_lime_cairo_in_stroke_dyn() { return cffi_lime_cairo_in_stroke;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_line_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_line_to_dyn() { return cffi_lime_cairo_line_to;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_mask;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_mask_dyn() { return cffi_lime_cairo_mask;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *,Float,Float) > cffi_lime_cairo_mask_surface;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *,Float,Float) > &cffi_lime_cairo_mask_surface_dyn() { return cffi_lime_cairo_mask_surface;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_move_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_move_to_dyn() { return cffi_lime_cairo_move_to;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_new_path;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_new_path_dyn() { return cffi_lime_cairo_new_path;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_paint;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_paint_dyn() { return cffi_lime_cairo_paint;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_paint_with_alpha;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_paint_with_alpha_dyn() { return cffi_lime_cairo_paint_with_alpha;}
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > cffi_lime_cairo_pop_group;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *) > &cffi_lime_cairo_pop_group_dyn() { return cffi_lime_cairo_pop_group;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_pop_group_to_source;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_pop_group_to_source_dyn() { return cffi_lime_cairo_pop_group_to_source;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_push_group;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_push_group_dyn() { return cffi_lime_cairo_push_group;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_push_group_with_content;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_push_group_with_content_dyn() { return cffi_lime_cairo_push_group_with_content;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > cffi_lime_cairo_rectangle;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > &cffi_lime_cairo_rectangle_dyn() { return cffi_lime_cairo_rectangle;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > cffi_lime_cairo_rel_curve_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > &cffi_lime_cairo_rel_curve_to_dyn() { return cffi_lime_cairo_rel_curve_to;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_rel_line_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_rel_line_to_dyn() { return cffi_lime_cairo_rel_line_to;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_rel_move_to;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_rel_move_to_dyn() { return cffi_lime_cairo_rel_move_to;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_reset_clip;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_reset_clip_dyn() { return cffi_lime_cairo_reset_clip;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_restore;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_restore_dyn() { return cffi_lime_cairo_restore;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_rotate;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_rotate_dyn() { return cffi_lime_cairo_rotate;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_save;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_save_dyn() { return cffi_lime_cairo_save;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_scale;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_scale_dyn() { return cffi_lime_cairo_scale;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_set_antialias;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_set_antialias_dyn() { return cffi_lime_cairo_set_antialias;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_set_dash;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_set_dash_dyn() { return cffi_lime_cairo_set_dash;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_set_fill_rule;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_set_fill_rule_dyn() { return cffi_lime_cairo_set_fill_rule;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_set_font_face;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_set_font_face_dyn() { return cffi_lime_cairo_set_font_face;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_set_font_options;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_set_font_options_dyn() { return cffi_lime_cairo_set_font_options;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_set_font_size;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_set_font_size_dyn() { return cffi_lime_cairo_set_font_size;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_set_line_cap;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_set_line_cap_dyn() { return cffi_lime_cairo_set_line_cap;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_set_line_join;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_set_line_join_dyn() { return cffi_lime_cairo_set_line_join;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_set_line_width;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_set_line_width_dyn() { return cffi_lime_cairo_set_line_width;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > cffi_lime_cairo_set_matrix;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float,Float,Float) > &cffi_lime_cairo_set_matrix_dyn() { return cffi_lime_cairo_set_matrix;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_set_miter_limit;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_set_miter_limit_dyn() { return cffi_lime_cairo_set_miter_limit;}
		static ::cpp::Function<  void( ::hx::Object *,Int) > cffi_lime_cairo_set_operator;
		static ::cpp::Function<  void( ::hx::Object *,Int) > &cffi_lime_cairo_set_operator_dyn() { return cffi_lime_cairo_set_operator;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_set_source;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_set_source_dyn() { return cffi_lime_cairo_set_source;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float) > cffi_lime_cairo_set_source_rgb;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float) > &cffi_lime_cairo_set_source_rgb_dyn() { return cffi_lime_cairo_set_source_rgb;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > cffi_lime_cairo_set_source_rgba;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > &cffi_lime_cairo_set_source_rgba_dyn() { return cffi_lime_cairo_set_source_rgba;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *,Float,Float) > cffi_lime_cairo_set_source_surface;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *,Float,Float) > &cffi_lime_cairo_set_source_surface_dyn() { return cffi_lime_cairo_set_source_surface;}
		static ::cpp::Function<  void( ::hx::Object *,Float) > cffi_lime_cairo_set_tolerance;
		static ::cpp::Function<  void( ::hx::Object *,Float) > &cffi_lime_cairo_set_tolerance_dyn() { return cffi_lime_cairo_set_tolerance;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_show_glyphs;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_show_glyphs_dyn() { return cffi_lime_cairo_show_glyphs;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_show_page;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_show_page_dyn() { return cffi_lime_cairo_show_page;}
		static ::cpp::Function<  void( ::hx::Object *,::String) > cffi_lime_cairo_show_text;
		static ::cpp::Function<  void( ::hx::Object *,::String) > &cffi_lime_cairo_show_text_dyn() { return cffi_lime_cairo_show_text;}
		static ::cpp::Function<  Int( ::hx::Object *) > cffi_lime_cairo_status;
		static ::cpp::Function<  Int( ::hx::Object *) > &cffi_lime_cairo_status_dyn() { return cffi_lime_cairo_status;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_stroke;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_stroke_dyn() { return cffi_lime_cairo_stroke;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > cffi_lime_cairo_stroke_extents;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float,Float,Float) > &cffi_lime_cairo_stroke_extents_dyn() { return cffi_lime_cairo_stroke_extents;}
		static ::cpp::Function<  void( ::hx::Object *) > cffi_lime_cairo_stroke_preserve;
		static ::cpp::Function<  void( ::hx::Object *) > &cffi_lime_cairo_stroke_preserve_dyn() { return cffi_lime_cairo_stroke_preserve;}
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > cffi_lime_cairo_transform;
		static ::cpp::Function<  void( ::hx::Object *, ::hx::Object *) > &cffi_lime_cairo_transform_dyn() { return cffi_lime_cairo_transform;}
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > cffi_lime_cairo_translate;
		static ::cpp::Function<  void( ::hx::Object *,Float,Float) > &cffi_lime_cairo_translate_dyn() { return cffi_lime_cairo_translate;}
		static ::cpp::Function<  Int() > cffi_lime_cairo_version;
		static ::cpp::Function<  Int() > &cffi_lime_cairo_version_dyn() { return cffi_lime_cairo_version;}
		static ::cpp::Function<  ::String() > cffi_lime_cairo_version_string;
		static ::cpp::Function<  ::String() > &cffi_lime_cairo_version_string_dyn() { return cffi_lime_cairo_version_string;}
		 ::Dynamic target;
		 ::Dynamic userData;
		 ::Dynamic handle;
		void arc(Float xc,Float yc,Float radius,Float angle1,Float angle2);
		::Dynamic arc_dyn();

		void arcNegative(Float xc,Float yc,Float radius,Float angle1,Float angle2);
		::Dynamic arcNegative_dyn();

		void clip();
		::Dynamic clip_dyn();

		void clipExtents(Float x1,Float y1,Float x2,Float y2);
		::Dynamic clipExtents_dyn();

		void clipPreserve();
		::Dynamic clipPreserve_dyn();

		void closePath();
		::Dynamic closePath_dyn();

		void copyPage();
		::Dynamic copyPage_dyn();

		void curveTo(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		::Dynamic curveTo_dyn();

		void fill();
		::Dynamic fill_dyn();

		void fillExtents(Float x1,Float y1,Float x2,Float y2);
		::Dynamic fillExtents_dyn();

		void fillPreserve();
		::Dynamic fillPreserve_dyn();

		void identityMatrix();
		::Dynamic identityMatrix_dyn();

		Bool inClip(Float x,Float y);
		::Dynamic inClip_dyn();

		Bool inFill(Float x,Float y);
		::Dynamic inFill_dyn();

		Bool inStroke(Float x,Float y);
		::Dynamic inStroke_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void mask( ::Dynamic pattern);
		::Dynamic mask_dyn();

		void maskSurface( ::Dynamic surface,Float x,Float y);
		::Dynamic maskSurface_dyn();

		void newPath();
		::Dynamic newPath_dyn();

		void paint();
		::Dynamic paint_dyn();

		void paintWithAlpha(Float alpha);
		::Dynamic paintWithAlpha_dyn();

		 ::Dynamic popGroup();
		::Dynamic popGroup_dyn();

		void popGroupToSource();
		::Dynamic popGroupToSource_dyn();

		void pushGroup();
		::Dynamic pushGroup_dyn();

		void pushGroupWithContent(Int content);
		::Dynamic pushGroupWithContent_dyn();

		void recreate( ::Dynamic surface);
		::Dynamic recreate_dyn();

		void rectangle(Float x,Float y,Float width,Float height);
		::Dynamic rectangle_dyn();

		void relCurveTo(Float dx1,Float dy1,Float dx2,Float dy2,Float dx3,Float dy3);
		::Dynamic relCurveTo_dyn();

		void relLineTo(Float dx,Float dy);
		::Dynamic relLineTo_dyn();

		void relMoveTo(Float dx,Float dy);
		::Dynamic relMoveTo_dyn();

		void resetClip();
		::Dynamic resetClip_dyn();

		void restore();
		::Dynamic restore_dyn();

		void save();
		::Dynamic save_dyn();

		void setFontSize(Float size);
		::Dynamic setFontSize_dyn();

		void setSourceRGB(Float r,Float g,Float b);
		::Dynamic setSourceRGB_dyn();

		void setSourceRGBA(Float r,Float g,Float b,Float a);
		::Dynamic setSourceRGBA_dyn();

		void setSourceSurface( ::Dynamic surface,Float x,Float y);
		::Dynamic setSourceSurface_dyn();

		void showGlyphs(::Array< ::Dynamic> glyphs);
		::Dynamic showGlyphs_dyn();

		void showPage();
		::Dynamic showPage_dyn();

		void showText(::String utf8);
		::Dynamic showText_dyn();

		Int status();
		::Dynamic status_dyn();

		void stroke();
		::Dynamic stroke_dyn();

		void strokeExtents(Float x1,Float y1,Float x2,Float y2);
		::Dynamic strokeExtents_dyn();

		void strokePreserve();
		::Dynamic strokePreserve_dyn();

		void transform( ::lime::math::Matrix3 matrix);
		::Dynamic transform_dyn();

		void rotate(Float amount);
		::Dynamic rotate_dyn();

		void scale(Float x,Float y);
		::Dynamic scale_dyn();

		void translate(Float x,Float y);
		::Dynamic translate_dyn();

		Int get_antialias();
		::Dynamic get_antialias_dyn();

		Int set_antialias(Int value);
		::Dynamic set_antialias_dyn();

		 ::lime::math::Vector2 get_currentPoint();
		::Dynamic get_currentPoint_dyn();

		::Array< Float > get_dash();
		::Dynamic get_dash_dyn();

		::Array< Float > set_dash(::Array< Float > value);
		::Dynamic set_dash_dyn();

		Int get_dashCount();
		::Dynamic get_dashCount_dyn();

		Int get_fillRule();
		::Dynamic get_fillRule_dyn();

		Int set_fillRule(Int value);
		::Dynamic set_fillRule_dyn();

		 ::Dynamic get_fontFace();
		::Dynamic get_fontFace_dyn();

		 ::Dynamic set_fontFace( ::Dynamic value);
		::Dynamic set_fontFace_dyn();

		 ::Dynamic get_fontOptions();
		::Dynamic get_fontOptions_dyn();

		 ::Dynamic set_fontOptions( ::Dynamic value);
		::Dynamic set_fontOptions_dyn();

		 ::Dynamic get_groupTarget();
		::Dynamic get_groupTarget_dyn();

		Bool get_hasCurrentPoint();
		::Dynamic get_hasCurrentPoint_dyn();

		Int get_lineCap();
		::Dynamic get_lineCap_dyn();

		Int set_lineCap(Int value);
		::Dynamic set_lineCap_dyn();

		Int get_lineJoin();
		::Dynamic get_lineJoin_dyn();

		Int set_lineJoin(Int value);
		::Dynamic set_lineJoin_dyn();

		Float get_lineWidth();
		::Dynamic get_lineWidth_dyn();

		Float set_lineWidth(Float value);
		::Dynamic set_lineWidth_dyn();

		 ::lime::math::Matrix3 get_matrix();
		::Dynamic get_matrix_dyn();

		 ::lime::math::Matrix3 set_matrix( ::lime::math::Matrix3 value);
		::Dynamic set_matrix_dyn();

		Float get_miterLimit();
		::Dynamic get_miterLimit_dyn();

		Float set_miterLimit(Float value);
		::Dynamic set_miterLimit_dyn();

		Int get_operator();
		::Dynamic get_operator_dyn();

		Int set_operator(Int value);
		::Dynamic set_operator_dyn();

		 ::Dynamic get_source();
		::Dynamic get_source_dyn();

		 ::Dynamic set_source( ::Dynamic value);
		::Dynamic set_source_dyn();

		 ::Dynamic get_target();
		::Dynamic get_target_dyn();

		Float get_tolerance();
		::Dynamic get_tolerance_dyn();

		Float set_tolerance(Float value);
		::Dynamic set_tolerance_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace cairo

#endif /* INCLUDED_lime_graphics_cairo_Cairo */ 
