/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.conn.LoggingSessionInputBuffer
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { class Wire; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace util { class CharArrayBuffer; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class HttpTransportMetrics; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace io { class SessionInputBuffer; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/impl/conn/Wire.hpp>
#include <org/apache/http/io/HttpTransportMetrics.hpp>
#include <org/apache/http/io/SessionInputBuffer.hpp>
#include <org/apache/http/util/CharArrayBuffer.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class LoggingSessionInputBuffer;
	class LoggingSessionInputBuffer
		: public cpp_object<LoggingSessionInputBuffer>
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

		LoggingSessionInputBuffer(jobject jobj)
		: cpp_object<LoggingSessionInputBuffer>(jobj)
		{
		}

		cpp_boolean isDataAvailable(cpp_int const&);
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int read();
		cpp_int read(local_ref< cpp_byte_array<1> > const&);
		local_ref< java::lang::String > readLine();
		cpp_int readLine(local_ref< org::apache::http::util::CharArrayBuffer > const&);
		local_ref< org::apache::http::io::HttpTransportMetrics > getMetrics();
	}; //class LoggingSessionInputBuffer

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::conn::LoggingSessionInputBuffer > create< org::apache::http::impl::conn::LoggingSessionInputBuffer>(local_ref< org::apache::http::io::SessionInputBuffer > const &a0, local_ref< org::apache::http::impl::conn::Wire > const &a1)
{
	return local_ref< org::apache::http::impl::conn::LoggingSessionInputBuffer >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::conn::LoggingSessionInputBuffer::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::conn::LoggingSessionInputBuffer::J2CPP_CLASS_NAME, org::apache::http::impl::conn::LoggingSessionInputBuffer::J2CPP_METHOD_NAME(0), org::apache::http::impl::conn::LoggingSessionInputBuffer::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::conn::LoggingSessionInputBuffer::isDataAvailable(cpp_int const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::conn::LoggingSessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int org::apache::http::impl::conn::LoggingSessionInputBuffer::read()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_int org::apache::http::impl::conn::LoggingSessionInputBuffer::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::apache::http::impl::conn::LoggingSessionInputBuffer::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int org::apache::http::impl::conn::LoggingSessionInputBuffer::readLine(local_ref< org::apache::http::util::CharArrayBuffer > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::apache::http::io::HttpTransportMetrics > org::apache::http::impl::conn::LoggingSessionInputBuffer::getMetrics()
{
	return local_ref< org::apache::http::io::HttpTransportMetrics >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::LoggingSessionInputBuffer,"org/apache/http/impl/conn/LoggingSessionInputBuffer")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,0,"<init>","(Lorg/apache/http/io/SessionInputBuffer;Lorg/apache/http/impl/conn/Wire;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,1,"isDataAvailable","(I)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,2,"read","([BII)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,3,"read","()I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,4,"read","([B)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,5,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,6,"readLine","(Lorg/apache/http/util/CharArrayBuffer;)I")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::LoggingSessionInputBuffer,7,"getMetrics","()Lorg/apache/http/io/HttpTransportMetrics;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_LOGGINGSESSIONINPUTBUFFER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
