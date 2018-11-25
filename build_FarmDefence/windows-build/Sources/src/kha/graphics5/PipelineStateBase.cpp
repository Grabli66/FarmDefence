// Generated by Haxe 4.0.0-preview.4+6e012c1
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_BlendingFactor
#include <hxinc/kha/graphics4/BlendingFactor.h>
#endif
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#include <hxinc/kha/graphics4/BlendingOperation.h>
#endif
#ifndef INCLUDED_kha_graphics4_CompareMode
#include <hxinc/kha/graphics4/CompareMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_CullMode
#include <hxinc/kha/graphics4/CullMode.h>
#endif
#ifndef INCLUDED_kha_graphics4_StencilAction
#include <hxinc/kha/graphics4/StencilAction.h>
#endif
#ifndef INCLUDED_kha_graphics4_VertexStructure
#include <hxinc/kha/graphics4/VertexStructure.h>
#endif
#ifndef INCLUDED_kha_graphics5_FragmentShader
#include <hxinc/kha/graphics5/FragmentShader.h>
#endif
#ifndef INCLUDED_kha_graphics5_PipelineStateBase
#include <hxinc/kha/graphics5/PipelineStateBase.h>
#endif
#ifndef INCLUDED_kha_graphics5_VertexShader
#include <hxinc/kha/graphics5/VertexShader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d4f73484df79fcc_4_new,"kha.graphics5.PipelineStateBase","new",0x93e8f964,"kha.graphics5.PipelineStateBase.new","kha/graphics5/PipelineStateBase.hx",4,0xd1f896ce)
HX_LOCAL_STACK_FRAME(_hx_pos_8d4f73484df79fcc_72_set_colorWriteMask,"kha.graphics5.PipelineStateBase","set_colorWriteMask",0xc0618e41,"kha.graphics5.PipelineStateBase.set_colorWriteMask","kha/graphics5/PipelineStateBase.hx",72,0xd1f896ce)
namespace kha{
namespace graphics5{

void PipelineStateBase_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8d4f73484df79fcc_4_new)
HXLINE(   5)		this->inputLayout = null();
HXLINE(   6)		this->vertexShader = null();
HXLINE(   7)		this->fragmentShader = null();
HXLINE(  12)		this->cullMode = ::kha::graphics4::CullMode_obj::None_dyn();
HXLINE(  14)		this->depthWrite = false;
HXLINE(  15)		this->depthMode = ::kha::graphics4::CompareMode_obj::Always_dyn();
HXLINE(  17)		this->stencilMode = ::kha::graphics4::CompareMode_obj::Always_dyn();
HXLINE(  18)		this->stencilBothPass = ::kha::graphics4::StencilAction_obj::Keep_dyn();
HXLINE(  19)		this->stencilDepthFail = ::kha::graphics4::StencilAction_obj::Keep_dyn();
HXLINE(  20)		this->stencilFail = ::kha::graphics4::StencilAction_obj::Keep_dyn();
HXLINE(  21)		this->stencilReferenceValue = 0;
HXLINE(  22)		this->stencilReadMask = 255;
HXLINE(  23)		this->stencilWriteMask = 255;
HXLINE(  25)		this->blendSource = ::kha::graphics4::BlendingFactor_obj::BlendOne_dyn();
HXLINE(  26)		this->blendDestination = ::kha::graphics4::BlendingFactor_obj::BlendZero_dyn();
HXLINE(  27)		this->blendOperation = ::kha::graphics4::BlendingOperation_obj::Add_dyn();
HXLINE(  28)		this->alphaBlendSource = ::kha::graphics4::BlendingFactor_obj::BlendOne_dyn();
HXLINE(  29)		this->alphaBlendDestination = ::kha::graphics4::BlendingFactor_obj::BlendZero_dyn();
HXLINE(  30)		this->alphaBlendOperation = ::kha::graphics4::BlendingOperation_obj::Add_dyn();
HXLINE(  32)		this->colorWriteMaskRed = (this->colorWriteMaskBlue = (this->colorWriteMaskGreen = (this->colorWriteMaskAlpha = true)));
HXLINE(  34)		this->conservativeRasterization = false;
            	}

Dynamic PipelineStateBase_obj::__CreateEmpty() { return new PipelineStateBase_obj; }

void *PipelineStateBase_obj::_hx_vtable = 0;

Dynamic PipelineStateBase_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PipelineStateBase_obj > _hx_result = new PipelineStateBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PipelineStateBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02468696;
}

bool PipelineStateBase_obj::set_colorWriteMask(bool value){
            	HX_STACKFRAME(&_hx_pos_8d4f73484df79fcc_72_set_colorWriteMask)
HXDLIN(  72)		return (this->colorWriteMaskRed = (this->colorWriteMaskBlue = (this->colorWriteMaskGreen = (this->colorWriteMaskAlpha = value))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PipelineStateBase_obj,set_colorWriteMask,return )


hx::ObjectPtr< PipelineStateBase_obj > PipelineStateBase_obj::__new() {
	hx::ObjectPtr< PipelineStateBase_obj > __this = new PipelineStateBase_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PipelineStateBase_obj > PipelineStateBase_obj::__alloc(hx::Ctx *_hx_ctx) {
	PipelineStateBase_obj *__this = (PipelineStateBase_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PipelineStateBase_obj), true, "kha.graphics5.PipelineStateBase"));
	*(void **)__this = PipelineStateBase_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PipelineStateBase_obj::PipelineStateBase_obj()
{
}

void PipelineStateBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PipelineStateBase);
	HX_MARK_MEMBER_NAME(inputLayout,"inputLayout");
	HX_MARK_MEMBER_NAME(vertexShader,"vertexShader");
	HX_MARK_MEMBER_NAME(fragmentShader,"fragmentShader");
	HX_MARK_MEMBER_NAME(cullMode,"cullMode");
	HX_MARK_MEMBER_NAME(depthWrite,"depthWrite");
	HX_MARK_MEMBER_NAME(depthMode,"depthMode");
	HX_MARK_MEMBER_NAME(stencilMode,"stencilMode");
	HX_MARK_MEMBER_NAME(stencilBothPass,"stencilBothPass");
	HX_MARK_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_MARK_MEMBER_NAME(stencilFail,"stencilFail");
	HX_MARK_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_MARK_MEMBER_NAME(blendSource,"blendSource");
	HX_MARK_MEMBER_NAME(blendDestination,"blendDestination");
	HX_MARK_MEMBER_NAME(blendOperation,"blendOperation");
	HX_MARK_MEMBER_NAME(alphaBlendSource,"alphaBlendSource");
	HX_MARK_MEMBER_NAME(alphaBlendDestination,"alphaBlendDestination");
	HX_MARK_MEMBER_NAME(alphaBlendOperation,"alphaBlendOperation");
	HX_MARK_MEMBER_NAME(colorWriteMaskRed,"colorWriteMaskRed");
	HX_MARK_MEMBER_NAME(colorWriteMaskGreen,"colorWriteMaskGreen");
	HX_MARK_MEMBER_NAME(colorWriteMaskBlue,"colorWriteMaskBlue");
	HX_MARK_MEMBER_NAME(colorWriteMaskAlpha,"colorWriteMaskAlpha");
	HX_MARK_MEMBER_NAME(conservativeRasterization,"conservativeRasterization");
	HX_MARK_END_CLASS();
}

void PipelineStateBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inputLayout,"inputLayout");
	HX_VISIT_MEMBER_NAME(vertexShader,"vertexShader");
	HX_VISIT_MEMBER_NAME(fragmentShader,"fragmentShader");
	HX_VISIT_MEMBER_NAME(cullMode,"cullMode");
	HX_VISIT_MEMBER_NAME(depthWrite,"depthWrite");
	HX_VISIT_MEMBER_NAME(depthMode,"depthMode");
	HX_VISIT_MEMBER_NAME(stencilMode,"stencilMode");
	HX_VISIT_MEMBER_NAME(stencilBothPass,"stencilBothPass");
	HX_VISIT_MEMBER_NAME(stencilDepthFail,"stencilDepthFail");
	HX_VISIT_MEMBER_NAME(stencilFail,"stencilFail");
	HX_VISIT_MEMBER_NAME(stencilReferenceValue,"stencilReferenceValue");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(stencilWriteMask,"stencilWriteMask");
	HX_VISIT_MEMBER_NAME(blendSource,"blendSource");
	HX_VISIT_MEMBER_NAME(blendDestination,"blendDestination");
	HX_VISIT_MEMBER_NAME(blendOperation,"blendOperation");
	HX_VISIT_MEMBER_NAME(alphaBlendSource,"alphaBlendSource");
	HX_VISIT_MEMBER_NAME(alphaBlendDestination,"alphaBlendDestination");
	HX_VISIT_MEMBER_NAME(alphaBlendOperation,"alphaBlendOperation");
	HX_VISIT_MEMBER_NAME(colorWriteMaskRed,"colorWriteMaskRed");
	HX_VISIT_MEMBER_NAME(colorWriteMaskGreen,"colorWriteMaskGreen");
	HX_VISIT_MEMBER_NAME(colorWriteMaskBlue,"colorWriteMaskBlue");
	HX_VISIT_MEMBER_NAME(colorWriteMaskAlpha,"colorWriteMaskAlpha");
	HX_VISIT_MEMBER_NAME(conservativeRasterization,"conservativeRasterization");
}

