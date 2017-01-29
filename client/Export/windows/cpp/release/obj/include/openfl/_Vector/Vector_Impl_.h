// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__Vector_Vector_Impl_
#define INCLUDED_openfl__Vector_Vector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,FunctionVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,_Vector,Vector_Impl_)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES Vector_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Vector_Impl__obj OBJ_;
		Vector_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._Vector.Vector_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._Vector.Vector_Impl_"); }
		static hx::ObjectPtr< Vector_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Vector_Impl_","\xc3","\xad","\x36","\x7e"); }

		static  ::openfl::_Vector::ObjectVector concat(::Dynamic this1, ::openfl::_Vector::ObjectVector a);
		static ::Dynamic concat_dyn();

		static  ::openfl::_Vector::ObjectVector copy(::Dynamic this1);
		static ::Dynamic copy_dyn();

		static  ::Dynamic get(::Dynamic this1,Int index);
		static ::Dynamic get_dyn();

		static Int indexOf(::Dynamic this1, ::Dynamic x, ::Dynamic from);
		static ::Dynamic indexOf_dyn();

		static void insertAt(::Dynamic this1,Int index, ::Dynamic element);
		static ::Dynamic insertAt_dyn();

		static  ::Dynamic iterator(::Dynamic this1);
		static ::Dynamic iterator_dyn();

		static ::String join(::Dynamic this1,::String sep);
		static ::Dynamic join_dyn();

		static Int lastIndexOf(::Dynamic this1, ::Dynamic x, ::Dynamic from);
		static ::Dynamic lastIndexOf_dyn();

		static  ::Dynamic pop(::Dynamic this1);
		static ::Dynamic pop_dyn();

		static Int push(::Dynamic this1, ::Dynamic x);
		static ::Dynamic push_dyn();

		static void reverse(::Dynamic this1);
		static ::Dynamic reverse_dyn();

		static  ::Dynamic set(::Dynamic this1,Int index, ::Dynamic value);
		static ::Dynamic set_dyn();

		static  ::Dynamic shift(::Dynamic this1);
		static ::Dynamic shift_dyn();

		static  ::openfl::_Vector::ObjectVector slice(::Dynamic this1, ::Dynamic pos, ::Dynamic end);
		static ::Dynamic slice_dyn();

		static void sort(::Dynamic this1, ::Dynamic f);
		static ::Dynamic sort_dyn();

		static  ::openfl::_Vector::ObjectVector splice(::Dynamic this1,Int pos,Int len);
		static ::Dynamic splice_dyn();

		static ::String toString(::Dynamic this1);
		static ::Dynamic toString_dyn();

		static void unshift(::Dynamic this1, ::Dynamic x);
		static ::Dynamic unshift_dyn();

		static  ::openfl::_Vector::ObjectVector ofArray(::cpp::VirtualArray a);
		static ::Dynamic ofArray_dyn();

		static ::Dynamic convert(::Dynamic v);
		static ::Dynamic convert_dyn();

		static  ::openfl::_Vector::BoolVector toBoolVector(::Dynamic t,Int length,Bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toBoolVector_dyn();

		static  ::openfl::_Vector::IntVector toIntVector(::Dynamic t,Int length,Bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toIntVector_dyn();

		static  ::openfl::_Vector::FloatVector toFloatVector(::Dynamic t,Int length,Bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toFloatVector_dyn();

		static  ::openfl::_Vector::FunctionVector toFunctionVector(::Dynamic t,Int length,Bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toFunctionVector_dyn();

		static  ::openfl::_Vector::ObjectVector toObjectVector(::Dynamic t,Int length,Bool fixed,::cpp::VirtualArray array);
		static ::Dynamic toObjectVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromBoolVector( ::openfl::_Vector::BoolVector vector);
		static ::Dynamic fromBoolVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromIntVector( ::openfl::_Vector::IntVector vector);
		static ::Dynamic fromIntVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromFloatVector( ::openfl::_Vector::FloatVector vector);
		static ::Dynamic fromFloatVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromFunctionVector( ::openfl::_Vector::FunctionVector vector);
		static ::Dynamic fromFunctionVector_dyn();

		static  ::openfl::_Vector::ObjectVector fromObjectVector( ::openfl::_Vector::ObjectVector vector);
		static ::Dynamic fromObjectVector_dyn();

		static Bool get_fixed(::Dynamic this1);
		static ::Dynamic get_fixed_dyn();

		static Bool set_fixed(::Dynamic this1,Bool value);
		static ::Dynamic set_fixed_dyn();

		static Int get_length(::Dynamic this1);
		static ::Dynamic get_length_dyn();

		static Int set_length(::Dynamic this1,Int value);
		static ::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_Vector_Impl_ */ 
