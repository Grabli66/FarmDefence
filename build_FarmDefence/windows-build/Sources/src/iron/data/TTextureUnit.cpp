// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_iron_data_TTextureUnit
#include <hxinc/iron/data/TTextureUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d14b9e22bb439a85_262_new,"iron.data.TTextureUnit","new",0xdaf78e9b,"iron.data.TTextureUnit.new","iron/data/SceneFormat.hx",262,0x98b03519)
namespace iron{
namespace data{

void TTextureUnit_obj::__construct(::String name, ::Dynamic is_image,::String link){
            	HX_STACKFRAME(&_hx_pos_d14b9e22bb439a85_262_new)
HXDLIN( 262)		this->name = name;
HXDLIN( 262)		this->is_image = is_image;
HXDLIN( 262)		this->link = link;
            	}

Dynamic TTextureUnit_obj::__CreateEmpty() { return new TTextureUnit_obj; }

void *TTextureUnit_obj::_hx_vtable = 0;

Dynamic TTextureUnit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TTextureUnit_obj > _hx_result = new TTextureUnit_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TTextureUnit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x766743e1;
}


TTextureUnit_obj::TTextureUnit_obj()
{
}

void TTextureUnit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TTextureUnit);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(is_image,"is_image");
	HX_MARK_MEMBER_NAME(link,"link");
	HX_MARK_END_CLASS();
}

void TTextureUnit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(is_image,"is_image");
	HX_VISIT_MEMBER_NAME(link,"link");
}

hx::Val TTextureUnit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"link") ) { return hx::Val( link ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_image") ) { return hx::Val( is_image ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TTextureUnit_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"link") ) { link=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"is_image") ) { is_image=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TTextureUnit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("is_image",06,8e,25,dd));
	outFields->push(HX_("link",fa,17,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TTextureUnit_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TTextureUnit_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TTextureUnit_obj,is_image),HX_("is_image",06,8e,25,dd)},
	{hx::fsString,(int)offsetof(TTextureUnit_obj,link),HX_("link",fa,17,b3,47)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TTextureUnit_obj_sStaticStorageInfo = 0;
#endif

static ::String TTextureUnit_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("is_image",06,8e,25,dd),
	HX_("link",fa,17,b3,47),
	::String(null()) };

hx::Class TTextureUnit_obj::__mClass;

void TTextureUnit_obj::__register()
{
	TTextureUnit_obj _hx_dummy;
	TTextureUnit_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.data.TTextureUnit",29,a5,97,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TTextureUnit_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TTextureUnit_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TTextureUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TTextureUnit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data