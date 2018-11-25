// Generated by Haxe 4.0.0-preview.4+6e012c1
#ifndef INCLUDED_armory_system_Starter
#define INCLUDED_armory_system_Starter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(armory,_hx_system,Starter)
HX_DECLARE_CLASS1(iron,RenderPath)

namespace armory{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Starter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Starter_obj OBJ_;
		Starter_obj();

	public:
		enum { _hx_ClassId = 0x19e31ca2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="armory.system.Starter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"armory.system.Starter"); }

		hx::ObjectPtr< Starter_obj > __new() {
			hx::ObjectPtr< Starter_obj > __this = new Starter_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Starter_obj > __alloc(hx::Ctx *_hx_ctx) {
			Starter_obj *__this = (Starter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Starter_obj), false, "armory.system.Starter"));
			*(void **)__this = Starter_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Starter_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Starter",2f,51,6c,02); }

		static int tasks;
		static void main(::String scene,int mode,bool resize,bool min,bool max,int w,int h,int msaa,bool vsync, ::Dynamic getRenderPath);
		static ::Dynamic main_dyn();

};

} // end namespace armory
} // end namespace system

#endif /* INCLUDED_armory_system_Starter */ 