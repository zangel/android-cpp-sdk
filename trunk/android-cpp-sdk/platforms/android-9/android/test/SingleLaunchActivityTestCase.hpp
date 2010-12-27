/*================================================================================
  code generated by: java2cpp
  class: android.test.SingleLaunchActivityTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace android { namespace app { class Activity; } } }


#include <android/app/Activity.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class SingleLaunchActivityTestCase;
	class SingleLaunchActivityTestCase
		: public cpp_object<SingleLaunchActivityTestCase>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		SingleLaunchActivityTestCase(jobject jobj)
		: cpp_object<SingleLaunchActivityTestCase>(jobj)
		{
		}

		local_ref< android::app::Activity > getActivity();
		void testActivityTestCaseSetUpProperly();
	}; //class SingleLaunchActivityTestCase

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::SingleLaunchActivityTestCase > create< android::test::SingleLaunchActivityTestCase>(local_ref< java::lang::String > const &a0, local_ref< java::lang::Class > const &a1)
{
	return local_ref< android::test::SingleLaunchActivityTestCase >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::SingleLaunchActivityTestCase::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::SingleLaunchActivityTestCase::J2CPP_CLASS_NAME, android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_NAME(0), android::test::SingleLaunchActivityTestCase::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::app::Activity > android::test::SingleLaunchActivityTestCase::getActivity()
{
	return local_ref< android::app::Activity >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}



void android::test::SingleLaunchActivityTestCase::testActivityTestCaseSetUpProperly()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::test::SingleLaunchActivityTestCase,"android/test/SingleLaunchActivityTestCase")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,0,"<init>","(Ljava/lang/String;Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,1,"getActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,2,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,3,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::SingleLaunchActivityTestCase,4,"testActivityTestCaseSetUpProperly","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_SINGLELAUNCHACTIVITYTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
