/*================================================================================
  code generated by: java2cpp
  class: android.test.ComparisonFailure
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_DECL
#define J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class ComparisonFailure;
	class ComparisonFailure
		: public cpp_object<ComparisonFailure>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ComparisonFailure(jobject jobj)
		: cpp_object<ComparisonFailure>(jobj)
		{
		}

		local_ref< java::lang::String > getMessage();
	}; //class ComparisonFailure

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_IMPL
#define J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::ComparisonFailure > create< android::test::ComparisonFailure>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< android::test::ComparisonFailure >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::ComparisonFailure::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::ComparisonFailure::J2CPP_CLASS_NAME, android::test::ComparisonFailure::J2CPP_METHOD_NAME(0), android::test::ComparisonFailure::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::test::ComparisonFailure::getMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::ComparisonFailure,"android/test/ComparisonFailure")
J2CPP_DEFINE_METHOD(android::test::ComparisonFailure,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::ComparisonFailure,1,"getMessage","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_COMPARISONFAILURE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION