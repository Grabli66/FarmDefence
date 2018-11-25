// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_iron_data_TConstraint
#include <hxinc/iron/data/TConstraint.h>
#endif
#ifndef INCLUDED_iron_data_TSkin
#include <hxinc/iron/data/TSkin.h>
#endif
#ifndef INCLUDED_iron_data_TTransform
#include <hxinc/iron/data/TTransform.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <hxinc/kha/arrays/Uint32ArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60db16d5697ddea7_53_new,"iron.data.TSkin","new",0xa0da7f85,"iron.data.TSkin.new","iron/data/SceneFormat.hx",53,0x98b03519)
namespace iron{
namespace data{

void TSkin_obj::__construct( ::iron::data::TTransform transform,::Array< ::String > bone_ref_array, ::kha::arrays::Float32ArrayPrivate bone_len_array,::Array< ::Dynamic> transformsI, ::kha::arrays::Uint32ArrayPrivate bone_count_array, ::kha::arrays::Uint32ArrayPrivate bone_index_array, ::kha::arrays::Float32ArrayPrivate bone_weight_array,::Array< ::Dynamic> constraints){
            	HX_STACKFRAME(&_hx_pos_60db16d5697ddea7_53_new)
HXDLIN(  53)		this->transform = transform;
HXDLIN(  53)		this->bone_ref_array = bone_ref_array;
HXDLIN(  53)		this->bone_len_array = bone_len_array;
HXDLIN(  53)		this->transformsI = transformsI;
HXDLIN(  53)		this->bone_count_array = bone_count_array;
HXDLIN(  53)		this->bone_index_array = bone_index_array;
HXDLIN(  53)		this->bone_weight_array = bone_weight_array;
HXDLIN(  53)		this->constraints = constraints;
            	}

Dynamic TSkin_obj::__CreateEmpty() { return new TSkin_obj; }

void *TSkin_obj::_hx_vtable = 0;

Dynamic TSkin_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TSkin_obj > _hx_result = new TSkin_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool TSkin_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0203c43f;
}


hx::ObjectPtr< TSkin_obj > TSkin_obj::__new( ::iron::data::TTransform transform,::Array< ::String > bone_ref_array, ::kha::arrays::Float32ArrayPrivate bone_len_array,::Array< ::Dynamic> transformsI, ::kha::arrays::Uint32ArrayPrivate bone_count_array, ::kha::arrays::Uint32ArrayPrivate bone_index_array, ::kha::arrays::Float32ArrayPrivate bone_weight_array,::Array< ::Dynamic> constraints) {
	hx::ObjectPtr< TSkin_obj > __this = new TSkin_obj();
	__this->__construct(transform,bone_ref_array,bone_len_array,transformsI,bone_count_array,bone_index_array,bone_weight_array,constraints);
	return __this;
}

hx::ObjectPtr< TSkin_obj > TSkin_obj::__alloc(hx::Ctx *_hx_ctx, ::iron::data::TTransform transform,::Array< ::String > bone_ref_array, ::kha::arrays::Float32ArrayPrivate bone_len_array,::Array< ::Dynamic> transformsI, ::kha::arrays::Uint32ArrayPrivate bone_count_array, ::kha::arrays::Uint32ArrayPrivate bone_index_array, ::kha::arrays::Float32ArrayPrivate bone_weight_array,::Array< ::Dynamic> constraints) {
	TSkin_obj *__this = (TSkin_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TSkin_obj), true, "iron.data.TSkin"));
	*(void **)__this = TSkin_obj::_hx_vtable;
	__this->__construct(transform,bone_ref_array,bone_len_array,transformsI,bone_count_array,bone_index_array,bone_weight_array,constraints);
	return __this;
}

TSkin_obj::TSkin_obj()
{
}

void TSkin_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TSkin);
	HX_MARK_MEMBER_NAME(transform,"transform");
	HX_MARK_MEMBER_NAME(bone_ref_array,"bone_ref_array");
	HX_MARK_MEMBER_NAME(bone_len_array,"bone_len_array");
	HX_MARK_MEMBER_NAME(transformsI,"transformsI");
	HX_MARK_MEMBER_NAME(bone_count_array,"bone_count_array");
	HX_MARK_MEMBER_NAME(bone_index_array,"bone_index_array");
	HX_MARK_MEMBER_NAME(bone_weight_array,"bone_weight_array");
	HX_MARK_MEMBER_NAME(constraints,"constraints");
	HX_MARK_END_CLASS();
}

