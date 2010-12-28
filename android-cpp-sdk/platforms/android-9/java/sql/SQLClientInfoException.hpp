/*================================================================================
  code generated by: java2cpp
  class: java.sql.SQLClientInfoException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLClientInfoException;
	class SQLClientInfoException
		: public cpp_object<SQLClientInfoException>
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

		SQLClientInfoException(jobject jobj)
		: cpp_object<SQLClientInfoException>(jobj)
		{
		}

		local_ref< java::util::Map > getFailedProperties();
	}; //class SQLClientInfoException

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>()
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(0), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::util::Map > const &a0)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(1), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::util::Map > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(2), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(3), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1, local_ref< java::lang::Throwable > const &a2)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(4), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::util::Map > const &a3)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(5), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::util::Map > const &a3, local_ref< java::lang::Throwable > const &a4)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(6), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Map > const &a2)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(7), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::SQLClientInfoException > create< java::sql::SQLClientInfoException>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::util::Map > const &a2, local_ref< java::lang::Throwable > const &a3)
{
	return local_ref< java::sql::SQLClientInfoException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::SQLClientInfoException::J2CPP_CLASS_NAME, java::sql::SQLClientInfoException::J2CPP_METHOD_NAME(8), java::sql::SQLClientInfoException::J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::util::Map > java::sql::SQLClientInfoException::getFailedProperties()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::SQLClientInfoException,"java/sql/SQLClientInfoException")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,1,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,2,"<init>","(Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,3,"<init>","(Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,4,"<init>","(Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,5,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,6,"<init>","(Ljava/lang/String;Ljava/lang/String;ILjava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,7,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,8,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLClientInfoException,9,"getFailedProperties","()Ljava/util/Map;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLCLIENTINFOEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION