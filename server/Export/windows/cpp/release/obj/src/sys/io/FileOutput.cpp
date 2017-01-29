// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c11bb132f291b243_32_new,"sys.io.FileOutput","new",0x19e22a16,"sys.io.FileOutput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",32,0x32123c60)
HX_DEFINE_STACK_FRAME(_hx_pos_c11bb132f291b243_36_writeByte,"sys.io.FileOutput","writeByte",0x887099bd,"sys.io.FileOutput.writeByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",36,0x32123c60)
HX_DEFINE_STACK_FRAME(_hx_pos_c11bb132f291b243_40_writeBytes,"sys.io.FileOutput","writeBytes",0xda15ec16,"sys.io.FileOutput.writeBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",40,0x32123c60)
HX_DEFINE_STACK_FRAME(_hx_pos_c11bb132f291b243_47_close,"sys.io.FileOutput","close",0xa583caee,"sys.io.FileOutput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/FileOutput.hx",47,0x32123c60)
namespace sys{
namespace io{

void FileOutput_obj::__construct( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_c11bb132f291b243_32_new)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE(  32)		this->_hx___f = f;
            	}

Dynamic FileOutput_obj::__CreateEmpty() { return new FileOutput_obj; }

void *FileOutput_obj::_hx_vtable = 0;

Dynamic FileOutput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileOutput_obj > _hx_result = new FileOutput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FileOutput_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3473efad) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3473efad;
	} else {
		return inClassId==(int)0x7f720640;
	}
}

void FileOutput_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_c11bb132f291b243_36_writeByte)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  36)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  36)			_hx_std_file_write_char(this->_hx___f,c);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  36)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


int FileOutput_obj::writeBytes( ::haxe::io::Bytes s,int p,int l){
            	HX_STACKFRAME(&_hx_pos_c11bb132f291b243_40_writeBytes)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(p,"p")
            	HX_STACK_ARG(l,"l")
HXLINE(  40)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  40)			return _hx_std_file_write(this->_hx___f,s->b,p,l);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE(  40)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  40)		return (int)0;
            	}


void FileOutput_obj::close(){
            	HX_STACKFRAME(&_hx_pos_c11bb132f291b243_47_close)
            	HX_STACK_THIS(this)
HXLINE(  48)		this->super::close();
HXLINE(  49)		_hx_std_file_close(this->_hx___f);
            	}



hx::ObjectPtr< FileOutput_obj > FileOutput_obj::__new( ::Dynamic f) {
	hx::ObjectPtr< FileOutput_obj > __this = new FileOutput_obj();
	__this->__construct(f);
	return __this;
}

hx::ObjectPtr< FileOutput_obj > FileOutput_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic f) {
	FileOutput_obj *__this = (FileOutput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FileOutput_obj), true, "sys.io.FileOutput"));
	*(void **)__this = FileOutput_obj::_hx_vtable;
	__this->__construct(f);
	return __this;
}

FileOutput_obj::FileOutput_obj()
{
}

void FileOutput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileOutput);
	HX_MARK_MEMBER_NAME(_hx___f,"__f");
	HX_MARK_END_CLASS();
}

void FileOutput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___f,"__f");
}

hx::Val FileOutput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return hx::Val( _hx___f); }
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

hx::Val FileOutput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { _hx___f=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileOutput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__f","\x46","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FileOutput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FileOutput_obj,_hx___f),HX_HCSTRING("__f","\x46","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FileOutput_obj_sStaticStorageInfo = 0;
#endif

static ::String FileOutput_obj_sMemberFields[] = {
	HX_HCSTRING("__f","\x46","\x69","\x48","\x00"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	::String(null()) };

static void FileOutput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileOutput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileOutput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileOutput_obj::__mClass,"__mClass");
};

#endif

hx::Class FileOutput_obj::__mClass;

void FileOutput_obj::__register()
{
	hx::Object *dummy = new FileOutput_obj;
	FileOutput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.FileOutput","\x24","\x27","\x1a","\x0b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileOutput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FileOutput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FileOutput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileOutput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileOutput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileOutput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
