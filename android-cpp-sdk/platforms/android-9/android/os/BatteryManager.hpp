/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.BatteryManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL
#define J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class BatteryManager;
	class BatteryManager
		: public object<BatteryManager>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)

		explicit BatteryManager(jobject jobj)
		: object<BatteryManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		BatteryManager();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > EXTRA_STATUS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > EXTRA_HEALTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > EXTRA_PRESENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > EXTRA_LEVEL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > EXTRA_SCALE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > EXTRA_ICON_SMALL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_PLUGGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > EXTRA_VOLTAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > EXTRA_TEMPERATURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > EXTRA_TECHNOLOGY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > BATTERY_STATUS_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > BATTERY_STATUS_CHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > BATTERY_STATUS_DISCHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > BATTERY_STATUS_NOT_CHARGING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > BATTERY_STATUS_FULL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > BATTERY_HEALTH_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > BATTERY_HEALTH_GOOD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > BATTERY_HEALTH_OVERHEAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > BATTERY_HEALTH_DEAD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > BATTERY_HEALTH_OVER_VOLTAGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > BATTERY_HEALTH_UNSPECIFIED_FAILURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > BATTERY_PLUGGED_AC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > BATTERY_PLUGGED_USB;
	}; //class BatteryManager

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL
#define J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL

namespace j2cpp {



android::os::BatteryManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::BatteryManager::BatteryManager()
: object<android::os::BatteryManager>(
	call_new_object<
		android::os::BatteryManager::J2CPP_CLASS_NAME,
		android::os::BatteryManager::J2CPP_METHOD_NAME(0),
		android::os::BatteryManager::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(0),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_STATUS;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(1),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_HEALTH;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(2),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_PRESENT;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(3),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_LEVEL;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(4),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_SCALE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(5),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_ICON_SMALL;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(6),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_PLUGGED;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(7),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_VOLTAGE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(8),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_TEMPERATURE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(9),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::os::BatteryManager::EXTRA_TECHNOLOGY;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(10),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::os::BatteryManager::BATTERY_STATUS_UNKNOWN;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(11),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::os::BatteryManager::BATTERY_STATUS_CHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(12),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::os::BatteryManager::BATTERY_STATUS_DISCHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(13),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::os::BatteryManager::BATTERY_STATUS_NOT_CHARGING;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(14),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::os::BatteryManager::BATTERY_STATUS_FULL;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(15),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_UNKNOWN;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(16),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_GOOD;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(17),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_OVERHEAT;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(18),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_DEAD;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(19),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(19),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_OVER_VOLTAGE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(20),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(20),
	jint
> android::os::BatteryManager::BATTERY_HEALTH_UNSPECIFIED_FAILURE;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(21),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(21),
	jint
> android::os::BatteryManager::BATTERY_PLUGGED_AC;

static_field<
	android::os::BatteryManager::J2CPP_CLASS_NAME,
	android::os::BatteryManager::J2CPP_FIELD_NAME(22),
	android::os::BatteryManager::J2CPP_FIELD_SIGNATURE(22),
	jint
> android::os::BatteryManager::BATTERY_PLUGGED_USB;


J2CPP_DEFINE_CLASS(android::os::BatteryManager,"android/os/BatteryManager")
J2CPP_DEFINE_METHOD(android::os::BatteryManager,0,"<init>","()V")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,0,"EXTRA_STATUS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,1,"EXTRA_HEALTH","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,2,"EXTRA_PRESENT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,3,"EXTRA_LEVEL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,4,"EXTRA_SCALE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,5,"EXTRA_ICON_SMALL","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,6,"EXTRA_PLUGGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,7,"EXTRA_VOLTAGE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,8,"EXTRA_TEMPERATURE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,9,"EXTRA_TECHNOLOGY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,10,"BATTERY_STATUS_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,11,"BATTERY_STATUS_CHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,12,"BATTERY_STATUS_DISCHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,13,"BATTERY_STATUS_NOT_CHARGING","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,14,"BATTERY_STATUS_FULL","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,15,"BATTERY_HEALTH_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,16,"BATTERY_HEALTH_GOOD","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,17,"BATTERY_HEALTH_OVERHEAT","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,18,"BATTERY_HEALTH_DEAD","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,19,"BATTERY_HEALTH_OVER_VOLTAGE","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,20,"BATTERY_HEALTH_UNSPECIFIED_FAILURE","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,21,"BATTERY_PLUGGED_AC","I")
J2CPP_DEFINE_FIELD(android::os::BatteryManager,22,"BATTERY_PLUGGED_USB","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_BATTERYMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
