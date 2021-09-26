// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_xa3_Csv
#include <xa3/Csv.h>
#endif
#ifndef INCLUDED_xa3_QuoteCells
#include <xa3/QuoteCells.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_12_main,"Main","main",0xed0e206e,"Main.main","Main.hx",12,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_15_takePeople,"Main","takePeople",0x6485a3eb,"Main.takePeople","Main.hx",15,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07825a7d;
}

void Main_obj::main(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_12_main)
HXDLIN(  12)		::Sys_obj::println(::Main_obj::takePeople(100));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))

::Array< ::String > Main_obj::takePeople(int count){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_15_takePeople)
HXLINE(  28)		::String name = HX_("people",4f,0a,25,39);
HXLINE(  29)		::String content = ::haxe::Resource_obj::getString(name);
HXLINE(  30)		if (::hx::IsNull( content )) {
HXLINE(  31)			::Sys_obj::println((HX_("could not get resource ",dc,fe,10,80) + name));
HXLINE(  32)			return null();
            		}
HXLINE(  34)		::String fieldName = HX_("name",4b,72,ff,48);
HXLINE(  35)		 ::xa3::Csv csv = ::xa3::Csv_obj::fromString(HX_("people",4f,0a,25,39),content,null(),null());
HXLINE(  36)		::Array< ::Dynamic> lines = csv->lines->splice(0,count);
HXLINE(  37)		::Array< ::String > result = ::Array_obj< ::String >::__new(lines->length);
HXDLIN(  37)		{
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			int _g1 = lines->length;
HXDLIN(  37)			while((_g < _g1)){
HXLINE(  37)				_g = (_g + 1);
HXDLIN(  37)				int i = (_g - 1);
HXDLIN(  37)				{
HXLINE(  37)					::String inValue = ( ( ::haxe::ds::StringMap)(_hx_array_unsafe_get(lines,i)) )->get_string(fieldName);
HXDLIN(  37)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(  37)		::Array< ::String > people = result;
HXLINE(  39)		return people;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,takePeople,return )


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"takePeople") ) { outValue = takePeople_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	HX_("takePeople",f6,25,fe,cc),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