hx::Val PipelineStateBase_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cullMode") ) { return hx::Val( cullMode ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMode") ) { return hx::Val( depthMode ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthWrite") ) { return hx::Val( depthWrite ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLayout") ) { return hx::Val( inputLayout ); }
		if (HX_FIELD_EQ(inName,"stencilMode") ) { return hx::Val( stencilMode ); }
		if (HX_FIELD_EQ(inName,"stencilFail") ) { return hx::Val( stencilFail ); }
		if (HX_FIELD_EQ(inName,"blendSource") ) { return hx::Val( blendSource ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexShader") ) { return hx::Val( vertexShader ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentShader") ) { return hx::Val( fragmentShader ); }
		if (HX_FIELD_EQ(inName,"blendOperation") ) { return hx::Val( blendOperation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stencilBothPass") ) { return hx::Val( stencilBothPass ); }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return hx::Val( stencilReadMask ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { return hx::Val( stencilDepthFail ); }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { return hx::Val( stencilWriteMask ); }
		if (HX_FIELD_EQ(inName,"blendDestination") ) { return hx::Val( blendDestination ); }
		if (HX_FIELD_EQ(inName,"alphaBlendSource") ) { return hx::Val( alphaBlendSource ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"colorWriteMaskRed") ) { return hx::Val( colorWriteMaskRed ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"colorWriteMaskBlue") ) { return hx::Val( colorWriteMaskBlue ); }
		if (HX_FIELD_EQ(inName,"set_colorWriteMask") ) { return hx::Val( set_colorWriteMask_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alphaBlendOperation") ) { return hx::Val( alphaBlendOperation ); }
		if (HX_FIELD_EQ(inName,"colorWriteMaskGreen") ) { return hx::Val( colorWriteMaskGreen ); }
		if (HX_FIELD_EQ(inName,"colorWriteMaskAlpha") ) { return hx::Val( colorWriteMaskAlpha ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { return hx::Val( stencilReferenceValue ); }
		if (HX_FIELD_EQ(inName,"alphaBlendDestination") ) { return hx::Val( alphaBlendDestination ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"conservativeRasterization") ) { return hx::Val( conservativeRasterization ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PipelineStateBase_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"cullMode") ) { cullMode=inValue.Cast<  ::kha::graphics4::CullMode >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"depthMode") ) { depthMode=inValue.Cast<  ::kha::graphics4::CompareMode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"depthWrite") ) { depthWrite=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLayout") ) { inputLayout=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilMode") ) { stencilMode=inValue.Cast<  ::kha::graphics4::CompareMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilFail") ) { stencilFail=inValue.Cast<  ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendSource") ) { blendSource=inValue.Cast<  ::kha::graphics4::BlendingFactor >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vertexShader") ) { vertexShader=inValue.Cast<  ::kha::graphics5::VertexShader >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fragmentShader") ) { fragmentShader=inValue.Cast<  ::kha::graphics5::FragmentShader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendOperation") ) { blendOperation=inValue.Cast<  ::kha::graphics4::BlendingOperation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorWriteMask") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colorWriteMask(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stencilBothPass") ) { stencilBothPass=inValue.Cast<  ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"stencilDepthFail") ) { stencilDepthFail=inValue.Cast<  ::kha::graphics4::StencilAction >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilWriteMask") ) { stencilWriteMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDestination") ) { blendDestination=inValue.Cast<  ::kha::graphics4::BlendingFactor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaBlendSource") ) { alphaBlendSource=inValue.Cast<  ::kha::graphics4::BlendingFactor >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"colorWriteMaskRed") ) { colorWriteMaskRed=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"colorWriteMaskBlue") ) { colorWriteMaskBlue=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"alphaBlendOperation") ) { alphaBlendOperation=inValue.Cast<  ::kha::graphics4::BlendingOperation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorWriteMaskGreen") ) { colorWriteMaskGreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorWriteMaskAlpha") ) { colorWriteMaskAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"stencilReferenceValue") ) { stencilReferenceValue=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaBlendDestination") ) { alphaBlendDestination=inValue.Cast<  ::kha::graphics4::BlendingFactor >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"conservativeRasterization") ) { conservativeRasterization=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PipelineStateBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("inputLayout",54,8a,ec,4d));
	outFields->push(HX_("vertexShader",a9,b1,35,bd));
	outFields->push(HX_("fragmentShader",15,4f,dc,39));
	outFields->push(HX_("cullMode",35,06,dd,b0));
	outFields->push(HX_("depthWrite",dc,60,c5,2c));
	outFields->push(HX_("depthMode",06,2e,e4,9e));
	outFields->push(HX_("stencilMode",7f,6b,5a,45));
	outFields->push(HX_("stencilBothPass",0e,44,39,da));
	outFields->push(HX_("stencilDepthFail",e5,96,76,67));
	outFields->push(HX_("stencilFail",fa,51,af,40));
	outFields->push(HX_("stencilReferenceValue",c2,1a,35,60));
	outFields->push(HX_("stencilReadMask",7e,f1,2b,e5));
	outFields->push(HX_("stencilWriteMask",cf,b7,47,1e));
	outFields->push(HX_("blendSource",0c,a0,a3,e6));
	outFields->push(HX_("blendDestination",bd,e9,a3,86));
	outFields->push(HX_("blendOperation",96,69,d1,a2));
	outFields->push(HX_("alphaBlendSource",4e,31,cd,89));
	outFields->push(HX_("alphaBlendDestination",3b,89,ba,f1));
	outFields->push(HX_("alphaBlendOperation",94,8d,d8,a2));
	outFields->push(HX_("colorWriteMask",88,df,b6,b8));
	outFields->push(HX_("colorWriteMaskRed",a9,16,c2,dd));
	outFields->push(HX_("colorWriteMaskGreen",1b,52,a4,16));
	outFields->push(HX_("colorWriteMaskBlue",42,b2,83,21));
	outFields->push(HX_("colorWriteMaskAlpha",b6,ea,4d,9e));
	outFields->push(HX_("conservativeRasterization",5a,18,5f,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo PipelineStateBase_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PipelineStateBase_obj,inputLayout),HX_("inputLayout",54,8a,ec,4d)},
	{hx::fsObject /*::kha::graphics5::VertexShader*/ ,(int)offsetof(PipelineStateBase_obj,vertexShader),HX_("vertexShader",a9,b1,35,bd)},
	{hx::fsObject /*::kha::graphics5::FragmentShader*/ ,(int)offsetof(PipelineStateBase_obj,fragmentShader),HX_("fragmentShader",15,4f,dc,39)},
	{hx::fsObject /*::kha::graphics4::CullMode*/ ,(int)offsetof(PipelineStateBase_obj,cullMode),HX_("cullMode",35,06,dd,b0)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,depthWrite),HX_("depthWrite",dc,60,c5,2c)},
	{hx::fsObject /*::kha::graphics4::CompareMode*/ ,(int)offsetof(PipelineStateBase_obj,depthMode),HX_("depthMode",06,2e,e4,9e)},
	{hx::fsObject /*::kha::graphics4::CompareMode*/ ,(int)offsetof(PipelineStateBase_obj,stencilMode),HX_("stencilMode",7f,6b,5a,45)},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilBothPass),HX_("stencilBothPass",0e,44,39,da)},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilDepthFail),HX_("stencilDepthFail",e5,96,76,67)},
	{hx::fsObject /*::kha::graphics4::StencilAction*/ ,(int)offsetof(PipelineStateBase_obj,stencilFail),HX_("stencilFail",fa,51,af,40)},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilReferenceValue),HX_("stencilReferenceValue",c2,1a,35,60)},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilReadMask),HX_("stencilReadMask",7e,f1,2b,e5)},
	{hx::fsInt,(int)offsetof(PipelineStateBase_obj,stencilWriteMask),HX_("stencilWriteMask",cf,b7,47,1e)},
	{hx::fsObject /*::kha::graphics4::BlendingFactor*/ ,(int)offsetof(PipelineStateBase_obj,blendSource),HX_("blendSource",0c,a0,a3,e6)},
	{hx::fsObject /*::kha::graphics4::BlendingFactor*/ ,(int)offsetof(PipelineStateBase_obj,blendDestination),HX_("blendDestination",bd,e9,a3,86)},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(PipelineStateBase_obj,blendOperation),HX_("blendOperation",96,69,d1,a2)},
	{hx::fsObject /*::kha::graphics4::BlendingFactor*/ ,(int)offsetof(PipelineStateBase_obj,alphaBlendSource),HX_("alphaBlendSource",4e,31,cd,89)},
	{hx::fsObject /*::kha::graphics4::BlendingFactor*/ ,(int)offsetof(PipelineStateBase_obj,alphaBlendDestination),HX_("alphaBlendDestination",3b,89,ba,f1)},
	{hx::fsObject /*::kha::graphics4::BlendingOperation*/ ,(int)offsetof(PipelineStateBase_obj,alphaBlendOperation),HX_("alphaBlendOperation",94,8d,d8,a2)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskRed),HX_("colorWriteMaskRed",a9,16,c2,dd)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskGreen),HX_("colorWriteMaskGreen",1b,52,a4,16)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskBlue),HX_("colorWriteMaskBlue",42,b2,83,21)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,colorWriteMaskAlpha),HX_("colorWriteMaskAlpha",b6,ea,4d,9e)},
	{hx::fsBool,(int)offsetof(PipelineStateBase_obj,conservativeRasterization),HX_("conservativeRasterization",5a,18,5f,e7)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PipelineStateBase_obj_sStaticStorageInfo = 0;
#endif

static ::String PipelineStateBase_obj_sMemberFields[] = {
	HX_("inputLayout",54,8a,ec,4d),
	HX_("vertexShader",a9,b1,35,bd),
	HX_("fragmentShader",15,4f,dc,39),
	HX_("cullMode",35,06,dd,b0),
	HX_("depthWrite",dc,60,c5,2c),
	HX_("depthMode",06,2e,e4,9e),
	HX_("stencilMode",7f,6b,5a,45),
	HX_("stencilBothPass",0e,44,39,da),
	HX_("stencilDepthFail",e5,96,76,67),
	HX_("stencilFail",fa,51,af,40),
	HX_("stencilReferenceValue",c2,1a,35,60),
	HX_("stencilReadMask",7e,f1,2b,e5),
	HX_("stencilWriteMask",cf,b7,47,1e),
	HX_("blendSource",0c,a0,a3,e6),
	HX_("blendDestination",bd,e9,a3,86),
	HX_("blendOperation",96,69,d1,a2),
	HX_("alphaBlendSource",4e,31,cd,89),
	HX_("alphaBlendDestination",3b,89,ba,f1),
	HX_("alphaBlendOperation",94,8d,d8,a2),
	HX_("colorWriteMaskRed",a9,16,c2,dd),
	HX_("colorWriteMaskGreen",1b,52,a4,16),
	HX_("colorWriteMaskBlue",42,b2,83,21),
	HX_("colorWriteMaskAlpha",b6,ea,4d,9e),
	HX_("set_colorWriteMask",c5,f2,ff,30),
	HX_("conservativeRasterization",5a,18,5f,e7),
	::String(null()) };

hx::Class PipelineStateBase_obj::__mClass;

void PipelineStateBase_obj::__register()
{
	PipelineStateBase_obj _hx_dummy;
	PipelineStateBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("kha.graphics5.PipelineStateBase",72,b7,d7,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PipelineStateBase_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PipelineStateBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PipelineStateBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PipelineStateBase_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics5