// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_kha_Display
#include <hxinc/kha/Display.h>
#endif
#ifndef INCLUDED_kha_DisplayMode
#include <hxinc/kha/DisplayMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_98f5c072c5e068b2_8_new,"kha.Display","new",0x99f290ca,"kha.Display.new","kha/Display.hx",8,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_58_get_available,"kha.Display","get_available",0x708e568a,"kha.Display.get_available","kha/Display.hx",58,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_65_get_name,"kha.Display","get_name",0x7977ad2a,"kha.Display.get_name","kha/Display.hx",65,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_72_get_x,"kha.Display","get_x",0xe07fd439,"kha.Display.get_x","kha/Display.hx",72,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_79_get_y,"kha.Display","get_y",0xe07fd43a,"kha.Display.get_y","kha/Display.hx",79,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_86_get_width,"kha.Display","get_width",0x031dfe47,"kha.Display.get_width","kha/Display.hx",86,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_93_get_height,"kha.Display","get_height",0x6d6ff886,"kha.Display.get_height","kha/Display.hx",93,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_100_get_frequency,"kha.Display","get_frequency",0xb4f57f5d,"kha.Display.get_frequency","kha/Display.hx",100,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_107_get_pixelsPerInch,"kha.Display","get_pixelsPerInch",0x067202db,"kha.Display.get_pixelsPerInch","kha/Display.hx",107,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_116_modeCount,"kha.Display","modeCount",0x10b9a656,"kha.Display.modeCount","kha/Display.hx",116,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_121_getModeWidth,"kha.Display","getModeWidth",0x665caa83,"kha.Display.getModeWidth","kha/Display.hx",121,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_126_getModeHeight,"kha.Display","getModeHeight",0xe10800ca,"kha.Display.getModeHeight","kha/Display.hx",126,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_131_getModeFrequency,"kha.Display","getModeFrequency",0x0704f999,"kha.Display.getModeFrequency","kha/Display.hx",131,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_136_getModeBitsPerPixel,"kha.Display","getModeBitsPerPixel",0xe47c92b2,"kha.Display.getModeBitsPerPixel","kha/Display.hx",136,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_140_initModes,"kha.Display","initModes",0x1cfc2a6a,"kha.Display.initModes","kha/Display.hx",140,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_148_get_modes,"kha.Display","get_modes",0x45136bf1,"kha.Display.get_modes","kha/Display.hx",148,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_18_count,"kha.Display","count",0x998273b9,"kha.Display.count","kha/Display.hx",18,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_22_init,"kha.Display","init",0x1704d766,"kha.Display.init","kha/Display.hx",22,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_37_primaryId,"kha.Display","primaryId",0x7fef6027,"kha.Display.primaryId","kha/Display.hx",37,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_42_get_primary,"kha.Display","get_primary",0xd7cada43,"kha.Display.get_primary","kha/Display.hx",42,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_49_get_all,"kha.Display","get_all",0xdf36ff22,"kha.Display.get_all","kha/Display.hx",49,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_10_boot,"kha.Display","boot",0x12652088,"kha.Display.boot","kha/Display.hx",10,0x1b638127)
namespace kha{

void Display_obj::__construct(int num){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_8_new)
HXLINE( 112)		this->allModes = null();
HXLINE(  13)		this->num = num;
            	}

Dynamic Display_obj::__CreateEmpty() { return new Display_obj; }

void *Display_obj::_hx_vtable = 0;

Dynamic Display_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Display_obj > _hx_result = new Display_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Display_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3981cd22;
}

bool Display_obj::get_available(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_58_get_available)
            	return Kore::Display::get(num)->available();

HXDLIN(  58)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_available,return )

::String Display_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_65_get_name)
            	return ::String(Kore::Display::get(num)->name());

HXDLIN(  65)		return HX_("Display",22,52,9b,88);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_name,return )

int Display_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_72_get_x)
            	return Kore::Display::get(num)->x();

HXDLIN(  72)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_x,return )

int Display_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_79_get_y)
            	return Kore::Display::get(num)->y();

HXDLIN(  79)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_y,return )

int Display_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_86_get_width)
            	return Kore::Display::get(num)->width();

HXDLIN(  86)		return 800;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_width,return )

int Display_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_93_get_height)
            	return Kore::Display::get(num)->height();

HXDLIN(  93)		return 600;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_height,return )

int Display_obj::get_frequency(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_100_get_frequency)
            	return Kore::Display::get(num)->frequency();

HXDLIN( 100)		return 60;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_frequency,return )

