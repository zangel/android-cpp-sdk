/*================================================================================
  code generated by: java2cpp
  class: android.widget.PopupWindow
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL
#define J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace View_ { class OnTouchListener; } } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace widget { namespace PopupWindow_ { class OnDismissListener; } } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/widget/PopupWindow.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class PopupWindow;
	namespace PopupWindow_ {

		class OnDismissListener;
		class OnDismissListener
			: public cpp_object<OnDismissListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			OnDismissListener(jobject jobj)
			: cpp_object<OnDismissListener>(jobj)
			{
			}

			void onDismiss();
		}; //class OnDismissListener

	} //namespace PopupWindow_

	class PopupWindow
		: public cpp_object<PopupWindow>
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
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef PopupWindow_::OnDismissListener OnDismissListener;

		PopupWindow(jobject jobj)
		: cpp_object<PopupWindow>(jobj)
		{
		}

		local_ref< android::graphics::drawable::Drawable > getBackground();
		void setBackgroundDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		cpp_int getAnimationStyle();
		void setIgnoreCheekPress();
		void setAnimationStyle(cpp_int const&);
		local_ref< android::view::View > getContentView();
		void setContentView(local_ref< android::view::View > const&);
		void setTouchInterceptor(local_ref< android::view::View_::OnTouchListener > const&);
		cpp_boolean isFocusable();
		void setFocusable(cpp_boolean const&);
		cpp_int getInputMethodMode();
		void setInputMethodMode(cpp_int const&);
		void setSoftInputMode(cpp_int const&);
		cpp_int getSoftInputMode();
		cpp_boolean isTouchable();
		void setTouchable(cpp_boolean const&);
		cpp_boolean isOutsideTouchable();
		void setOutsideTouchable(cpp_boolean const&);
		cpp_boolean isClippingEnabled();
		void setClippingEnabled(cpp_boolean const&);
		void setWindowLayoutMode(cpp_int const&, cpp_int const&);
		cpp_int getHeight();
		void setHeight(cpp_int const&);
		cpp_int getWidth();
		void setWidth(cpp_int const&);
		cpp_boolean isShowing();
		void showAtLocation(local_ref< android::view::View > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void showAsDropDown(local_ref< android::view::View > const&);
		void showAsDropDown(local_ref< android::view::View > const&, cpp_int const&, cpp_int const&);
		cpp_boolean isAboveAnchor();
		cpp_int getMaxAvailableHeight(local_ref< android::view::View > const&);
		cpp_int getMaxAvailableHeight(local_ref< android::view::View > const&, cpp_int const&);
		void dismiss();
		void setOnDismissListener(local_ref< android::widget::PopupWindow_::OnDismissListener > const&);
		void update();
		void update(cpp_int const&, cpp_int const&);
		void update(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void update(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_boolean const&);
		void update(local_ref< android::view::View > const&, cpp_int const&, cpp_int const&);
		void update(local_ref< android::view::View > const&, cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > INPUT_METHOD_FROM_FOCUSABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > INPUT_METHOD_NEEDED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > INPUT_METHOD_NOT_NEEDED;
	}; //class PopupWindow

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL

namespace j2cpp {



void android::widget::PopupWindow_::OnDismissListener::onDismiss()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::PopupWindow_::OnDismissListener,"android/widget/PopupWindow$OnDismissListener")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow_::OnDismissListener,0,"onDismiss","()V")


template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(0), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(1), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(2), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>()
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(3), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::view::View > const &a0)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(4), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(5), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(6), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::PopupWindow > create< android::widget::PopupWindow>(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_boolean const &a3)
{
	return local_ref< android::widget::PopupWindow >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::PopupWindow::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::PopupWindow::J2CPP_CLASS_NAME, android::widget::PopupWindow::J2CPP_METHOD_NAME(7), android::widget::PopupWindow::J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::widget::PopupWindow::getBackground()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

void android::widget::PopupWindow::setBackgroundDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getAnimationStyle()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::PopupWindow::setIgnoreCheekPress()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void android::widget::PopupWindow::setAnimationStyle(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::View > android::widget::PopupWindow::getContentView()
{
	return local_ref< android::view::View >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

void android::widget::PopupWindow::setContentView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::PopupWindow::setTouchInterceptor(local_ref< android::view::View_::OnTouchListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isFocusable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void android::widget::PopupWindow::setFocusable(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getInputMethodMode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void android::widget::PopupWindow::setInputMethodMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::PopupWindow::setSoftInputMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getSoftInputMode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isTouchable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void android::widget::PopupWindow::setTouchable(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isOutsideTouchable()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

void android::widget::PopupWindow::setOutsideTouchable(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isClippingEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

void android::widget::PopupWindow::setClippingEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::PopupWindow::setWindowLayoutMode(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getHeight()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}

void android::widget::PopupWindow::setHeight(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getWidth()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>()
		)
	);
}

void android::widget::PopupWindow::setWidth(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isShowing()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>()
		)
	);
}

void android::widget::PopupWindow::showAtLocation(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::widget::PopupWindow::showAsDropDown(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::PopupWindow::showAsDropDown(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::widget::PopupWindow::isAboveAnchor()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>()
		)
	);
}

cpp_int android::widget::PopupWindow::getMaxAvailableHeight(local_ref< android::view::View > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::PopupWindow::getMaxAvailableHeight(local_ref< android::view::View > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::PopupWindow::dismiss()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

void android::widget::PopupWindow::setOnDismissListener(local_ref< android::widget::PopupWindow_::OnDismissListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::PopupWindow::update()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), false>()
		)
	);
}

void android::widget::PopupWindow::update(cpp_int const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::PopupWindow::update(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(44), J2CPP_METHOD_SIGNATURE(44), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::widget::PopupWindow::update(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_boolean const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(45), J2CPP_METHOD_SIGNATURE(45), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}

void android::widget::PopupWindow::update(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(46), J2CPP_METHOD_SIGNATURE(46), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void android::widget::PopupWindow::update(local_ref< android::view::View > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(47), J2CPP_METHOD_SIGNATURE(47), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
		)
	);
}


static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(0),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::widget::PopupWindow::INPUT_METHOD_FROM_FOCUSABLE;

static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(1),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::widget::PopupWindow::INPUT_METHOD_NEEDED;

static_field<
	android::widget::PopupWindow::J2CPP_CLASS_NAME,
	android::widget::PopupWindow::J2CPP_FIELD_NAME(2),
	android::widget::PopupWindow::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::widget::PopupWindow::INPUT_METHOD_NOT_NEEDED;


J2CPP_DEFINE_CLASS(android::widget::PopupWindow,"android/widget/PopupWindow")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,3,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,4,"<init>","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,5,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,6,"<init>","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,7,"<init>","(Landroid/view/View;IIZ)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,8,"getBackground","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,9,"setBackgroundDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,10,"getAnimationStyle","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,11,"setIgnoreCheekPress","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,12,"setAnimationStyle","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,13,"getContentView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,14,"setContentView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,15,"setTouchInterceptor","(Landroid/view/View$OnTouchListener;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,16,"isFocusable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,17,"setFocusable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,18,"getInputMethodMode","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,19,"setInputMethodMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,20,"setSoftInputMode","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,21,"getSoftInputMode","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,22,"isTouchable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,23,"setTouchable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,24,"isOutsideTouchable","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,25,"setOutsideTouchable","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,26,"isClippingEnabled","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,27,"setClippingEnabled","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,28,"setWindowLayoutMode","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,29,"getHeight","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,30,"setHeight","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,31,"getWidth","()I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,32,"setWidth","(I)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,33,"isShowing","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,34,"showAtLocation","(Landroid/view/View;III)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,35,"showAsDropDown","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,36,"showAsDropDown","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,37,"isAboveAnchor","()Z")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,38,"getMaxAvailableHeight","(Landroid/view/View;)I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,39,"getMaxAvailableHeight","(Landroid/view/View;I)I")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,40,"dismiss","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,41,"setOnDismissListener","(Landroid/widget/PopupWindow$OnDismissListener;)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,42,"update","()V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,43,"update","(II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,44,"update","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,45,"update","(IIIIZ)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,46,"update","(Landroid/view/View;II)V")
J2CPP_DEFINE_METHOD(android::widget::PopupWindow,47,"update","(Landroid/view/View;IIII)V")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,0,"INPUT_METHOD_FROM_FOCUSABLE","I")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,1,"INPUT_METHOD_NEEDED","I")
J2CPP_DEFINE_FIELD(android::widget::PopupWindow,2,"INPUT_METHOD_NOT_NEEDED","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_POPUPWINDOW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
