// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_589_new,"openfl._Vector.FloatVector","new",0x7ccdf307,"openfl._Vector.FloatVector.new","openfl/Vector.hx",589,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_612_concat,"openfl._Vector.FloatVector","concat",0xbb39c8cd,"openfl._Vector.FloatVector.concat","openfl/Vector.hx",612,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_627_copy,"openfl._Vector.FloatVector","copy",0xb028eb2e,"openfl._Vector.FloatVector.copy","openfl/Vector.hx",627,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_634_get,"openfl._Vector.FloatVector","get",0x7cc8a33d,"openfl._Vector.FloatVector.get","openfl/Vector.hx",634,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_639_indexOf,"openfl._Vector.FloatVector","indexOf",0xe9dd4af0,"openfl._Vector.FloatVector.indexOf","openfl/Vector.hx",639,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_658_insertAt,"openfl._Vector.FloatVector","insertAt",0xb3435c85,"openfl._Vector.FloatVector.insertAt","openfl/Vector.hx",658,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_669_iterator,"openfl._Vector.FloatVector","iterator",0x84be29e7,"openfl._Vector.FloatVector.iterator","openfl/Vector.hx",669,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_676_join,"openfl._Vector.FloatVector","join",0xb4c96363,"openfl._Vector.FloatVector.join","openfl/Vector.hx",676,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_681_lastIndexOf,"openfl._Vector.FloatVector","lastIndexOf",0xc7529eba,"openfl._Vector.FloatVector.lastIndexOf","openfl/Vector.hx",681,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_699_pop,"openfl._Vector.FloatVector","pop",0x7ccf8038,"openfl._Vector.FloatVector.pop","openfl/Vector.hx",699,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_714_push,"openfl._Vector.FloatVector","push",0xb8c54153,"openfl._Vector.FloatVector.push","openfl/Vector.hx",714,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_729_reverse,"openfl._Vector.FloatVector","reverse",0x241a3b49,"openfl._Vector.FloatVector.reverse","openfl/Vector.hx",729,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_736_set,"openfl._Vector.FloatVector","set",0x7cd1be49,"openfl._Vector.FloatVector.set","openfl/Vector.hx",736,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_751_shift,"openfl._Vector.FloatVector","shift",0xa56846e9,"openfl._Vector.FloatVector.shift","openfl/Vector.hx",751,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_766_slice,"openfl._Vector.FloatVector","slice",0xa80d1eb9,"openfl._Vector.FloatVector.slice","openfl/Vector.hx",766,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_773_sort,"openfl._Vector.FloatVector","sort",0xbabc56d7,"openfl._Vector.FloatVector.sort","openfl/Vector.hx",773,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_780_splice,"openfl._Vector.FloatVector","splice",0xb3084535,"openfl._Vector.FloatVector.splice","openfl/Vector.hx",780,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_787_toString,"openfl._Vector.FloatVector","toString",0x2992b0a5,"openfl._Vector.FloatVector.toString","openfl/Vector.hx",787,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_794_unshift,"openfl._Vector.FloatVector","unshift",0x81d1e5b0,"openfl._Vector.FloatVector.unshift","openfl/Vector.hx",794,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_812_get_length,"openfl._Vector.FloatVector","get_length",0xf96594e8,"openfl._Vector.FloatVector.get_length","openfl/Vector.hx",812,0x4a01873c)
HX_DEFINE_STACK_FRAME(_hx_pos_055b1e986ae1a23a_817_set_length,"openfl._Vector.FloatVector","set_length",0xfce3335c,"openfl._Vector.FloatVector.set_length","openfl/Vector.hx",817,0x4a01873c)
namespace openfl{
namespace _Vector{

void FloatVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::Array< Float > array){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_589_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
            	HX_STACK_ARG(array,"array")
HXLINE( 591)		if (hx::IsNull( array )) {
HXLINE( 593)			array = ::Array_obj< Float >::__new();
            		}
HXLINE( 597)		this->_hx___array = array;
HXLINE( 599)		if (hx::IsNotNull( length )) {
HXLINE( 601)			this->set_length(length);
            		}
HXLINE( 605)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic FloatVector_obj::__CreateEmpty() { return new FloatVector_obj; }

void *FloatVector_obj::_hx_vtable = 0;

Dynamic FloatVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FloatVector_obj > _hx_result = new FloatVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FloatVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6497e72d;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_FloatVector__hx_openfl__Vector_IVector= {
	( int (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::get_length,
	( int (hx::Object::*)(int))&::openfl::_Vector::FloatVector_obj::set_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::FloatVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::FloatVector_obj::get_c4bfee54,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FloatVector_obj::indexOf_02dfccf1,
	( void (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::FloatVector_obj::insertAt_5d1f93e2,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::FloatVector_obj::join,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FloatVector_obj::lastIndexOf_02dfccf1,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::pop,
	( int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FloatVector_obj::push_9c73657a,
	( void (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::FloatVector_obj::set_15539e57,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::FloatVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FloatVector_obj::sort,
	( ::Dynamic (hx::Object::*)(int,int))&::openfl::_Vector::FloatVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::FloatVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::FloatVector_obj::unshift_489e4d05,
};

void FloatVector_obj::unshift_489e4d05( ::Dynamic x) {
			unshift(x);
}

 ::Dynamic FloatVector_obj::set_15539e57(int index, ::Dynamic value) {
			return set(index,value);
}

int FloatVector_obj::push_9c73657a( ::Dynamic x) {
			return push(x);
}

int FloatVector_obj::lastIndexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return lastIndexOf(x,from);
}

void FloatVector_obj::insertAt_5d1f93e2(int index, ::Dynamic element) {
			insertAt(index,element);
}

int FloatVector_obj::indexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return indexOf(x,from);
}

 ::Dynamic FloatVector_obj::get_c4bfee54(int index) {
			return get(index);
}
void *FloatVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_FloatVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic FloatVector_obj::concat(::Dynamic a){
            	HX_GC_STACKFRAME(&_hx_pos_055b1e986ae1a23a_612_concat)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
HXLINE( 612)		if (hx::IsNull( a )) {
HXLINE( 614)			return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            		}
            		else {
HXLINE( 618)			return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->concat(hx::TCast<  ::openfl::_Vector::FloatVector >::cast(a)->_hx___array));
            		}
HXLINE( 612)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,concat,return )

::Dynamic FloatVector_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_055b1e986ae1a23a_627_copy)
            	HX_STACK_THIS(this)
HXLINE( 627)		bool _hx_tmp = this->fixed;
HXDLIN( 627)		return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,null(),_hx_tmp,this->_hx___array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,copy,return )

Float FloatVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_634_get)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE( 634)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,get,return )

int FloatVector_obj::indexOf(Float x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_639_indexOf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE( 641)		{
HXLINE( 641)			HX_VARI( int,_g1) = from;
HXDLIN( 641)			HX_VARI( int,_g) = this->_hx___array->length;
HXDLIN( 641)			while((_g1 < _g)){
HXLINE( 641)				_g1 = (_g1 + (int)1);
HXDLIN( 641)				HX_VARI( int,i) = (_g1 - (int)1);
HXLINE( 643)				if ((this->_hx___array->__get(i) == x)) {
HXLINE( 645)					return i;
            				}
            			}
            		}
HXLINE( 651)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,indexOf,return )

void FloatVector_obj::insertAt(int index,Float element){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_658_insertAt)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(element,"element")
HXLINE( 658)		bool _hx_tmp;
HXDLIN( 658)		if (!(!(this->fixed))) {
HXLINE( 658)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXLINE( 658)			_hx_tmp = true;
            		}
HXDLIN( 658)		if (_hx_tmp) {
HXLINE( 660)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,insertAt,(void))

 ::Dynamic FloatVector_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_669_iterator)
            	HX_STACK_THIS(this)
HXLINE( 669)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,iterator,return )