int Display_obj::get_pixelsPerInch(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_107_get_pixelsPerInch)
            	return Kore::Display::get(num)->pixelsPerInch();

HXDLIN( 107)		return 72;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_pixelsPerInch,return )

int Display_obj::modeCount(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_116_modeCount)
            	return Kore::Display::get(num)->countAvailableModes();

HXDLIN( 116)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,modeCount,return )

int Display_obj::getModeWidth(int num){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_121_getModeWidth)
            	return Kore::Display::get(num)->availableMode(num).width;

HXDLIN( 121)		return 800;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,getModeWidth,return )

int Display_obj::getModeHeight(int num){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_126_getModeHeight)
            	return Kore::Display::get(num)->availableMode(num).height;

HXDLIN( 126)		return 600;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,getModeHeight,return )

int Display_obj::getModeFrequency(int num){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_131_getModeFrequency)
            	return Kore::Display::get(num)->availableMode(num).frequency;

HXDLIN( 131)		return 60;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,getModeFrequency,return )

int Display_obj::getModeBitsPerPixel(int num){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_136_getModeBitsPerPixel)
            	return Kore::Display::get(num)->availableMode(num).bitsPerPixel;

HXDLIN( 136)		return 32;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Display_obj,getModeBitsPerPixel,return )

void Display_obj::initModes(){
            	HX_GC_STACKFRAME(&_hx_pos_98f5c072c5e068b2_140_initModes)
HXDLIN( 140)		if (hx::IsNull( this->allModes )) {
HXLINE( 141)			this->allModes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 142)			{
HXLINE( 142)				int _g1 = 0;
HXDLIN( 142)				int _g = this->modeCount();
HXDLIN( 142)				while((_g1 < _g)){
HXLINE( 142)					_g1 = (_g1 + 1);
HXDLIN( 142)					int i = (_g1 - 1);
HXLINE( 143)					::Array< ::Dynamic> _hx_tmp = this->allModes;
HXDLIN( 143)					int _hx_tmp1 = this->getModeWidth(i);
HXDLIN( 143)					int _hx_tmp2 = this->getModeHeight(i);
HXDLIN( 143)					int _hx_tmp3 = this->getModeFrequency(i);
HXDLIN( 143)					_hx_tmp->push( ::kha::DisplayMode_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp2,_hx_tmp3,this->getModeBitsPerPixel(i)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,initModes,(void))

::Array< ::Dynamic> Display_obj::get_modes(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_148_get_modes)
HXLINE( 149)		this->initModes();
HXLINE( 150)		return this->allModes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_modes,return )

::Array< ::Dynamic> Display_obj::displays;

int Display_obj::count(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_18_count)
            	return Kore::Display::count();

HXDLIN(  18)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,count,return )

void Display_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_98f5c072c5e068b2_22_init)
HXDLIN(  22)		if (hx::IsNull( ::kha::Display_obj::displays )) {
HXLINE(  23)			::kha::Display_obj::displays = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  24)			{
HXLINE(  24)				int _g1 = 0;
HXDLIN(  24)				int _g = ::kha::Display_obj::count();
HXDLIN(  24)				while((_g1 < _g)){
HXLINE(  24)					_g1 = (_g1 + 1);
HXDLIN(  24)					int i = (_g1 - 1);
HXLINE(  25)					::Array< ::Dynamic> _hx_tmp = ::kha::Display_obj::displays;
HXDLIN(  25)					_hx_tmp->push( ::kha::Display_obj::__alloc( HX_CTX ,i));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,init,(void))

int Display_obj::primaryId(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_37_primaryId)
            	
		for (int i = 0; i < Kore::Display::count(); ++i) {
			if (Kore::Display::get(i) == Kore::Display::primary()) return i;
		}
		return 0;
	

HXDLIN(  37)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,primaryId,return )

 ::kha::Display Display_obj::get_primary(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_42_get_primary)
HXLINE(  43)		::kha::Display_obj::init();
HXLINE(  44)		::Array< ::Dynamic> _hx_tmp = ::kha::Display_obj::displays;
HXDLIN(  44)		return _hx_tmp->__get(::kha::Display_obj::primaryId()).StaticCast<  ::kha::Display >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_primary,return )

::Array< ::Dynamic> Display_obj::get_all(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_49_get_all)
HXLINE(  50)		::kha::Display_obj::init();
HXLINE(  51)		return ::kha::Display_obj::displays;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_all,return )


hx::ObjectPtr< Display_obj > Display_obj::__new(int num) {
	hx::ObjectPtr< Display_obj > __this = new Display_obj();
	__this->__construct(num);
	return __this;
}

