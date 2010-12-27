/*================================================================================
  code generated by: java2cpp
  class: android.test.AndroidTestCase
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_DECL
#define J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace net { class Uri; } } }


#include <android/content/Context.hpp>
#include <android/net/Uri.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace test {

	class AndroidTestCase;
	class AndroidTestCase
		: public cpp_object<AndroidTestCase>
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
		J2CPP_DECLARE_FIELD(0)

		AndroidTestCase(jobject jobj)
		: cpp_object<AndroidTestCase>(jobj)
		{
		}

		void testAndroidTestCaseSetupProperly();
		void setContext(local_ref< android::content::Context > const&);
		local_ref< android::content::Context > getContext();
		void assertActivityRequiresPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void assertReadingContentUriRequiresPermission(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);
		void assertWritingContentUriRequiresPermission(local_ref< android::net::Uri > const&, local_ref< java::lang::String > const&);

	}; //class AndroidTestCase

} //namespace test
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_IMPL
#define J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::test::AndroidTestCase > create< android::test::AndroidTestCase>()
{
	return local_ref< android::test::AndroidTestCase >(
		environment::get().get_jenv()->NewObject(
			get_class<android::test::AndroidTestCase::J2CPP_CLASS_NAME>(),
			get_method_id<android::test::AndroidTestCase::J2CPP_CLASS_NAME, android::test::AndroidTestCase::J2CPP_METHOD_NAME(0), android::test::AndroidTestCase::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}



void android::test::AndroidTestCase::testAndroidTestCaseSetupProperly()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::test::AndroidTestCase::setContext(local_ref< android::content::Context > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::content::Context > android::test::AndroidTestCase::getContext()
{
	return local_ref< android::content::Context >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::test::AndroidTestCase::assertActivityRequiresPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::test::AndroidTestCase::assertReadingContentUriRequiresPermission(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::test::AndroidTestCase::assertWritingContentUriRequiresPermission(local_ref< android::net::Uri > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}




J2CPP_DEFINE_CLASS(android::test::AndroidTestCase,"android/test/AndroidTestCase")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,1,"setUp","()V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,2,"tearDown","()V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,3,"testAndroidTestCaseSetupProperly","()V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,4,"setContext","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,5,"getContext","()Landroid/content/Context;")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,6,"assertActivityRequiresPermission","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,7,"assertReadingContentUriRequiresPermission","(Landroid/net/Uri;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,8,"assertWritingContentUriRequiresPermission","(Landroid/net/Uri;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::test::AndroidTestCase,9,"scrubClass","(Ljava/lang/Class;)V")
J2CPP_DEFINE_FIELD(android::test::AndroidTestCase,0,"mContext","Landroid/content/Context;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEST_ANDROIDTESTCASE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
