// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c34ee807a90e0cf_77_new,"sys.net._Socket.SocketOutput","new",0x717472d4,"sys.net._Socket.SocketOutput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",77,0xa375f0f1)
HX_LOCAL_STACK_FRAME(_hx_pos_2c34ee807a90e0cf_80_writeByte,"sys.net._Socket.SocketOutput","writeByte",0xbfd704fb,"sys.net._Socket.SocketOutput.writeByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",80,0xa375f0f1)
HX_LOCAL_STACK_FRAME(_hx_pos_2c34ee807a90e0cf_94_writeBytes,"sys.net._Socket.SocketOutput","writeBytes",0x1c4d5718,"sys.net._Socket.SocketOutput.writeBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",94,0xa375f0f1)
HX_LOCAL_STACK_FRAME(_hx_pos_2c34ee807a90e0cf_106_close,"sys.net._Socket.SocketOutput","close",0xbcc83f2c,"sys.net._Socket.SocketOutput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",106,0xa375f0f1)
namespace sys{
namespace net{
namespace _Socket{

void SocketOutput_obj::__construct( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_2c34ee807a90e0cf_77_new)
HXLINE(  77)		this->__s = s;
            	}

Dynamic SocketOutput_obj::__CreateEmpty() { return new SocketOutput_obj; }

void *SocketOutput_obj::_hx_vtable = 0;

Dynamic SocketOutput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SocketOutput_obj > _hx_result = new SocketOutput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SocketOutput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x13ddb4b6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x13ddb4b6;
	} else {
		return inClassId==(int)0x3473efad;
	}
}

void SocketOutput_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_2c34ee807a90e0cf_80_writeByte)
HXLINE(  81)		if (hx::IsNull( this->__s )) {
HXLINE(  82)			HX_STACK_DO_THROW(HX_("Invalid handle",d1,71,75,85));
            		}
HXLINE(  83)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  84)			_hx_std_socket_send_char(this->__s,c);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  86)				if (hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  87)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            				}
            				else {
HXLINE(  89)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


int SocketOutput_obj::writeBytes( ::haxe::io::Bytes buf,int pos,int len){
            	HX_GC_STACKFRAME(&_hx_pos_2c34ee807a90e0cf_94_writeBytes)
HXLINE(  94)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  94)			return _hx_std_socket_send(this->__s,buf->b,pos,len);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  97)				if (hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE(  98)					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            				}
            				else {
HXLINE(  99)					if (hx::IsEq( e,HX_("EOF",9c,a0,34,00) )) {
HXLINE( 100)						HX_STACK_DO_THROW( ::haxe::io::Eof_obj::__alloc( HX_CTX ));
            					}
            					else {
HXLINE( 102)						HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  94)		return (int)0;
            	}


void SocketOutput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_2c34ee807a90e0cf_106_close)
HXLINE( 107)		this->super::close();
HXLINE( 108)		if (hx::IsNotNull( this->__s )) {
HXLINE( 108)			_hx_std_socket_close(this->__s);
            		}
            	}



hx::ObjectPtr< SocketOutput_obj > SocketOutput_obj::__new( ::Dynamic s) {
	hx::ObjectPtr< SocketOutput_obj > __this = new SocketOutput_obj();
	__this->__construct(s);
	return __this;
}

hx::ObjectPtr< SocketOutput_obj > SocketOutput_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic s) {
	SocketOutput_obj *__this = (SocketOutput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SocketOutput_obj), true, "sys.net._Socket.SocketOutput"));
	*(void **)__this = SocketOutput_obj::_hx_vtable;
	__this->__construct(s);
	return __this;
}

SocketOutput_obj::SocketOutput_obj()
{
}

void SocketOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketOutput);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void SocketOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

hx::Val SocketOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return hx::Val( __s); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SocketOutput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SocketOutput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SocketOutput_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SocketOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String SocketOutput_obj_sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void SocketOutput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SocketOutput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class SocketOutput_obj::__mClass;

void SocketOutput_obj::__register()
{
	hx::Object *dummy = new SocketOutput_obj;
	SocketOutput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net._Socket.SocketOutput","\xe2","\xb8","\xed","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SocketOutput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SocketOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SocketOutput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SocketOutput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SocketOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SocketOutput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace net
} // end namespace _Socket