hx::ObjectPtr< Display_obj > Display_obj::__alloc(hx::Ctx *_hx_ctx,int num) {
	Display_obj *__this = (Display_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Display_obj), true, "kha.Display"));
	*(void **)__this = Display_obj::_hx_vtable;
	__this->__construct(num);
	return __this;
}

Display_obj::Display_obj()
{
}

void Display_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Display);
	HX_MARK_MEMBER_NAME(num,"num");
	HX_MARK_MEMBER_NAME(allModes,"allModes");
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(num,"num");
	HX_VISIT_MEMBER_NAME(allModes,"allModes");
}

hx::Val Display_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_y() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { return hx::Val( num ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_name() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_width() ); }
		if (HX_FIELD_EQ(inName,"modes") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_modes() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_height() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn() ); }
		if (HX_FIELD_EQ(inName,"allModes") ) { return hx::Val( allModes ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_available() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"frequency") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_frequency() ); }
		if (HX_FIELD_EQ(inName,"modeCount") ) { return hx::Val( modeCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"initModes") ) { return hx::Val( initModes_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_modes") ) { return hx::Val( get_modes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getModeWidth") ) { return hx::Val( getModeWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_available") ) { return hx::Val( get_available_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_frequency") ) { return hx::Val( get_frequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"pixelsPerInch") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_pixelsPerInch() ); }
		if (HX_FIELD_EQ(inName,"getModeHeight") ) { return hx::Val( getModeHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getModeFrequency") ) { return hx::Val( getModeFrequency_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pixelsPerInch") ) { return hx::Val( get_pixelsPerInch_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getModeBitsPerPixel") ) { return hx::Val( getModeBitsPerPixel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Display_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_all() ); return true; } }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"primary") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_primary() ); return true; } }
		if (HX_FIELD_EQ(inName,"get_all") ) { outValue = get_all_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"displays") ) { outValue = ( displays ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"primaryId") ) { outValue = primaryId_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_primary") ) { outValue = get_primary_dyn(); return true; }
	}
	return false;
}

hx::Val Display_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"num") ) { num=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"allModes") ) { allModes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Display_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"displays") ) { displays=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("num",46,de,53,00));
	outFields->push(HX_("available",c9,59,83,77));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("frequency",9c,82,ea,bb));
	outFields->push(HX_("pixelsPerInch",9a,11,e3,a5));
	outFields->push(HX_("modes",b0,23,58,0c));
	outFields->push(HX_("allModes",cf,e2,3b,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Display_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Display_obj,num),HX_("num",46,de,53,00)},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Display_obj,allModes),HX_("allModes",cf,e2,3b,05)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Display_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Display_obj::displays,HX_("displays",f1,cf,9a,25)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Display_obj_sMemberFields[] = {
	HX_("num",46,de,53,00),
	HX_("get_available",a0,2d,e7,38),
	HX_("get_name",d4,2d,ba,c8),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_width",5d,12,0c,0e),
	HX_("get_height",b0,77,d3,f2),
	HX_("get_frequency",73,56,4e,7d),
	HX_("get_pixelsPerInch",f1,1c,53,ac),
	HX_("allModes",cf,e2,3b,05),
	HX_("modeCount",6c,ba,a7,1b),
	HX_("getModeWidth",2d,c8,fd,aa),
	HX_("getModeHeight",e0,d7,60,a9),
	HX_("getModeFrequency",43,34,17,31),
	HX_("getModeBitsPerPixel",48,de,68,98),
	HX_("initModes",80,3e,ea,27),
	HX_("get_modes",07,80,01,50),
	::String(null()) };

static void Display_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Display_obj::displays,"displays");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Display_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Display_obj::displays,"displays");
};

#endif

hx::Class Display_obj::__mClass;

static ::String Display_obj_sStaticFields[] = {
	HX_("displays",f1,cf,9a,25),
	HX_("count",cf,44,63,4a),
	HX_("init",10,3b,bb,45),
	HX_("primaryId",3d,74,dd,8a),
	HX_("get_primary",d9,9f,76,09),
	HX_("get_all",b8,c1,be,26),
	::String(null())
};

void Display_obj::__register()
{
	Display_obj _hx_dummy;
	Display_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.Display",d8,23,5c,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Display_obj::__GetStatic;
	__mClass->mSetStaticField = &Display_obj::__SetStatic;
	__mClass->mMarkFunc = Display_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Display_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Display_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Display_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Display_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Display_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Display_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Display_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_10_boot)
HXDLIN(  10)		displays = null();
            	}
}

} // end namespace kha