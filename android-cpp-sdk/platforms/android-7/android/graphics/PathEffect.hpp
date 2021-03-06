/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.PathEffect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class PathEffect;
	class PathEffect
		: public object<PathEffect>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit PathEffect(jobject jobj)
		: object<PathEffect>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PathEffect();
	}; //class PathEffect

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_IMPL

namespace j2cpp {



android::graphics::PathEffect::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::graphics::PathEffect::PathEffect()
: object<android::graphics::PathEffect>(
	call_new_object<
		android::graphics::PathEffect::J2CPP_CLASS_NAME,
		android::graphics::PathEffect::J2CPP_METHOD_NAME(0),
		android::graphics::PathEffect::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}




J2CPP_DEFINE_CLASS(android::graphics::PathEffect,"android/graphics/PathEffect")
J2CPP_DEFINE_METHOD(android::graphics::PathEffect,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::graphics::PathEffect,1,"finalize","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHEFFECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