::String FloatVector_obj::join(::String sep){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_676_join)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sep,"sep")
HXLINE( 676)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,join,return )

int FloatVector_obj::lastIndexOf(Float x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_681_lastIndexOf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE( 683)		HX_VARI( int,i) = (this->_hx___array->length - (int)1);
HXLINE( 685)		while(hx::IsGreaterEq( i,from )){
HXLINE( 687)			if ((this->_hx___array->__get(i) == x)) {
HXLINE( 687)				return i;
            			}
HXLINE( 688)			i = (i - (int)1);
            		}
HXLINE( 692)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,lastIndexOf,return )

 ::Dynamic FloatVector_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_699_pop)
            	HX_STACK_THIS(this)
HXLINE( 699)		if (!(this->fixed)) {
HXLINE( 701)			return this->_hx___array->pop();
            		}
            		else {
HXLINE( 705)			return null();
            		}
HXLINE( 699)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,pop,return )

int FloatVector_obj::push(Float x){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_714_push)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 714)		if (!(this->fixed)) {
HXLINE( 716)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE( 720)			return this->_hx___array->length;
            		}
HXLINE( 714)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,push,return )

void FloatVector_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_729_reverse)
            	HX_STACK_THIS(this)
HXLINE( 729)		this->_hx___array->reverse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,reverse,(void))

