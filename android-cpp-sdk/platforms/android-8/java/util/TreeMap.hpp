/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.TreeMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class Comparator; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class AbstractMap; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Comparator.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TreeMap;
	class TreeMap
		: public object<TreeMap>
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

		explicit TreeMap(jobject jobj)
		: object<TreeMap>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::util::AbstractMap>() const;
		operator local_ref<java::util::Map>() const;
		operator local_ref<java::util::SortedMap>() const;
		operator local_ref<java::io::Serializable>() const;


		TreeMap();
		TreeMap(local_ref< java::util::Comparator > const&);
		TreeMap(local_ref< java::util::Map > const&);
		TreeMap(local_ref< java::util::SortedMap > const&);
		void clear();
		local_ref< java::lang::Object > clone();
		local_ref< java::util::Comparator > comparator();
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > entrySet();
		local_ref< java::lang::Object > firstKey();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		local_ref< java::util::SortedMap > headMap(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > keySet();
		local_ref< java::lang::Object > lastKey();
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jint size();
		local_ref< java::util::SortedMap > subMap(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::util::SortedMap > tailMap(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Collection > values();
	}; //class TreeMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

namespace j2cpp {



java::util::TreeMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::TreeMap::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::TreeMap::operator local_ref<java::util::AbstractMap>() const
{
	return local_ref<java::util::AbstractMap>(get_jobject());
}

java::util::TreeMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

java::util::TreeMap::operator local_ref<java::util::SortedMap>() const
{
	return local_ref<java::util::SortedMap>(get_jobject());
}

java::util::TreeMap::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::TreeMap::TreeMap()
: object<java::util::TreeMap>(
	call_new_object<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(0),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::TreeMap::TreeMap(local_ref< java::util::Comparator > const &a0)
: object<java::util::TreeMap>(
	call_new_object<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(1),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::TreeMap::TreeMap(local_ref< java::util::Map > const &a0)
: object<java::util::TreeMap>(
	call_new_object<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(2),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}



java::util::TreeMap::TreeMap(local_ref< java::util::SortedMap > const &a0)
: object<java::util::TreeMap>(
	call_new_object<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(3),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


void java::util::TreeMap::clear()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(4),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::TreeMap::clone()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(5),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::util::Comparator > java::util::TreeMap::comparator()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(6),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::Comparator >
	>(get_jobject());
}

jboolean java::util::TreeMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(7),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::TreeMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(8),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(8), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::TreeMap::entrySet()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(9),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::TreeMap::firstKey()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(10),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::TreeMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(11),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::util::SortedMap > java::util::TreeMap::headMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(12),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::SortedMap >
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::TreeMap::keySet()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(13),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::TreeMap::lastKey()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(14),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

local_ref< java::lang::Object > java::util::TreeMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(15),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

void java::util::TreeMap::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(16),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(16), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::TreeMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(17),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

jint java::util::TreeMap::size()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(18),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(18), 
		jint
	>(get_jobject());
}

local_ref< java::util::SortedMap > java::util::TreeMap::subMap(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(19),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::SortedMap >
	>(get_jobject(), a0, a1);
}

local_ref< java::util::SortedMap > java::util::TreeMap::tailMap(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(20),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::SortedMap >
	>(get_jobject(), a0);
}

local_ref< java::util::Collection > java::util::TreeMap::values()
{
	return call_method<
		java::util::TreeMap::J2CPP_CLASS_NAME,
		java::util::TreeMap::J2CPP_METHOD_NAME(21),
		java::util::TreeMap::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::Collection >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::TreeMap,"java/util/TreeMap")
J2CPP_DEFINE_METHOD(java::util::TreeMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,1,"<init>","(Ljava/util/Comparator;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,2,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,3,"<init>","(Ljava/util/SortedMap;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,4,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,5,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,6,"comparator","()Ljava/util/Comparator;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,7,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,8,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::TreeMap,9,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,10,"firstKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,11,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,12,"headMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,13,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,14,"lastKey","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,15,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,16,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::TreeMap,17,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,18,"size","()I")
J2CPP_DEFINE_METHOD(java::util::TreeMap,19,"subMap","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,20,"tailMap","(Ljava/lang/Object;)Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::util::TreeMap,21,"values","()Ljava/util/Collection;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TREEMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
