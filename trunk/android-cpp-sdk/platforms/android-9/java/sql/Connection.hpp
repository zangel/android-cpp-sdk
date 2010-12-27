/*================================================================================
  code generated by: java2cpp
  class: java.sql.Connection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CONNECTION_HPP_DECL
#define J2CPP_JAVA_SQL_CONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }
namespace j2cpp { namespace java { namespace sql { class Struct; } } }
namespace j2cpp { namespace java { namespace sql { class PreparedStatement; } } }
namespace j2cpp { namespace java { namespace sql { class Array; } } }
namespace j2cpp { namespace java { namespace sql { class Statement; } } }
namespace j2cpp { namespace java { namespace sql { class Clob; } } }
namespace j2cpp { namespace java { namespace sql { class NClob; } } }
namespace j2cpp { namespace java { namespace sql { class Blob; } } }
namespace j2cpp { namespace java { namespace sql { class SQLXML; } } }
namespace j2cpp { namespace java { namespace sql { class CallableStatement; } } }
namespace j2cpp { namespace java { namespace sql { class Savepoint; } } }
namespace j2cpp { namespace java { namespace sql { class SQLWarning; } } }
namespace j2cpp { namespace java { namespace sql { class DatabaseMetaData; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/sql/Array.hpp>
#include <java/sql/Blob.hpp>
#include <java/sql/CallableStatement.hpp>
#include <java/sql/Clob.hpp>
#include <java/sql/DatabaseMetaData.hpp>
#include <java/sql/NClob.hpp>
#include <java/sql/PreparedStatement.hpp>
#include <java/sql/SQLWarning.hpp>
#include <java/sql/SQLXML.hpp>
#include <java/sql/Savepoint.hpp>
#include <java/sql/Statement.hpp>
#include <java/sql/Struct.hpp>
#include <java/util/Map.hpp>
#include <java/util/Properties.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Connection;
	class Connection
		: public cpp_object<Connection>
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
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		Connection(jobject jobj)
		: cpp_object<Connection>(jobj)
		{
		}

		void clearWarnings();
		void close();
		void commit();
		local_ref< java::sql::Statement > createStatement();
		local_ref< java::sql::Statement > createStatement(cpp_int const&, cpp_int const&);
		local_ref< java::sql::Statement > createStatement(cpp_int const&, cpp_int const&, cpp_int const&);
		cpp_boolean getAutoCommit();
		local_ref< java::lang::String > getCatalog();
		cpp_int getHoldability();
		local_ref< java::sql::DatabaseMetaData > getMetaData();
		cpp_int getTransactionIsolation();
		local_ref< java::util::Map > getTypeMap();
		local_ref< java::sql::SQLWarning > getWarnings();
		cpp_boolean isClosed();
		cpp_boolean isReadOnly();
		local_ref< java::lang::String > nativeSQL(local_ref< java::lang::String > const&);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String > const&);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		local_ref< java::sql::CallableStatement > prepareCall(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&, local_ref< cpp_int_array<1> > const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		local_ref< java::sql::PreparedStatement > prepareStatement(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::String, 1> > const&);
		void releaseSavepoint(local_ref< java::sql::Savepoint > const&);
		void rollback();
		void rollback(local_ref< java::sql::Savepoint > const&);
		void setAutoCommit(cpp_boolean const&);
		void setCatalog(local_ref< java::lang::String > const&);
		void setHoldability(cpp_int const&);
		void setReadOnly(cpp_boolean const&);
		local_ref< java::sql::Savepoint > setSavepoint();
		local_ref< java::sql::Savepoint > setSavepoint(local_ref< java::lang::String > const&);
		void setTransactionIsolation(cpp_int const&);
		void setTypeMap(local_ref< java::util::Map > const&);
		local_ref< java::sql::Clob > createClob();
		local_ref< java::sql::Blob > createBlob();
		local_ref< java::sql::NClob > createNClob();
		local_ref< java::sql::SQLXML > createSQLXML();
		cpp_boolean isValid(cpp_int const&);
		void setClientInfo(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void setClientInfo(local_ref< java::util::Properties > const&);
		local_ref< java::lang::String > getClientInfo(local_ref< java::lang::String > const&);
		local_ref< java::util::Properties > getClientInfo();
		local_ref< java::sql::Array > createArrayOf(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);
		local_ref< java::sql::Struct > createStruct(local_ref< java::lang::String > const&, local_ref< cpp_object_array<java::lang::Object, 1> > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > TRANSACTION_NONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > TRANSACTION_READ_COMMITTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > TRANSACTION_READ_UNCOMMITTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > TRANSACTION_REPEATABLE_READ;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > TRANSACTION_SERIALIZABLE;
	}; //class Connection

} //namespace sql
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL
#define J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL

namespace j2cpp {


void java::sql::Connection::clearWarnings()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void java::sql::Connection::close()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::sql::Connection::commit()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement()
{
	return local_ref< java::sql::Statement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< java::sql::Statement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::Statement > java::sql::Connection::createStatement(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::Statement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::sql::Connection::getAutoCommit()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::sql::Connection::getCatalog()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

cpp_int java::sql::Connection::getHoldability()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< java::sql::DatabaseMetaData > java::sql::Connection::getMetaData()
{
	return local_ref< java::sql::DatabaseMetaData >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::sql::Connection::getTransactionIsolation()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::util::Map > java::sql::Connection::getTypeMap()
{
	return local_ref< java::util::Map >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

local_ref< java::sql::SQLWarning > java::sql::Connection::getWarnings()
{
	return local_ref< java::sql::SQLWarning >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean java::sql::Connection::isClosed()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean java::sql::Connection::isReadOnly()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::lang::String > java::sql::Connection::nativeSQL(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::CallableStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::CallableStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::sql::CallableStatement > java::sql::Connection::prepareCall(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< java::sql::CallableStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, local_ref< cpp_int_array<1> > const &a1)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< java::sql::PreparedStatement > java::sql::Connection::prepareStatement(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return local_ref< java::sql::PreparedStatement >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::Connection::releaseSavepoint(local_ref< java::sql::Savepoint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::rollback()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

void java::sql::Connection::rollback(local_ref< java::sql::Savepoint > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setAutoCommit(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setCatalog(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setHoldability(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setReadOnly(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::Savepoint > java::sql::Connection::setSavepoint()
{
	return local_ref< java::sql::Savepoint >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>()
		)
	);
}

local_ref< java::sql::Savepoint > java::sql::Connection::setSavepoint(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::sql::Savepoint >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setTransactionIsolation(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setTypeMap(local_ref< java::util::Map > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::sql::Clob > java::sql::Connection::createClob()
{
	return local_ref< java::sql::Clob >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>()
		)
	);
}

local_ref< java::sql::Blob > java::sql::Connection::createBlob()
{
	return local_ref< java::sql::Blob >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

local_ref< java::sql::NClob > java::sql::Connection::createNClob()
{
	return local_ref< java::sql::NClob >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< java::sql::SQLXML > java::sql::Connection::createSQLXML()
{
	return local_ref< java::sql::SQLXML >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

cpp_boolean java::sql::Connection::isValid(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>(),
			a0.get_jtype()
		)
	);
}

void java::sql::Connection::setClientInfo(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::sql::Connection::setClientInfo(local_ref< java::util::Properties > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::sql::Connection::getClientInfo(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Properties > java::sql::Connection::getClientInfo()
{
	return local_ref< java::util::Properties >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>()
		)
	);
}

local_ref< java::sql::Array > java::sql::Connection::createArrayOf(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::sql::Array >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::sql::Struct > java::sql::Connection::createStruct(local_ref< java::lang::String > const &a0, local_ref< cpp_object_array<java::lang::Object, 1> > const &a1)
{
	return local_ref< java::sql::Struct >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(0),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::sql::Connection::TRANSACTION_NONE;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(1),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> java::sql::Connection::TRANSACTION_READ_COMMITTED;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(2),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> java::sql::Connection::TRANSACTION_READ_UNCOMMITTED;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(3),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> java::sql::Connection::TRANSACTION_REPEATABLE_READ;

static_field<
	java::sql::Connection::J2CPP_CLASS_NAME,
	java::sql::Connection::J2CPP_FIELD_NAME(4),
	java::sql::Connection::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> java::sql::Connection::TRANSACTION_SERIALIZABLE;


J2CPP_DEFINE_CLASS(java::sql::Connection,"java/sql/Connection")
J2CPP_DEFINE_METHOD(java::sql::Connection,0,"clearWarnings","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,1,"close","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,2,"commit","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,3,"createStatement","()Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,4,"createStatement","(II)Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,5,"createStatement","(III)Ljava/sql/Statement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,6,"getAutoCommit","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,7,"getCatalog","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Connection,8,"getHoldability","()I")
J2CPP_DEFINE_METHOD(java::sql::Connection,9,"getMetaData","()Ljava/sql/DatabaseMetaData;")
J2CPP_DEFINE_METHOD(java::sql::Connection,10,"getTransactionIsolation","()I")
J2CPP_DEFINE_METHOD(java::sql::Connection,11,"getTypeMap","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::sql::Connection,12,"getWarnings","()Ljava/sql/SQLWarning;")
J2CPP_DEFINE_METHOD(java::sql::Connection,13,"isClosed","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,14,"isReadOnly","()Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,15,"nativeSQL","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Connection,16,"prepareCall","(Ljava/lang/String;)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,17,"prepareCall","(Ljava/lang/String;II)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,18,"prepareCall","(Ljava/lang/String;III)Ljava/sql/CallableStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,19,"prepareStatement","(Ljava/lang/String;)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,20,"prepareStatement","(Ljava/lang/String;I)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,21,"prepareStatement","(Ljava/lang/String;[I)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,22,"prepareStatement","(Ljava/lang/String;II)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,23,"prepareStatement","(Ljava/lang/String;III)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,24,"prepareStatement","(Ljava/lang/String;[java.lang.String)Ljava/sql/PreparedStatement;")
J2CPP_DEFINE_METHOD(java::sql::Connection,25,"releaseSavepoint","(Ljava/sql/Savepoint;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,26,"rollback","()V")
J2CPP_DEFINE_METHOD(java::sql::Connection,27,"rollback","(Ljava/sql/Savepoint;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,28,"setAutoCommit","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,29,"setCatalog","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,30,"setHoldability","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,31,"setReadOnly","(Z)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,32,"setSavepoint","()Ljava/sql/Savepoint;")
J2CPP_DEFINE_METHOD(java::sql::Connection,33,"setSavepoint","(Ljava/lang/String;)Ljava/sql/Savepoint;")
J2CPP_DEFINE_METHOD(java::sql::Connection,34,"setTransactionIsolation","(I)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,35,"setTypeMap","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,36,"createClob","()Ljava/sql/Clob;")
J2CPP_DEFINE_METHOD(java::sql::Connection,37,"createBlob","()Ljava/sql/Blob;")
J2CPP_DEFINE_METHOD(java::sql::Connection,38,"createNClob","()Ljava/sql/NClob;")
J2CPP_DEFINE_METHOD(java::sql::Connection,39,"createSQLXML","()Ljava/sql/SQLXML;")
J2CPP_DEFINE_METHOD(java::sql::Connection,40,"isValid","(I)Z")
J2CPP_DEFINE_METHOD(java::sql::Connection,41,"setClientInfo","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,42,"setClientInfo","(Ljava/util/Properties;)V")
J2CPP_DEFINE_METHOD(java::sql::Connection,43,"getClientInfo","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Connection,44,"getClientInfo","()Ljava/util/Properties;")
J2CPP_DEFINE_METHOD(java::sql::Connection,45,"createArrayOf","(Ljava/lang/String;[java.lang.Object)Ljava/sql/Array;")
J2CPP_DEFINE_METHOD(java::sql::Connection,46,"createStruct","(Ljava/lang/String;[java.lang.Object)Ljava/sql/Struct;")
J2CPP_DEFINE_FIELD(java::sql::Connection,0,"TRANSACTION_NONE","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,1,"TRANSACTION_READ_COMMITTED","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,2,"TRANSACTION_READ_UNCOMMITTED","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,3,"TRANSACTION_REPEATABLE_READ","I")
J2CPP_DEFINE_FIELD(java::sql::Connection,4,"TRANSACTION_SERIALIZABLE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_CONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
