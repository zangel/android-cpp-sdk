/*================================================================================
  code generated by: java2cpp
  class: java.text.BreakIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_DECL
#define J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace text { class CharacterIterator; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/text/CharacterIterator.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace text {

	class BreakIterator;
	class BreakIterator
		: public cpp_object<BreakIterator>
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
		J2CPP_DECLARE_FIELD(0)

		BreakIterator(jobject jobj)
		: cpp_object<BreakIterator>(jobj)
		{
		}

		static local_ref< cpp_object_array<java::util::Locale, 1> > getAvailableLocales();
		static local_ref< java::text::BreakIterator > getCharacterInstance();
		static local_ref< java::text::BreakIterator > getCharacterInstance(local_ref< java::util::Locale > const&);
		static local_ref< java::text::BreakIterator > getLineInstance();
		static local_ref< java::text::BreakIterator > getLineInstance(local_ref< java::util::Locale > const&);
		static local_ref< java::text::BreakIterator > getSentenceInstance();
		static local_ref< java::text::BreakIterator > getSentenceInstance(local_ref< java::util::Locale > const&);
		static local_ref< java::text::BreakIterator > getWordInstance();
		static local_ref< java::text::BreakIterator > getWordInstance(local_ref< java::util::Locale > const&);
		cpp_boolean isBoundary(cpp_int const&);
		cpp_int preceding(cpp_int const&);
		void setText(local_ref< java::lang::String > const&);
		cpp_int current();
		cpp_int first();
		cpp_int following(cpp_int const&);
		local_ref< java::text::CharacterIterator > getText();
		cpp_int last();
		cpp_int next();
		cpp_int next(cpp_int const&);
		cpp_int previous();
		void setText(local_ref< java::text::CharacterIterator > const&);
		local_ref< java::lang::Object > clone();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > DONE;
	}; //class BreakIterator

} //namespace text
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_IMPL
#define J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::text::BreakIterator > create< java::text::BreakIterator>()
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->NewObject(
			get_class<java::text::BreakIterator::J2CPP_CLASS_NAME>(),
			get_method_id<java::text::BreakIterator::J2CPP_CLASS_NAME, java::text::BreakIterator::J2CPP_METHOD_NAME(0), java::text::BreakIterator::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< cpp_object_array<java::util::Locale, 1> > java::text::BreakIterator::getAvailableLocales()
{
	return local_ref< cpp_object_array<java::util::Locale, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getCharacterInstance()
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getCharacterInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getLineInstance()
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getLineInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getSentenceInstance()
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getSentenceInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getWordInstance()
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>()
		)
	);
}

local_ref< java::text::BreakIterator > java::text::BreakIterator::getWordInstance(local_ref< java::util::Locale > const &a0)
{
	return local_ref< java::text::BreakIterator >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::text::BreakIterator::isBoundary(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::BreakIterator::preceding(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void java::text::BreakIterator::setText(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::BreakIterator::current()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::text::BreakIterator::first()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::text::BreakIterator::following(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::text::CharacterIterator > java::text::BreakIterator::getText()
{
	return local_ref< java::text::CharacterIterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

cpp_int java::text::BreakIterator::last()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_int java::text::BreakIterator::next()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

cpp_int java::text::BreakIterator::next(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::text::BreakIterator::previous()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void java::text::BreakIterator::setText(local_ref< java::text::CharacterIterator > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::text::BreakIterator::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


static_field<
	java::text::BreakIterator::J2CPP_CLASS_NAME,
	java::text::BreakIterator::J2CPP_FIELD_NAME(0),
	java::text::BreakIterator::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> java::text::BreakIterator::DONE;


J2CPP_DEFINE_CLASS(java::text::BreakIterator,"java/text/BreakIterator")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,1,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,2,"getCharacterInstance","()Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,3,"getCharacterInstance","(Ljava/util/Locale;)Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,4,"getLineInstance","()Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,5,"getLineInstance","(Ljava/util/Locale;)Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,6,"getSentenceInstance","()Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,7,"getSentenceInstance","(Ljava/util/Locale;)Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,8,"getWordInstance","()Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,9,"getWordInstance","(Ljava/util/Locale;)Ljava/text/BreakIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,10,"isBoundary","(I)Z")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,11,"preceding","(I)I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,12,"setText","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,13,"current","()I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,14,"first","()I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,15,"following","(I)I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,16,"getText","()Ljava/text/CharacterIterator;")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,17,"last","()I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,18,"next","()I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,19,"next","(I)I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,20,"previous","()I")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,21,"setText","(Ljava/text/CharacterIterator;)V")
J2CPP_DEFINE_METHOD(java::text::BreakIterator,22,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(java::text::BreakIterator,0,"DONE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_TEXT_BREAKITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
