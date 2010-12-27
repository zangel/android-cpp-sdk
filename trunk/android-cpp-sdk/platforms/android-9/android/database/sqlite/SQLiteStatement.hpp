/*================================================================================
  code generated by: java2cpp
  class: android.database.sqlite.SQLiteStatement
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace database { namespace sqlite {

	class SQLiteStatement;
	class SQLiteStatement
		: public cpp_object<SQLiteStatement>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		SQLiteStatement(jobject jobj)
		: cpp_object<SQLiteStatement>(jobj)
		{
		}

		void execute();
		cpp_long executeInsert();
		cpp_long simpleQueryForLong();
		local_ref< java::lang::String > simpleQueryForString();
	}; //class SQLiteStatement

} //namespace sqlite
} //namespace database
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL
#define J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::database::sqlite::SQLiteStatement > create< android::database::sqlite::SQLiteStatement>()
{
	return local_ref< android::database::sqlite::SQLiteStatement >(
		environment::get().get_jenv()->NewObject(
			get_class<android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME>(),
			get_method_id<android::database::sqlite::SQLiteStatement::J2CPP_CLASS_NAME, android::database::sqlite::SQLiteStatement::J2CPP_METHOD_NAME(0), android::database::sqlite::SQLiteStatement::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::database::sqlite::SQLiteStatement::execute()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

cpp_long android::database::sqlite::SQLiteStatement::executeInsert()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_long android::database::sqlite::SQLiteStatement::simpleQueryForLong()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::lang::String > android::database::sqlite::SQLiteStatement::simpleQueryForString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::database::sqlite::SQLiteStatement,"android/database/sqlite/SQLiteStatement")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,1,"execute","()V")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,2,"executeInsert","()J")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,3,"simpleQueryForLong","()J")
J2CPP_DEFINE_METHOD(android::database::sqlite::SQLiteStatement,4,"simpleQueryForString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_DATABASE_SQLITE_SQLITESTATEMENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
