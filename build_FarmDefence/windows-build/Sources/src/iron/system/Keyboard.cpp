// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <hxinc/haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <hxinc/haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_iron_system_Keyboard
#include <hxinc/iron/system/Keyboard.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <hxinc/iron/system/VirtualInput.h>
#endif
#ifndef INCLUDED_kha_input_Keyboard
#include <hxinc/kha/input/Keyboard.h>
#endif
#ifndef INCLUDED_kha_network_Controller
#include <hxinc/kha/network/Controller.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_278e4469bbd8f27a_317_new,"iron.system.Keyboard","new",0xead2c7f2,"iron.system.Keyboard.new","iron/system/Input.hx",317,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_332_endFrame,"iron.system.Keyboard","endFrame",0xd77d6180,"iron.system.Keyboard.endFrame","iron/system/Input.hx",332,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_341_reset,"iron.system.Keyboard","reset",0xa8a1c9e1,"iron.system.Keyboard.reset","iron/system/Input.hx",341,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_358_down,"iron.system.Keyboard","down",0x8707a090,"iron.system.Keyboard.down","iron/system/Input.hx",358,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_368_started,"iron.system.Keyboard","started",0x406251d3,"iron.system.Keyboard.started","iron/system/Input.hx",368,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_378_released,"iron.system.Keyboard","released",0x49e3dfeb,"iron.system.Keyboard.released","iron/system/Input.hx",378,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_409_downListener,"iron.system.Keyboard","downListener",0x01566d24,"iron.system.Keyboard.downListener","iron/system/Input.hx",409,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_418_upListener,"iron.system.Keyboard","upListener",0x09ad749d,"iron.system.Keyboard.upListener","iron/system/Input.hx",418,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_427_pressListener,"iron.system.Keyboard","pressListener",0x2552ad29,"iron.system.Keyboard.pressListener","iron/system/Input.hx",427,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_382_keyCode,"iron.system.Keyboard","keyCode",0xa6e54afe,"iron.system.Keyboard.keyCode","iron/system/Input.hx",382,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_278e4469bbd8f27a_319_boot,"iron.system.Keyboard","boot",0x85b52c60,"iron.system.Keyboard.boot","iron/system/Input.hx",319,0x32439d6d)
static const ::String _hx_array_data_39b7a700_13[] = {
	HX_("a",61,00,00,00),HX_("b",62,00,00,00),HX_("c",63,00,00,00),HX_("d",64,00,00,00),HX_("e",65,00,00,00),HX_("f",66,00,00,00),HX_("g",67,00,00,00),HX_("h",68,00,00,00),HX_("i",69,00,00,00),HX_("j",6a,00,00,00),HX_("k",6b,00,00,00),HX_("l",6c,00,00,00),HX_("m",6d,00,00,00),HX_("n",6e,00,00,00),HX_("o",6f,00,00,00),HX_("p",70,00,00,00),HX_("q",71,00,00,00),HX_("r",72,00,00,00),HX_("s",73,00,00,00),HX_("t",74,00,00,00),HX_("u",75,00,00,00),HX_("v",76,00,00,00),HX_("w",77,00,00,00),HX_("x",78,00,00,00),HX_("y",79,00,00,00),HX_("z",7a,00,00,00),HX_("0",30,00,00,00),HX_("1",31,00,00,00),HX_("2",32,00,00,00),HX_("3",33,00,00,00),HX_("4",34,00,00,00),HX_("5",35,00,00,00),HX_("6",36,00,00,00),HX_("7",37,00,00,00),HX_("8",38,00,00,00),HX_("9",39,00,00,00),HX_(".",2e,00,00,00),HX_(",",2c,00,00,00),HX_("space",c6,8c,66,81),HX_("backspace",3f,85,ea,ca),HX_("tab",55,5a,58,00),HX_("enter",18,6d,86,70),HX_("shift",82,ec,22,7c),HX_("control",5d,6b,81,19),HX_("alt",29,f9,49,00),HX_("escape",81,43,da,da),HX_("delete",2b,c0,d8,6a),HX_("back",27,da,10,41),HX_("up",5b,66,00,00),HX_("right",dc,0b,64,e9),HX_("left",07,08,b0,47),HX_("down",62,f8,6d,42),
};
namespace iron{
namespace _hx_system{

void Keyboard_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_278e4469bbd8f27a_317_new)
HXLINE( 324)		this->keysFrame = ::Array_obj< ::String >::__new(0);
HXLINE( 322)		this->keysReleased =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 321)		this->keysStarted =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 320)		this->keysDown =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 326)		super::__construct();
HXLINE( 327)		this->reset();
HXLINE( 328)		::kha::input::Keyboard_obj::get(null())->notify(this->downListener_dyn(),this->upListener_dyn(),this->pressListener_dyn());
            	}

Dynamic Keyboard_obj::__CreateEmpty() { return new Keyboard_obj; }

void *Keyboard_obj::_hx_vtable = 0;

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Keyboard_obj > _hx_result = new Keyboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Keyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x128d6806) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x128d6806;
	} else {
		return inClassId==(int)0x15b014de;
	}
}

void Keyboard_obj::endFrame(){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_332_endFrame)
HXDLIN( 332)		if ((this->keysFrame->length > 0)) {
HXLINE( 333)			{
HXLINE( 333)				int _g = 0;
HXDLIN( 333)				::Array< ::String > _g1 = this->keysFrame;
HXDLIN( 333)				while((_g < _g1->length)){
HXLINE( 333)					::String s = _g1->__get(_g);
HXDLIN( 333)					_g = (_g + 1);
HXLINE( 334)					this->keysStarted->set(s,false);
HXLINE( 335)					this->keysReleased->set(s,false);
            				}
            			}
HXLINE( 337)			this->keysFrame->removeRange(0,this->keysFrame->length);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,endFrame,(void))

void Keyboard_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_341_reset)
HXLINE( 343)		{
HXLINE( 343)			int _g = 0;
HXDLIN( 343)			::Array< ::String > _g1 = ::iron::_hx_system::Keyboard_obj::keys;
HXDLIN( 343)			while((_g < _g1->length)){
HXLINE( 343)				::String s = _g1->__get(_g);
HXDLIN( 343)				_g = (_g + 1);
HXLINE( 344)				this->keysDown->set(s,false);
HXLINE( 345)				this->keysStarted->set(s,false);
HXLINE( 346)				this->keysReleased->set(s,false);
            			}
            		}
HXLINE( 348)		this->endFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Keyboard_obj,reset,(void))

bool Keyboard_obj::down(::String key){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_358_down)
HXDLIN( 358)		return this->keysDown->get_bool(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,down,return )

bool Keyboard_obj::started(::String key){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_368_started)
HXDLIN( 368)		return this->keysStarted->get_bool(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,started,return )

bool Keyboard_obj::released(::String key){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_378_released)
HXDLIN( 378)		return this->keysReleased->get_bool(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,released,return )

void Keyboard_obj::downListener(int code){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_409_downListener)
HXLINE( 410)		::String s = ::iron::_hx_system::Keyboard_obj::keyCode(code);
HXLINE( 411)		this->keysFrame->push(s);
HXLINE( 412)		this->keysStarted->set(s,true);
HXLINE( 413)		this->keysDown->set(s,true);
HXLINE( 415)		this->downVirtual(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,downListener,(void))

void Keyboard_obj::upListener(int code){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_418_upListener)
HXLINE( 419)		::String s = ::iron::_hx_system::Keyboard_obj::keyCode(code);
HXLINE( 420)		this->keysFrame->push(s);
HXLINE( 421)		this->keysReleased->set(s,true);
HXLINE( 422)		this->keysDown->set(s,false);
HXLINE( 424)		this->upVirtual(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,upListener,(void))

void Keyboard_obj::pressListener(::String _hx_char){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_427_pressListener)
            	}


HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,pressListener,(void))

::Array< ::String > Keyboard_obj::keys;

::String Keyboard_obj::keyCode(int key){
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_382_keyCode)
HXDLIN( 382)		if ((key == 32)) {
HXDLIN( 382)			return HX_("space",c6,8c,66,81);
            		}
            		else {
HXLINE( 383)			if ((key == 8)) {
HXLINE( 383)				return HX_("backspace",3f,85,ea,ca);
            			}
            			else {
HXLINE( 384)				if ((key == 9)) {
HXLINE( 384)					return HX_("tab",55,5a,58,00);
            				}
            				else {
HXLINE( 385)					if ((key == 13)) {
HXLINE( 385)						return HX_("enter",18,6d,86,70);
            					}
            					else {
HXLINE( 386)						if ((key == 16)) {
HXLINE( 386)							return HX_("shift",82,ec,22,7c);
            						}
            						else {
HXLINE( 387)							if ((key == 17)) {
HXLINE( 387)								return HX_("control",5d,6b,81,19);
            							}
            							else {
HXLINE( 388)								if ((key == 18)) {
HXLINE( 388)									return HX_("alt",29,f9,49,00);
            								}
            								else {
HXLINE( 389)									if ((key == 27)) {
HXLINE( 389)										return HX_("escape",81,43,da,da);
            									}
            									else {
HXLINE( 390)										if ((key == 46)) {
HXLINE( 390)											return HX_("delete",2b,c0,d8,6a);
            										}
            										else {
HXLINE( 391)											if ((key == 38)) {
HXLINE( 391)												return HX_("up",5b,66,00,00);
            											}
            											else {
HXLINE( 392)												if ((key == 40)) {
HXLINE( 392)													return HX_("down",62,f8,6d,42);
            												}
            												else {
HXLINE( 393)													if ((key == 37)) {
HXLINE( 393)														return HX_("left",07,08,b0,47);
            													}
            													else {
HXLINE( 394)														if ((key == 39)) {
HXLINE( 394)															return HX_("right",dc,0b,64,e9);
            														}
            														else {
HXLINE( 395)															if ((key == 1)) {
HXLINE( 395)																return HX_("back",27,da,10,41);
            															}
            															else {
HXLINE( 396)																if ((key == 48)) {
HXLINE( 396)																	return HX_("0",30,00,00,00);
            																}
            																else {
HXLINE( 397)																	if ((key == 49)) {
HXLINE( 397)																		return HX_("1",31,00,00,00);
            																	}
            																	else {
HXLINE( 398)																		if ((key == 50)) {
HXLINE( 398)																			return HX_("2",32,00,00,00);
            																		}
            																		else {
HXLINE( 399)																			if ((key == 51)) {
HXLINE( 399)																				return HX_("3",33,00,00,00);
            																			}
            																			else {
HXLINE( 400)																				if ((key == 52)) {
HXLINE( 400)																					return HX_("4",34,00,00,00);
            																				}
            																				else {
HXLINE( 401)																					if ((key == 53)) {
HXLINE( 401)																						return HX_("5",35,00,00,00);
            																					}
            																					else {
HXLINE( 402)																						if ((key == 54)) {
HXLINE( 402)																							return HX_("6",36,00,00,00);
            																						}
            																						else {
HXLINE( 403)																							if ((key == 55)) {
HXLINE( 403)																								return HX_("7",37,00,00,00);
            																							}
            																							else {
HXLINE( 404)																								if ((key == 56)) {
HXLINE( 404)																									return HX_("8",38,00,00,00);
            																								}
            																								else {
HXLINE( 405)																									if ((key == 57)) {
HXLINE( 405)																										return HX_("9",39,00,00,00);
            																									}
            																									else {
HXLINE( 406)																										return ::String::fromCharCode(key).toLowerCase();
            																									}
            																								}
            																							}
            																						}
            																					}
            																				}
            																			}
            																		}
            																	}
            																}
            															}
            														}
            													}
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 382)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Keyboard_obj,keyCode,return )


hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new() {
	hx::ObjectPtr< Keyboard_obj > __this = new Keyboard_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__alloc(hx::Ctx *_hx_ctx) {
	Keyboard_obj *__this = (Keyboard_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Keyboard_obj), true, "iron.system.Keyboard"));
	*(void **)__this = Keyboard_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Keyboard_obj::Keyboard_obj()
{
}

void Keyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Keyboard);
	HX_MARK_MEMBER_NAME(keysDown,"keysDown");
	HX_MARK_MEMBER_NAME(keysStarted,"keysStarted");
	HX_MARK_MEMBER_NAME(keysReleased,"keysReleased");
	HX_MARK_MEMBER_NAME(keysFrame,"keysFrame");
	 ::iron::_hx_system::VirtualInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Keyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keysDown,"keysDown");
	HX_VISIT_MEMBER_NAME(keysStarted,"keysStarted");
	HX_VISIT_MEMBER_NAME(keysReleased,"keysReleased");
	HX_VISIT_MEMBER_NAME(keysFrame,"keysFrame");
	 ::iron::_hx_system::VirtualInput_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Keyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return hx::Val( started_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { return hx::Val( keysDown ); }
		if (HX_FIELD_EQ(inName,"endFrame") ) { return hx::Val( endFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"released") ) { return hx::Val( released_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keysFrame") ) { return hx::Val( keysFrame ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"upListener") ) { return hx::Val( upListener_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keysStarted") ) { return hx::Val( keysStarted ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keysReleased") ) { return hx::Val( keysReleased ); }
		if (HX_FIELD_EQ(inName,"downListener") ) { return hx::Val( downListener_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pressListener") ) { return hx::Val( pressListener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Keyboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { outValue = ( keys ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { outValue = keyCode_dyn(); return true; }
	}
	return false;
}

hx::Val Keyboard_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"keysDown") ) { keysDown=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keysFrame") ) { keysFrame=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keysStarted") ) { keysStarted=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"keysReleased") ) { keysReleased=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Keyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void Keyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("keysDown",76,10,98,15));
	outFields->push(HX_("keysStarted",ad,55,88,22));
	outFields->push(HX_("keysReleased",d1,3a,01,49));
	outFields->push(HX_("keysFrame",99,71,2e,f8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Keyboard_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Keyboard_obj,keysDown),HX_("keysDown",76,10,98,15)},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Keyboard_obj,keysStarted),HX_("keysStarted",ad,55,88,22)},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Keyboard_obj,keysReleased),HX_("keysReleased",d1,3a,01,49)},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Keyboard_obj,keysFrame),HX_("keysFrame",99,71,2e,f8)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Keyboard_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Keyboard_obj::keys,HX_("keys",f4,e1,06,47)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Keyboard_obj_sMemberFields[] = {
	HX_("keysDown",76,10,98,15),
	HX_("keysStarted",ad,55,88,22),
	HX_("keysReleased",d1,3a,01,49),
	HX_("keysFrame",99,71,2e,f8),
	HX_("endFrame",52,0a,81,04),
	HX_("reset",cf,49,c8,e6),
	HX_("down",62,f8,6d,42),
	HX_("started",41,29,1b,35),
	HX_("released",bd,88,e7,76),
	HX_("downListener",f6,e6,73,a7),
	HX_("upListener",ef,75,8a,3d),
	HX_("pressListener",17,cb,ff,d8),
	::String(null()) };

static void Keyboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::keys,"keys");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Keyboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::keys,"keys");
};

#endif

hx::Class Keyboard_obj::__mClass;

static ::String Keyboard_obj_sStaticFields[] = {
	HX_("keys",f4,e1,06,47),
	HX_("keyCode",6c,22,9e,9b),
	::String(null())
};

void Keyboard_obj::__register()
{
	Keyboard_obj _hx_dummy;
	Keyboard_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("iron.system.Keyboard",00,a7,b7,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keyboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Keyboard_obj::__SetStatic;
	__mClass->mMarkFunc = Keyboard_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Keyboard_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Keyboard_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Keyboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Keyboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Keyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Keyboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Keyboard_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_278e4469bbd8f27a_319_boot)
HXDLIN( 319)		keys = ::Array_obj< ::String >::fromData( _hx_array_data_39b7a700_13,52);
            	}
}

} // end namespace iron
} // end namespace system