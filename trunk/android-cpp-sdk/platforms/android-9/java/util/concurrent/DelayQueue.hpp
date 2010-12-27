/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.DelayQueue
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class Delayed; } } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class TimeUnit; } } } }


#include <java/lang/Object.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/concurrent/Delayed.hpp>
#include <java/util/concurrent/TimeUnit.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class DelayQueue;
	class DelayQueue
		: public cpp_object<DelayQueue>
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

		DelayQueue(jobject jobj)
		: cpp_object<DelayQueue>(jobj)
		{
		}

		cpp_boolean add(local_ref< java::util::concurrent::Delayed > const&);
		cpp_boolean offer(local_ref< java::util::concurrent::Delayed > const&);
		void put(local_ref< java::util::concurrent::Delayed > const&);
		cpp_boolean offer(local_ref< java::util::concurrent::Delayed > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::util::concurrent::Delayed > poll();
		local_ref< java::util::concurrent::Delayed > take();
		local_ref< java::util::concurrent::Delayed > poll(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::util::concurrent::Delayed > peek();
		cpp_int size();
		cpp_int drainTo(local_ref< java::util::Collection > const&);
		cpp_int drainTo(local_ref< java::util::Collection > const&, cpp_int const&);
		void clear();
		cpp_int remainingCapacity();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		local_ref< java::util::Iterator > iterator();
		cpp_boolean add(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > peek_1();
		local_ref< java::lang::Object > poll_1();
		cpp_boolean offer(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > poll_1(cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		local_ref< java::lang::Object > take_1();
		cpp_boolean offer(local_ref< java::lang::Object > const&, cpp_long const&, local_ref< java::util::concurrent::TimeUnit > const&);
		void put(local_ref< java::lang::Object > const&);
	}; //class DelayQueue

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::DelayQueue > create< java::util::concurrent::DelayQueue>()
{
	return local_ref< java::util::concurrent::DelayQueue >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::DelayQueue::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::DelayQueue::J2CPP_CLASS_NAME, java::util::concurrent::DelayQueue::J2CPP_METHOD_NAME(0), java::util::concurrent::DelayQueue::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::concurrent::DelayQueue > create< java::util::concurrent::DelayQueue>(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::util::concurrent::DelayQueue >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::DelayQueue::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::DelayQueue::J2CPP_CLASS_NAME, java::util::concurrent::DelayQueue::J2CPP_METHOD_NAME(1), java::util::concurrent::DelayQueue::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::add(local_ref< java::util::concurrent::Delayed > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::offer(local_ref< java::util::concurrent::Delayed > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::DelayQueue::put(local_ref< java::util::concurrent::Delayed > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::offer(local_ref< java::util::concurrent::Delayed > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::Delayed > java::util::concurrent::DelayQueue::poll()
{
	return local_ref< java::util::concurrent::Delayed >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::util::concurrent::Delayed > java::util::concurrent::DelayQueue::take()
{
	return local_ref< java::util::concurrent::Delayed >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::util::concurrent::Delayed > java::util::concurrent::DelayQueue::poll(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return local_ref< java::util::concurrent::Delayed >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::concurrent::Delayed > java::util::concurrent::DelayQueue::peek()
{
	return local_ref< java::util::concurrent::Delayed >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::util::concurrent::DelayQueue::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int java::util::concurrent::DelayQueue::drainTo(local_ref< java::util::Collection > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::DelayQueue::drainTo(local_ref< java::util::Collection > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::concurrent::DelayQueue::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::util::concurrent::DelayQueue::remainingCapacity()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::DelayQueue::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::DelayQueue::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Iterator > java::util::concurrent::DelayQueue::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::DelayQueue::peek_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::DelayQueue::poll_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::offer(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::DelayQueue::poll_1(cpp_long const &a0, local_ref< java::util::concurrent::TimeUnit > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::DelayQueue::take_1()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

cpp_boolean java::util::concurrent::DelayQueue::offer(local_ref< java::lang::Object > const &a0, cpp_long const &a1, local_ref< java::util::concurrent::TimeUnit > const &a2)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::util::concurrent::DelayQueue::put(local_ref< java::lang::Object > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::DelayQueue,"java/util/concurrent/DelayQueue")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,2,"add","(Ljava/util/concurrent/Delayed;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,3,"offer","(Ljava/util/concurrent/Delayed;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,4,"put","(Ljava/util/concurrent/Delayed;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,5,"offer","(Ljava/util/concurrent/Delayed;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,6,"poll","()Ljava/util/concurrent/Delayed;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,7,"take","()Ljava/util/concurrent/Delayed;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,8,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/Delayed;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,9,"peek","()Ljava/util/concurrent/Delayed;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,10,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,11,"drainTo","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,12,"drainTo","(Ljava/util/Collection;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,13,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,14,"remainingCapacity","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,15,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,16,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,17,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,18,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,19,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,20,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,21,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,22,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,23,"poll","(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,24,"take","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,25,"offer","(Ljava/lang/Object;JLjava/util/concurrent/TimeUnit;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::DelayQueue,26,"put","(Ljava/lang/Object;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_DELAYQUEUE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
