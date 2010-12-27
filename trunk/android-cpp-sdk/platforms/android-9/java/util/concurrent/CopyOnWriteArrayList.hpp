/*================================================================================
  code generated by: java2cpp
  class: java.util.concurrent.CopyOnWriteArrayList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class ListIterator; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class CopyOnWriteArrayList;
	class CopyOnWriteArrayList
		: public cpp_object<CopyOnWriteArrayList>
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

		CopyOnWriteArrayList(jobject jobj)
		: cpp_object<CopyOnWriteArrayList>(jobj)
		{
		}

		cpp_boolean add(local_ref< java::lang::Object > const&);
		void add(cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_boolean addAll(local_ref< java::util::Collection > const&);
		cpp_boolean addAll(cpp_int const&, local_ref< java::util::Collection > const&);
		cpp_int addAllAbsent(local_ref< java::util::Collection > const&);
		cpp_boolean addIfAbsent(local_ref< java::lang::Object > const&);
		void clear();
		local_ref< java::lang::Object > clone();
		cpp_boolean contains(local_ref< java::lang::Object > const&);
		cpp_boolean containsAll(local_ref< java::util::Collection > const&);
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > get(cpp_int const&);
		cpp_int hashCode();
		cpp_int indexOf(local_ref< java::lang::Object > const&, cpp_int const&);
		cpp_int indexOf(local_ref< java::lang::Object > const&);
		cpp_boolean isEmpty();
		local_ref< java::util::Iterator > iterator();
		cpp_int lastIndexOf(local_ref< java::lang::Object > const&, cpp_int const&);
		cpp_int lastIndexOf(local_ref< java::lang::Object > const&);
		local_ref< java::util::ListIterator > listIterator();
		local_ref< java::util::ListIterator > listIterator(cpp_int const&);
		local_ref< java::lang::Object > remove(cpp_int const&);
		cpp_boolean remove(local_ref< java::lang::Object > const&);
		cpp_boolean removeAll(local_ref< java::util::Collection > const&);
		cpp_boolean retainAll(local_ref< java::util::Collection > const&);
		local_ref< java::lang::Object > set(cpp_int const&, local_ref< java::lang::Object > const&);
		cpp_int size();
		local_ref< java::util::List > subList(cpp_int const&, cpp_int const&);
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray();
		local_ref< cpp_object_array<java::lang::Object, 1> > toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::lang::String > toString();
	}; //class CopyOnWriteArrayList

} //namespace concurrent
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::concurrent::CopyOnWriteArrayList > create< java::util::concurrent::CopyOnWriteArrayList>()
{
	return local_ref< java::util::concurrent::CopyOnWriteArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME, java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(0), java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::util::concurrent::CopyOnWriteArrayList > create< java::util::concurrent::CopyOnWriteArrayList>(local_ref< java::util::Collection > const &a0)
{
	return local_ref< java::util::concurrent::CopyOnWriteArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME, java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(1), java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::concurrent::CopyOnWriteArrayList > create< java::util::concurrent::CopyOnWriteArrayList>(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< java::util::concurrent::CopyOnWriteArrayList >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::concurrent::CopyOnWriteArrayList::J2CPP_CLASS_NAME, java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_NAME(2), java::util::concurrent::CopyOnWriteArrayList::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::add(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::CopyOnWriteArrayList::add(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::addAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::addAll(cpp_int const &a0, local_ref< java::util::Collection > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::addAllAbsent(local_ref< java::util::Collection > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::addIfAbsent(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::util::concurrent::CopyOnWriteArrayList::clear()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::contains(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::containsAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::get(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::indexOf(local_ref< java::lang::Object > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::isEmpty()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

local_ref< java::util::Iterator > java::util::concurrent::CopyOnWriteArrayList::iterator()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::ListIterator > java::util::concurrent::CopyOnWriteArrayList::listIterator()
{
	return local_ref< java::util::ListIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

local_ref< java::util::ListIterator > java::util::concurrent::CopyOnWriteArrayList::listIterator(cpp_int const &a0)
{
	return local_ref< java::util::ListIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::remove(cpp_int const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::remove(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::removeAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::util::concurrent::CopyOnWriteArrayList::retainAll(local_ref< java::util::Collection > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::util::concurrent::CopyOnWriteArrayList::set(cpp_int const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int java::util::concurrent::CopyOnWriteArrayList::size()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

local_ref< java::util::List > java::util::concurrent::CopyOnWriteArrayList::subList(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::CopyOnWriteArrayList::toArray()
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

local_ref< cpp_object_array<java::lang::Object, 1> > java::util::concurrent::CopyOnWriteArrayList::toArray(local_ref< cpp_object_array<java::lang::Object, 1> > const &a0)
{
	return local_ref< cpp_object_array<java::lang::Object, 1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::util::concurrent::CopyOnWriteArrayList::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::util::concurrent::CopyOnWriteArrayList,"java/util/concurrent/CopyOnWriteArrayList")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,2,"<init>","([java.lang.Object)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,3,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,4,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,5,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,6,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,7,"addAllAbsent","(Ljava/util/Collection;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,8,"addIfAbsent","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,9,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,10,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,11,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,12,"containsAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,14,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,15,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,16,"indexOf","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,17,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,18,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,19,"iterator","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,20,"lastIndexOf","(Ljava/lang/Object;I)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,21,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,22,"listIterator","()Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,23,"listIterator","(I)Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,24,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,25,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,26,"removeAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,27,"retainAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,28,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,29,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,30,"subList","(II)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,31,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,32,"toArray","([java.lang.Object)[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::concurrent::CopyOnWriteArrayList,33,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_COPYONWRITEARRAYLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
