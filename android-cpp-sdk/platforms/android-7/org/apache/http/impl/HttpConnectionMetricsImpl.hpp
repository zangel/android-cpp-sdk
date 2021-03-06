/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.HttpConnectionMetricsImpl
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpConnectionMetrics; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HttpConnectionMetrics.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl {

	class HttpConnectionMetricsImpl;
	class HttpConnectionMetricsImpl
		: public object<HttpConnectionMetricsImpl>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)

		explicit HttpConnectionMetricsImpl(jobject jobj)
		: object<HttpConnectionMetricsImpl>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpConnectionMetrics>() const;


		HttpConnectionMetricsImpl(local_ref< org::apache::http::io::HttpTransportMetrics > const&, local_ref< org::apache::http::io::HttpTransportMetrics > const&);
		jlong getReceivedBytesCount();
		jlong getSentBytesCount();
		jlong getRequestCount();
		void incrementRequestCount();
		jlong getResponseCount();
		void incrementResponseCount();
		local_ref< java::lang::Object > getMetric(local_ref< java::lang::String >  const&);
		void setMetric(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		void reset();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > REQUEST_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > RESPONSE_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > SENT_BYTES_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > RECEIVED_BYTES_COUNT;
	}; //class HttpConnectionMetricsImpl

} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::HttpConnectionMetricsImpl::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::HttpConnectionMetricsImpl::operator local_ref<org::apache::http::HttpConnectionMetrics>() const
{
	return local_ref<org::apache::http::HttpConnectionMetrics>(get_jobject());
}


org::apache::http::impl::HttpConnectionMetricsImpl::HttpConnectionMetricsImpl(local_ref< org::apache::http::io::HttpTransportMetrics > const &a0, local_ref< org::apache::http::io::HttpTransportMetrics > const &a1)
: object<org::apache::http::impl::HttpConnectionMetricsImpl>(
	call_new_object<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


jlong org::apache::http::impl::HttpConnectionMetricsImpl::getReceivedBytesCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(1), 
		jlong
	>(get_jobject());
}

jlong org::apache::http::impl::HttpConnectionMetricsImpl::getSentBytesCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(2), 
		jlong
	>(get_jobject());
}

jlong org::apache::http::impl::HttpConnectionMetricsImpl::getRequestCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject());
}

void org::apache::http::impl::HttpConnectionMetricsImpl::incrementRequestCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(4),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

jlong org::apache::http::impl::HttpConnectionMetricsImpl::getResponseCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(5),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(get_jobject());
}

void org::apache::http::impl::HttpConnectionMetricsImpl::incrementResponseCount()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(6),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject());
}

local_ref< java::lang::Object > org::apache::http::impl::HttpConnectionMetricsImpl::getMetric(local_ref< java::lang::String > const &a0)
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(7),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void org::apache::http::impl::HttpConnectionMetricsImpl::setMetric(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(8),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void org::apache::http::impl::HttpConnectionMetricsImpl::reset()
{
	return call_method<
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_NAME(9),
		org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject());
}


static_field<
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_NAME(0),
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::impl::HttpConnectionMetricsImpl::REQUEST_COUNT;

static_field<
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_NAME(1),
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::String >
> org::apache::http::impl::HttpConnectionMetricsImpl::RESPONSE_COUNT;

static_field<
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_NAME(2),
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::impl::HttpConnectionMetricsImpl::SENT_BYTES_COUNT;

static_field<
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_CLASS_NAME,
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_NAME(3),
	org::apache::http::impl::HttpConnectionMetricsImpl::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::impl::HttpConnectionMetricsImpl::RECEIVED_BYTES_COUNT;


J2CPP_DEFINE_CLASS(org::apache::http::impl::HttpConnectionMetricsImpl,"org/apache/http/impl/HttpConnectionMetricsImpl")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,0,"<init>","(Lorg/apache/http/io/HttpTransportMetrics;Lorg/apache/http/io/HttpTransportMetrics;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,1,"getReceivedBytesCount","()J")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,2,"getSentBytesCount","()J")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,3,"getRequestCount","()J")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,4,"incrementRequestCount","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,5,"getResponseCount","()J")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,6,"incrementResponseCount","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,7,"getMetric","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,8,"setMetric","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::HttpConnectionMetricsImpl,9,"reset","()V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::HttpConnectionMetricsImpl,0,"REQUEST_COUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::HttpConnectionMetricsImpl,1,"RESPONSE_COUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::HttpConnectionMetricsImpl,2,"SENT_BYTES_COUNT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::HttpConnectionMetricsImpl,3,"RECEIVED_BYTES_COUNT","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_HTTPCONNECTIONMETRICSIMPL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
