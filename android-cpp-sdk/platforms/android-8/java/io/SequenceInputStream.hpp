/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.SequenceInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Closeable; } } }


#include <java/io/Closeable.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/util/Enumeration.hpp>


namespace j2cpp {

namespace java { namespace io {

	class SequenceInputStream;
	class SequenceInputStream
		: public object<SequenceInputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit SequenceInputStream(jobject jobj)
		: object<SequenceInputStream>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::InputStream>() const;
		operator local_ref<java::io::Closeable>() const;


		SequenceInputStream(local_ref< java::io::InputStream > const&, local_ref< java::io::InputStream > const&);
		SequenceInputStream(local_ref< java::util::Enumeration > const&);
		jint available();
		void close();
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
	}; //class SequenceInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::SequenceInputStream::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::io::SequenceInputStream::operator local_ref<java::io::InputStream>() const
{
	return local_ref<java::io::InputStream>(get_jobject());
}

java::io::SequenceInputStream::operator local_ref<java::io::Closeable>() const
{
	return local_ref<java::io::Closeable>(get_jobject());
}


java::io::SequenceInputStream::SequenceInputStream(local_ref< java::io::InputStream > const &a0, local_ref< java::io::InputStream > const &a1)
: object<java::io::SequenceInputStream>(
	call_new_object<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(0),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}



java::io::SequenceInputStream::SequenceInputStream(local_ref< java::util::Enumeration > const &a0)
: object<java::io::SequenceInputStream>(
	call_new_object<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(1),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::io::SequenceInputStream::available()
{
	return call_method<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(2),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void java::io::SequenceInputStream::close()
{
	return call_method<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(3),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jint java::io::SequenceInputStream::read()
{
	return call_method<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(4),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jint java::io::SequenceInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::SequenceInputStream::J2CPP_CLASS_NAME,
		java::io::SequenceInputStream::J2CPP_METHOD_NAME(5),
		java::io::SequenceInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jint
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(java::io::SequenceInputStream,"java/io/SequenceInputStream")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,0,"<init>","(Ljava/io/InputStream;Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,1,"<init>","(Ljava/util/Enumeration;)V")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,2,"available","()I")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,3,"close","()V")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,4,"read","()I")
J2CPP_DEFINE_METHOD(java::io::SequenceInputStream,5,"read","([BII)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_SEQUENCEINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
