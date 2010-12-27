/*================================================================================
  code generated by: java2cpp
  class: javax.crypto.EncryptedPrivateKeyInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace crypto { class Cipher; } } }
namespace j2cpp { namespace java { namespace security { class Key; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class AlgorithmParameters; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class PKCS8EncodedKeySpec; } } } }


#include <java/lang/String.hpp>
#include <java/security/AlgorithmParameters.hpp>
#include <java/security/Key.hpp>
#include <java/security/Provider.hpp>
#include <java/security/spec/PKCS8EncodedKeySpec.hpp>
#include <javax/crypto/Cipher.hpp>


namespace j2cpp {

namespace javax { namespace crypto {

	class EncryptedPrivateKeyInfo;
	class EncryptedPrivateKeyInfo
		: public cpp_object<EncryptedPrivateKeyInfo>
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

		EncryptedPrivateKeyInfo(jobject jobj)
		: cpp_object<EncryptedPrivateKeyInfo>(jobj)
		{
		}

		local_ref< java::lang::String > getAlgName();
		local_ref< java::security::AlgorithmParameters > getAlgParameters();
		local_ref< cpp_byte_array<1> > getEncryptedData();
		local_ref< java::security::spec::PKCS8EncodedKeySpec > getKeySpec(local_ref< javax::crypto::Cipher > const&);
		local_ref< java::security::spec::PKCS8EncodedKeySpec > getKeySpec(local_ref< java::security::Key > const&);
		local_ref< java::security::spec::PKCS8EncodedKeySpec > getKeySpec(local_ref< java::security::Key > const&, local_ref< java::lang::String > const&);
		local_ref< java::security::spec::PKCS8EncodedKeySpec > getKeySpec(local_ref< java::security::Key > const&, local_ref< java::security::Provider > const&);
		local_ref< cpp_byte_array<1> > getEncoded();
	}; //class EncryptedPrivateKeyInfo

} //namespace crypto
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::crypto::EncryptedPrivateKeyInfo > create< javax::crypto::EncryptedPrivateKeyInfo>(local_ref< cpp_byte_array<1> > const &a0)
{
	return local_ref< javax::crypto::EncryptedPrivateKeyInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME, javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_NAME(0), javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< javax::crypto::EncryptedPrivateKeyInfo > create< javax::crypto::EncryptedPrivateKeyInfo>(local_ref< java::lang::String > const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return local_ref< javax::crypto::EncryptedPrivateKeyInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME, javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_NAME(1), javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< javax::crypto::EncryptedPrivateKeyInfo > create< javax::crypto::EncryptedPrivateKeyInfo>(local_ref< java::security::AlgorithmParameters > const &a0, local_ref< cpp_byte_array<1> > const &a1)
{
	return local_ref< javax::crypto::EncryptedPrivateKeyInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME>(),
			get_method_id<javax::crypto::EncryptedPrivateKeyInfo::J2CPP_CLASS_NAME, javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_NAME(2), javax::crypto::EncryptedPrivateKeyInfo::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > javax::crypto::EncryptedPrivateKeyInfo::getAlgName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

local_ref< java::security::AlgorithmParameters > javax::crypto::EncryptedPrivateKeyInfo::getAlgParameters()
{
	return local_ref< java::security::AlgorithmParameters >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::EncryptedPrivateKeyInfo::getEncryptedData()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< java::security::spec::PKCS8EncodedKeySpec > javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(local_ref< javax::crypto::Cipher > const &a0)
{
	return local_ref< java::security::spec::PKCS8EncodedKeySpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::spec::PKCS8EncodedKeySpec > javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(local_ref< java::security::Key > const &a0)
{
	return local_ref< java::security::spec::PKCS8EncodedKeySpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::spec::PKCS8EncodedKeySpec > javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(local_ref< java::security::Key > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::security::spec::PKCS8EncodedKeySpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::security::spec::PKCS8EncodedKeySpec > javax::crypto::EncryptedPrivateKeyInfo::getKeySpec(local_ref< java::security::Key > const &a0, local_ref< java::security::Provider > const &a1)
{
	return local_ref< java::security::spec::PKCS8EncodedKeySpec >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< cpp_byte_array<1> > javax::crypto::EncryptedPrivateKeyInfo::getEncoded()
{
	return local_ref< cpp_byte_array<1> >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::crypto::EncryptedPrivateKeyInfo,"javax/crypto/EncryptedPrivateKeyInfo")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,0,"<init>","([B)V")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,1,"<init>","(Ljava/lang/String;[B)V")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,2,"<init>","(Ljava/security/AlgorithmParameters;[B)V")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,3,"getAlgName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,4,"getAlgParameters","()Ljava/security/AlgorithmParameters;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,5,"getEncryptedData","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,6,"getKeySpec","(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,7,"getKeySpec","(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,8,"getKeySpec","(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,9,"getKeySpec","(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;")
J2CPP_DEFINE_METHOD(javax::crypto::EncryptedPrivateKeyInfo,10,"getEncoded","()[B")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_ENCRYPTEDPRIVATEKEYINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
