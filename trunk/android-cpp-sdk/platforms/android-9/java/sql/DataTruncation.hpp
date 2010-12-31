/*================================================================================
  code generated by: java2cpp
  class: java.sql.DataTruncation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL
#define J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class DataTruncation;
	class DataTruncation
		: public cpp_object<DataTruncation>
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

		DataTruncation(jobject jobj)
		: cpp_object<DataTruncation>(jobj)
		{
		}

		cpp_int getDataSize();
		cpp_int getIndex();
		cpp_boolean getParameter();
		cpp_boolean getRead();
		cpp_int getTransferSize();
	}; //class DataTruncation

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATATRUNCATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL
#define J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::sql::DataTruncation > create< java::sql::DataTruncation>(cpp_int const &a0, cpp_boolean const &a1, cpp_boolean const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return local_ref< java::sql::DataTruncation >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::DataTruncation::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::DataTruncation::J2CPP_CLASS_NAME, java::sql::DataTruncation::J2CPP_METHOD_NAME(0), java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

template <>
local_ref< java::sql::DataTruncation > create< java::sql::DataTruncation>(cpp_int const &a0, cpp_boolean const &a1, cpp_boolean const &a2, cpp_int const &a3, cpp_int const &a4, local_ref< java::lang::Throwable > const &a5)
{
	return local_ref< java::sql::DataTruncation >(
		environment::get().get_jenv()->NewObject(
			get_class<java::sql::DataTruncation::J2CPP_CLASS_NAME>(),
			get_method_id<java::sql::DataTruncation::J2CPP_CLASS_NAME, java::sql::DataTruncation::J2CPP_METHOD_NAME(1), java::sql::DataTruncation::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

cpp_int java::sql::DataTruncation::getDataSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int java::sql::DataTruncation::getIndex()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::sql::DataTruncation::getParameter()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_boolean java::sql::DataTruncation::getRead()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::sql::DataTruncation::getTransferSize()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::sql::DataTruncation,"java/sql/DataTruncation")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,0,"<init>","(IZZII)V")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,1,"<init>","(IZZIILjava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,2,"getDataSize","()I")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,3,"getIndex","()I")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,4,"getParameter","()Z")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,5,"getRead","()Z")
J2CPP_DEFINE_METHOD(java::sql::DataTruncation,6,"getTransferSize","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_DATATRUNCATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION