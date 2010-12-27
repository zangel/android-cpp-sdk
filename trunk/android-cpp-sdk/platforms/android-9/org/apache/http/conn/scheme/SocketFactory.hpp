/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.conn.scheme.SocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn { namespace scheme {

	class SocketFactory;
	class SocketFactory
		: public cpp_object<SocketFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		SocketFactory(jobject jobj)
		: cpp_object<SocketFactory>(jobj)
		{
		}

		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > connectSocket(local_ref< java::net::Socket > const&, local_ref< java::lang::String > const&, cpp_int const&, local_ref< java::net::InetAddress > const&, cpp_int const&, local_ref< org::apache::http::params::HttpParams > const&);
		cpp_boolean isSecure(local_ref< java::net::Socket > const&);
	}; //class SocketFactory

} //namespace scheme
} //namespace conn
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL

namespace j2cpp {


local_ref< java::net::Socket > org::apache::http::conn::scheme::SocketFactory::createSocket()
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::net::Socket > org::apache::http::conn::scheme::SocketFactory::connectSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, cpp_int const &a2, local_ref< java::net::InetAddress > const &a3, cpp_int const &a4, local_ref< org::apache::http::params::HttpParams > const &a5)
{
	return local_ref< java::net::Socket >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::conn::scheme::SocketFactory::isSecure(local_ref< java::net::Socket > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::scheme::SocketFactory,"org/apache/http/conn/scheme/SocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,0,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,1,"connectSocket","(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::scheme::SocketFactory,2,"isSecure","(Ljava/net/Socket;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_SCHEME_SOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
