// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1173_new,"openfl._Vector.IntVector","new",0x6313ae9a,"openfl._Vector.IntVector.new","openfl/Vector.hx",1173,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1196_concat,"openfl._Vector.IntVector","concat",0x4a254b1a,"openfl._Vector.IntVector.concat","openfl/Vector.hx",1196,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1211_copy,"openfl._Vector.IntVector","copy",0x46e7503b,"openfl._Vector.IntVector.copy","openfl/Vector.hx",1211,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1218_get,"openfl._Vector.IntVector","get",0x630e5ed0,"openfl._Vector.IntVector.get","openfl/Vector.hx",1218,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1223_indexOf,"openfl._Vector.IntVector","indexOf",0x6903cc03,"openfl._Vector.IntVector.indexOf","openfl/Vector.hx",1223,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1242_insertAt,"openfl._Vector.IntVector","insertAt",0x75cdcc12,"openfl._Vector.IntVector.insertAt","openfl/Vector.hx",1242,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1253_iterator,"openfl._Vector.IntVector","iterator",0x47489974,"openfl._Vector.IntVector.iterator","openfl/Vector.hx",1253,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1260_join,"openfl._Vector.IntVector","join",0x4b87c870,"openfl._Vector.IntVector.join","openfl/Vector.hx",1260,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1265_lastIndexOf,"openfl._Vector.IntVector","lastIndexOf",0x72eaa54d,"openfl._Vector.IntVector.lastIndexOf","openfl/Vector.hx",1265,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1283_pop,"openfl._Vector.IntVector","pop",0x63153bcb,"openfl._Vector.IntVector.pop","openfl/Vector.hx",1283,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1298_push,"openfl._Vector.IntVector","push",0x4f83a660,"openfl._Vector.IntVector.push","openfl/Vector.hx",1298,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1313_reverse,"openfl._Vector.IntVector","reverse",0xa340bc5c,"openfl._Vector.IntVector.reverse","openfl/Vector.hx",1313,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1320_set,"openfl._Vector.IntVector","set",0x631779dc,"openfl._Vector.IntVector.set","openfl/Vector.hx",1320,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1335_shift,"openfl._Vector.IntVector","shift",0xf5424d3c,"openfl._Vector.IntVector.shift","openfl/Vector.hx",1335,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1350_slice,"openfl._Vector.IntVector","slice",0xf7e7250c,"openfl._Vector.IntVector.slice","openfl/Vector.hx",1350,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1357_sort,"openfl._Vector.IntVector","sort",0x517abbe4,"openfl._Vector.IntVector.sort","openfl/Vector.hx",1357,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1364_splice,"openfl._Vector.IntVector","splice",0x41f3c782,"openfl._Vector.IntVector.splice","openfl/Vector.hx",1364,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1371_toString,"openfl._Vector.IntVector","toString",0xec1d2032,"openfl._Vector.IntVector.toString","openfl/Vector.hx",1371,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1378_unshift,"openfl._Vector.IntVector","unshift",0x00f866c3,"openfl._Vector.IntVector.unshift","openfl/Vector.hx",1378,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1396_get_length,"openfl._Vector.IntVector","get_length",0x4714c1b5,"openfl._Vector.IntVector.get_length","openfl/Vector.hx",1396,0x4a01873c)
HX_LOCAL_STACK_FRAME(_hx_pos_0ca25ed6048e1cbf_1401_set_length,"openfl._Vector.IntVector","set_length",0x4a926029,"openfl._Vector.IntVector.set_length","openfl/Vector.hx",1401,0x4a01873c)
namespace openfl{
namespace _Vector{

void IntVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::Array< int > array){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1173_new)
HXLINE(1175)		if (hx::IsNull( array )) {
HXLINE(1177)			array = ::Array_obj< int >::__new();
            		}
HXLINE(1181)		this->_hx___array = array;
HXLINE(1183)		if (hx::IsNotNull( length )) {
HXLINE(1185)			this->set_length(length);
            		}
HXLINE(1189)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic IntVector_obj::__CreateEmpty() { return new IntVector_obj; }

void *IntVector_obj::_hx_vtable = 0;

Dynamic IntVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IntVector_obj > _hx_result = new IntVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IntVector_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x56650740;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector= {
	( int (hx::Object::*)())&::openfl::_Vector::IntVector_obj::get_length,
	( int (hx::Object::*)(int))&::openfl::_Vector::IntVector_obj::set_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::IntVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(int))&::openfl::_Vector::IntVector_obj::get_c4bfee54,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::indexOf_02dfccf1,
	( void (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::IntVector_obj::insertAt_5d1f93e2,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::IntVector_obj::join,
	( int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::lastIndexOf_02dfccf1,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::pop,
	( int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::push_9c73657a,
	( void (hx::Object::*)())&::openfl::_Vector::IntVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(int, ::Dynamic))&::openfl::_Vector::IntVector_obj::set_15539e57,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::IntVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::IntVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::sort,
	( ::Dynamic (hx::Object::*)(int,int))&::openfl::_Vector::IntVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::IntVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::IntVector_obj::unshift_489e4d05,
};

void IntVector_obj::unshift_489e4d05( ::Dynamic x) {
			unshift(x);
}

 ::Dynamic IntVector_obj::set_15539e57(int index, ::Dynamic value) {
			return set(index,value);
}

int IntVector_obj::push_9c73657a( ::Dynamic x) {
			return push(x);
}

int IntVector_obj::lastIndexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return lastIndexOf(x,from);
}

void IntVector_obj::insertAt_5d1f93e2(int index, ::Dynamic element) {
			insertAt(index,element);
}

int IntVector_obj::indexOf_02dfccf1( ::Dynamic x, ::Dynamic from) {
			return indexOf(x,from);
}

 ::Dynamic IntVector_obj::get_c4bfee54(int index) {
			return get(index);
}
void *IntVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_IntVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic IntVector_obj::concat(::Dynamic a){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1196_concat)
HXLINE(1196)		if (hx::IsNull( a )) {
HXLINE(1198)			return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->copy());
            		}
            		else {
HXLINE(1202)			::Array< int > _hx_tmp = this->_hx___array;
HXDLIN(1202)			return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),_hx_tmp->concat(hx::TCast<  ::openfl::_Vector::IntVector >::cast(a)->_hx___array));
            		}
HXLINE(1196)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,concat,return )

::Dynamic IntVector_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1211_copy)
HXLINE(1211)		bool _hx_tmp = this->fixed;
HXDLIN(1211)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),_hx_tmp,this->_hx___array->copy());
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,copy,return )

int IntVector_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1218_get)
HXLINE(1218)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,get,return )

int IntVector_obj::indexOf(int x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1223_indexOf)
HXLINE(1225)		{
HXLINE(1225)			int _g1 = from;
HXDLIN(1225)			int _g = this->_hx___array->length;
HXDLIN(1225)			while((_g1 < _g)){
HXLINE(1225)				_g1 = (_g1 + (int)1);
HXDLIN(1225)				int i = (_g1 - (int)1);
HXLINE(1227)				if ((this->_hx___array->__get(i) == x)) {
HXLINE(1229)					return i;
            				}
            			}
            		}
HXLINE(1235)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,indexOf,return )

void IntVector_obj::insertAt(int index,int element){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1242_insertAt)
HXLINE(1242)		bool _hx_tmp;
HXDLIN(1242)		if (!(!(this->fixed))) {
HXLINE(1242)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXLINE(1242)			_hx_tmp = true;
            		}
HXDLIN(1242)		if (_hx_tmp) {
HXLINE(1244)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,insertAt,(void))

 ::Dynamic IntVector_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1253_iterator)
HXLINE(1253)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,iterator,return )

::String IntVector_obj::join(::String sep){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1260_join)
HXLINE(1260)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,join,return )

int IntVector_obj::lastIndexOf(int x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1265_lastIndexOf)
HXLINE(1267)		int i = (this->_hx___array->length - (int)1);
HXLINE(1269)		while(hx::IsGreaterEq( i,from )){
HXLINE(1271)			if ((this->_hx___array->__get(i) == x)) {
HXLINE(1271)				return i;
            			}
HXLINE(1272)			i = (i - (int)1);
            		}
HXLINE(1276)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,lastIndexOf,return )

 ::Dynamic IntVector_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1283_pop)
HXLINE(1283)		if (!(this->fixed)) {
HXLINE(1285)			return this->_hx___array->pop();
            		}
            		else {
HXLINE(1289)			return null();
            		}
HXLINE(1283)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,pop,return )

int IntVector_obj::push(int x){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1298_push)
HXLINE(1298)		if (!(this->fixed)) {
HXLINE(1300)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1304)			return this->_hx___array->length;
            		}
HXLINE(1298)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,push,return )

void IntVector_obj::reverse(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1313_reverse)
HXLINE(1313)		this->_hx___array->reverse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,reverse,(void))

int IntVector_obj::set(int index,int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1320_set)
HXLINE(1320)		bool _hx_tmp;
HXDLIN(1320)		if (!(!(this->fixed))) {
HXLINE(1320)			_hx_tmp = (index < this->_hx___array->length);
            		}
            		else {
HXLINE(1320)			_hx_tmp = true;
            		}
HXDLIN(1320)		if (_hx_tmp) {
HXLINE(1322)			return (this->_hx___array[index] = value);
            		}
            		else {
HXLINE(1326)			return value;
            		}
HXLINE(1320)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,set,return )

 ::Dynamic IntVector_obj::shift(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1335_shift)
HXLINE(1335)		if (!(this->fixed)) {
HXLINE(1337)			return this->_hx___array->shift();
            		}
            		else {
HXLINE(1341)			return null();
            		}
HXLINE(1335)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,shift,return )

::Dynamic IntVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1350_slice)
HXLINE(1350)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->slice(startIndex,endIndex));
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,slice,return )

void IntVector_obj::sort( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1357_sort)
HXLINE(1357)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,sort,(void))

::Dynamic IntVector_obj::splice(int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1364_splice)
HXLINE(1364)		return  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,null(),null(),this->_hx___array->splice(pos,len));
            	}


HX_DEFINE_DYNAMIC_FUNC2(IntVector_obj,splice,return )

::String IntVector_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1371_toString)
HXLINE(1371)		return this->_hx___array->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,toString,return )

void IntVector_obj::unshift(int x){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1378_unshift)
HXLINE(1378)		if (!(this->fixed)) {
HXLINE(1380)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,unshift,(void))

int IntVector_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1396_get_length)
HXLINE(1396)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IntVector_obj,get_length,return )

int IntVector_obj::set_length(int value){
            	HX_STACKFRAME(&_hx_pos_0ca25ed6048e1cbf_1401_set_length)
HXLINE(1403)		if (!(this->fixed)) {
HXLINE(1407)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1436)		return this->_hx___array->length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(IntVector_obj,set_length,return )


hx::ObjectPtr< IntVector_obj > IntVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::Array< int > array) {
	hx::ObjectPtr< IntVector_obj > __this = new IntVector_obj();
	__this->__construct(length,fixed,array);
	return __this;
}

hx::ObjectPtr< IntVector_obj > IntVector_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::Array< int > array) {
	IntVector_obj *__this = (IntVector_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IntVector_obj), true, "openfl._Vector.IntVector"));
	*(void **)__this = IntVector_obj::_hx_vtable;
	__this->__construct(length,fixed,array);
	return __this;
}

IntVector_obj::IntVector_obj()
{
}

void IntVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void IntVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val IntVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val IntVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IntVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IntVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(IntVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(IntVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IntVector_obj_sStaticStorageInfo = 0;
#endif

static ::String IntVector_obj_sMemberFields[] = {
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

static void IntVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IntVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntVector_obj::__mClass,"__mClass");
};

#endif

hx::Class IntVector_obj::__mClass;

void IntVector_obj::__register()
{
	hx::Object *dummy = new IntVector_obj;
	IntVector_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.IntVector","\xa8","\x19","\x86","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IntVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IntVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IntVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IntVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IntVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IntVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector
