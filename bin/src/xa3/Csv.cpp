// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_da30ac745df43628_22_new,"xa3.Csv","new",0x7ecec654,"xa3.Csv.new","xa3/Csv.hx",22,0x66fed65d)
HX_LOCAL_STACK_FRAME(_hx_pos_da30ac745df43628_30_fromString,"xa3.Csv","fromString",0xc4869e67,"xa3.Csv.fromString","xa3/Csv.hx",30,0x66fed65d)
HX_LOCAL_STACK_FRAME(_hx_pos_da30ac745df43628_40_fromColumnAndStringArrays,"xa3.Csv","fromColumnAndStringArrays",0x83f5d2d6,"xa3.Csv.fromColumnAndStringArrays","xa3/Csv.hx",40,0x66fed65d)
HX_LOCAL_STACK_FRAME(_hx_pos_da30ac745df43628_79_filterEmptyLines,"xa3.Csv","filterEmptyLines",0x5f980f96,"xa3.Csv.filterEmptyLines","xa3/Csv.hx",79,0x66fed65d)
HX_LOCAL_STACK_FRAME(_hx_pos_da30ac745df43628_85_decode,"xa3.Csv","decode",0x414197ba,"xa3.Csv.decode","xa3/Csv.hx",85,0x66fed65d)
HX_LOCAL_STACK_FRAME(_hx_pos_da30ac745df43628_108_detectDelimiter,"xa3.Csv","detectDelimiter",0xad363018,"xa3.Csv.detectDelimiter","xa3/Csv.hx",108,0x66fed65d)
namespace xa3{

void Csv_obj::__construct(::String name,::Array< ::String > columnNames, ::haxe::ds::StringMap columnMap,::Array< ::Dynamic> lines){
            	HX_STACKFRAME(&_hx_pos_da30ac745df43628_22_new)
HXLINE(  24)		this->name = name;
HXLINE(  25)		this->columnNames = columnNames;
HXLINE(  26)		this->columnMap = columnMap;
HXLINE(  27)		this->lines = lines;
            	}

Dynamic Csv_obj::__CreateEmpty() { return new Csv_obj; }

void *Csv_obj::_hx_vtable = 0;

Dynamic Csv_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Csv_obj > _hx_result = new Csv_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Csv_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33b4fda0;
}

 ::xa3::Csv Csv_obj::fromString(::String name,::String content, ::xa3::QuoteCells __o_quoteCells,::String __o_inputDelimiter){
            		 ::xa3::QuoteCells quoteCells = __o_quoteCells;
            		if (::hx::IsNull(__o_quoteCells)) quoteCells = ::xa3::QuoteCells_obj::Autodetect_dyn();
            		::String inputDelimiter = __o_inputDelimiter;
            		if (::hx::IsNull(__o_inputDelimiter)) inputDelimiter = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_da30ac745df43628_30_fromString)
HXLINE(  32)		::String delimiter;
HXDLIN(  32)		if ((inputDelimiter == HX_("",00,00,00,00))) {
HXLINE(  32)			delimiter = ::xa3::Csv_obj::detectDelimiter(content);
            		}
            		else {
HXLINE(  32)			delimiter = inputDelimiter;
            		}
HXLINE(  34)		::Array< ::Dynamic> decoded = ::xa3::Csv_obj::decode(content,quoteCells,delimiter,null());
HXLINE(  35)		::Array< ::String > columnNames;
HXDLIN(  35)		if ((decoded->length == 0)) {
HXLINE(  35)			columnNames = ::Array_obj< ::String >::__new(0);
            		}
            		else {
HXLINE(  35)			columnNames = decoded->__get(0).StaticCast< ::Array< ::String > >();
            		}
HXLINE(  37)		return ::xa3::Csv_obj::fromColumnAndStringArrays(name,columnNames,decoded->slice(1,null()),inputDelimiter);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Csv_obj,fromString,return )

 ::xa3::Csv Csv_obj::fromColumnAndStringArrays(::String name,::Array< ::String > columnNames,::Array< ::Dynamic> decodedLines,::String __o_inputDelimiter){
            		::String inputDelimiter = __o_inputDelimiter;
            		if (::hx::IsNull(__o_inputDelimiter)) inputDelimiter = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_da30ac745df43628_40_fromColumnAndStringArrays)
HXLINE(  42)		 ::haxe::ds::StringMap columnMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  43)		{
HXLINE(  43)			int _g = 0;
HXDLIN(  43)			int _g1 = columnNames->length;
HXDLIN(  43)			while((_g < _g1)){
HXLINE(  43)				_g = (_g + 1);
HXDLIN(  43)				int i = (_g - 1);
HXDLIN(  43)				columnMap->set(columnNames->__get(i),i);
            			}
            		}
HXLINE(  45)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(decodedLines->length);
HXDLIN(  45)		{
HXLINE(  45)			int _g2 = 0;
HXDLIN(  45)			int _g3 = decodedLines->length;
HXDLIN(  45)			while((_g2 < _g3)){
HXLINE(  45)				_g2 = (_g2 + 1);
HXDLIN(  45)				int i = (_g2 - 1);
HXDLIN(  45)				{
HXLINE(  45)					::Array< ::String > decodedLine = ( (::Array< ::String >)(_hx_array_unsafe_get(decodedLines,i)) );
HXDLIN(  45)					 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  45)					{
HXLINE(  45)						int _g1 = 0;
HXDLIN(  45)						int _g3 = columnNames->length;
HXDLIN(  45)						while((_g1 < _g3)){
HXLINE(  45)							_g1 = (_g1 + 1);
HXDLIN(  45)							int i = (_g1 - 1);
HXDLIN(  45)							_g->set(columnNames->__get(i),decodedLine->__get(i));
            						}
            					}
HXDLIN(  45)					result->__unsafe_set(i,_g);
            				}
            			}
            		}
HXDLIN(  45)		::Array< ::Dynamic> lines = result;
HXLINE(  47)		::Array< ::Dynamic> nonEmptyLines = ::xa3::Csv_obj::filterEmptyLines(lines);
HXLINE(  49)		return  ::xa3::Csv_obj::__alloc( HX_CTX ,name,columnNames,columnMap,nonEmptyLines);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Csv_obj,fromColumnAndStringArrays,return )

::Array< ::Dynamic> Csv_obj::filterEmptyLines(::Array< ::Dynamic> lines){
            	HX_STACKFRAME(&_hx_pos_da30ac745df43628_79_filterEmptyLines)
HXDLIN(  79)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  79)		{
HXDLIN(  79)			int _g1 = 0;
HXDLIN(  79)			::Array< ::Dynamic> _g2 = lines;
HXDLIN(  79)			while((_g1 < _g2->length)){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				bool _hx_run( ::haxe::ds::StringMap line){
            					HX_STACKFRAME(&_hx_pos_da30ac745df43628_79_filterEmptyLines)
HXLINE(  80)					{
HXLINE(  80)						 ::Dynamic cell = line->iterator();
HXDLIN(  80)						while(( (bool)(cell->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  80)							::String cell1 = ( (::String)(cell->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  80)							if ((cell1 != HX_("",00,00,00,00))) {
HXLINE(  80)								return true;
            							}
            						}
            					}
HXLINE(  81)					return false;
            				}
            				HX_END_LOCAL_FUNC1(return)

HXDLIN(  79)				 ::haxe::ds::StringMap v = _g2->__get(_g1).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN(  79)				_g1 = (_g1 + 1);
HXDLIN(  79)				if (( (bool)( ::Dynamic(new _hx_Closure_0())(v)) )) {
HXDLIN(  79)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  79)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Csv_obj,filterEmptyLines,return )

::Array< ::Dynamic> Csv_obj::decode(::String s, ::xa3::QuoteCells __o_quoteCells,::String __o_delimiter,::hx::Null< bool >  __o_trimCells){
            		 ::xa3::QuoteCells quoteCells = __o_quoteCells;
            		if (::hx::IsNull(__o_quoteCells)) quoteCells = ::xa3::QuoteCells_obj::Autodetect_dyn();
            		::String delimiter = __o_delimiter;
            		if (::hx::IsNull(__o_delimiter)) delimiter = HX_(";",3b,00,00,00);
            		bool trimCells = __o_trimCells.Default(true);
            	HX_STACKFRAME(&_hx_pos_da30ac745df43628_85_decode)
HXLINE(  87)		bool isQuoted;
HXDLIN(  87)		switch((int)(quoteCells->_hx_getIndex())){
            			case (int)0: {
HXLINE(  87)				isQuoted = true;
            			}
            			break;
            			case (int)1: {
HXLINE(  87)				isQuoted = false;
            			}
            			break;
            			case (int)2: {
HXLINE(  90)				if ((s.charAt(0) == HX_("\"",22,00,00,00))) {
HXLINE(  87)					isQuoted = true;
            				}
            				else {
HXLINE(  87)					isQuoted = false;
            				}
            			}
            			break;
            		}
HXLINE(  93)		if ((s.indexOf(HX_("\r",0d,00,00,00),null()) != -1)) {
HXLINE(  93)			s = ::StringTools_obj::replace(s,HX_("\r",0d,00,00,00),HX_("",00,00,00,00));
            		}
HXLINE(  94)		::Array< ::String > lines = s.split(HX_("\n",0a,00,00,00));
HXLINE(  96)		::Array< ::String > _g = ::Array_obj< ::String >::__new(0);
HXDLIN(  96)		{
HXLINE(  96)			int _g1 = 0;
HXDLIN(  96)			::Array< ::String > _g2 = lines;
HXDLIN(  96)			while((_g1 < _g2->length)){
HXLINE(  96)				::String v = _g2->__get(_g1);
HXDLIN(  96)				_g1 = (_g1 + 1);
HXDLIN(  96)				if ((v.length > 1)) {
HXLINE(  96)					_g->push(v);
            				}
            			}
            		}
HXDLIN(  96)		::Array< ::String > linesWithContent = _g;
HXLINE(  97)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(linesWithContent->length);
HXDLIN(  97)		{
HXLINE(  97)			int _g3 = 0;
HXDLIN(  97)			int _g4 = linesWithContent->length;
HXDLIN(  97)			while((_g3 < _g4)){
HXLINE(  97)				_g3 = (_g3 + 1);
HXDLIN(  97)				int i = (_g3 - 1);
HXDLIN(  97)				{
HXLINE(  97)					::Array< ::String > inValue = ( (::String)(_hx_array_unsafe_get(linesWithContent,i)) ).split(delimiter);
HXDLIN(  97)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN(  97)		::Array< ::Dynamic> linesArray = result;
HXLINE(  98)		::Array< ::Dynamic> trimmedLinesArray;
HXDLIN(  98)		if (trimCells) {
HXLINE(  98)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(linesArray->length);
HXDLIN(  98)			{
HXLINE(  98)				int _g = 0;
HXDLIN(  98)				int _g1 = linesArray->length;
HXDLIN(  98)				while((_g < _g1)){
HXLINE(  98)					_g = (_g + 1);
HXDLIN(  98)					int i = (_g - 1);
HXDLIN(  98)					{
HXLINE(  98)						::Array< ::String > line = ( (::Array< ::String >)(_hx_array_unsafe_get(linesArray,i)) );
HXDLIN(  98)						::Array< ::String > result1 = ::Array_obj< ::String >::__new(line->length);
HXDLIN(  98)						{
HXLINE(  98)							int _g1 = 0;
HXDLIN(  98)							int _g2 = line->length;
HXDLIN(  98)							while((_g1 < _g2)){
HXLINE(  98)								_g1 = (_g1 + 1);
HXDLIN(  98)								int i = (_g1 - 1);
HXDLIN(  98)								{
HXLINE(  98)									::String inValue = ::StringTools_obj::trim(( (::String)(_hx_array_unsafe_get(line,i)) ));
HXDLIN(  98)									result1->__unsafe_set(i,inValue);
            								}
            							}
            						}
HXDLIN(  98)						result->__unsafe_set(i,result1);
            					}
            				}
            			}
HXDLIN(  98)			trimmedLinesArray = result;
            		}
            		else {
HXLINE(  98)			trimmedLinesArray = linesArray;
            		}
HXLINE( 100)		if (isQuoted) {
HXLINE( 100)			::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(trimmedLinesArray->length);
HXDLIN( 100)			{
HXLINE( 100)				int _g = 0;
HXDLIN( 100)				int _g1 = trimmedLinesArray->length;
HXDLIN( 100)				while((_g < _g1)){
HXLINE( 100)					_g = (_g + 1);
HXDLIN( 100)					int i = (_g - 1);
HXDLIN( 100)					{
HXLINE( 100)						::Array< ::String > lineArray = ( (::Array< ::String >)(_hx_array_unsafe_get(trimmedLinesArray,i)) );
HXDLIN( 100)						::Array< ::String > result1 = ::Array_obj< ::String >::__new(lineArray->length);
HXDLIN( 100)						{
HXLINE( 100)							int _g1 = 0;
HXDLIN( 100)							int _g2 = lineArray->length;
HXDLIN( 100)							while((_g1 < _g2)){
HXLINE( 100)								_g1 = (_g1 + 1);
HXDLIN( 100)								int i = (_g1 - 1);
HXDLIN( 100)								{
HXLINE( 100)									::String cell = ( (::String)(_hx_array_unsafe_get(lineArray,i)) );
HXDLIN( 100)									::String inValue = cell.substr(1,(cell.length - 2));
HXDLIN( 100)									result1->__unsafe_set(i,inValue);
            								}
            							}
            						}
HXDLIN( 100)						result->__unsafe_set(i,result1);
            					}
            				}
            			}
HXDLIN( 100)			return result;
            		}
            		else {
HXLINE( 100)			return trimmedLinesArray;
            		}
HXDLIN( 100)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Csv_obj,decode,return )

::String Csv_obj::detectDelimiter(::String s){
            	HX_STACKFRAME(&_hx_pos_da30ac745df43628_108_detectDelimiter)
HXLINE( 110)		::String delimiter = HX_(";",3b,00,00,00);
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			int _g1 = s.length;
HXDLIN( 111)			while((_g < _g1)){
HXLINE( 111)				_g = (_g + 1);
HXDLIN( 111)				int i = (_g - 1);
HXLINE( 113)				::String _hx_switch_0 = s.charAt(i);
            				if (  (_hx_switch_0==HX_("\t",09,00,00,00)) ){
HXLINE( 119)					delimiter = HX_("\t",09,00,00,00);
HXLINE( 120)					goto _hx_goto_17;
HXLINE( 118)					goto _hx_goto_18;
            				}
            				if (  (_hx_switch_0==HX_(",",2c,00,00,00)) ){
HXLINE( 116)					delimiter = HX_(",",2c,00,00,00);
HXLINE( 117)					goto _hx_goto_17;
HXLINE( 115)					goto _hx_goto_18;
            				}
            				if (  (_hx_switch_0==HX_(";",3b,00,00,00)) ){
HXLINE( 114)					goto _hx_goto_17;
HXDLIN( 114)					goto _hx_goto_18;
            				}
            				_hx_goto_18:;
            			}
            			_hx_goto_17:;
            		}
HXLINE( 124)		return delimiter;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Csv_obj,detectDelimiter,return )


::hx::ObjectPtr< Csv_obj > Csv_obj::__new(::String name,::Array< ::String > columnNames, ::haxe::ds::StringMap columnMap,::Array< ::Dynamic> lines) {
	::hx::ObjectPtr< Csv_obj > __this = new Csv_obj();
	__this->__construct(name,columnNames,columnMap,lines);
	return __this;
}

::hx::ObjectPtr< Csv_obj > Csv_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::Array< ::String > columnNames, ::haxe::ds::StringMap columnMap,::Array< ::Dynamic> lines) {
	Csv_obj *__this = (Csv_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Csv_obj), true, "xa3.Csv"));
	*(void **)__this = Csv_obj::_hx_vtable;
	__this->__construct(name,columnNames,columnMap,lines);
	return __this;
}

Csv_obj::Csv_obj()
{
}

void Csv_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Csv);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(columnNames,"columnNames");
	HX_MARK_MEMBER_NAME(columnMap,"columnMap");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_END_CLASS();
}

