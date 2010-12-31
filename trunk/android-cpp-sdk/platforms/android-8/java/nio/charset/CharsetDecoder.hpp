/*================================================================================
  code generated by: java2cpp
  class: java.nio.charset.CharsetDecoder
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_DECL


namespace j2cpp { namespace java { namespace nio { class CharBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class Charset; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CodingErrorAction; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CoderResult; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/CharBuffer.hpp>
#include <java/nio/charset/Charset.hpp>
#include <java/nio/charset/CoderResult.hpp>
#include <java/nio/charset/CodingErrorAction.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset {

	class CharsetDecoder;
	class CharsetDecoder
		: public cpp_object<CharsetDecoder>
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
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)

		CharsetDecoder(jobject jobj)
		: cpp_object<CharsetDecoder>(jobj)
		{
		}

		cpp_float averageCharsPerByte();
		local_ref< java::nio::charset::Charset > charset();
		local_ref< java::nio::CharBuffer > decode(local_ref< java::nio::ByteBuffer > const&);
		local_ref< java::nio::charset::CoderResult > decode(local_ref< java::nio::ByteBuffer > const&, local_ref< java::nio::CharBuffer > const&, cpp_boolean const&);
		local_ref< java::nio::charset::Charset > detectedCharset();
		local_ref< java::nio::charset::CoderResult > flush(local_ref< java::nio::CharBuffer > const&);
		cpp_boolean isAutoDetecting();
		cpp_boolean isCharsetDetected();
		local_ref< java::nio::charset::CodingErrorAction > malformedInputAction();
		cpp_float maxCharsPerByte();
		local_ref< java::nio::charset::CharsetDecoder > onMalformedInput(local_ref< java::nio::charset::CodingErrorAction > const&);
		local_ref< java::nio::charset::CharsetDecoder > onUnmappableCharacter(local_ref< java::nio::charset::CodingErrorAction > const&);
		local_ref< java::lang::String > replacement();
		local_ref< java::nio::charset::CharsetDecoder > replaceWith(local_ref< java::lang::String > const&);
		local_ref< java::nio::charset::CharsetDecoder > reset();
		local_ref< java::nio::charset::CodingErrorAction > unmappableCharacterAction();
	}; //class CharsetDecoder

} //namespace charset
} //namespace nio
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::nio::charset::CharsetDecoder > create< java::nio::charset::CharsetDecoder>(local_ref< java::nio::charset::Charset > const &a0, cpp_float const &a1, cpp_float const &a2)
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->NewObject(
			get_class<java::nio::charset::CharsetDecoder::J2CPP_CLASS_NAME>(),
			get_method_id<java::nio::charset::CharsetDecoder::J2CPP_CLASS_NAME, java::nio::charset::CharsetDecoder::J2CPP_METHOD_NAME(0), java::nio::charset::CharsetDecoder::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_float java::nio::charset::CharsetDecoder::averageCharsPerByte()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::nio::charset::Charset > java::nio::charset::CharsetDecoder::charset()
{
	return local_ref< java::nio::charset::Charset >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::nio::CharBuffer > java::nio::charset::CharsetDecoder::decode(local_ref< java::nio::ByteBuffer > const &a0)
{
	return local_ref< java::nio::CharBuffer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::charset::CoderResult > java::nio::charset::CharsetDecoder::decode(local_ref< java::nio::ByteBuffer > const &a0, local_ref< java::nio::CharBuffer > const &a1, cpp_boolean const &a2)
{
	return local_ref< java::nio::charset::CoderResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}


local_ref< java::nio::charset::Charset > java::nio::charset::CharsetDecoder::detectedCharset()
{
	return local_ref< java::nio::charset::Charset >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::nio::charset::CoderResult > java::nio::charset::CharsetDecoder::flush(local_ref< java::nio::CharBuffer > const &a0)
{
	return local_ref< java::nio::charset::CoderResult >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}






cpp_boolean java::nio::charset::CharsetDecoder::isAutoDetecting()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean java::nio::charset::CharsetDecoder::isCharsetDetected()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

local_ref< java::nio::charset::CodingErrorAction > java::nio::charset::CharsetDecoder::malformedInputAction()
{
	return local_ref< java::nio::charset::CodingErrorAction >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_float java::nio::charset::CharsetDecoder::maxCharsPerByte()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>()
		)
	);
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::CharsetDecoder::onMalformedInput(local_ref< java::nio::charset::CodingErrorAction > const &a0)
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::CharsetDecoder::onUnmappableCharacter(local_ref< java::nio::charset::CodingErrorAction > const &a0)
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::nio::charset::CharsetDecoder::replacement()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::CharsetDecoder::replaceWith(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::CharsetDecoder::reset()
{
	return local_ref< java::nio::charset::CharsetDecoder >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

local_ref< java::nio::charset::CodingErrorAction > java::nio::charset::CharsetDecoder::unmappableCharacterAction()
{
	return local_ref< java::nio::charset::CodingErrorAction >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::nio::charset::CharsetDecoder,"java/nio/charset/CharsetDecoder")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,0,"<init>","(Ljava/nio/charset/Charset;FF)V")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,1,"averageCharsPerByte","()F")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,2,"charset","()Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,3,"decode","(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,4,"decode","(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,5,"decodeLoop","(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,6,"detectedCharset","()Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,7,"flush","(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,8,"implFlush","(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,9,"implOnMalformedInput","(Ljava/nio/charset/CodingErrorAction;)V")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,10,"implOnUnmappableCharacter","(Ljava/nio/charset/CodingErrorAction;)V")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,11,"implReplaceWith","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,12,"implReset","()V")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,13,"isAutoDetecting","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,14,"isCharsetDetected","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,15,"malformedInputAction","()Ljava/nio/charset/CodingErrorAction;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,16,"maxCharsPerByte","()F")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,17,"onMalformedInput","(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,18,"onUnmappableCharacter","(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,19,"replacement","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,20,"replaceWith","(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,21,"reset","()Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::CharsetDecoder,22,"unmappableCharacterAction","()Ljava/nio/charset/CodingErrorAction;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSETDECODER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION