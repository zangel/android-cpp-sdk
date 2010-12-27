/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.protocol.HttpResponseInterceptorList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpResponseInterceptor; } } } }


#include <java/lang/Class.hpp>
#include <java/util/List.hpp>
#include <org/apache/http/HttpResponseInterceptor.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace protocol {

	class HttpResponseInterceptorList;
	class HttpResponseInterceptorList
		: public cpp_object<HttpResponseInterceptorList>
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

		HttpResponseInterceptorList(jobject jobj)
		: cpp_object<HttpResponseInterceptorList>(jobj)
		{
		}

		void addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const&);
		void addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const&, cpp_int const&);
		cpp_int getResponseInterceptorCount();
		local_ref< org::apache::http::HttpResponseInterceptor > getResponseInterceptor(cpp_int const&);
		void clearResponseInterceptors();
		void removeResponseInterceptorByClass(local_ref< java::lang::Class > const&);
		void setInterceptors(local_ref< java::util::List > const&);
	}; //class HttpResponseInterceptorList

} //namespace protocol
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL

namespace j2cpp {


void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpResponseInterceptorList::addResponseInterceptor(local_ref< org::apache::http::HttpResponseInterceptor > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptorCount()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< org::apache::http::HttpResponseInterceptor > org::apache::http::protocol::HttpResponseInterceptorList::getResponseInterceptor(cpp_int const &a0)
{
	return local_ref< org::apache::http::HttpResponseInterceptor >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpResponseInterceptorList::clearResponseInterceptors()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

void org::apache::http::protocol::HttpResponseInterceptorList::removeResponseInterceptorByClass(local_ref< java::lang::Class > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void org::apache::http::protocol::HttpResponseInterceptorList::setInterceptors(local_ref< java::util::List > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::protocol::HttpResponseInterceptorList,"org/apache/http/protocol/HttpResponseInterceptorList")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,0,"addResponseInterceptor","(Lorg/apache/http/HttpResponseInterceptor;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,1,"addResponseInterceptor","(Lorg/apache/http/HttpResponseInterceptor;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,2,"getResponseInterceptorCount","()I")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,3,"getResponseInterceptor","(I)Lorg/apache/http/HttpResponseInterceptor;")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,4,"clearResponseInterceptors","()V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,5,"removeResponseInterceptorByClass","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(org::apache::http::protocol::HttpResponseInterceptorList,6,"setInterceptors","(Ljava/util/List;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PROTOCOL_HTTPRESPONSEINTERCEPTORLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
