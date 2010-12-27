/*================================================================================
  code generated by: java2cpp
  class: javax.sql.StatementEvent
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_DECL
#define J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class PooledConnection; } } }
namespace j2cpp { namespace java { namespace sql { class PreparedStatement; } } }
namespace j2cpp { namespace java { namespace sql { class SQLException; } } }


#include <java/sql/PreparedStatement.hpp>
#include <java/sql/SQLException.hpp>
#include <javax/sql/PooledConnection.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class StatementEvent;
	class StatementEvent
		: public cpp_object<StatementEvent>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		StatementEvent(jobject jobj)
		: cpp_object<StatementEvent>(jobj)
		{
		}

		local_ref< java::sql::PreparedStatement > getStatement();
		local_ref< java::sql::SQLException > getSQLException();
	}; //class StatementEvent

} //namespace sql
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_IMPL
#define J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::sql::StatementEvent > create< javax::sql::StatementEvent>(local_ref< javax::sql::PooledConnection > const &a0, local_ref< java::sql::PreparedStatement > const &a1, local_ref< java::sql::SQLException > const &a2)
{
	return local_ref< javax::sql::StatementEvent >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::sql::StatementEvent::J2CPP_CLASS_NAME>(),
			get_method_id<javax::sql::StatementEvent::J2CPP_CLASS_NAME, javax::sql::StatementEvent::J2CPP_METHOD_NAME(0), javax::sql::StatementEvent::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< javax::sql::StatementEvent > create< javax::sql::StatementEvent>(local_ref< javax::sql::PooledConnection > const &a0, local_ref< java::sql::PreparedStatement > const &a1)
{
	return local_ref< javax::sql::StatementEvent >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::sql::StatementEvent::J2CPP_CLASS_NAME>(),
			get_method_id<javax::sql::StatementEvent::J2CPP_CLASS_NAME, javax::sql::StatementEvent::J2CPP_METHOD_NAME(1), javax::sql::StatementEvent::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > javax::sql::StatementEvent::getStatement()
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::sql::SQLException > javax::sql::StatementEvent::getSQLException()
{
	return local_ref< java::sql::SQLException >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::StatementEvent,"javax/sql/StatementEvent")
J2CPP_DEFINE_METHOD(javax::sql::StatementEvent,0,"<init>","(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V")
J2CPP_DEFINE_METHOD(javax::sql::StatementEvent,1,"<init>","(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V")
J2CPP_DEFINE_METHOD(javax::sql::StatementEvent,2,"getStatement","()Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(javax::sql::StatementEvent,3,"getSQLException","()Ljava/sql/SQLException;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_STATEMENTEVENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
