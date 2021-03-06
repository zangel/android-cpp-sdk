/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.telephony.SmsManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_DECL
#define J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { class PendingIntent; } } }


#include <android/app/PendingIntent.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace telephony {

	class SmsManager;
	class SmsManager
		: public object<SmsManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)

		explicit SmsManager(jobject jobj)
		: object<SmsManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void sendTextMessage(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< android::app::PendingIntent >  const&, local_ref< android::app::PendingIntent >  const&);
		local_ref< java::util::ArrayList > divideMessage(local_ref< java::lang::String >  const&);
		void sendMultipartTextMessage(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::util::ArrayList >  const&, local_ref< java::util::ArrayList >  const&, local_ref< java::util::ArrayList >  const&);
		void sendDataMessage(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, jshort, local_ref< array<jbyte,1> >  const&, local_ref< android::app::PendingIntent >  const&, local_ref< android::app::PendingIntent >  const&);
		static local_ref< android::telephony::SmsManager > getDefault();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > STATUS_ON_ICC_FREE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > STATUS_ON_ICC_READ;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > STATUS_ON_ICC_UNREAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > STATUS_ON_ICC_SENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > STATUS_ON_ICC_UNSENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > RESULT_ERROR_GENERIC_FAILURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > RESULT_ERROR_RADIO_OFF;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > RESULT_ERROR_NULL_PDU;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > RESULT_ERROR_NO_SERVICE;
	}; //class SmsManager

} //namespace telephony
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_IMPL
#define J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_IMPL

namespace j2cpp {



android::telephony::SmsManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


void android::telephony::SmsManager::sendTextMessage(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< android::app::PendingIntent > const &a3, local_ref< android::app::PendingIntent > const &a4)
{
	return call_method<
		android::telephony::SmsManager::J2CPP_CLASS_NAME,
		android::telephony::SmsManager::J2CPP_METHOD_NAME(1),
		android::telephony::SmsManager::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

local_ref< java::util::ArrayList > android::telephony::SmsManager::divideMessage(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::telephony::SmsManager::J2CPP_CLASS_NAME,
		android::telephony::SmsManager::J2CPP_METHOD_NAME(2),
		android::telephony::SmsManager::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::util::ArrayList >
	>(get_jobject(), a0);
}

void android::telephony::SmsManager::sendMultipartTextMessage(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::ArrayList > const &a2, local_ref< java::util::ArrayList > const &a3, local_ref< java::util::ArrayList > const &a4)
{
	return call_method<
		android::telephony::SmsManager::J2CPP_CLASS_NAME,
		android::telephony::SmsManager::J2CPP_METHOD_NAME(3),
		android::telephony::SmsManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

void android::telephony::SmsManager::sendDataMessage(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jshort a2, local_ref< array<jbyte,1> > const &a3, local_ref< android::app::PendingIntent > const &a4, local_ref< android::app::PendingIntent > const &a5)
{
	return call_method<
		android::telephony::SmsManager::J2CPP_CLASS_NAME,
		android::telephony::SmsManager::J2CPP_METHOD_NAME(4),
		android::telephony::SmsManager::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4, a5);
}

local_ref< android::telephony::SmsManager > android::telephony::SmsManager::getDefault()
{
	return call_static_method<
		android::telephony::SmsManager::J2CPP_CLASS_NAME,
		android::telephony::SmsManager::J2CPP_METHOD_NAME(5),
		android::telephony::SmsManager::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::telephony::SmsManager >
	>();
}


static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(0),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::telephony::SmsManager::STATUS_ON_ICC_FREE;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(1),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::telephony::SmsManager::STATUS_ON_ICC_READ;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(2),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::telephony::SmsManager::STATUS_ON_ICC_UNREAD;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(3),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::telephony::SmsManager::STATUS_ON_ICC_SENT;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(4),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::telephony::SmsManager::STATUS_ON_ICC_UNSENT;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(5),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::telephony::SmsManager::RESULT_ERROR_GENERIC_FAILURE;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(6),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::telephony::SmsManager::RESULT_ERROR_RADIO_OFF;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(7),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::telephony::SmsManager::RESULT_ERROR_NULL_PDU;

static_field<
	android::telephony::SmsManager::J2CPP_CLASS_NAME,
	android::telephony::SmsManager::J2CPP_FIELD_NAME(8),
	android::telephony::SmsManager::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::telephony::SmsManager::RESULT_ERROR_NO_SERVICE;


J2CPP_DEFINE_CLASS(android::telephony::SmsManager,"android/telephony/SmsManager")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,1,"sendTextMessage","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,2,"divideMessage","(Ljava/lang/String;)Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,3,"sendMultipartTextMessage","(Ljava/lang/String;Ljava/lang/String;Ljava/util/ArrayList;Ljava/util/ArrayList;Ljava/util/ArrayList;)V")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,4,"sendDataMessage","(Ljava/lang/String;Ljava/lang/String;S[BLandroid/app/PendingIntent;Landroid/app/PendingIntent;)V")
J2CPP_DEFINE_METHOD(android::telephony::SmsManager,5,"getDefault","()Landroid/telephony/SmsManager;")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,0,"STATUS_ON_ICC_FREE","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,1,"STATUS_ON_ICC_READ","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,2,"STATUS_ON_ICC_UNREAD","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,3,"STATUS_ON_ICC_SENT","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,4,"STATUS_ON_ICC_UNSENT","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,5,"RESULT_ERROR_GENERIC_FAILURE","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,6,"RESULT_ERROR_RADIO_OFF","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,7,"RESULT_ERROR_NULL_PDU","I")
J2CPP_DEFINE_FIELD(android::telephony::SmsManager,8,"RESULT_ERROR_NO_SERVICE","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TELEPHONY_SMSMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
