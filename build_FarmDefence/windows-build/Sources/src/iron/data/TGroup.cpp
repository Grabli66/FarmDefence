// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_iron_data_TGroup
#include <hxinc/iron/data/TGroup.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b4f0d2a724d2f89_474_new,"iron.data.TGroup","new",0x6790fd5b,"iron.data.TGroup.new","iron/data/SceneFormat.hx",474,0x98b03519)
namespace iron{
namespace data{

void TGroup_obj::__construct(::String name,::Array< ::String > object_refs){
            	HX_STACKFRAME(&_hx_pos_2b4f0d2a724d2f89_474_new)
HXDLIN( 474)		this->name = name;
HXDLIN( 474)		this->object_refs = object_refs;
            	}

Dynamic TGroup_obj::__CreateEmpty() { return new TGroup_obj; }

void *TGroup_obj::_hx_vtable = 0;

Dynamic TGroup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TGroup_obj > _hx_result = new TGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TGroup_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ca4d2b5;
}


TGroup_obj::TGroup_obj()
{
}

void TGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(object_refs,"object_refs");
	HX_MARK_END_CLASS();
}

void TGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(object_refs,"object_refs");
}

hx::Val TGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"object_refs") ) { return hx::Val( object_refs ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TGroup_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"object_refs") ) { object_refs=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("object_refs",80,18,ba,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TGroup_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TGroup_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TGroup_obj,object_refs),HX_("object_refs",80,18,ba,da)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String TGroup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("object_refs",80,18,ba,da),
	::String(null()) };

hx::Class TGroup_obj::__mClass;

void TGroup_obj::__register()
{
	TGroup_obj _hx_dummy;
	TGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.data.TGroup",e9,b3,a2,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TGroup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TGroup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data