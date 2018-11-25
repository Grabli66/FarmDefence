// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_iron_data_TTrack
#include <hxinc/iron/data/TTrack.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <hxinc/kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <hxinc/kha/arrays/Uint32ArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab815f290145497b_555_new,"iron.data.TTrack","new",0xc4396ea7,"iron.data.TTrack.new","iron/data/SceneFormat.hx",555,0x98b03519)
namespace iron{
namespace data{

void TTrack_obj::__construct(::String target, ::kha::arrays::Uint32ArrayPrivate frames, ::kha::arrays::Float32ArrayPrivate values,::String curve, ::kha::arrays::Float32ArrayPrivate frames_control_plus, ::kha::arrays::Float32ArrayPrivate frames_control_minus, ::kha::arrays::Float32ArrayPrivate values_control_plus, ::kha::arrays::Float32ArrayPrivate values_control_minus){
            	HX_STACKFRAME(&_hx_pos_ab815f290145497b_555_new)
HXDLIN( 555)		this->target = target;
HXDLIN( 555)		this->frames = frames;
HXDLIN( 555)		this->values = values;
HXDLIN( 555)		this->curve = curve;
HXDLIN( 555)		this->frames_control_plus = frames_control_plus;
HXDLIN( 555)		this->frames_control_minus = frames_control_minus;
HXDLIN( 555)		this->values_control_plus = values_control_plus;
HXDLIN( 555)		this->values_control_minus = values_control_minus;
            	}

Dynamic TTrack_obj::__CreateEmpty() { return new TTrack_obj; }

void *TTrack_obj::_hx_vtable = 0;

Dynamic TTrack_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TTrack_obj > _hx_result = new TTrack_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool TTrack_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5948ea89;
}


hx::ObjectPtr< TTrack_obj > TTrack_obj::__new(::String target, ::kha::arrays::Uint32ArrayPrivate frames, ::kha::arrays::Float32ArrayPrivate values,::String curve, ::kha::arrays::Float32ArrayPrivate frames_control_plus, ::kha::arrays::Float32ArrayPrivate frames_control_minus, ::kha::arrays::Float32ArrayPrivate values_control_plus, ::kha::arrays::Float32ArrayPrivate values_control_minus) {
	hx::ObjectPtr< TTrack_obj > __this = new TTrack_obj();
	__this->__construct(target,frames,values,curve,frames_control_plus,frames_control_minus,values_control_plus,values_control_minus);
	return __this;
}

hx::ObjectPtr< TTrack_obj > TTrack_obj::__alloc(hx::Ctx *_hx_ctx,::String target, ::kha::arrays::Uint32ArrayPrivate frames, ::kha::arrays::Float32ArrayPrivate values,::String curve, ::kha::arrays::Float32ArrayPrivate frames_control_plus, ::kha::arrays::Float32ArrayPrivate frames_control_minus, ::kha::arrays::Float32ArrayPrivate values_control_plus, ::kha::arrays::Float32ArrayPrivate values_control_minus) {
	TTrack_obj *__this = (TTrack_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TTrack_obj), true, "iron.data.TTrack"));
	*(void **)__this = TTrack_obj::_hx_vtable;
	__this->__construct(target,frames,values,curve,frames_control_plus,frames_control_minus,values_control_plus,values_control_minus);
	return __this;
}

TTrack_obj::TTrack_obj()
{
}

void TTrack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TTrack);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_MEMBER_NAME(curve,"curve");
	HX_MARK_MEMBER_NAME(frames_control_plus,"frames_control_plus");
	HX_MARK_MEMBER_NAME(frames_control_minus,"frames_control_minus");
	HX_MARK_MEMBER_NAME(values_control_plus,"values_control_plus");
	HX_MARK_MEMBER_NAME(values_control_minus,"values_control_minus");
	HX_MARK_END_CLASS();
}

void TTrack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(values,"values");
	HX_VISIT_MEMBER_NAME(curve,"curve");
	HX_VISIT_MEMBER_NAME(frames_control_plus,"frames_control_plus");
	HX_VISIT_MEMBER_NAME(frames_control_minus,"frames_control_minus");
	HX_VISIT_MEMBER_NAME(values_control_plus,"values_control_plus");
	HX_VISIT_MEMBER_NAME(values_control_minus,"values_control_minus");
}

hx::Val TTrack_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"curve") ) { return hx::Val( curve ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames ); }
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"frames_control_plus") ) { return hx::Val( frames_control_plus ); }
		if (HX_FIELD_EQ(inName,"values_control_plus") ) { return hx::Val( values_control_plus ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frames_control_minus") ) { return hx::Val( frames_control_minus ); }
		if (HX_FIELD_EQ(inName,"values_control_minus") ) { return hx::Val( values_control_minus ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TTrack_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"curve") ) { curve=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast<  ::kha::arrays::Uint32ArrayPrivate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"frames_control_plus") ) { frames_control_plus=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values_control_plus") ) { values_control_plus=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"frames_control_minus") ) { frames_control_minus=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values_control_minus") ) { values_control_minus=inValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TTrack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("frames",a6,af,85,ac));
	outFields->push(HX_("values",e2,03,b7,4f));
	outFields->push(HX_("curve",af,4c,58,4e));
	outFields->push(HX_("frames_control_plus",35,32,42,ee));
	outFields->push(HX_("frames_control_minus",35,0d,75,cf));
	outFields->push(HX_("values_control_plus",79,e8,6b,e0));
	outFields->push(HX_("values_control_minus",71,d2,ca,c1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TTrack_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TTrack_obj,target),HX_("target",51,f3,ec,86)},
	{hx::fsObject /*::kha::arrays::Uint32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,frames),HX_("frames",a6,af,85,ac)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,values),HX_("values",e2,03,b7,4f)},
	{hx::fsString,(int)offsetof(TTrack_obj,curve),HX_("curve",af,4c,58,4e)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,frames_control_plus),HX_("frames_control_plus",35,32,42,ee)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,frames_control_minus),HX_("frames_control_minus",35,0d,75,cf)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,values_control_plus),HX_("values_control_plus",79,e8,6b,e0)},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(int)offsetof(TTrack_obj,values_control_minus),HX_("values_control_minus",71,d2,ca,c1)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TTrack_obj_sStaticStorageInfo = 0;
#endif

static ::String TTrack_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("frames",a6,af,85,ac),
	HX_("values",e2,03,b7,4f),
	HX_("curve",af,4c,58,4e),
	HX_("frames_control_plus",35,32,42,ee),
	HX_("frames_control_minus",35,0d,75,cf),
	HX_("values_control_plus",79,e8,6b,e0),
	HX_("values_control_minus",71,d2,ca,c1),
	::String(null()) };

hx::Class TTrack_obj::__mClass;

void TTrack_obj::__register()
{
	TTrack_obj _hx_dummy;
	TTrack_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.data.TTrack",35,8f,cd,69);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TTrack_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TTrack_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TTrack_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TTrack_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data