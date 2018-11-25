// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <hxinc/kha/math/Vector3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca48714ddea01921_5_new,"kha.math.Vector3","new",0xb80342c6,"kha.math.Vector3.new","kha/math/Vector3.hx",5,0xe1904bca)
HX_LOCAL_STACK_FRAME(_hx_pos_ca48714ddea01921_23_get_length,"kha.math.Vector3","get_length",0xfcab4b09,"kha.math.Vector3.get_length","kha/math/Vector3.hx",23,0xe1904bca)
HX_LOCAL_STACK_FRAME(_hx_pos_ca48714ddea01921_26_set_length,"kha.math.Vector3","set_length",0x0028e97d,"kha.math.Vector3.set_length","kha/math/Vector3.hx",26,0xe1904bca)
namespace kha{
namespace math{

void Vector3_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
            	HX_STACKFRAME(&_hx_pos_ca48714ddea01921_5_new)
HXLINE(   6)		this->x = x;
HXLINE(   7)		this->y = y;
HXLINE(   8)		this->z = z;
            	}

Dynamic Vector3_obj::__CreateEmpty() { return new Vector3_obj; }

void *Vector3_obj::_hx_vtable = 0;

Dynamic Vector3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Vector3_obj > _hx_result = new Vector3_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Vector3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b04fbec;
}

Float Vector3_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_ca48714ddea01921_23_get_length)
HXDLIN(  23)		Float _hx_tmp = (this->x * this->x);
HXDLIN(  23)		Float _hx_tmp1 = (_hx_tmp + (this->y * this->y));
HXDLIN(  23)		return ::Math_obj::sqrt((_hx_tmp1 + (this->z * this->z)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Vector3_obj,get_length,return )

Float Vector3_obj::set_length(Float length){
            	HX_STACKFRAME(&_hx_pos_ca48714ddea01921_26_set_length)
HXLINE(  27)		Float currentLength = this->get_length();
HXLINE(  28)		if ((currentLength == 0)) {
HXLINE(  28)			return ( (Float)(0) );
            		}
HXLINE(  29)		Float mul = (length / currentLength);
HXLINE(  30)		 ::kha::math::Vector3 _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  30)		_hx_tmp->x = (_hx_tmp->x * mul);
HXLINE(  31)		 ::kha::math::Vector3 _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  31)		_hx_tmp1->y = (_hx_tmp1->y * mul);
HXLINE(  32)		 ::kha::math::Vector3 _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  32)		_hx_tmp2->z = (_hx_tmp2->z * mul);
HXLINE(  33)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Vector3_obj,set_length,return )


hx::ObjectPtr< Vector3_obj > Vector3_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z) {
	hx::ObjectPtr< Vector3_obj > __this = new Vector3_obj();
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

hx::ObjectPtr< Vector3_obj > Vector3_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z) {
	Vector3_obj *__this = (Vector3_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Vector3_obj), false, "kha.math.Vector3"));
	*(void **)__this = Vector3_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z);
	return __this;
}

Vector3_obj::Vector3_obj()
{
}

hx::Val Vector3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Vector3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("z",7a,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Vector3_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector3_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(Vector3_obj,y),HX_("y",79,00,00,00)},
	{hx::fsFloat,(int)offsetof(Vector3_obj,z),HX_("z",7a,00,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Vector3_obj_sStaticStorageInfo = 0;
#endif

static ::String Vector3_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("z",7a,00,00,00),
	HX_("get_length",af,04,8f,8f),
	HX_("set_length",23,a3,0c,93),
	::String(null()) };

hx::Class Vector3_obj::__mClass;

void Vector3_obj::__register()
{
	Vector3_obj _hx_dummy;
	Vector3_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.math.Vector3",d4,27,35,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Vector3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Vector3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Vector3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Vector3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace math