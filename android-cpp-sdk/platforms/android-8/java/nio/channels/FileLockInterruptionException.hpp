/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.FileLockInterruptionException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_DECL






namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class FileLockInterruptionException;
	class FileLockInterruptionException
		: public cpp_object<FileLockInterruptionException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		FileLockInterruptionException(jobject jobj)
		: cpp_object<FileLockInterruptionException>(jobj)
		{
		}

	}; //class FileLockInterruptionException

} //namespace channels
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::channels::FileLockInterruptionException > create< java::nio::channels::FileLockInterruptionException>()
{
	return local_ref< java::nio::channels::FileLockInterruptionException >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::channels::FileLockInterruptionException::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::channels::FileLockInterruptionException::J2CPP_CLASS_NAME, java::nio::channels::FileLockInterruptionException::J2CPP_METHOD_NAME(0), java::nio::channels::FileLockInterruptionException::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::channels::FileLockInterruptionException,"java/nio/channels/FileLockInterruptionException")
J2CPP_DEFINE_METHOD(java::nio::channels::FileLockInterruptionException,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_FILELOCKINTERRUPTIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION