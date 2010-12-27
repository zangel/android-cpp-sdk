/*================================================================================
  code generated by: java2cpp
  class: android.text.util.Rfc822Tokenizer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace android { namespace text { namespace util { class Rfc822Token; } } } }


#include <android/text/util/Rfc822Token.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/util/Collection.hpp>


namespace j2cpp {

namespace android { namespace text { namespace util {

	class Rfc822Tokenizer;
	class Rfc822Tokenizer
		: public cpp_object<Rfc822Tokenizer>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		Rfc822Tokenizer(jobject jobj)
		: cpp_object<Rfc822Tokenizer>(jobj)
		{
		}

		static void tokenize(local_ref< java::lang::CharSequence > const&, local_ref< java::util::Collection > const&);
		static local_ref< cpp_object_array<android::text::util::Rfc822Token, 1> > tokenize(local_ref< java::lang::CharSequence > const&);
		cpp_int findTokenStart(local_ref< java::lang::CharSequence > const&, cpp_int const&);
		cpp_int findTokenEnd(local_ref< java::lang::CharSequence > const&, cpp_int const&);
		local_ref< java::lang::CharSequence > terminateToken(local_ref< java::lang::CharSequence > const&);
	}; //class Rfc822Tokenizer

} //namespace util
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::util::Rfc822Tokenizer > create< android::text::util::Rfc822Tokenizer>()
{
	return local_ref< android::text::util::Rfc822Tokenizer >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::util::Rfc822Tokenizer::J2CPP_CLASS_NAME, android::text::util::Rfc822Tokenizer::J2CPP_METHOD_NAME(0), android::text::util::Rfc822Tokenizer::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::text::util::Rfc822Tokenizer::tokenize(local_ref< java::lang::CharSequence > const &a0, local_ref< java::util::Collection > const &a1)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_object_array<android::text::util::Rfc822Token, 1> > android::text::util::Rfc822Tokenizer::tokenize(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< cpp_object_array<android::text::util::Rfc822Token, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::util::Rfc822Tokenizer::findTokenStart(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::text::util::Rfc822Tokenizer::findTokenEnd(local_ref< java::lang::CharSequence > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::CharSequence > android::text::util::Rfc822Tokenizer::terminateToken(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< java::lang::CharSequence >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::util::Rfc822Tokenizer,"android/text/util/Rfc822Tokenizer")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,1,"tokenize","(Ljava/lang/CharSequence;Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,2,"tokenize","(Ljava/lang/CharSequence;)[android.text.util.Rfc822Token")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,3,"findTokenStart","(Ljava/lang/CharSequence;I)I")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,4,"findTokenEnd","(Ljava/lang/CharSequence;I)I")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Tokenizer,5,"terminateToken","(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKENIZER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
