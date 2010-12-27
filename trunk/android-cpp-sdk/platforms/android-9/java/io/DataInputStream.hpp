/*================================================================================
  code generated by: java2cpp
  class: java.io.DataInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace io { class DataInput; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/DataInput.hpp>
#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class DataInputStream;
	class DataInputStream
		: public cpp_object<DataInputStream>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)

		DataInputStream(jobject jobj)
		: cpp_object<DataInputStream>(jobj)
		{
		}

		cpp_int read(local_ref< cpp_byte_array<1> > const&);
		cpp_int read(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_boolean readBoolean();
		cpp_byte readByte();
		cpp_char readChar();
		cpp_double readDouble();
		cpp_float readFloat();
		void readFully(local_ref< cpp_byte_array<1> > const&);
		void readFully(local_ref< cpp_byte_array<1> > const&, cpp_int const&, cpp_int const&);
		cpp_int readInt();
		local_ref< java::lang::String > readLine();
		cpp_long readLong();
		cpp_short readShort();
		cpp_int readUnsignedByte();
		cpp_int readUnsignedShort();
		local_ref< java::lang::String > readUTF();
		static local_ref< java::lang::String > readUTF(local_ref< java::io::DataInput > const&);
		cpp_int skipBytes(cpp_int const&);
	}; //class DataInputStream

} //namespace io
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::io::DataInputStream > create< java::io::DataInputStream>(local_ref< java::io::InputStream > const &a0)
{
	return local_ref< java::io::DataInputStream >(
		environment::get().get_jenv()->NewObject(
			get_class<java::io::DataInputStream::J2CPP_CLASS_NAME>(),
			get_method_id<java::io::DataInputStream::J2CPP_CLASS_NAME, java::io::DataInputStream::J2CPP_METHOD_NAME(0), java::io::DataInputStream::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::DataInputStream::read(local_ref< cpp_byte_array<1> > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::DataInputStream::read(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean java::io::DataInputStream::readBoolean()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_byte java::io::DataInputStream::readByte()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_char java::io::DataInputStream::readChar()
{
	return cpp_char(
		environment::get().get_jenv()->CallCharMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_double java::io::DataInputStream::readDouble()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

cpp_float java::io::DataInputStream::readFloat()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void java::io::DataInputStream::readFully(local_ref< cpp_byte_array<1> > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void java::io::DataInputStream::readFully(local_ref< cpp_byte_array<1> > const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_int java::io::DataInputStream::readInt()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

local_ref< java::lang::String > java::io::DataInputStream::readLine()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_long java::io::DataInputStream::readLong()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_short java::io::DataInputStream::readShort()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int java::io::DataInputStream::readUnsignedByte()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int java::io::DataInputStream::readUnsignedShort()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

local_ref< java::lang::String > java::io::DataInputStream::readUTF()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::lang::String > java::io::DataInputStream::readUTF(local_ref< java::io::DataInput > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::io::DataInputStream::skipBytes(cpp_int const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::io::DataInputStream,"java/io/DataInputStream")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,1,"read","([B)I")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,2,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,3,"readBoolean","()Z")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,4,"readByte","()B")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,5,"readChar","()C")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,6,"readDouble","()D")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,7,"readFloat","()F")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,8,"readFully","([B)V")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,9,"readFully","([BII)V")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,10,"readInt","()I")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,11,"readLine","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,12,"readLong","()J")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,13,"readShort","()S")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,14,"readUnsignedByte","()I")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,15,"readUnsignedShort","()I")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,16,"readUTF","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,17,"readUTF","(Ljava/io/DataInput;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::io::DataInputStream,18,"skipBytes","(I)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_DATAINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
