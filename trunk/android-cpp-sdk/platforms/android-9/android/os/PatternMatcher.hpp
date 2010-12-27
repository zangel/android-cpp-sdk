/*================================================================================
  code generated by: java2cpp
  class: android.os.PatternMatcher
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_DECL
#define J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class PatternMatcher;
	class PatternMatcher
		: public cpp_object<PatternMatcher>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		PatternMatcher(jobject jobj)
		: cpp_object<PatternMatcher>(jobj)
		{
		}

		local_ref< java::lang::String > getPath();
		cpp_int getType();
		cpp_boolean match(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > PATTERN_LITERAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > PATTERN_PREFIX;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > PATTERN_SIMPLE_GLOB;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class PatternMatcher

} //namespace os
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_IMPL
#define J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::os::PatternMatcher > create< android::os::PatternMatcher>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::os::PatternMatcher >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::PatternMatcher::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::PatternMatcher::J2CPP_CLASS_NAME, android::os::PatternMatcher::J2CPP_METHOD_NAME(0), android::os::PatternMatcher::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::os::PatternMatcher > create< android::os::PatternMatcher>(local_ref< android::os::Parcel > const &a0)
{
	return local_ref< android::os::PatternMatcher >(
		environment::get().get_jenv()->NewObject(
			get_class<android::os::PatternMatcher::J2CPP_CLASS_NAME>(),
			get_method_id<android::os::PatternMatcher::J2CPP_CLASS_NAME, android::os::PatternMatcher::J2CPP_METHOD_NAME(1), android::os::PatternMatcher::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::os::PatternMatcher::getPath()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_int android::os::PatternMatcher::getType()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::os::PatternMatcher::match(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::os::PatternMatcher::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int android::os::PatternMatcher::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::os::PatternMatcher::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::os::PatternMatcher::J2CPP_CLASS_NAME,
	android::os::PatternMatcher::J2CPP_FIELD_NAME(0),
	android::os::PatternMatcher::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::os::PatternMatcher::PATTERN_LITERAL;

static_field<
	android::os::PatternMatcher::J2CPP_CLASS_NAME,
	android::os::PatternMatcher::J2CPP_FIELD_NAME(1),
	android::os::PatternMatcher::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::os::PatternMatcher::PATTERN_PREFIX;

static_field<
	android::os::PatternMatcher::J2CPP_CLASS_NAME,
	android::os::PatternMatcher::J2CPP_FIELD_NAME(2),
	android::os::PatternMatcher::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::os::PatternMatcher::PATTERN_SIMPLE_GLOB;

static_field<
	android::os::PatternMatcher::J2CPP_CLASS_NAME,
	android::os::PatternMatcher::J2CPP_FIELD_NAME(3),
	android::os::PatternMatcher::J2CPP_FIELD_SIGNATURE(3),
	local_ref< android::os::Parcelable_::Creator >
> android::os::PatternMatcher::CREATOR;


J2CPP_DEFINE_CLASS(android::os::PatternMatcher,"android/os/PatternMatcher")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,0,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,1,"<init>","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,2,"getPath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,3,"getType","()I")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,4,"match","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,5,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,6,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,7,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::os::PatternMatcher,8,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::os::PatternMatcher,0,"PATTERN_LITERAL","I")
J2CPP_DEFINE_FIELD(android::os::PatternMatcher,1,"PATTERN_PREFIX","I")
J2CPP_DEFINE_FIELD(android::os::PatternMatcher,2,"PATTERN_SIMPLE_GLOB","I")
J2CPP_DEFINE_FIELD(android::os::PatternMatcher,3,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_PATTERNMATCHER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
