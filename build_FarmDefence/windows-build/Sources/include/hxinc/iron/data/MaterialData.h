// Generated by Haxe 4.0.0-preview.4+6e012c1
#ifndef INCLUDED_iron_data_MaterialData
#define INCLUDED_iron_data_MaterialData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_data_Data
#include <hxinc/iron/data/Data.h>
#endif
HX_DECLARE_CLASS2(iron,data,Data)
HX_DECLARE_CLASS2(iron,data,MaterialContext)
HX_DECLARE_CLASS2(iron,data,MaterialData)
HX_DECLARE_CLASS2(iron,data,ShaderData)
HX_DECLARE_CLASS2(iron,data,TMaterialData)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES MaterialData_obj : public  ::iron::data::Data_obj
{
	public:
		typedef  ::iron::data::Data_obj super;
		typedef MaterialData_obj OBJ_;
		MaterialData_obj();

	public:
		enum { _hx_ClassId = 0x1625e903 };

		void __construct( ::iron::data::TMaterialData raw, ::Dynamic done,::String __o_file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.MaterialData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.MaterialData"); }
		static hx::ObjectPtr< MaterialData_obj > __new( ::iron::data::TMaterialData raw, ::Dynamic done,::String __o_file);
		static hx::ObjectPtr< MaterialData_obj > __alloc(hx::Ctx *_hx_ctx, ::iron::data::TMaterialData raw, ::Dynamic done,::String __o_file);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaterialData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MaterialData",91,0a,bd,a1); }

		static void __boot();
		static int uidCounter;
		static void parse(::String file,::String name, ::Dynamic done);
		static ::Dynamic parse_dyn();

		Float uid;
		::String name;
		 ::iron::data::TMaterialData raw;
		 ::iron::data::ShaderData shader;
		::Array< ::Dynamic> contexts;
		 ::iron::data::MaterialContext getContext(::String name);
		::Dynamic getContext_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_MaterialData */ 