Float FloatVector_obj::set(int index,Float value){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_736_set)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
HXLINE( 736)		bool _hx_tmp;
HXDLIN( 736)		if (!(!(this->fixed))) {
HXLINE( 736)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXLINE( 736)			_hx_tmp = true;
            		}
HXDLIN( 736)		if (_hx_tmp) {
HXLINE( 738)			return (this->_hx___array[index] = value);
            		}
            		else {
HXLINE( 742)			return value;
            		}
HXLINE( 736)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,set,return )

 ::Dynamic FloatVector_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_751_shift)
            	HX_STACK_THIS(this)
HXLINE( 751)		if (!(this->fixed)) {
HXLINE( 753)			return this->_hx___array->shift();
            		}
            		else {
HXLINE( 757)			return null();
            		}
HXLINE( 751)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,shift,return )

::Dynamic FloatVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_GC_STACKFRAME(&_hx_pos_055b1e986ae1a23a_766_slice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(startIndex,"startIndex")
            	HX_STACK_ARG(endIndex,"endIndex")
HXLINE( 766)		return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->slice(startIndex,endIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,slice,return )

void FloatVector_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_773_sort)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE( 773)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,sort,(void))

::Dynamic FloatVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_055b1e986ae1a23a_780_splice)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE( 780)		return  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(FloatVector_obj,splice,return )

::String FloatVector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_787_toString)
            	HX_STACK_THIS(this)
HXLINE( 787)		return this->_hx___array->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,toString,return )

void FloatVector_obj::unshift(Float x){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_794_unshift)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE( 794)		if (!(this->fixed)) {
HXLINE( 796)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,unshift,(void))

int FloatVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_812_get_length)
            	HX_STACK_THIS(this)
HXLINE( 812)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FloatVector_obj,get_length,return )

int FloatVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_055b1e986ae1a23a_817_set_length)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 819)		if (!(this->fixed)) {
HXLINE( 823)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE( 852)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FloatVector_obj,set_length,return )


hx::ObjectPtr< FloatVector_obj > FloatVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::Array< Float > array) {
	hx::ObjectPtr< FloatVector_obj > __this = new FloatVector_obj();
	__this->__construct(length,fixed,array);
	return __this;
}

hx::ObjectPtr< FloatVector_obj > FloatVector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::Array< Float > array) {
	FloatVector_obj *__this = (FloatVector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FloatVector_obj), true, "openfl._Vector.FloatVector"));
	*(void **)__this = FloatVector_obj::_hx_vtable;
	__this->__construct(length,fixed,array);
	return __this;
}

FloatVector_obj::FloatVector_obj()
{
}

void FloatVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FloatVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void FloatVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val FloatVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn()); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn()); }
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn()); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn()); }
		if (HX_FIELD_EQ(inName,"sort") ) { return hx::Val( sort_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return hx::Val( fixed); }
		if (HX_FIELD_EQ(inName,"shift") ) { return hx::Val( shift_dyn()); }
		if (HX_FIELD_EQ(inName,"slice") ) { return hx::Val( slice_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"splice") ) { return hx::Val( splice_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return hx::Val( _hx___array); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn()); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn()); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return hx::Val( unshift_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return hx::Val( insertAt_dyn()); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return hx::Val( lastIndexOf_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FloatVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FloatVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FloatVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FloatVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(FloatVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FloatVector_obj_sStaticStorageInfo = 0;
#endif

static ::String FloatVector_obj_sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void FloatVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FloatVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FloatVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FloatVector_obj::__mClass,"__mClass");
};

#endif

hx::Class FloatVector_obj::__mClass;

void FloatVector_obj::__register()
{
	hx::Object *dummy = new FloatVector_obj;
	FloatVector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.FloatVector","\x95","\x63","\xf0","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FloatVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FloatVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FloatVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FloatVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FloatVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FloatVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
