/*================================================================================
  code generated by: java2cpp
  class: android.widget.TwoLineListItem
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/widget/TextView.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TwoLineListItem;
	class TwoLineListItem
		: public cpp_object<TwoLineListItem>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		TwoLineListItem(jobject jobj)
		: cpp_object<TwoLineListItem>(jobj)
		{
		}

		local_ref< android::widget::TextView > getText1();
		local_ref< android::widget::TextView > getText2();
	}; //class TwoLineListItem

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::TwoLineListItem > create< android::widget::TwoLineListItem>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::TwoLineListItem >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TwoLineListItem::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TwoLineListItem::J2CPP_CLASS_NAME, android::widget::TwoLineListItem::J2CPP_METHOD_NAME(0), android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TwoLineListItem > create< android::widget::TwoLineListItem>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::TwoLineListItem >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TwoLineListItem::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TwoLineListItem::J2CPP_CLASS_NAME, android::widget::TwoLineListItem::J2CPP_METHOD_NAME(1), android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TwoLineListItem > create< android::widget::TwoLineListItem>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::TwoLineListItem >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TwoLineListItem::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TwoLineListItem::J2CPP_CLASS_NAME, android::widget::TwoLineListItem::J2CPP_METHOD_NAME(2), android::widget::TwoLineListItem::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


local_ref< android::widget::TextView > android::widget::TwoLineListItem::getText1()
{
	return local_ref< android::widget::TextView >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< android::widget::TextView > android::widget::TwoLineListItem::getText2()
{
	return local_ref< android::widget::TextView >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::TwoLineListItem,"android/widget/TwoLineListItem")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,3,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,4,"getText1","()Landroid/widget/TextView;")
J2CPP_DEFINE_METHOD(android::widget::TwoLineListItem,5,"getText2","()Landroid/widget/TextView;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TWOLINELISTITEM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
