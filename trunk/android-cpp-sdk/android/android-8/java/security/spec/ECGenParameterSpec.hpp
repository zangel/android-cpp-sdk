/*================================================================================
  code generated by: java2cpp
  class: java.security.spec.ECGenParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECGenParameterSpec;
	class ECGenParameterSpec
		: public cpp_object<ECGenParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		ECGenParameterSpec(jobject jobj)
		: cpp_object<ECGenParameterSpec>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
	}; //class ECGenParameterSpec

} //namespace spec
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::spec::ECGenParameterSpec > create< java::security::spec::ECGenParameterSpec>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::security::spec::ECGenParameterSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::spec::ECGenParameterSpec::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::spec::ECGenParameterSpec::J2CPP_CLASS_NAME, java::security::spec::ECGenParameterSpec::J2CPP_METHOD_NAME(0), java::security::spec::ECGenParameterSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::spec::ECGenParameterSpec::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::spec::ECGenParameterSpec,"java/security/spec/ECGenParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECGenParameterSpec,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECGenParameterSpec,1,"getName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECGENPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION