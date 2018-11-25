// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <hxinc/Main.h>
#endif
#ifndef INCLUDED_armory_renderpath_RenderPathCreator
#include <hxinc/armory/renderpath/RenderPathCreator.h>
#endif
#ifndef INCLUDED_armory_system_Starter
#include <hxinc/armory/system/Starter.h>
#endif
#ifndef INCLUDED_iron_RenderPath
#include <hxinc/iron/RenderPath.h>
#endif
#ifndef INCLUDED_iron_object_Animation
#include <hxinc/iron/object/Animation.h>
#endif
#ifndef INCLUDED_iron_object_BoneAnimation
#include <hxinc/iron/object/BoneAnimation.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_6_main,"Main","main",0xed0e206e,"Main.main","Main.hx",6,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_4_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",4,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_5_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",5,0x087e5c05)

void Main_obj::__construct() { }

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x332f6459;
}

::String Main_obj::projectName;

::String Main_obj::projectPackage;

void Main_obj::main(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_6_main)
HXLINE(   7)		::iron::object::BoneAnimation_obj::skinMaxBones = 33;
HXLINE(   8)		::armory::_hx_system::Starter_obj::main(HX_("Scene",2c,49,ff,0b),0,false,true,false,1280,720,1,true,::armory::renderpath::RenderPathCreator_obj::get_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Main_obj::projectName,HX_("projectName",c4,91,a8,23)},
	{hx::fsString,(void *) &Main_obj::projectPackage,HX_("projectPackage",ad,3d,40,84)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::projectName,"projectName");
	HX_MARK_MEMBER_NAME(Main_obj::projectPackage,"projectPackage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::projectName,"projectName");
	HX_VISIT_MEMBER_NAME(Main_obj::projectPackage,"projectPackage");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("projectName",c4,91,a8,23),
	HX_("projectPackage",ad,3d,40,84),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_4_boot)
HXDLIN(   4)		projectName = HX_("TestAnim",a3,c7,55,1d);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_5_boot)
HXDLIN(   5)		projectPackage = HX_("arm",5c,fe,49,00);
            	}
}
