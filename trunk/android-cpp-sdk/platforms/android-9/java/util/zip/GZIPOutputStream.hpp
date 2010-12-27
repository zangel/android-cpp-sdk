/*================================================================================
  code generated by: java2cpp
  class: java.util.zip.GZIPOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }


#include <java/io/OutputStream.hpp>


namespace j2cpp {

namespace java { namespace util { namespace zip {

	class GZIPOutputStream;
	class GZIPOutputStream
		: public cpp_object<GZIPOutputStream>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)

		GZIPOutputStream(jobject jobj)
		: cpp_object<GZIPOutputStream>(jobj)
		{
		}

		void finish();
		void write(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);

	}; //class GZIPOutputStream

} //namespace zip
} //namespace util
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::util::zip::GZIPOutputStream > create< java::util::zip::GZIPOutputStream>(local_ref< java::io::OutputStream > const &a0)
{
	return local_ref< java::util::zip::GZIPOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME, java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(0), java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::util::zip::GZIPOutputStream > create< java::util::zip::GZIPOutputStream>(local_ref< java::io::OutputStream > const &a0, cpp_int const &a1)
{
	return local_ref< java::util::zip::GZIPOutputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::util::zip::GZIPOutputStream::J2CPP_CLASS_NAME, java::util::zip::GZIPOutputStream::J2CPP_METHOD_NAME(1), java::util::zip::GZIPOutputStream::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::util::zip::GZIPOutputStream::finish()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void java::util::zip::GZIPOutputStream::write(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}



J2CPP_DEFINE_CLASS(java::util::zip::GZIPOutputStream,"java/util/zip/GZIPOutputStream")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,1,"<init>","(Ljava/io/OutputStream;I)V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,2,"finish","()V")
J2CPP_DEFINE_METHOD(java::util::zip::GZIPOutputStream,3,"write","([BII)V")
J2CPP_DEFINE_FIELD(java::util::zip::GZIPOutputStream,0,"crc","Ljava/util/zip/CRC32;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
