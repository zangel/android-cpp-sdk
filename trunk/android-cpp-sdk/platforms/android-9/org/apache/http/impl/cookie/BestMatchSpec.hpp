/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.cookie.BestMatchSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class Header; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/lang/String.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/Header.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class BestMatchSpec;
	class BestMatchSpec
		: public cpp_object<BestMatchSpec>
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

		BestMatchSpec(jobject jobj)
		: cpp_object<BestMatchSpec>(jobj)
		{
		}

		local_ref< java::util::List > parse(local_ref< org::apache::http::Header > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
		void validate(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
		cpp_boolean match(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
		local_ref< java::util::List > formatCookies(local_ref< java::util::List > const&);
		cpp_int getVersion();
		local_ref< org::apache::http::Header > getVersionHeader();
	}; //class BestMatchSpec

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::cookie::BestMatchSpec > create< org::apache::http::impl::cookie::BestMatchSpec>(local_ref< cpp_object_array<java::lang::String, 1> > const &a0, cpp_boolean const &a1)
{
	return local_ref< org::apache::http::impl::cookie::BestMatchSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(0), org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< org::apache::http::impl::cookie::BestMatchSpec > create< org::apache::http::impl::cookie::BestMatchSpec>()
{
	return local_ref< org::apache::http::impl::cookie::BestMatchSpec >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::cookie::BestMatchSpec::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_NAME(1), org::apache::http::impl::cookie::BestMatchSpec::J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::util::List > org::apache::http::impl::cookie::BestMatchSpec::parse(local_ref< org::apache::http::Header > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::cookie::BestMatchSpec::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::cookie::BestMatchSpec::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > org::apache::http::impl::cookie::BestMatchSpec::formatCookies(local_ref< java::util::List > const &a0)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::cookie::BestMatchSpec::getVersion()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< org::apache::http::Header > org::apache::http::impl::cookie::BestMatchSpec::getVersionHeader()
{
	return local_ref< org::apache::http::Header >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::BestMatchSpec,"org/apache/http/impl/cookie/BestMatchSpec")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,0,"<init>","([java.lang.StringZ)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,1,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,2,"parse","(Lorg/apache/http/Header;Lorg/apache/http/cookie/CookieOrigin;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,3,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,4,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,5,"formatCookies","(Ljava/util/List;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,6,"getVersion","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::BestMatchSpec,7,"getVersionHeader","()Lorg/apache/http/Header;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
