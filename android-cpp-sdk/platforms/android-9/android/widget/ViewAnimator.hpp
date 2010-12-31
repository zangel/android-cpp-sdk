/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.ViewAnimator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_DECL
#define J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Animation; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { class FrameLayout; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/view/animation/Animation.hpp>
#include <android/widget/FrameLayout.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ViewAnimator;
	class ViewAnimator
		: public object<ViewAnimator>
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

		explicit ViewAnimator(jobject jobj)
		: object<ViewAnimator>(jobj)
		{
		}

		operator local_ref<android::widget::FrameLayout>() const;


		ViewAnimator(local_ref< android::content::Context > const&);
		ViewAnimator(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setDisplayedChild(jint);
		jint getDisplayedChild();
		void showNext();
		void showPrevious();
		void addView(local_ref< android::view::View >  const&, jint, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void removeAllViews();
		void removeView(local_ref< android::view::View >  const&);
		void removeViewAt(jint);
		void removeViewInLayout(local_ref< android::view::View >  const&);
		void removeViews(jint, jint);
		void removeViewsInLayout(jint, jint);
		local_ref< android::view::View > getCurrentView();
		local_ref< android::view::animation::Animation > getInAnimation();
		void setInAnimation(local_ref< android::view::animation::Animation >  const&);
		local_ref< android::view::animation::Animation > getOutAnimation();
		void setOutAnimation(local_ref< android::view::animation::Animation >  const&);
		void setInAnimation(local_ref< android::content::Context >  const&, jint);
		void setOutAnimation(local_ref< android::content::Context >  const&, jint);
		void setAnimateFirstView(jboolean);
		jint getBaseline();
	}; //class ViewAnimator

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_IMPL

namespace j2cpp {



android::widget::ViewAnimator::operator local_ref<android::widget::FrameLayout>() const
{
	return local_ref<android::widget::FrameLayout>(get_jobject());
}


android::widget::ViewAnimator::ViewAnimator(local_ref< android::content::Context > const &a0)
: object<android::widget::ViewAnimator>(
	call_new_object<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(0),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::ViewAnimator::ViewAnimator(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::ViewAnimator>(
	call_new_object<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(1),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::widget::ViewAnimator::setDisplayedChild(jint a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(2),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}

jint android::widget::ViewAnimator::getDisplayedChild()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(3),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

void android::widget::ViewAnimator::showNext()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(4),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void android::widget::ViewAnimator::showPrevious()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(5),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void android::widget::ViewAnimator::addView(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(6),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::widget::ViewAnimator::removeAllViews()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(7),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

void android::widget::ViewAnimator::removeView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(8),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

void android::widget::ViewAnimator::removeViewAt(jint a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(9),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0);
}

void android::widget::ViewAnimator::removeViewInLayout(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(10),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void android::widget::ViewAnimator::removeViews(jint a0, jint a1)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(11),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::ViewAnimator::removeViewsInLayout(jint a0, jint a1)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(12),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::view::View > android::widget::ViewAnimator::getCurrentView()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(13),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< android::view::View > >
	(get_jobject());
}

local_ref< android::view::animation::Animation > android::widget::ViewAnimator::getInAnimation()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(14),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::animation::Animation > >
	(get_jobject());
}

void android::widget::ViewAnimator::setInAnimation(local_ref< android::view::animation::Animation > const &a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(15),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

local_ref< android::view::animation::Animation > android::widget::ViewAnimator::getOutAnimation()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(16),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< android::view::animation::Animation > >
	(get_jobject());
}

void android::widget::ViewAnimator::setOutAnimation(local_ref< android::view::animation::Animation > const &a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(17),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void android::widget::ViewAnimator::setInAnimation(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(18),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::ViewAnimator::setOutAnimation(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(19),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1);
}

void android::widget::ViewAnimator::setAnimateFirstView(jboolean a0)
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(20),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

jint android::widget::ViewAnimator::getBaseline()
{
	return call_method<
		android::widget::ViewAnimator::J2CPP_CLASS_NAME,
		android::widget::ViewAnimator::J2CPP_METHOD_NAME(21),
		android::widget::ViewAnimator::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::widget::ViewAnimator,"android/widget/ViewAnimator")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,2,"setDisplayedChild","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,3,"getDisplayedChild","()I")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,4,"showNext","()V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,5,"showPrevious","()V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,6,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,7,"removeAllViews","()V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,8,"removeView","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,9,"removeViewAt","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,10,"removeViewInLayout","(Landroid/view/View;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,11,"removeViews","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,12,"removeViewsInLayout","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,13,"getCurrentView","()Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,14,"getInAnimation","()Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,15,"setInAnimation","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,16,"getOutAnimation","()Landroid/view/animation/Animation;")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,17,"setOutAnimation","(Landroid/view/animation/Animation;)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,18,"setInAnimation","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,19,"setOutAnimation","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,20,"setAnimateFirstView","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ViewAnimator,21,"getBaseline","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_VIEWANIMATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION