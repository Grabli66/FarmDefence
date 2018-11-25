// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_iron_App
#include <hxinc/iron/App.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <hxinc/iron/Scene.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <hxinc/iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_TSpeakerData
#include <hxinc/iron/data/TSpeakerData.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <hxinc/iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_object_CameraObject
#include <hxinc/iron/object/CameraObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <hxinc/iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_SpeakerObject
#include <hxinc/iron/object/SpeakerObject.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <hxinc/iron/object/Transform.h>
#endif
#ifndef INCLUDED_iron_system_Audio
#include <hxinc/iron/system/Audio.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <hxinc/kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <hxinc/kha/Sound.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <hxinc/kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <hxinc/kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_202e205ba7c8abfd_23_new,"iron.object.SpeakerObject","new",0x7ce9f767,"iron.object.SpeakerObject.new","iron/object/SpeakerObject.hx",23,0x27b6e409)
HX_DEFINE_STACK_FRAME(_hx_pos_202e205ba7c8abfd_7_new,"iron.object.SpeakerObject","new",0x7ce9f767,"iron.object.SpeakerObject.new","iron/object/SpeakerObject.hx",7,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_30_init,"iron.object.SpeakerObject","init",0xcc873a29,"iron.object.SpeakerObject.init","iron/object/SpeakerObject.hx",30,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_33_play,"iron.object.SpeakerObject","play",0xd1262d0d,"iron.object.SpeakerObject.play","iron/object/SpeakerObject.hx",33,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_45_pause,"iron.object.SpeakerObject","pause",0x290b0dbd,"iron.object.SpeakerObject.pause","iron/object/SpeakerObject.hx",45,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_50_stop,"iron.object.SpeakerObject","stop",0xd327ef1b,"iron.object.SpeakerObject.stop","iron/object/SpeakerObject.hx",50,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_55_update,"iron.object.SpeakerObject","update",0x58223d62,"iron.object.SpeakerObject.update","iron/object/SpeakerObject.hx",55,0x27b6e409)
HX_LOCAL_STACK_FRAME(_hx_pos_202e205ba7c8abfd_74_remove,"iron.object.SpeakerObject","remove",0xd5a5539d,"iron.object.SpeakerObject.remove","iron/object/SpeakerObject.hx",74,0x27b6e409)
namespace iron{
namespace object{

void SpeakerObject_obj::__construct( ::iron::data::TSpeakerData data){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::iron::object::SpeakerObject,_gthis) HXARGC(1)
            		void _hx_run( ::kha::Sound sound){
            			HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_23_new)
HXLINE(  24)			_gthis->sound = sound;
HXLINE(  25)			::iron::App_obj::notifyOnInit(_gthis->init_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_7_new)
HXLINE(  12)		this->paused = false;
HXLINE(  11)		this->channels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  10)		this->sound = null();
HXLINE(  14)		 ::iron::object::SpeakerObject _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  15)		super::__construct();
HXLINE(  17)		this->data = data;
HXLINE(  19)		::iron::Scene_obj::active->speakers->push(hx::ObjectPtr<OBJ_>(this));
HXLINE(  21)		if ((data->sound == HX_("",00,00,00,00))) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		::iron::data::Data_obj::getSound(data->sound, ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic SpeakerObject_obj::__CreateEmpty() { return new SpeakerObject_obj; }

void *SpeakerObject_obj::_hx_vtable = 0;

Dynamic SpeakerObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SpeakerObject_obj > _hx_result = new SpeakerObject_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SpeakerObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a486766) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a486766;
	} else {
		return inClassId==(int)0x7aad5b57;
	}
}

void SpeakerObject_obj::init(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_30_init)
HXDLIN(  30)		bool _hx_tmp;
HXDLIN(  30)		if (this->visible) {
HXDLIN(  30)			_hx_tmp = this->data->play_on_start;
            		}
            		else {
HXDLIN(  30)			_hx_tmp = false;
            		}
HXDLIN(  30)		if (_hx_tmp) {
HXDLIN(  30)			this->play();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpeakerObject_obj,init,(void))

