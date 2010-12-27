/*================================================================================
  code generated by: java2cpp
  class: android.content.Entity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL
#define J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class ArrayList; } } }
namespace j2cpp { namespace android { namespace content { class ContentValues; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }


#include <android/content/ContentValues.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/String.hpp>
#include <java/util/ArrayList.hpp>


namespace j2cpp {

namespace android { namespace content {

	class Entity;
	namespace Entity_ {

		class NamedContentValues;
		class NamedContentValues
			: public cpp_object<NamedContentValues>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			NamedContentValues(jobject jobj)
			: cpp_object<NamedContentValues>(jobj)
			, uri(jobj)
			, values(jobj)
			{
			}


			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::net::Uri > > uri;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::content::ContentValues > > values;
		}; //class NamedContentValues

	} //namespace Entity_

	class Entity
		: public cpp_object<Entity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		typedef Entity_::NamedContentValues NamedContentValues;

		Entity(jobject jobj)
		: cpp_object<Entity>(jobj)
		{
		}

		local_ref< android::content::ContentValues > getEntityValues();
		local_ref< java::util::ArrayList > getSubValues();
		void addSubValue(local_ref< android::net::Uri > const&, local_ref< android::content::ContentValues > const&);
		local_ref< java::lang::String > toString();
	}; //class Entity

} //namespace content
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::content::Entity_::NamedContentValues > create< android::content::Entity_::NamedContentValues>(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return local_ref< android::content::Entity_::NamedContentValues >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::Entity_::NamedContentValues::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::Entity_::NamedContentValues::J2CPP_CLASS_NAME, android::content::Entity_::NamedContentValues::J2CPP_METHOD_NAME(0), android::content::Entity_::NamedContentValues::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::content::Entity_::NamedContentValues,"android/content/Entity$NamedContentValues")
J2CPP_DEFINE_METHOD(android::content::Entity_::NamedContentValues,0,"<init>","(Landroid/net/Uri;Landroid/content/ContentValues;)V")
J2CPP_DEFINE_FIELD(android::content::Entity_::NamedContentValues,0,"uri","Landroid/net/Uri;")
J2CPP_DEFINE_FIELD(android::content::Entity_::NamedContentValues,1,"values","Landroid/content/ContentValues;")


template <>
local_ref< android::content::Entity > create< android::content::Entity>(local_ref< android::content::ContentValues > const &a0)
{
	return local_ref< android::content::Entity >(
		environment::get().get_jenv()->NewObject(
			get_class<android::content::Entity::J2CPP_CLASS_NAME>(),
			get_method_id<android::content::Entity::J2CPP_CLASS_NAME, android::content::Entity::J2CPP_METHOD_NAME(0), android::content::Entity::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::ContentValues > android::content::Entity::getEntityValues()
{
	return local_ref< android::content::ContentValues >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::util::ArrayList > android::content::Entity::getSubValues()
{
	return local_ref< java::util::ArrayList >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::content::Entity::addSubValue(local_ref< android::net::Uri > const &a0, local_ref< android::content::ContentValues > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::content::Entity::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::content::Entity,"android/content/Entity")
J2CPP_DEFINE_METHOD(android::content::Entity,0,"<init>","(Landroid/content/ContentValues;)V")
J2CPP_DEFINE_METHOD(android::content::Entity,1,"getEntityValues","()Landroid/content/ContentValues;")
J2CPP_DEFINE_METHOD(android::content::Entity,2,"getSubValues","()Ljava/util/ArrayList;")
J2CPP_DEFINE_METHOD(android::content::Entity,3,"addSubValue","(Landroid/net/Uri;Landroid/content/ContentValues;)V")
J2CPP_DEFINE_METHOD(android::content::Entity,4,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_ENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