void TSkin_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(transform,"transform");
	HX_VISIT_MEMBER_NAME(bone_ref_array,"bone_ref_array");
	HX_VISIT_MEMBER_NAME(bone_len_array,"bone_len_array");
	HX_VISIT_MEMBER_NAME(transformsI,"transformsI");
	HX_VISIT_MEMBER_NAME(bone_count_array,"bone_count_array");
	HX_VISIT_MEMBER_NAME(bone_index_array,"bone_index_array");
	HX_VISIT_MEMBER_NAME(bone_weight_array,"bone_weight_array");
	HX_VISIT_MEMBER_NAME(constraints,"constraints");
}

hx::Val TSkin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return hx::Val( transform ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformsI") ) { return hx::Val( transformsI ); }
		if (HX_FIELD_EQ(inName,"constraints") ) { return hx::Val( constraints ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bone_ref_array") ) { return hx::Val( bone_ref_array ); }
		if (HX_FIELD_EQ(inName,"bone_len_array") ) { return hx::Val( bone_len_array ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bone_count_array") ) { return hx::Val( bone_count_array ); }
		if (HX_FIELD_EQ(inName,"bone_index_array") ) { return hx::Val( bone_index_array ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bone_weight_array") ) { return hx::Val( bone_weight_array ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TSkin_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { transform=inValue.Cast<  ::iron::data::TTransform >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transformsI") ) { transformsI=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"constraints") ) { constraints=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bone_ref_array") ) { bone_ref_array=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bone_len_array") ) { bone_len_array=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"bone_count_array") ) { bone_count_array=inValue.Cast<  ::kha::arrays::Uint32ArrayPrivate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bone_index_array") ) { bone_index_array=inValue.Cast<  ::kha::arrays::Uint32ArrayPrivate >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"bone_weight_array") ) { bone_weight_array=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TSkin_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("transform",6c,2d,93,45));
	outFields->push(HX_("bone_ref_array",72,0a,e0,6b));
	outFields->push(HX_("bone_len_array",74,4a,e3,c6));
	outFields->push(HX_("transformsI",e2,c4,ca,32));
	outFields->push(HX_("bone_count_array",2e,06,7f,96));
	outFields->push(HX_("bone_index_array",b1,f0,f2,7c));
	outFields->push(HX_("bone_weight_array",6d,e5,3e,8f));
	outFields->push(HX_("constraints",76,51,b4,17));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TSkin_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::data::TTransform*/ ,(int)offsetof(TSkin_obj,transform),HX_("transform",6c,2d,93,45)},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TSkin_obj,bone_ref_array),HX_("bone_ref_array",72,0a,e0,6b)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TSkin_obj,bone_len_array),HX_("bone_len_array",74,4a,e3,c6)},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TSkin_obj,transformsI),HX_("transformsI",e2,c4,ca,32)},
	{hx::fsObject /*::kha::arrays::Uint32ArrayPrivate*/ ,(int)offsetof(TSkin_obj,bone_count_array),HX_("bone_count_array",2e,06,7f,96)},
	{hx::fsObject /*::kha::arrays::Uint32ArrayPrivate*/ ,(int)offsetof(TSkin_obj,bone_index_array),HX_("bone_index_array",b1,f0,f2,7c)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TSkin_obj,bone_weight_array),HX_("bone_weight_array",6d,e5,3e,8f)},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TSkin_obj,constraints),HX_("constraints",76,51,b4,17)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TSkin_obj_sStaticStorageInfo = 0;
#endif

static ::String TSkin_obj_sMemberFields[] = {
	HX_("transform",6c,2d,93,45),
	HX_("bone_ref_array",72,0a,e0,6b),
	HX_("bone_len_array",74,4a,e3,c6),
	HX_("transformsI",e2,c4,ca,32),
	HX_("bone_count_array",2e,06,7f,96),
	HX_("bone_index_array",b1,f0,f2,7c),
	HX_("bone_weight_array",6d,e5,3e,8f),
	HX_("constraints",76,51,b4,17),
	::String(null()) };

hx::Class TSkin_obj::__mClass;

void TSkin_obj::__register()
{
	TSkin_obj _hx_dummy;
	TSkin_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.data.TSkin",13,59,61,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TSkin_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TSkin_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TSkin_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TSkin_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data