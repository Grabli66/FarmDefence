// Generated by Haxe 4.0.0-preview.4+6e012c1
#ifndef INCLUDED_kha_network_Client
#define INCLUDED_kha_network_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,network,Client)

namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES Client_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		int (hx::Object :: *_hx_get_id)(); 
		static inline int get_id( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::kha::network::Client_obj *>(_hx_.mPtr->_hx_getInterface(0xe7ca9475)))->_hx_get_id)();
		}
		void (hx::Object :: *_hx_send)( ::haxe::io::Bytes bytes,bool mandatory); 
		static inline void send( ::Dynamic _hx_, ::haxe::io::Bytes bytes,bool mandatory) {
			(_hx_.mPtr->*( static_cast< ::kha::network::Client_obj *>(_hx_.mPtr->_hx_getInterface(0xe7ca9475)))->_hx_send)(bytes,mandatory);
		}
		void (hx::Object :: *_hx_receive)( ::Dynamic receiver); 
		static inline void receive( ::Dynamic _hx_, ::Dynamic receiver) {
			(_hx_.mPtr->*( static_cast< ::kha::network::Client_obj *>(_hx_.mPtr->_hx_getInterface(0xe7ca9475)))->_hx_receive)(receiver);
		}
		void (hx::Object :: *_hx_onClose)( ::Dynamic close); 
		static inline void onClose( ::Dynamic _hx_, ::Dynamic close) {
			(_hx_.mPtr->*( static_cast< ::kha::network::Client_obj *>(_hx_.mPtr->_hx_getInterface(0xe7ca9475)))->_hx_onClose)(close);
		}
};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_Client */ 