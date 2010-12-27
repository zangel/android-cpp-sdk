/*================================================================================
  code generated by: java2cpp
  class: java.security.DigestInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class MessageDigest; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/security/MessageDigest.hpp>


namespace j2cpp {

namespace java { namespace security {

	class DigestInputStream;
	class DigestInputStream
		: public cpp_object<DigestInputStream>
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
		J2CPP_DECLARE_FIELD(0)

		DigestInputStream(jobject jobj)
		: cpp_object<DigestInputStream>(jobj)
		{
		}

		local_ref< java::security::MessageDigest > getMessageDigest();
		void setMessageDigest(local_ref< java::security::MessageDigest > const&);
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		void on(cpp_boolean const&);
		local_ref< java::lang::String > toString();

	}; //class DigestInputStream

} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::DigestInputStream > create< java::security::DigestInputStream>(local_ref< java::io::InputStream > const &a0, local_ref< java::security::MessageDigest > const &a1)
{
	return local_ref< java::security::DigestInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::DigestInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::DigestInputStream::J2CPP_CLASS_NAME, java::security::DigestInputStream::J2CPP_METHOD_NAME(0), java::security::DigestInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::MessageDigest > java::security::DigestInputStream::getMessageDigest()
{
	return local_ref< java::security::MessageDigest >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void java::security::DigestInputStream::setMessageDigest(local_ref< java::security::MessageDigest > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::security::DigestInputStream::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int java::security::DigestInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void java::security::DigestInputStream::on(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::DigestInputStream::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}



J2CPP_DEFINE_CLASS(java::security::DigestInputStream,"java/security/DigestInputStream")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,0,"<init>","(Ljava/io/InputStream;Ljava/security/MessageDigest;)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,1,"getMessageDigest","()Ljava/security/MessageDigest;")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,2,"setMessageDigest","(Ljava/security/MessageDigest;)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,3,"read","()I")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,4,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,5,"on","(Z)V")
J2CPP_DEFINE_METHOD(java::security::DigestInputStream,6,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::security::DigestInputStream,0,"digest","Ljava/security/MessageDigest;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_DIGESTINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
