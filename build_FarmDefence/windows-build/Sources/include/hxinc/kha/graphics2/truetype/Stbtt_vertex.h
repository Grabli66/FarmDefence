// Generated by Haxe 4.0.0-preview.4+6e012c1
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_vertex
#define INCLUDED_kha_graphics2_truetype_Stbtt_vertex

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a0bea14738bd3c17_137_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_vertex)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_vertex_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_vertex_obj OBJ_;
		Stbtt_vertex_obj();

	public:
		enum { _hx_ClassId = 0x733c090d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_vertex")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_vertex"); }

		hx::ObjectPtr< Stbtt_vertex_obj > __new() {
			hx::ObjectPtr< Stbtt_vertex_obj > __this = new Stbtt_vertex_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_vertex_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_vertex_obj *__this = (Stbtt_vertex_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_vertex_obj), false, "kha.graphics2.truetype.Stbtt_vertex"));
			*(void **)__this = Stbtt_vertex_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a0bea14738bd3c17_137_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_vertex_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stbtt_vertex",e2,3e,59,e2); }

		int x;
		int y;
		int cx;
		int cy;
		int type;
		int padding;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_vertex */ 