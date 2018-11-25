// Generated by Haxe 4.0.0-preview.4+6e012c1
#ifndef INCLUDED_iron_data_TCameraData
#define INCLUDED_iron_data_TCameraData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,data,TCameraData)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES TCameraData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TCameraData_obj OBJ_;
		TCameraData_obj();

	public:
		enum { _hx_ClassId = 0x5933eab1 };

		void __construct(::String name,float near_plane,float far_plane,float fov, ::kha::arrays::Float32ArrayPrivate clear_color, ::Dynamic aspect, ::Dynamic frustum_culling, ::Dynamic render_to_texture, ::Dynamic texture_resolution_x, ::Dynamic texture_resolution_y, ::Dynamic ortho_scale);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.TCameraData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.TCameraData"); }
		static hx::ObjectPtr< TCameraData_obj > __new(::String name,float near_plane,float far_plane,float fov, ::kha::arrays::Float32ArrayPrivate clear_color, ::Dynamic aspect, ::Dynamic frustum_culling, ::Dynamic render_to_texture, ::Dynamic texture_resolution_x, ::Dynamic texture_resolution_y, ::Dynamic ortho_scale);
		static hx::ObjectPtr< TCameraData_obj > __alloc(hx::Ctx *_hx_ctx,::String name,float near_plane,float far_plane,float fov, ::kha::arrays::Float32ArrayPrivate clear_color, ::Dynamic aspect, ::Dynamic frustum_culling, ::Dynamic render_to_texture, ::Dynamic texture_resolution_x, ::Dynamic texture_resolution_y, ::Dynamic ortho_scale);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TCameraData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TCameraData",e3,b4,2d,e8); }

		::String name;
		float near_plane;
		float far_plane;
		float fov;
		 ::kha::arrays::Float32ArrayPrivate clear_color;
		 ::Dynamic aspect;
		 ::Dynamic frustum_culling;
		 ::Dynamic render_to_texture;
		 ::Dynamic texture_resolution_x;
		 ::Dynamic texture_resolution_y;
		 ::Dynamic ortho_scale;
};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_TCameraData */ 