void SpeakerObject_obj::play(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_33_play)
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if (hx::IsNotNull( this->sound )) {
HXLINE(  34)			_hx_tmp = this->data->muted;
            		}
            		else {
HXLINE(  34)			_hx_tmp = true;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  34)			return;
            		}
HXLINE(  35)		if (this->paused) {
HXLINE(  36)			{
HXLINE(  36)				int _g = 0;
HXDLIN(  36)				::Array< ::Dynamic> _g1 = this->channels;
HXDLIN(  36)				while((_g < _g1->length)){
HXLINE(  36)					::Dynamic c = _g1->__get(_g);
HXDLIN(  36)					_g = (_g + 1);
HXDLIN(  36)					::kha::audio1::AudioChannel_obj::play(c);
            				}
            			}
HXLINE(  37)			this->paused = false;
HXLINE(  38)			return;
            		}
HXLINE(  40)		::Dynamic channel = ::iron::_hx_system::Audio_obj::play(this->sound,this->data->loop,this->data->stream);
HXLINE(  41)		this->channels->push(channel);
HXLINE(  42)		bool _hx_tmp1;
HXDLIN(  42)		if ((this->data->attenuation > 0)) {
HXLINE(  42)			_hx_tmp1 = (this->channels->length == 1);
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = false;
            		}
HXDLIN(  42)		if (_hx_tmp1) {
HXLINE(  42)			::iron::App_obj::notifyOnUpdate(this->update_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpeakerObject_obj,play,(void))

void SpeakerObject_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_45_pause)
HXLINE(  46)		{
HXLINE(  46)			int _g = 0;
HXDLIN(  46)			::Array< ::Dynamic> _g1 = this->channels;
HXDLIN(  46)			while((_g < _g1->length)){
HXLINE(  46)				::Dynamic c = _g1->__get(_g);
HXDLIN(  46)				_g = (_g + 1);
HXDLIN(  46)				::kha::audio1::AudioChannel_obj::pause(c);
            			}
            		}
HXLINE(  47)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpeakerObject_obj,pause,(void))

void SpeakerObject_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_50_stop)
HXLINE(  51)		{
HXLINE(  51)			int _g = 0;
HXDLIN(  51)			::Array< ::Dynamic> _g1 = this->channels;
HXDLIN(  51)			while((_g < _g1->length)){
HXLINE(  51)				::Dynamic c = _g1->__get(_g);
HXDLIN(  51)				_g = (_g + 1);
HXDLIN(  51)				::kha::audio1::AudioChannel_obj::stop(c);
            			}
            		}
HXLINE(  52)		this->channels->removeRange(0,this->channels->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpeakerObject_obj,stop,(void))

void SpeakerObject_obj::update(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_55_update)
HXLINE(  56)		if (this->paused) {
HXLINE(  56)			return;
            		}
HXLINE(  57)		{
HXLINE(  57)			int _g = 0;
HXDLIN(  57)			::Array< ::Dynamic> _g1 = this->channels;
HXDLIN(  57)			while((_g < _g1->length)){
HXLINE(  57)				::Dynamic c = _g1->__get(_g);
HXDLIN(  57)				_g = (_g + 1);
HXDLIN(  57)				if (::kha::audio1::AudioChannel_obj::get_finished(c)) {
HXLINE(  57)					this->channels->remove(c);
            				}
            			}
            		}
HXLINE(  58)		if ((this->channels->length == 0)) {
HXLINE(  59)			::iron::App_obj::removeUpdate(this->update_dyn());
HXLINE(  60)			return;
            		}
HXLINE(  63)		 ::iron::object::CameraObject cam = ::iron::Scene_obj::active->camera;
HXLINE(  64)		 ::iron::math::Mat4 _this = cam->transform->world;
HXDLIN(  64)		float loc1_x = _this->self->_30;
HXDLIN(  64)		float loc1_y = _this->self->_31;
HXDLIN(  64)		float loc1_z = _this->self->_32;
HXDLIN(  64)		float loc1_w = _this->self->_33;
HXLINE(  65)		 ::iron::math::Mat4 _this1 = this->transform->world;
HXDLIN(  65)		float loc2_x = _this1->self->_30;
HXDLIN(  65)		float loc2_y = _this1->self->_31;
HXDLIN(  65)		float loc2_z = _this1->self->_32;
HXDLIN(  65)		float loc2_w = _this1->self->_33;
HXLINE(  67)		float vx = (loc1_x - loc2_x);
HXDLIN(  67)		float vy = (loc1_y - loc2_y);
HXDLIN(  67)		float vz = (loc1_z - loc2_z);
HXDLIN(  67)		float d = ( (float)(::Math_obj::sqrt(( (Float)((((vx * vx) + (vy * vy)) + (vz * vz))) ))) );
HXLINE(  68)		d = (d * this->data->attenuation);
HXLINE(  69)		Float vol = (((Float)1.0) - ::Math_obj::min((( (Float)(d) ) / ( (Float)(100) )),( (Float)(1) )));
HXLINE(  71)		{
HXLINE(  71)			int _g2 = 0;
HXDLIN(  71)			::Array< ::Dynamic> _g11 = this->channels;
HXDLIN(  71)			while((_g2 < _g11->length)){
HXLINE(  71)				::Dynamic c1 = _g11->__get(_g2);
HXDLIN(  71)				_g2 = (_g2 + 1);
HXDLIN(  71)				::kha::audio1::AudioChannel_obj::set_volume(c1,(vol * this->data->volume));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SpeakerObject_obj,update,(void))

void SpeakerObject_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_202e205ba7c8abfd_74_remove)
HXLINE(  75)		if (hx::IsNotNull( ::iron::Scene_obj::active )) {
HXLINE(  75)			::iron::Scene_obj::active->speakers->remove(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  76)		this->super::remove();
            	}



hx::ObjectPtr< SpeakerObject_obj > SpeakerObject_obj::__new( ::iron::data::TSpeakerData data) {
	hx::ObjectPtr< SpeakerObject_obj > __this = new SpeakerObject_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< SpeakerObject_obj > SpeakerObject_obj::__alloc(hx::Ctx *_hx_ctx, ::iron::data::TSpeakerData data) {
	SpeakerObject_obj *__this = (SpeakerObject_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SpeakerObject_obj), true, "iron.object.SpeakerObject"));
	*(void **)__this = SpeakerObject_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

SpeakerObject_obj::SpeakerObject_obj()
{
}

void SpeakerObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpeakerObject);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_MEMBER_NAME(paused,"paused");
	 ::iron::object::Object_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpeakerObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(channels,"channels");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	 ::iron::object::Object_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SpeakerObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return hx::Val( channels ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SpeakerObject_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::iron::data::TSpeakerData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::kha::Sound >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpeakerObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("channels",50,aa,ee,6a));
	outFields->push(HX_("paused",ae,40,84,ef));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo SpeakerObject_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::data::TSpeakerData*/ ,(int)offsetof(SpeakerObject_obj,data),HX_("data",2a,56,63,42)},
	{hx::fsObject /*::kha::Sound*/ ,(int)offsetof(SpeakerObject_obj,sound),HX_("sound",cf,8c,cc,80)},
	{hx::fsObject /*Array< ::kha::audio1::AudioChannel >*/ ,(int)offsetof(SpeakerObject_obj,channels),HX_("channels",50,aa,ee,6a)},
	{hx::fsBool,(int)offsetof(SpeakerObject_obj,paused),HX_("paused",ae,40,84,ef)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SpeakerObject_obj_sStaticStorageInfo = 0;
#endif

static ::String SpeakerObject_obj_sMemberFields[] = {
	HX_("data",2a,56,63,42),
	HX_("sound",cf,8c,cc,80),
	HX_("channels",50,aa,ee,6a),
	HX_("paused",ae,40,84,ef),
	HX_("init",10,3b,bb,45),
	HX_("play",f4,2d,5a,4a),
	HX_("pause",f6,d6,57,bd),
	HX_("stop",02,f0,5b,4c),
	HX_("update",09,86,05,87),
	HX_("remove",44,9c,88,04),
	::String(null()) };

hx::Class SpeakerObject_obj::__mClass;

void SpeakerObject_obj::__register()
{
	SpeakerObject_obj _hx_dummy;
	SpeakerObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.object.SpeakerObject",f5,b7,da,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SpeakerObject_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SpeakerObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpeakerObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpeakerObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace object