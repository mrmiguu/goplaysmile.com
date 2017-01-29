// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_123_new,"sys.net.Socket","new",0x202a8cf7,"sys.net.Socket.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",123,0xa375f0f1)
HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_126_init,"sys.net.Socket","init",0x01c98299,"sys.net.Socket.init","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",126,0xa375f0f1)
HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_155_connect,"sys.net.Socket","connect",0x1ee69001,"sys.net.Socket.connect","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",155,0xa375f0f1)
HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_219_setBlocking,"sys.net.Socket","setBlocking",0xe5689b0e,"sys.net.Socket.setBlocking","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",219,0xa375f0f1)
HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_223_setFastSend,"sys.net.Socket","setFastSend",0x54236f5d,"sys.net.Socket.setFastSend","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",223,0xa375f0f1)
HX_DEFINE_STACK_FRAME(_hx_pos_abc44b2301b28fc5_226_select,"sys.net.Socket","select",0xfc0916c5,"sys.net.Socket.select","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",226,0xa375f0f1)
namespace sys{
namespace net{

void Socket_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_abc44b2301b28fc5_123_new)
            	HX_STACK_THIS(this)
HXLINE( 123)		this->init();
            	}

Dynamic Socket_obj::__CreateEmpty() { return new Socket_obj; }

void *Socket_obj::_hx_vtable = 0;

Dynamic Socket_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Socket_obj > _hx_result = new Socket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Socket_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x109f852f;
}

void Socket_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_abc44b2301b28fc5_126_init)
            	HX_STACK_THIS(this)
HXLINE( 127)		if (hx::IsNull( this->__s )) {
HXLINE( 127)			this->__s = _hx_std_socket_new(false);
            		}
HXLINE( 128)		this->input =  ::sys::net::_Socket::SocketInput_obj::__alloc( HX_CTX ,this->__s);
HXLINE( 129)		this->output =  ::sys::net::_Socket::SocketOutput_obj::__alloc( HX_CTX ,this->__s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,init,(void))

void Socket_obj::connect( ::sys::net::Host host,int port){
            	HX_STACKFRAME(&_hx_pos_abc44b2301b28fc5_155_connect)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(host,"host")
            	HX_STACK_ARG(port,"port")
HXLINE( 155)		try {
            			HX_STACK_CATCHABLE(::String, 0);
HXLINE( 156)			_hx_std_socket_connect(this->__s,host->ip,port);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass< ::String >() ){
            				HX_STACK_BEGIN_CATCH
            				::String s = _hx_e;
HXLINE( 158)				if ((s == HX_("Invalid socket handle",6c,15,f9,09))) {
HXLINE( 159)					HX_STACK_DO_THROW((((HX_("Failed to connect on ",a9,2b,e3,45) + host->toString()) + HX_(":",3a,00,00,00)) + port));
            				}
            				else {
HXLINE( 160)					if ((s != HX_("Blocking",d5,e1,61,f3))) {
HXLINE( 165)						HX_STACK_DO_RETHROW(s);
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,connect,(void))

void Socket_obj::setBlocking(bool b){
            	HX_STACKFRAME(&_hx_pos_abc44b2301b28fc5_219_setBlocking)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(b,"b")
HXLINE( 219)		_hx_std_socket_set_blocking(this->__s,b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,setBlocking,(void))

void Socket_obj::setFastSend(bool b){
            	HX_STACKFRAME(&_hx_pos_abc44b2301b28fc5_223_setFastSend)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(b,"b")
HXLINE( 223)		_hx_std_socket_set_fast_send(this->__s,b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,setFastSend,(void))

 ::Dynamic Socket_obj::select(::Array< ::Dynamic> read,::Array< ::Dynamic> write,::Array< ::Dynamic> others, ::Dynamic timeout){
            	HX_STACKFRAME(&_hx_pos_abc44b2301b28fc5_226_select)
            	HX_STACK_ARG(read,"read")
            	HX_STACK_ARG(write,"write")
            	HX_STACK_ARG(others,"others")
            	HX_STACK_ARG(timeout,"timeout")
HXLINE( 227)		HX_VARI( ::cpp::VirtualArray,neko_array) = _hx_std_socket_select(read,write,others,timeout);
HXLINE( 228)		if (hx::IsNull( neko_array )) {
HXLINE( 229)			HX_STACK_DO_THROW(HX_("Select error",c4,23,4b,b6));
            		}
HXLINE( 230)		return  ::Dynamic(hx::AnonStruct3_obj< ::Array< ::Dynamic>,::Array< ::Dynamic>,::Array< ::Dynamic> >::Create(HX_("read",56,4b,a7,4b),( (::Array< ::Dynamic>)(neko_array->__get((int)0)) ),HX_("write",df,6c,59,d0),( (::Array< ::Dynamic>)(neko_array->__get((int)1)) ),HX_("others",a3,8f,23,71),( (::Array< ::Dynamic>)(neko_array->__get((int)2)) )));
            	/*?*/}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Socket_obj,select,return )


hx::ObjectPtr< Socket_obj > Socket_obj::__new() {
	hx::ObjectPtr< Socket_obj > __this = new Socket_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Socket_obj > Socket_obj::__alloc(hx::Ctx *_hx_ctx) {
	Socket_obj *__this = (Socket_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Socket_obj), true, "sys.net.Socket"));
	*(void **)__this = Socket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(output,"output");
}

hx::Val Socket_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return hx::Val( __s); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return hx::Val( input); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return hx::Val( output); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return hx::Val( connect_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBlocking") ) { return hx::Val( setBlocking_dyn()); }
		if (HX_FIELD_EQ(inName,"setFastSend") ) { return hx::Val( setFastSend_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Socket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true; }
	}
	return false;
}

hx::Val Socket_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Socket_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Socket_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Socket_obj,output),HX_HCSTRING("output","\x01","\x0f","\x81","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Socket_obj_sStaticStorageInfo = 0;
#endif

static ::String Socket_obj_sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("output","\x01","\x0f","\x81","\x0c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	HX_HCSTRING("setBlocking","\x77","\xef","\x10","\x4a"),
	HX_HCSTRING("setFastSend","\xc6","\xc3","\xcb","\xb8"),
	::String(null()) };

static void Socket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Socket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
};

#endif

hx::Class Socket_obj::__mClass;

static ::String Socket_obj_sStaticFields[] = {
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	::String(null())
};

void Socket_obj::__register()
{
	hx::Object *dummy = new Socket_obj;
	Socket_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.Socket","\x85","\x45","\x9d","\xb4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Socket_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Socket_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Socket_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Socket_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Socket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Socket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Socket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Socket_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace net