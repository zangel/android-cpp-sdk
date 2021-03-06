/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.atomic.AtomicLongFieldUpdater
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent { namespace atomic {

	class AtomicLongFieldUpdater;
	class AtomicLongFieldUpdater
		: public object<AtomicLongFieldUpdater>
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

		explicit AtomicLongFieldUpdater(jobject jobj)
		: object<AtomicLongFieldUpdater>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater > newUpdater(local_ref< java::lang::Class >  const&, local_ref< java::lang::String >  const&);
		jboolean compareAndSet(local_ref< java::lang::Object >  const&, jlong, jlong);
		jboolean weakCompareAndSet(local_ref< java::lang::Object >  const&, jlong, jlong);
		void set(local_ref< java::lang::Object >  const&, jlong);
		jlong get(local_ref< java::lang::Object >  const&);
		jlong getAndSet(local_ref< java::lang::Object >  const&, jlong);
		jlong getAndIncrement(local_ref< java::lang::Object >  const&);
		jlong getAndDecrement(local_ref< java::lang::Object >  const&);
		jlong getAndAdd(local_ref< java::lang::Object >  const&, jlong);
		jlong incrementAndGet(local_ref< java::lang::Object >  const&);
		jlong decrementAndGet(local_ref< java::lang::Object >  const&);
		jlong addAndGet(local_ref< java::lang::Object >  const&, jlong);
	}; //class AtomicLongFieldUpdater

} //namespace atomic
} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL

namespace j2cpp {



java::util::concurrent::atomic::AtomicLongFieldUpdater::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater > java::util::concurrent::atomic::AtomicLongFieldUpdater::newUpdater(local_ref< java::lang::Class > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(1),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::concurrent::atomic::AtomicLongFieldUpdater >
	>(a0, a1);
}

jboolean java::util::concurrent::atomic::AtomicLongFieldUpdater::compareAndSet(local_ref< java::lang::Object > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(2),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(2), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

jboolean java::util::concurrent::atomic::AtomicLongFieldUpdater::weakCompareAndSet(local_ref< java::lang::Object > const &a0, jlong a1, jlong a2)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(3),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}

void java::util::concurrent::atomic::AtomicLongFieldUpdater::set(local_ref< java::lang::Object > const &a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(4),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0, a1);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(5),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndSet(local_ref< java::lang::Object > const &a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(6),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(6), 
		jlong
	>(get_jobject(), a0, a1);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndIncrement(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(7),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(7), 
		jlong
	>(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndDecrement(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(8),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(8), 
		jlong
	>(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::getAndAdd(local_ref< java::lang::Object > const &a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(9),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(9), 
		jlong
	>(get_jobject(), a0, a1);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::incrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(10),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(10), 
		jlong
	>(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::decrementAndGet(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(11),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(11), 
		jlong
	>(get_jobject(), a0);
}

jlong java::util::concurrent::atomic::AtomicLongFieldUpdater::addAndGet(local_ref< java::lang::Object > const &a0, jlong a1)
{
	return call_method<
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_CLASS_NAME,
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_NAME(12),
		java::util::concurrent::atomic::AtomicLongFieldUpdater::J2CPP_METHOD_SIGNATURE(12), 
		jlong
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::atomic::AtomicLongFieldUpdater,"java/util/concurrent/atomic/AtomicLongFieldUpdater")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,1,"newUpdater","(Ljava/lang/Class;Ljava/lang/String;)Ljava/util/concurrent/atomic/AtomicLongFieldUpdater;")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,2,"compareAndSet","(Ljava/lang/Object;JJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,3,"weakCompareAndSet","(Ljava/lang/Object;JJ)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,4,"set","(Ljava/lang/Object;J)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,5,"get","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,6,"getAndSet","(Ljava/lang/Object;J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,7,"getAndIncrement","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,8,"getAndDecrement","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,9,"getAndAdd","(Ljava/lang/Object;J)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,10,"incrementAndGet","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,11,"decrementAndGet","(Ljava/lang/Object;)J")
J2CPP_DEFINE_METHOD(java::util::concurrent::atomic::AtomicLongFieldUpdater,12,"addAndGet","(Ljava/lang/Object;J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_ATOMIC_ATOMICLONGFIELDUPDATER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
