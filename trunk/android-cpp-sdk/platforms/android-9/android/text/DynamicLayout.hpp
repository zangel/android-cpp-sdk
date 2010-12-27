/*================================================================================
  code generated by: java2cpp
  class: android.text.DynamicLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL
#define J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Directions; } } } }
namespace j2cpp { namespace android { namespace text { class TextPaint; } } }
namespace j2cpp { namespace android { namespace text { namespace TextUtils_ { class TruncateAt; } } } }
namespace j2cpp { namespace android { namespace text { namespace Layout_ { class Alignment; } } } }


#include <android/text/Layout.hpp>
#include <android/text/TextPaint.hpp>
#include <android/text/TextUtils.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace text {

	class DynamicLayout;
	class DynamicLayout
		: public cpp_object<DynamicLayout>
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

		DynamicLayout(jobject jobj)
		: cpp_object<DynamicLayout>(jobj)
		{
		}

		cpp_int getLineCount();
		cpp_int getLineTop(cpp_int const&);
		cpp_int getLineDescent(cpp_int const&);
		cpp_int getLineStart(cpp_int const&);
		cpp_boolean getLineContainsTab(cpp_int const&);
		cpp_int getParagraphDirection(cpp_int const&);
		local_ref< android::text::Layout_::Directions > getLineDirections(cpp_int const&);
		cpp_int getTopPadding();
		cpp_int getBottomPadding();
		cpp_int getEllipsizedWidth();
		cpp_int getEllipsisStart(cpp_int const&);
		cpp_int getEllipsisCount(cpp_int const&);
	}; //class DynamicLayout

} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL
#define J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::DynamicLayout > create< android::text::DynamicLayout>(local_ref< java::lang::CharSequence > const &a0, local_ref< android::text::TextPaint > const &a1, cpp_int const &a2, local_ref< android::text::Layout_::Alignment > const &a3, cpp_float const &a4, cpp_float const &a5, cpp_boolean const &a6)
{
	return local_ref< android::text::DynamicLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::DynamicLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::DynamicLayout::J2CPP_CLASS_NAME, android::text::DynamicLayout::J2CPP_METHOD_NAME(0), android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype()
		)
	);
}

template <>
local_ref< android::text::DynamicLayout > create< android::text::DynamicLayout>(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< android::text::TextPaint > const &a2, cpp_int const &a3, local_ref< android::text::Layout_::Alignment > const &a4, cpp_float const &a5, cpp_float const &a6, cpp_boolean const &a7)
{
	return local_ref< android::text::DynamicLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::DynamicLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::DynamicLayout::J2CPP_CLASS_NAME, android::text::DynamicLayout::J2CPP_METHOD_NAME(1), android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}

template <>
local_ref< android::text::DynamicLayout > create< android::text::DynamicLayout>(local_ref< java::lang::CharSequence > const &a0, local_ref< java::lang::CharSequence > const &a1, local_ref< android::text::TextPaint > const &a2, cpp_int const &a3, local_ref< android::text::Layout_::Alignment > const &a4, cpp_float const &a5, cpp_float const &a6, cpp_boolean const &a7, local_ref< android::text::TextUtils_::TruncateAt > const &a8, cpp_int const &a9)
{
	return local_ref< android::text::DynamicLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::DynamicLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::DynamicLayout::J2CPP_CLASS_NAME, android::text::DynamicLayout::J2CPP_METHOD_NAME(2), android::text::DynamicLayout::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype(), a8.get_jtype(), a9.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getLineCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int android::text::DynamicLayout::getLineTop(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getLineDescent(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getLineStart(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::text::DynamicLayout::getLineContainsTab(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getParagraphDirection(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::text::Layout_::Directions > android::text::DynamicLayout::getLineDirections(cpp_int const &a0)
{
	return local_ref< android::text::Layout_::Directions >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getTopPadding()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_int android::text::DynamicLayout::getBottomPadding()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_int android::text::DynamicLayout::getEllipsizedWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_int android::text::DynamicLayout::getEllipsisStart(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::DynamicLayout::getEllipsisCount(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::DynamicLayout,"android/text/DynamicLayout")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,0,"<init>","(Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,1,"<init>","(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZ)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,2,"<init>","(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Landroid/text/TextPaint;ILandroid/text/Layout$Alignment;FFZLandroid/text/TextUtils$TruncateAt;I)V")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,3,"getLineCount","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,4,"getLineTop","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,5,"getLineDescent","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,6,"getLineStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,7,"getLineContainsTab","(I)Z")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,8,"getParagraphDirection","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,9,"getLineDirections","(I)Landroid/text/Layout$Directions;")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,10,"getTopPadding","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,11,"getBottomPadding","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,12,"getEllipsizedWidth","()I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,13,"getEllipsisStart","(I)I")
J2CPP_DEFINE_METHOD(android::text::DynamicLayout,14,"getEllipsisCount","(I)I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_DYNAMICLAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
