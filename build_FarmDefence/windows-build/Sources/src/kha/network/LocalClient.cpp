// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <hxinc/haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_Client
#include <hxinc/kha/network/Client.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <hxinc/kha/network/Controller.h>
#endif
#ifndef INCLUDED_kha_network_LocalClient
#include <hxinc/kha/network/LocalClient.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8514b043f21ffde8_9_new,"kha.network.LocalClient","new",0xda8ed7de,"kha.network.LocalClient.new","kha/network/LocalClient.hx",9,0x60c7b5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_8514b043f21ffde8_12_send,"kha.network.LocalClient","send",0x65bc140a,"kha.network.LocalClient.send","kha/network/LocalClient.hx",12,0x60c7b5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_8514b043f21ffde8_16_receive,"kha.network.LocalClient","receive",0x98a00061,"kha.network.LocalClient.receive","kha/network/LocalClient.hx",16,0x60c7b5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_8514b043f21ffde8_20_onClose,"kha.network.LocalClient","onClose",0x4ce85497,"kha.network.LocalClient.onClose","kha/network/LocalClient.hx",20,0x60c7b5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_8514b043f21ffde8_27_get_controllers,"kha.network.LocalClient","get_controllers",0x41cff46c,"kha.network.LocalClient.get_controllers","kha/network/LocalClient.hx",27,0x60c7b5d4)
HX_LOCAL_STACK_FRAME(_hx_pos_8514b043f21ffde8_33_get_id,"kha.network.LocalClient","get_id",0x939c2e66,"kha.network.LocalClient.get_id","kha/network/LocalClient.hx",33,0x60c7b5d4)
namespace kha{
namespace network{

void LocalClient_obj::__construct(int id){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_9_new)
HXDLIN(   9)		this->myId = id;
            	}

Dynamic LocalClient_obj::__CreateEmpty() { return new LocalClient_obj; }

void *LocalClient_obj::_hx_vtable = 0;

Dynamic LocalClient_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LocalClient_obj > _hx_result = new LocalClient_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LocalClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x238852c8;
}

static ::kha::network::Client_obj _hx_kha_network_LocalClient__hx_kha_network_Client= {
	( int (hx::Object::*)())&::kha::network::LocalClient_obj::get_id,
	( void (hx::Object::*)( ::haxe::io::Bytes,bool))&::kha::network::LocalClient_obj::send,
	( void (hx::Object::*)( ::Dynamic))&::kha::network::LocalClient_obj::receive,
	( void (hx::Object::*)( ::Dynamic))&::kha::network::LocalClient_obj::onClose,
};

void *LocalClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xe7ca9475: return &_hx_kha_network_LocalClient__hx_kha_network_Client;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void LocalClient_obj::send( ::haxe::io::Bytes bytes,bool mandatory){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_12_send)
            	}


HX_DEFINE_DYNAMIC_FUNC2(LocalClient_obj,send,(void))

void LocalClient_obj::receive( ::Dynamic receiver){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_16_receive)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalClient_obj,receive,(void))

void LocalClient_obj::onClose( ::Dynamic close){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_20_onClose)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LocalClient_obj,onClose,(void))

::Array< ::Dynamic> LocalClient_obj::get_controllers(){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_27_get_controllers)
HXDLIN(  27)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalClient_obj,get_controllers,return )

int LocalClient_obj::get_id(){
            	HX_STACKFRAME(&_hx_pos_8514b043f21ffde8_33_get_id)
HXDLIN(  33)		return this->myId;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LocalClient_obj,get_id,return )


hx::ObjectPtr< LocalClient_obj > LocalClient_obj::__new(int id) {
	hx::ObjectPtr< LocalClient_obj > __this = new LocalClient_obj();
	__this->__construct(id);
	return __this;
}

hx::ObjectPtr< LocalClient_obj > LocalClient_obj::__alloc(hx::Ctx *_hx_ctx,int id) {
	LocalClient_obj *__this = (LocalClient_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LocalClient_obj), true, "kha.network.LocalClient"));
	*(void **)__this = LocalClient_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

LocalClient_obj::LocalClient_obj()
{
}

void LocalClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LocalClient);
	HX_MARK_MEMBER_NAME(myId,"myId");
	HX_MARK_MEMBER_NAME(controllers,"controllers");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void LocalClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(myId,"myId");
	HX_VISIT_MEMBER_NAME(controllers,"controllers");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val LocalClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( inCallProp == hx::paccAlways ? get_id() : id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"myId") ) { return hx::Val( myId ); }
		if (HX_FIELD_EQ(inName,"send") ) { return hx::Val( send_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return hx::Val( get_id_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"receive") ) { return hx::Val( receive_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClose") ) { return hx::Val( onClose_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { return hx::Val( inCallProp == hx::paccAlways ? get_controllers() : controllers ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_controllers") ) { return hx::Val( get_controllers_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LocalClient_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"myId") ) { myId=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"controllers") ) { controllers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LocalClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("myId",67,52,68,48));
	outFields->push(HX_("controllers",57,f0,06,22));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo LocalClient_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(LocalClient_obj,myId),HX_("myId",67,52,68,48)},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LocalClient_obj,controllers),HX_("controllers",57,f0,06,22)},
	{hx::fsInt,(int)offsetof(LocalClient_obj,id),HX_("id",db,5b,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LocalClient_obj_sStaticStorageInfo = 0;
#endif

static ::String LocalClient_obj_sMemberFields[] = {
	HX_("myId",67,52,68,48),
	HX_("send",48,8d,50,4c),
	HX_("receive",e3,61,58,2a),
	HX_("onClose",19,b6,a0,de),
	HX_("controllers",57,f0,06,22),
	HX_("get_controllers",ee,a7,e8,e2),
	HX_("id",db,5b,00,00),
	HX_("get_id",24,f3,2f,a3),
	::String(null()) };

hx::Class LocalClient_obj::__mClass;

void LocalClient_obj::__register()
{
	LocalClient_obj _hx_dummy;
	LocalClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.network.LocalClient",ec,50,da,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LocalClient_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LocalClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LocalClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LocalClient_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace network