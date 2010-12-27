/*================================================================================
  code generated by: java2cpp
  class: android.nfc.NfcAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NFC_NFCADAPTER_HPP_DECL
#define J2CPP_ANDROID_NFC_NFCADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace nfc {

	class NfcAdapter;
	class NfcAdapter
		: public cpp_object<NfcAdapter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		NfcAdapter(jobject jobj)
		: cpp_object<NfcAdapter>(jobj)
		{
		}

		static local_ref< android::nfc::NfcAdapter > getDefaultAdapter();
		cpp_boolean isEnabled();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ACTION_TAG_DISCOVERED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_NDEF_MESSAGES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_ID;
	}; //class NfcAdapter

} //namespace nfc
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_NFC_NFCADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NFC_NFCADAPTER_HPP_IMPL
#define J2CPP_ANDROID_NFC_NFCADAPTER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::nfc::NfcAdapter > create< android::nfc::NfcAdapter>()
{
	return local_ref< android::nfc::NfcAdapter >(
		environment::get().get_jenv()->NewObject(
			get_class<android::nfc::NfcAdapter::J2CPP_CLASS_NAME>(),
			get_method_id<android::nfc::NfcAdapter::J2CPP_CLASS_NAME, android::nfc::NfcAdapter::J2CPP_METHOD_NAME(0), android::nfc::NfcAdapter::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< android::nfc::NfcAdapter > android::nfc::NfcAdapter::getDefaultAdapter()
{
	return local_ref< android::nfc::NfcAdapter >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

cpp_boolean android::nfc::NfcAdapter::isEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}


static_field<
	android::nfc::NfcAdapter::J2CPP_CLASS_NAME,
	android::nfc::NfcAdapter::J2CPP_FIELD_NAME(0),
	android::nfc::NfcAdapter::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::nfc::NfcAdapter::ACTION_TAG_DISCOVERED;

static_field<
	android::nfc::NfcAdapter::J2CPP_CLASS_NAME,
	android::nfc::NfcAdapter::J2CPP_FIELD_NAME(1),
	android::nfc::NfcAdapter::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::nfc::NfcAdapter::EXTRA_NDEF_MESSAGES;

static_field<
	android::nfc::NfcAdapter::J2CPP_CLASS_NAME,
	android::nfc::NfcAdapter::J2CPP_FIELD_NAME(2),
	android::nfc::NfcAdapter::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::nfc::NfcAdapter::EXTRA_ID;


J2CPP_DEFINE_CLASS(android::nfc::NfcAdapter,"android/nfc/NfcAdapter")
J2CPP_DEFINE_METHOD(android::nfc::NfcAdapter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::nfc::NfcAdapter,1,"getDefaultAdapter","()Landroid/nfc/NfcAdapter;")
J2CPP_DEFINE_METHOD(android::nfc::NfcAdapter,2,"isEnabled","()Z")
J2CPP_DEFINE_FIELD(android::nfc::NfcAdapter,0,"ACTION_TAG_DISCOVERED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::nfc::NfcAdapter,1,"EXTRA_NDEF_MESSAGES","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::nfc::NfcAdapter,2,"EXTRA_ID","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NFC_NFCADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
