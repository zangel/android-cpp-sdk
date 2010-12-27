/*================================================================================
  code generated by: java2cpp
  class: android.sax.StartElementListener
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL
#define J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL


namespace j2cpp { namespace org { namespace xml { namespace sax { class Attributes; } } } }


#include <org/xml/sax/Attributes.hpp>


namespace j2cpp {

namespace android { namespace sax {

	class StartElementListener;
	class StartElementListener
		: public cpp_object<StartElementListener>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		StartElementListener(jobject jobj)
		: cpp_object<StartElementListener>(jobj)
		{
		}

		void start(local_ref< org::xml::sax::Attributes > const&);
	}; //class StartElementListener

} //namespace sax
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL
#define J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL

namespace j2cpp {


void android::sax::StartElementListener::start(local_ref< org::xml::sax::Attributes > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::sax::StartElementListener,"android/sax/StartElementListener")
J2CPP_DEFINE_METHOD(android::sax::StartElementListener,0,"start","(Lorg/xml/sax/Attributes;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_SAX_STARTELEMENTLISTENER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
