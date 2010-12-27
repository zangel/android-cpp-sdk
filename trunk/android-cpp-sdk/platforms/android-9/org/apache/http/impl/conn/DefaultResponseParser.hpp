/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.DefaultResponseParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace message { class LineParser; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseFactory; } } } }


#include <org/apache/http/HttpResponseFactory.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/message/LineParser.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class DefaultResponseParser;
	class DefaultResponseParser
		: public cpp_object<DefaultResponseParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		DefaultResponseParser(jobject jobj)
		: cpp_object<DefaultResponseParser>(jobj)
		{
		}

	}; //class DefaultResponseParser

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::DefaultResponseParser > create< org::apache::http::impl::conn::DefaultResponseParser>(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, local_ref< org::apache::http::message::LineParser > const &a1, local_ref< org::apache::http::HttpResponseFactory > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
{
	return local_ref< org::apache::http::impl::conn::DefaultResponseParser >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::DefaultResponseParser::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::DefaultResponseParser::J2CPP_CLASS_NAME, org::apache::http::impl::conn::DefaultResponseParser::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::DefaultResponseParser::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::DefaultResponseParser,"org/apache/http/impl/conn/DefaultResponseParser")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultResponseParser,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/message/LineParser;Lorg/apache/http/HttpResponseFactory;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultResponseParser,1,"parseHead","(Lorg/apache/http/io/SessionInputBuffer;)Lorg/apache/http/HttpMessage;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTRESPONSEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
