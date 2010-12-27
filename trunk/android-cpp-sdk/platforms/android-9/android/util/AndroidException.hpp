/*================================================================================
  code generated by: java2cpp
  class: android.util.AndroidException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace util {

	class AndroidException;
	class AndroidException
		: public cpp_object<AndroidException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		AndroidException(jobject jobj)
		: cpp_object<AndroidException>(jobj)
		{
		}

	}; //class AndroidException

} //namespace util
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::util::AndroidException > create< android::util::AndroidException>()
{
	return local_ref< android::util::AndroidException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::util::AndroidException::J2CPP_CLASS_NAME>(),
			get_method_id<android::util::AndroidException::J2CPP_CLASS_NAME, android::util::AndroidException::J2CPP_METHOD_NAME(0), android::util::AndroidException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::util::AndroidException > create< android::util::AndroidException>(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::util::AndroidException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::util::AndroidException::J2CPP_CLASS_NAME>(),
			get_method_id<android::util::AndroidException::J2CPP_CLASS_NAME, android::util::AndroidException::J2CPP_METHOD_NAME(1), android::util::AndroidException::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::util::AndroidException > create< android::util::AndroidException>(local_ref< java::lang::Exception > const &a0)
{
	return local_ref< android::util::AndroidException >(
		environment::get().get_jenv()->NewObject(
			get_class<android::util::AndroidException::J2CPP_CLASS_NAME>(),
			get_method_id<android::util::AndroidException::J2CPP_CLASS_NAME, android::util::AndroidException::J2CPP_METHOD_NAME(2), android::util::AndroidException::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::util::AndroidException,"android/util/AndroidException")
J2CPP_DEFINE_METHOD(android::util::AndroidException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::util::AndroidException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::util::AndroidException,2,"<init>","(Ljava/lang/Exception;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_UTIL_ANDROIDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
