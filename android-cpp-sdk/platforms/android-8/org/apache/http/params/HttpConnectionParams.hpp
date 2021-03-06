/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.params.HttpConnectionParams
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class CoreConnectionPNames; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/params/CoreConnectionPNames.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace params {

	class HttpConnectionParams;
	class HttpConnectionParams
		: public object<HttpConnectionParams>
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

		explicit HttpConnectionParams(jobject jobj)
		: object<HttpConnectionParams>(jobj)
		{
		}

		operator local_ref<org::apache::http::params::CoreConnectionPNames>() const;
		operator local_ref<java::lang::Object>() const;


		static jint getSoTimeout(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setSoTimeout(local_ref< org::apache::http::params::HttpParams >  const&, jint);
		static jboolean getTcpNoDelay(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setTcpNoDelay(local_ref< org::apache::http::params::HttpParams >  const&, jboolean);
		static jint getSocketBufferSize(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setSocketBufferSize(local_ref< org::apache::http::params::HttpParams >  const&, jint);
		static jint getLinger(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setLinger(local_ref< org::apache::http::params::HttpParams >  const&, jint);
		static jint getConnectionTimeout(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setConnectionTimeout(local_ref< org::apache::http::params::HttpParams >  const&, jint);
		static jboolean isStaleCheckingEnabled(local_ref< org::apache::http::params::HttpParams >  const&);
		static void setStaleCheckingEnabled(local_ref< org::apache::http::params::HttpParams >  const&, jboolean);
	}; //class HttpConnectionParams

} //namespace params
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_IMPL

namespace j2cpp {



org::apache::http::params::HttpConnectionParams::operator local_ref<org::apache::http::params::CoreConnectionPNames>() const
{
	return local_ref<org::apache::http::params::CoreConnectionPNames>(get_jobject());
}

org::apache::http::params::HttpConnectionParams::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


jint org::apache::http::params::HttpConnectionParams::getSoTimeout(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(1),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setSoTimeout(local_ref< org::apache::http::params::HttpParams > const &a0, jint a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(2),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(a0, a1);
}

jboolean org::apache::http::params::HttpConnectionParams::getTcpNoDelay(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(3),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setTcpNoDelay(local_ref< org::apache::http::params::HttpParams > const &a0, jboolean a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(4),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(a0, a1);
}

jint org::apache::http::params::HttpConnectionParams::getSocketBufferSize(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(5),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setSocketBufferSize(local_ref< org::apache::http::params::HttpParams > const &a0, jint a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(6),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(a0, a1);
}

jint org::apache::http::params::HttpConnectionParams::getLinger(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(7),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setLinger(local_ref< org::apache::http::params::HttpParams > const &a0, jint a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(8),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(a0, a1);
}

jint org::apache::http::params::HttpConnectionParams::getConnectionTimeout(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(9),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setConnectionTimeout(local_ref< org::apache::http::params::HttpParams > const &a0, jint a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(10),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(a0, a1);
}

jboolean org::apache::http::params::HttpConnectionParams::isStaleCheckingEnabled(local_ref< org::apache::http::params::HttpParams > const &a0)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(11),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(a0);
}

void org::apache::http::params::HttpConnectionParams::setStaleCheckingEnabled(local_ref< org::apache::http::params::HttpParams > const &a0, jboolean a1)
{
	return call_static_method<
		org::apache::http::params::HttpConnectionParams::J2CPP_CLASS_NAME,
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_NAME(12),
		org::apache::http::params::HttpConnectionParams::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(org::apache::http::params::HttpConnectionParams,"org/apache/http/params/HttpConnectionParams")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,1,"getSoTimeout","(Lorg/apache/http/params/HttpParams;)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,2,"setSoTimeout","(Lorg/apache/http/params/HttpParams;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,3,"getTcpNoDelay","(Lorg/apache/http/params/HttpParams;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,4,"setTcpNoDelay","(Lorg/apache/http/params/HttpParams;Z)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,5,"getSocketBufferSize","(Lorg/apache/http/params/HttpParams;)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,6,"setSocketBufferSize","(Lorg/apache/http/params/HttpParams;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,7,"getLinger","(Lorg/apache/http/params/HttpParams;)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,8,"setLinger","(Lorg/apache/http/params/HttpParams;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,9,"getConnectionTimeout","(Lorg/apache/http/params/HttpParams;)I")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,10,"setConnectionTimeout","(Lorg/apache/http/params/HttpParams;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,11,"isStaleCheckingEnabled","(Lorg/apache/http/params/HttpParams;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::params::HttpConnectionParams,12,"setStaleCheckingEnabled","(Lorg/apache/http/params/HttpParams;Z)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
