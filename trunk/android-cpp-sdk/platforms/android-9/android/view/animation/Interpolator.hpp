/*================================================================================
  code generated by: java2cpp
  class: android.view.animation.Interpolator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL
#define J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL






namespace j2cpp {

namespace android { namespace view { namespace animation {

	class Interpolator;
	class Interpolator
		: public cpp_object<Interpolator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		Interpolator(jobject jobj)
		: cpp_object<Interpolator>(jobj)
		{
		}

		cpp_float getInterpolation(cpp_float const&);
	}; //class Interpolator

} //namespace animation
} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL
#define J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL

namespace j2cpp {


cpp_float android::view::animation::Interpolator::getInterpolation(cpp_float const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::animation::Interpolator,"android/view/animation/Interpolator")
J2CPP_DEFINE_METHOD(android::view::animation::Interpolator,0,"getInterpolation","(F)F")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_ANIMATION_INTERPOLATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
