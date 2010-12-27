/*================================================================================
  code generated by: java2cpp
  class: android.widget.TableLayout
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_DECL
#define J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class OnHierarchyChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace LinearLayout_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace TableLayout_ { class LayoutParams; } } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/LinearLayout.hpp>
#include <android/widget/TableLayout.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class TableLayout;
	namespace TableLayout_ {

		class LayoutParams;
		class LayoutParams
			: public cpp_object<LayoutParams>
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

			LayoutParams(jobject jobj)
			: cpp_object<LayoutParams>(jobj)
			{
			}

		}; //class LayoutParams

	} //namespace TableLayout_

	class TableLayout
		: public cpp_object<TableLayout>
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

		typedef TableLayout_::LayoutParams LayoutParams;

		TableLayout(jobject jobj)
		: cpp_object<TableLayout>(jobj)
		{
		}

		void setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener > const&);
		void requestLayout();
		cpp_boolean isShrinkAllColumns();
		void setShrinkAllColumns(cpp_boolean const&);
		cpp_boolean isStretchAllColumns();
		void setStretchAllColumns(cpp_boolean const&);
		void setColumnCollapsed(cpp_int const&, cpp_boolean const&);
		cpp_boolean isColumnCollapsed(cpp_int const&);
		void setColumnStretchable(cpp_int const&, cpp_boolean const&);
		cpp_boolean isColumnStretchable(cpp_int const&);
		void setColumnShrinkable(cpp_int const&, cpp_boolean const&);
		cpp_boolean isColumnShrinkable(cpp_int const&);
		void addView(local_ref< android::view::View > const&);
		void addView(local_ref< android::view::View > const&, cpp_int const&);
		void addView(local_ref< android::view::View > const&, local_ref< android::view::ViewGroup_::LayoutParams > const&);
		void addView(local_ref< android::view::View > const&, cpp_int const&, local_ref< android::view::ViewGroup_::LayoutParams > const&);
		local_ref< android::widget::TableLayout_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet > const&);
		local_ref< android::widget::LinearLayout_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet > const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_2(local_ref< android::util::AttributeSet > const&);
	}; //class TableLayout

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_IMPL

namespace j2cpp {



template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(0), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>(cpp_int const &a0, cpp_int const &a1)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(1), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>(cpp_int const &a0, cpp_int const &a1, cpp_float const &a2)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(2), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>()
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(3), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(4), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TableLayout_::LayoutParams > create< android::widget::TableLayout_::LayoutParams>(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout_::LayoutParams::J2CPP_CLASS_NAME, android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_NAME(5), android::widget::TableLayout_::LayoutParams::J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(android::widget::TableLayout_::LayoutParams,"android/widget/TableLayout$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,2,"<init>","(IIF)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,3,"<init>","()V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,4,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,5,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout_::LayoutParams,6,"setBaseAttributes","(Landroid/content/res/TypedArray;II)V")


template <>
local_ref< android::widget::TableLayout > create< android::widget::TableLayout>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::TableLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout::J2CPP_CLASS_NAME, android::widget::TableLayout::J2CPP_METHOD_NAME(0), android::widget::TableLayout::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::TableLayout > create< android::widget::TableLayout>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::TableLayout >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::TableLayout::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::TableLayout::J2CPP_CLASS_NAME, android::widget::TableLayout::J2CPP_METHOD_NAME(1), android::widget::TableLayout::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::TableLayout::setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::requestLayout()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean android::widget::TableLayout::isShrinkAllColumns()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void android::widget::TableLayout::setShrinkAllColumns(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::widget::TableLayout::isStretchAllColumns()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::widget::TableLayout::setStretchAllColumns(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::setColumnCollapsed(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::TableLayout::isColumnCollapsed(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::setColumnStretchable(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::TableLayout::isColumnStretchable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::setColumnShrinkable(cpp_int const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean android::widget::TableLayout::isColumnShrinkable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::addView(local_ref< android::view::View > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::TableLayout::addView(local_ref< android::view::View > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::TableLayout::addView(local_ref< android::view::View > const &a0, local_ref< android::view::ViewGroup_::LayoutParams > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::TableLayout::addView(local_ref< android::view::View > const &a0, cpp_int const &a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



local_ref< android::widget::TableLayout_::LayoutParams > android::widget::TableLayout::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::widget::TableLayout_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}




local_ref< android::widget::LinearLayout_::LayoutParams > android::widget::TableLayout::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::widget::LinearLayout_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}



local_ref< android::view::ViewGroup_::LayoutParams > android::widget::TableLayout::generateLayoutParams_2(local_ref< android::util::AttributeSet > const &a0)
{
	return local_ref< android::view::ViewGroup_::LayoutParams >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::TableLayout,"android/widget/TableLayout")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,2,"setOnHierarchyChangeListener","(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,3,"requestLayout","()V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,4,"isShrinkAllColumns","()Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,5,"setShrinkAllColumns","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,6,"isStretchAllColumns","()Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,7,"setStretchAllColumns","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,8,"setColumnCollapsed","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,9,"isColumnCollapsed","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,10,"setColumnStretchable","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,11,"isColumnStretchable","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,12,"setColumnShrinkable","(IZ)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,13,"isColumnShrinkable","(I)Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,14,"addView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,15,"addView","(Landroid/view/View;I)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,16,"addView","(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,17,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,18,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,19,"onLayout","(ZIIII)V")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,20,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/TableLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,21,"generateDefaultLayoutParams","()Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,22,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,23,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,24,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,25,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,26,"generateLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::TableLayout,27,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_TABLELAYOUT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
