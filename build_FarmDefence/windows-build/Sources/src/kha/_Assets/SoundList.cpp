// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <hxinc/Reflect.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <hxinc/kha/Sound.h>
#endif
#ifndef INCLUDED_kha__Assets_SoundList
#include <hxinc/kha/_Assets/SoundList.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ff815e824a3dc308_198_new,"kha._Assets.SoundList","new",0x5b156129,"kha._Assets.SoundList.new","kha/internal/AssetsBuilder.hx",198,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_a874b79c8633d97c_28_get,"kha._Assets.SoundList","get",0x5b10115f,"kha._Assets.SoundList.get","kha/Assets.hx",28,0x66f27110)
namespace kha{
namespace _Assets{

void SoundList_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ff815e824a3dc308_198_new)
HXDLIN( 198)		this->names = ::Array_obj< ::String >::__new(0);
            	}

Dynamic SoundList_obj::__CreateEmpty() { return new SoundList_obj; }

void *SoundList_obj::_hx_vtable = 0;

Dynamic SoundList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SoundList_obj > _hx_result = new SoundList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SoundList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33266407;
}

 ::kha::Sound SoundList_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_a874b79c8633d97c_28_get)
HXDLIN(  28)		return ( ( ::kha::Sound)(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundList_obj,get,return )


hx::ObjectPtr< SoundList_obj > SoundList_obj::__new() {
	hx::ObjectPtr< SoundList_obj > __this = new SoundList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SoundList_obj > SoundList_obj::__alloc(hx::Ctx *_hx_ctx) {
	SoundList_obj *__this = (SoundList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SoundList_obj), true, "kha._Assets.SoundList"));
	*(void **)__this = SoundList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SoundList_obj::SoundList_obj()
{
}

void SoundList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundList);
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void SoundList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(names,"names");
}

hx::Val SoundList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SoundList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("names",c8,8f,84,96));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo SoundList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SoundList_obj,names),HX_("names",c8,8f,84,96)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SoundList_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundList_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("names",c8,8f,84,96),
	::String(null()) };

hx::Class SoundList_obj::__mClass;

void SoundList_obj::__register()
{
	SoundList_obj _hx_dummy;
	SoundList_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha._Assets.SoundList",b7,98,59,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SoundList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace _Assets