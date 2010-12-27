/*================================================================================
  code generated by: java2cpp
  class: android.view.animation.ScaleAnimation
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>


namespace j2cpp {

namespace android { namespace view { namespace animation {

	class ScaleAnimation;
	class ScaleAnimation
		: public cpp_object<ScaleAnimation>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		ScaleAnimation(jobject jobj)
		: cpp_object<ScaleAnimation>(jobj)
		{
		}

		void initialize(cpp_int const&, cpp_int const&, cpp_int const&, cpp_int const&);
	}; //class ScaleAnimation

} //namespace animation
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::view::animation::ScaleAnimation > create< android::view::animation::ScaleAnimation>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::view::animation::ScaleAnimation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME, android::view::animation::ScaleAnimation::J2CPP_METHOD_NAME(0), android::view::animation::ScaleAnimation::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::ScaleAnimation > create< android::view::animation::ScaleAnimation>(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3)
{
	return local_ref< android::view::animation::ScaleAnimation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME, android::view::animation::ScaleAnimation::J2CPP_METHOD_NAME(1), android::view::animation::ScaleAnimation::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::ScaleAnimation > create< android::view::animation::ScaleAnimation>(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, cpp_float const &a4, cpp_float const &a5)
{
	return local_ref< android::view::animation::ScaleAnimation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME, android::view::animation::ScaleAnimation::J2CPP_METHOD_NAME(2), android::view::animation::ScaleAnimation::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

template <>
local_ref< android::view::animation::ScaleAnimation > create< android::view::animation::ScaleAnimation>(cpp_float const &a0, cpp_float const &a1, cpp_float const &a2, cpp_float const &a3, cpp_int const &a4, cpp_float const &a5, cpp_int const &a6, cpp_float const &a7)
{
	return local_ref< android::view::animation::ScaleAnimation >(
		environment::get().get_jenv()->NewObject(
			get_class<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME>(),
			get_method_id<android::view::animation::ScaleAnimation::J2CPP_CLASS_NAME, android::view::animation::ScaleAnimation::J2CPP_METHOD_NAME(3), android::view::animation::ScaleAnimation::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype(), a6.get_jtype(), a7.get_jtype()
		)
	);
}


void android::view::animation::ScaleAnimation::initialize(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::animation::ScaleAnimation,"android/view/animation/ScaleAnimation")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,1,"<init>","(FFFF)V")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,2,"<init>","(FFFFFF)V")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,3,"<init>","(FFFFIFIF)V")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,4,"applyTransformation","(FLandroid/view/animation/Transformation;)V")
J2CPP_DEFINE_METHOD(android::view::animation::ScaleAnimation,5,"initialize","(IIII)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_SCALEANIMATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
