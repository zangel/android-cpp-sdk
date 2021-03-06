/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.channels.Channels
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class WritableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetEncoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetDecoder; } } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>
#include <java/nio/charset/CharsetDecoder.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class Channels;
	class Channels
		: public object<Channels>
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

		explicit Channels(jobject jobj)
		: object<Channels>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::io::InputStream > newInputStream(local_ref< java::nio::channels::ReadableByteChannel >  const&);
		static local_ref< java::io::OutputStream > newOutputStream(local_ref< java::nio::channels::WritableByteChannel >  const&);
		static local_ref< java::nio::channels::ReadableByteChannel > newChannel(local_ref< java::io::InputStream >  const&);
		static local_ref< java::nio::channels::WritableByteChannel > newChannel(local_ref< java::io::OutputStream >  const&);
		static local_ref< java::io::Reader > newReader(local_ref< java::nio::channels::ReadableByteChannel >  const&, local_ref< java::nio::charset::CharsetDecoder >  const&, jint);
		static local_ref< java::io::Reader > newReader(local_ref< java::nio::channels::ReadableByteChannel >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::io::Writer > newWriter(local_ref< java::nio::channels::WritableByteChannel >  const&, local_ref< java::nio::charset::CharsetEncoder >  const&, jint);
		static local_ref< java::io::Writer > newWriter(local_ref< java::nio::channels::WritableByteChannel >  const&, local_ref< java::lang::String >  const&);
	}; //class Channels

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_IMPL

namespace j2cpp {



java::nio::channels::Channels::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::io::InputStream > java::nio::channels::Channels::newInputStream(local_ref< java::nio::channels::ReadableByteChannel > const &a0)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(1),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::io::InputStream >
	>(a0);
}

local_ref< java::io::OutputStream > java::nio::channels::Channels::newOutputStream(local_ref< java::nio::channels::WritableByteChannel > const &a0)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(2),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::io::OutputStream >
	>(a0);
}

local_ref< java::nio::channels::ReadableByteChannel > java::nio::channels::Channels::newChannel(local_ref< java::io::InputStream > const &a0)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(3),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::nio::channels::ReadableByteChannel >
	>(a0);
}

local_ref< java::nio::channels::WritableByteChannel > java::nio::channels::Channels::newChannel(local_ref< java::io::OutputStream > const &a0)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(4),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::nio::channels::WritableByteChannel >
	>(a0);
}

local_ref< java::io::Reader > java::nio::channels::Channels::newReader(local_ref< java::nio::channels::ReadableByteChannel > const &a0, local_ref< java::nio::charset::CharsetDecoder > const &a1, jint a2)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(5),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::Reader >
	>(a0, a1, a2);
}

local_ref< java::io::Reader > java::nio::channels::Channels::newReader(local_ref< java::nio::channels::ReadableByteChannel > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(6),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::io::Reader >
	>(a0, a1);
}

local_ref< java::io::Writer > java::nio::channels::Channels::newWriter(local_ref< java::nio::channels::WritableByteChannel > const &a0, local_ref< java::nio::charset::CharsetEncoder > const &a1, jint a2)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(7),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::io::Writer >
	>(a0, a1, a2);
}

local_ref< java::io::Writer > java::nio::channels::Channels::newWriter(local_ref< java::nio::channels::WritableByteChannel > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::nio::channels::Channels::J2CPP_CLASS_NAME,
		java::nio::channels::Channels::J2CPP_METHOD_NAME(8),
		java::nio::channels::Channels::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::Writer >
	>(a0, a1);
}


J2CPP_DEFINE_CLASS(java::nio::channels::Channels,"java/nio/channels/Channels")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,1,"newInputStream","(Ljava/nio/channels/ReadableByteChannel;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,2,"newOutputStream","(Ljava/nio/channels/WritableByteChannel;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,3,"newChannel","(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,4,"newChannel","(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,5,"newReader","(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,6,"newReader","(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,7,"newWriter","(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::nio::channels::Channels,8,"newWriter","(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_CHANNELS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
