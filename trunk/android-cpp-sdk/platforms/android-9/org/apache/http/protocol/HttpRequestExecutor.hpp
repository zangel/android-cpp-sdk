/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.HttpRequestExecutor
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponse; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpRequest; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpProcessor; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpClientConnection; } } } }


#include <org/apache/http/HttpClientConnection.hpp>
#include <org/apache/http/HttpRequest.hpp>
#include <org/apache/http/HttpResponse.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>
#include <org/apache/http/protocol/HttpProcessor.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpRequestExecutor;
	class HttpRequestExecutor
		: public cpp_object<HttpRequestExecutor>
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

		HttpRequestExecutor(jobject jobj)
		: cpp_object<HttpRequestExecutor>(jobj)
		{
		}

		local_ref< org::apache::http::HttpResponse > execute(local_ref< org::apache::http::HttpRequest > const&, local_ref< org::apache::http::HttpClientConnection > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
		void preProcess(local_ref< org::apache::http::HttpRequest > const&, local_ref< org::apache::http::protocol::HttpProcessor > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
		void postProcess(local_ref< org::apache::http::HttpResponse > const&, local_ref< org::apache::http::protocol::HttpProcessor > const&, local_ref< org::apache::http::protocol::HttpContext > const&);
	}; //class HttpRequestExecutor

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::protocol::HttpRequestExecutor > create< org::apache::http::protocol::HttpRequestExecutor>()
{
	return local_ref< org::apache::http::protocol::HttpRequestExecutor >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::protocol::HttpRequestExecutor::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::protocol::HttpRequestExecutor::J2CPP_CLASS_NAME, org::apache::http::protocol::HttpRequestExecutor::J2CPP_METHOD_NAME(0), org::apache::http::protocol::HttpRequestExecutor::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


local_ref< org::apache::http::HttpResponse > org::apache::http::protocol::HttpRequestExecutor::execute(local_ref< org::apache::http::HttpRequest > const &a0, local_ref< org::apache::http::HttpClientConnection > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return local_ref< org::apache::http::HttpResponse >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpRequestExecutor::preProcess(local_ref< org::apache::http::HttpRequest > const &a0, local_ref< org::apache::http::protocol::HttpProcessor > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



void org::apache::http::protocol::HttpRequestExecutor::postProcess(local_ref< org::apache::http::HttpResponse > const &a0, local_ref< org::apache::http::protocol::HttpProcessor > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpRequestExecutor,"org/apache/http/protocol/HttpRequestExecutor")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,1,"canResponseHaveBody","(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpResponse;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,2,"execute","(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpClientConnection;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,3,"preProcess","(Lorg/apache/http/HttpRequest;Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/protocol/HttpContext;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,4,"doSendRequest","(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpClientConnection;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,5,"doReceiveResponse","(Lorg/apache/http/HttpRequest;Lorg/apache/http/HttpClientConnection;Lorg/apache/http/protocol/HttpContext;)Lorg/apache/http/HttpResponse;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpRequestExecutor,6,"postProcess","(Lorg/apache/http/HttpResponse;Lorg/apache/http/protocol/HttpProcessor;Lorg/apache/http/protocol/HttpContext;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPREQUESTEXECUTOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
