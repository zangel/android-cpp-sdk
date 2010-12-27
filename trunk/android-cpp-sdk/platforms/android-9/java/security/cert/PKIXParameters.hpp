/*================================================================================
  code generated by: java2cpp
  class: java.security.cert.PKIXParameters
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertStore; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertSelector; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class PKIXCertPathChecker; } } } }
namespace j2cpp { namespace java { namespace security { class KeyStore; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/KeyStore.hpp>
#include <java/security/cert/CertSelector.hpp>
#include <java/security/cert/CertStore.hpp>
#include <java/security/cert/PKIXCertPathChecker.hpp>
#include <java/util/Date.hpp>
#include <java/util/List.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class PKIXParameters;
	class PKIXParameters
		: public cpp_object<PKIXParameters>
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

		PKIXParameters(jobject jobj)
		: cpp_object<PKIXParameters>(jobj)
		{
		}

		local_ref< java::util::Set > getTrustAnchors();
		void setTrustAnchors(local_ref< java::util::Set > const&);
		cpp_boolean isAnyPolicyInhibited();
		void setAnyPolicyInhibited(cpp_boolean const&);
		local_ref< java::util::List > getCertPathCheckers();
		void setCertPathCheckers(local_ref< java::util::List > const&);
		void addCertPathChecker(local_ref< java::security::cert::PKIXCertPathChecker > const&);
		local_ref< java::util::List > getCertStores();
		void setCertStores(local_ref< java::util::List > const&);
		void addCertStore(local_ref< java::security::cert::CertStore > const&);
		local_ref< java::util::Date > getDate();
		void setDate(local_ref< java::util::Date > const&);
		cpp_boolean isExplicitPolicyRequired();
		void setExplicitPolicyRequired(cpp_boolean const&);
		local_ref< java::util::Set > getInitialPolicies();
		void setInitialPolicies(local_ref< java::util::Set > const&);
		cpp_boolean isPolicyMappingInhibited();
		void setPolicyMappingInhibited(cpp_boolean const&);
		cpp_boolean getPolicyQualifiersRejected();
		void setPolicyQualifiersRejected(cpp_boolean const&);
		cpp_boolean isRevocationEnabled();
		void setRevocationEnabled(cpp_boolean const&);
		local_ref< java::lang::String > getSigProvider();
		void setSigProvider(local_ref< java::lang::String > const&);
		local_ref< java::security::cert::CertSelector > getTargetCertConstraints();
		void setTargetCertConstraints(local_ref< java::security::cert::CertSelector > const&);
		local_ref< java::lang::Object > clone();
		local_ref< java::lang::String > toString();
	}; //class PKIXParameters

} //namespace cert
} //namespace security
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::security::cert::PKIXParameters > create< java::security::cert::PKIXParameters>(local_ref< java::util::Set > const &a0)
{
	return local_ref< java::security::cert::PKIXParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::PKIXParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::PKIXParameters::J2CPP_CLASS_NAME, java::security::cert::PKIXParameters::J2CPP_METHOD_NAME(0), java::security::cert::PKIXParameters::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::security::cert::PKIXParameters > create< java::security::cert::PKIXParameters>(local_ref< java::security::KeyStore > const &a0)
{
	return local_ref< java::security::cert::PKIXParameters >(
		environment::get().get_jenv()->NewObject(
			get_class<java::security::cert::PKIXParameters::J2CPP_CLASS_NAME>(),
			get_method_id<java::security::cert::PKIXParameters::J2CPP_CLASS_NAME, java::security::cert::PKIXParameters::J2CPP_METHOD_NAME(1), java::security::cert::PKIXParameters::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::security::cert::PKIXParameters::getTrustAnchors()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setTrustAnchors(local_ref< java::util::Set > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::security::cert::PKIXParameters::isAnyPolicyInhibited()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setAnyPolicyInhibited(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > java::security::cert::PKIXParameters::getCertPathCheckers()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setCertPathCheckers(local_ref< java::util::List > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

void java::security::cert::PKIXParameters::addCertPathChecker(local_ref< java::security::cert::PKIXCertPathChecker > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > java::security::cert::PKIXParameters::getCertStores()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setCertStores(local_ref< java::util::List > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}

void java::security::cert::PKIXParameters::addCertStore(local_ref< java::security::cert::CertStore > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Date > java::security::cert::PKIXParameters::getDate()
{
	return local_ref< java::util::Date >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setDate(local_ref< java::util::Date > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::security::cert::PKIXParameters::isExplicitPolicyRequired()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setExplicitPolicyRequired(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Set > java::security::cert::PKIXParameters::getInitialPolicies()
{
	return local_ref< java::util::Set >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setInitialPolicies(local_ref< java::util::Set > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::security::cert::PKIXParameters::isPolicyMappingInhibited()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setPolicyMappingInhibited(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::security::cert::PKIXParameters::getPolicyQualifiersRejected()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setPolicyQualifiersRejected(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::security::cert::PKIXParameters::isRevocationEnabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setRevocationEnabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::security::cert::PKIXParameters::getSigProvider()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setSigProvider(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::security::cert::CertSelector > java::security::cert::PKIXParameters::getTargetCertConstraints()
{
	return local_ref< java::security::cert::CertSelector >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>()
		)
	);
}

void java::security::cert::PKIXParameters::setTargetCertConstraints(local_ref< java::security::cert::CertSelector > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > java::security::cert::PKIXParameters::clone()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

local_ref< java::lang::String > java::security::cert::PKIXParameters::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::security::cert::PKIXParameters,"java/security/cert/PKIXParameters")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,0,"<init>","(Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,1,"<init>","(Ljava/security/KeyStore;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,2,"getTrustAnchors","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,3,"setTrustAnchors","(Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,4,"isAnyPolicyInhibited","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,5,"setAnyPolicyInhibited","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,6,"getCertPathCheckers","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,7,"setCertPathCheckers","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,8,"addCertPathChecker","(Ljava/security/cert/PKIXCertPathChecker;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,9,"getCertStores","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,10,"setCertStores","(Ljava/util/List;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,11,"addCertStore","(Ljava/security/cert/CertStore;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,12,"getDate","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,13,"setDate","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,14,"isExplicitPolicyRequired","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,15,"setExplicitPolicyRequired","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,16,"getInitialPolicies","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,17,"setInitialPolicies","(Ljava/util/Set;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,18,"isPolicyMappingInhibited","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,19,"setPolicyMappingInhibited","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,20,"getPolicyQualifiersRejected","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,21,"setPolicyQualifiersRejected","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,22,"isRevocationEnabled","()Z")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,23,"setRevocationEnabled","(Z)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,24,"getSigProvider","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,25,"setSigProvider","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,26,"getTargetCertConstraints","()Ljava/security/cert/CertSelector;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,27,"setTargetCertConstraints","(Ljava/security/cert/CertSelector;)V")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,28,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::security::cert::PKIXParameters,29,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_PKIXPARAMETERS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