void Csv_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(columnNames,"columnNames");
	HX_VISIT_MEMBER_NAME(columnMap,"columnMap");
	HX_VISIT_MEMBER_NAME(lines,"lines");
}

::hx::Val Csv_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return ::hx::Val( lines ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"columnMap") ) { return ::hx::Val( columnMap ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"columnNames") ) { return ::hx::Val( columnNames ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Csv_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"detectDelimiter") ) { outValue = detectDelimiter_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"filterEmptyLines") ) { outValue = filterEmptyLines_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"fromColumnAndStringArrays") ) { outValue = fromColumnAndStringArrays_dyn(); return true; }
	}
	return false;
}

::hx::Val Csv_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { lines=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"columnMap") ) { columnMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"columnNames") ) { columnNames=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Csv_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("columnNames",12,29,cb,31));
	outFields->push(HX_("columnMap",66,dd,a7,be));
	outFields->push(HX_("lines",ff,dd,01,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Csv_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Csv_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Csv_obj,columnNames),HX_("columnNames",12,29,cb,31)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Csv_obj,columnMap),HX_("columnMap",66,dd,a7,be)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Csv_obj,lines),HX_("lines",ff,dd,01,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Csv_obj_sStaticStorageInfo = 0;
#endif

static ::String Csv_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("columnNames",12,29,cb,31),
	HX_("columnMap",66,dd,a7,be),
	HX_("lines",ff,dd,01,75),
	::String(null()) };

::hx::Class Csv_obj::__mClass;

static ::String Csv_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("fromColumnAndStringArrays",e2,c5,73,0f),
	HX_("filterEmptyLines",0a,ae,54,74),
	HX_("decode",2e,5d,ed,64),
	HX_("detectDelimiter",24,1c,28,ac),
	::String(null())
};

void Csv_obj::__register()
{
	Csv_obj _hx_dummy;
	Csv_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("xa3.Csv",62,4c,b8,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Csv_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Csv_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Csv_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Csv_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Csv_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Csv_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace xa3