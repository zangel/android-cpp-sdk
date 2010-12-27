/*================================================================================
  code generated by: java2cpp
  class: java.lang.reflect.UndeclaredThrowableException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class UndeclaredThrowableException;
	class UndeclaredThrowableException
		: public cpp_object<UndeclaredThrowableException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		UndeclaredThrowableException(jobject jobj)
		: cpp_object<UndeclaredThrowableException>(jobj)
		{
		}

		local_ref< java::lang::Throwable > getUndeclaredThrowable();
		local_ref< java::lang::Throwable > getCause();
	}; //class UndeclaredThrowableException

} //namespace reflect
} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::reflect::UndeclaredThrowableException > create< java::lang::reflect::UndeclaredThrowableException>(local_ref< java::lang::Throwable > const &a0)
{
	return local_ref< java::lang::reflect::UndeclaredThrowableException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::reflect::UndeclaredThrowableException::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::reflect::UndeclaredThrowableException::J2CPP_CLASS_NAME, java::lang::reflect::UndeclaredThrowableException::J2CPP_METHOD_NAME(0), java::lang::reflect::UndeclaredThrowableException::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::reflect::UndeclaredThrowableException > create< java::lang::reflect::UndeclaredThrowableException>(local_ref< java::lang::Throwable > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::reflect::UndeclaredThrowableException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::reflect::UndeclaredThrowableException::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::reflect::UndeclaredThrowableException::J2CPP_CLASS_NAME, java::lang::reflect::UndeclaredThrowableException::J2CPP_METHOD_NAME(1), java::lang::reflect::UndeclaredThrowableException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Throwable > java::lang::reflect::UndeclaredThrowableException::getUndeclaredThrowable()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::Throwable > java::lang::reflect::UndeclaredThrowableException::getCause()
{
	return local_ref< java::lang::Throwable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::reflect::UndeclaredThrowableException,"java/lang/reflect/UndeclaredThrowableException")
J2CPP_DEFINE_METHOD(java::lang::reflect::UndeclaredThrowableException,0,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::UndeclaredThrowableException,1,"<init>","(Ljava/lang/Throwable;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::reflect::UndeclaredThrowableException,2,"getUndeclaredThrowable","()Ljava/lang/Throwable;")
J2CPP_DEFINE_METHOD(java::lang::reflect::UndeclaredThrowableException,3,"getCause","()Ljava/lang/Throwable;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_UNDECLAREDTHROWABLEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
