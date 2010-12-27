/*================================================================================
  code generated by: java2cpp
  class: android.location.Address
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_ADDRESS_HPP_DECL
#define J2CPP_ANDROID_LOCATION_ADDRESS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Bundle.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace android { namespace location {

	class Address;
	class Address
		: public cpp_object<Address>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_FIELD(0)

		Address(jobject jobj)
		: cpp_object<Address>(jobj)
		{
		}

		local_ref< java::util::Locale > getLocale();
		cpp_int getMaxAddressLineIndex();
		local_ref< java::lang::String > getAddressLine(cpp_int const&);
		void setAddressLine(cpp_int const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getFeatureName();
		void setFeatureName(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getAdminArea();
		void setAdminArea(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSubAdminArea();
		void setSubAdminArea(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getLocality();
		void setLocality(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSubLocality();
		void setSubLocality(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getThoroughfare();
		void setThoroughfare(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getSubThoroughfare();
		void setSubThoroughfare(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getPremises();
		void setPremises(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getPostalCode();
		void setPostalCode(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getCountryCode();
		void setCountryCode(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getCountryName();
		void setCountryName(local_ref< java::lang::String > const&);
		cpp_boolean hasLatitude();
		cpp_double getLatitude();
		void setLatitude(cpp_double const&);
		void clearLatitude();
		cpp_boolean hasLongitude();
		cpp_double getLongitude();
		void setLongitude(cpp_double const&);
		void clearLongitude();
		local_ref< java::lang::String > getPhone();
		void setPhone(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getUrl();
		void setUrl(local_ref< java::lang::String > const&);
		local_ref< android::os::Bundle > getExtras();
		void setExtras(local_ref< android::os::Bundle > const&);
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Address

} //namespace location
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_ADDRESS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_LOCATION_ADDRESS_HPP_IMPL
#define J2CPP_ANDROID_LOCATION_ADDRESS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::location::Address > create< android::location::Address>(local_ref< java::util::Locale > const &a0)
{
	return local_ref< android::location::Address >(
		environment::get().get_jenv()->NewObject(
			get_class<android::location::Address::J2CPP_CLASS_NAME>(),
			get_method_id<android::location::Address::J2CPP_CLASS_NAME, android::location::Address::J2CPP_METHOD_NAME(0), android::location::Address::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Locale > android::location::Address::getLocale()
{
	return local_ref< java::util::Locale >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_int android::location::Address::getMaxAddressLineIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getAddressLine(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::Address::setAddressLine(cpp_int const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getFeatureName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::location::Address::setFeatureName(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getAdminArea()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::location::Address::setAdminArea(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getSubAdminArea()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void android::location::Address::setSubAdminArea(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getLocality()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::location::Address::setLocality(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getSubLocality()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::location::Address::setSubLocality(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getThoroughfare()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::location::Address::setThoroughfare(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getSubThoroughfare()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

void android::location::Address::setSubThoroughfare(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getPremises()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

void android::location::Address::setPremises(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getPostalCode()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void android::location::Address::setPostalCode(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getCountryCode()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>()
		)
	);
}

void android::location::Address::setCountryCode(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getCountryName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>()
		)
	);
}

void android::location::Address::setCountryName(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::location::Address::hasLatitude()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>()
		)
	);
}

cpp_double android::location::Address::getLatitude()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::location::Address::setLatitude(cpp_double const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::Address::clearLatitude()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>()
		)
	);
}

cpp_boolean android::location::Address::hasLongitude()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

cpp_double android::location::Address::getLongitude()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

void android::location::Address::setLongitude(cpp_double const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void android::location::Address::clearLongitude()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getPhone()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>()
		)
	);
}

void android::location::Address::setPhone(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::getUrl()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

void android::location::Address::setUrl(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::location::Address::getExtras()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

void android::location::Address::setExtras(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::location::Address::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>()
		)
	);
}

cpp_int android::location::Address::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

void android::location::Address::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::location::Address::J2CPP_CLASS_NAME,
	android::location::Address::J2CPP_FIELD_NAME(0),
	android::location::Address::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::os::Parcelable_::Creator >
> android::location::Address::CREATOR;


J2CPP_DEFINE_CLASS(android::location::Address,"android/location/Address")
J2CPP_DEFINE_METHOD(android::location::Address,0,"<init>","(Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(android::location::Address,1,"getLocale","()Ljava/util/Locale;")
J2CPP_DEFINE_METHOD(android::location::Address,2,"getMaxAddressLineIndex","()I")
J2CPP_DEFINE_METHOD(android::location::Address,3,"getAddressLine","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,4,"setAddressLine","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,5,"getFeatureName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,6,"setFeatureName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,7,"getAdminArea","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,8,"setAdminArea","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,9,"getSubAdminArea","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,10,"setSubAdminArea","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,11,"getLocality","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,12,"setLocality","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,13,"getSubLocality","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,14,"setSubLocality","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,15,"getThoroughfare","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,16,"setThoroughfare","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,17,"getSubThoroughfare","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,18,"setSubThoroughfare","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,19,"getPremises","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,20,"setPremises","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,21,"getPostalCode","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,22,"setPostalCode","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,23,"getCountryCode","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,24,"setCountryCode","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,25,"getCountryName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,26,"setCountryName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,27,"hasLatitude","()Z")
J2CPP_DEFINE_METHOD(android::location::Address,28,"getLatitude","()D")
J2CPP_DEFINE_METHOD(android::location::Address,29,"setLatitude","(D)V")
J2CPP_DEFINE_METHOD(android::location::Address,30,"clearLatitude","()V")
J2CPP_DEFINE_METHOD(android::location::Address,31,"hasLongitude","()Z")
J2CPP_DEFINE_METHOD(android::location::Address,32,"getLongitude","()D")
J2CPP_DEFINE_METHOD(android::location::Address,33,"setLongitude","(D)V")
J2CPP_DEFINE_METHOD(android::location::Address,34,"clearLongitude","()V")
J2CPP_DEFINE_METHOD(android::location::Address,35,"getPhone","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,36,"setPhone","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,37,"getUrl","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,38,"setUrl","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::location::Address,39,"getExtras","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::location::Address,40,"setExtras","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::location::Address,41,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::location::Address,42,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::location::Address,43,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::location::Address,44,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::location::Address,0,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_LOCATION_ADDRESS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
