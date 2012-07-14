/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.TrafficStats
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL
#define J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace net {

	class TrafficStats;
	class TrafficStats
		: public object<TrafficStats>
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
		J2CPP_DECLARE_FIELD(0)

		explicit TrafficStats(jobject jobj)
		: object<TrafficStats>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		TrafficStats();
		static jlong getMobileTxPackets();
		static jlong getMobileRxPackets();
		static jlong getMobileTxBytes();
		static jlong getMobileRxBytes();
		static jlong getTotalTxPackets();
		static jlong getTotalRxPackets();
		static jlong getTotalTxBytes();
		static jlong getTotalRxBytes();
		static jlong getUidTxBytes(jint);
		static jlong getUidRxBytes(jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > UNSUPPORTED;
	}; //class TrafficStats

} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL
#define J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL

namespace j2cpp {



android::net::TrafficStats::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::net::TrafficStats::TrafficStats()
: object<android::net::TrafficStats>(
	call_new_object<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(0),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


jlong android::net::TrafficStats::getMobileTxPackets()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(1),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>();
}

jlong android::net::TrafficStats::getMobileRxPackets()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(2),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(2), 
		jlong
	>();
}

jlong android::net::TrafficStats::getMobileTxBytes()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(3),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>();
}

jlong android::net::TrafficStats::getMobileRxBytes()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(4),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>();
}

jlong android::net::TrafficStats::getTotalTxPackets()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(5),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>();
}

jlong android::net::TrafficStats::getTotalRxPackets()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(6),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>();
}

jlong android::net::TrafficStats::getTotalTxBytes()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(7),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>();
}

jlong android::net::TrafficStats::getTotalRxBytes()
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(8),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>();
}

jlong android::net::TrafficStats::getUidTxBytes(jint a0)
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(9),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(a0);
}

jlong android::net::TrafficStats::getUidRxBytes(jint a0)
{
	return call_static_method<
		android::net::TrafficStats::J2CPP_CLASS_NAME,
		android::net::TrafficStats::J2CPP_METHOD_NAME(10),
		android::net::TrafficStats::J2CPP_METHOD_SIGNATURE(10), 
		jlong
	>(a0);
}


static_field<
	android::net::TrafficStats::J2CPP_CLASS_NAME,
	android::net::TrafficStats::J2CPP_FIELD_NAME(0),
	android::net::TrafficStats::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::TrafficStats::UNSUPPORTED;


J2CPP_DEFINE_CLASS(android::net::TrafficStats,"android/net/TrafficStats")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,1,"getMobileTxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,2,"getMobileRxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,3,"getMobileTxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,4,"getMobileRxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,5,"getTotalTxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,6,"getTotalRxPackets","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,7,"getTotalTxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,8,"getTotalRxBytes","()J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,9,"getUidTxBytes","(I)J")
J2CPP_DEFINE_METHOD(android::net::TrafficStats,10,"getUidRxBytes","(I)J")
J2CPP_DEFINE_FIELD(android::net::TrafficStats,0,"UNSUPPORTED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_TRAFFICSTATS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION