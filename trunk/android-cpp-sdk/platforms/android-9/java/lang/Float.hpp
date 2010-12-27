/*================================================================================
  code generated by: java2cpp
  class: java.lang.Float
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_FLOAT_HPP_DECL
#define J2CPP_JAVA_LANG_FLOAT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Float;
	class Float
		: public cpp_object<Float>
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
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)

		Float(jobject jobj)
		: cpp_object<Float>(jobj)
		{
		}

		cpp_int compareTo(local_ref< java::lang::Float > const&);
		cpp_byte byteValue();
		cpp_double doubleValue();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
		static cpp_int floatToIntBits(cpp_float const&);
		static cpp_int floatToRawIntBits(cpp_float const&);
		cpp_float floatValue();
		cpp_int hashCode();
		static cpp_float intBitsToFloat(cpp_int const&);
		cpp_int intValue();
		cpp_boolean isInfinite();
		static cpp_boolean isInfinite(cpp_float const&);
		cpp_boolean isNaN();
		static cpp_boolean isNaN(cpp_float const&);
		cpp_long longValue();
		static cpp_float parseFloat(local_ref< java::lang::String > const&);
		cpp_short shortValue();
		local_ref< java::lang::String > toString();
		static local_ref< java::lang::String > toString(cpp_float const&);
		static local_ref< java::lang::Float > valueOf(local_ref< java::lang::String > const&);
		static cpp_int compare(cpp_float const&, cpp_float const&);
		static local_ref< java::lang::Float > valueOf(cpp_float const&);
		static local_ref< java::lang::String > toHexString(cpp_float const&);
		cpp_int compareTo(local_ref< java::lang::Object > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_float > MAX_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_float > MIN_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_float > NaN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_float > POSITIVE_INFINITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_float > NEGATIVE_INFINITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_float > MIN_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > MAX_EXPONENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > MIN_EXPONENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::Class > > TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > SIZE;
	}; //class Float

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_FLOAT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_FLOAT_HPP_IMPL
#define J2CPP_JAVA_LANG_FLOAT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::Float > create< java::lang::Float>(cpp_float const &a0)
{
	return local_ref< java::lang::Float >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Float::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Float::J2CPP_CLASS_NAME, java::lang::Float::J2CPP_METHOD_NAME(0), java::lang::Float::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::Float > create< java::lang::Float>(cpp_double const &a0)
{
	return local_ref< java::lang::Float >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Float::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Float::J2CPP_CLASS_NAME, java::lang::Float::J2CPP_METHOD_NAME(1), java::lang::Float::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< java::lang::Float > create< java::lang::Float>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Float >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::Float::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::Float::J2CPP_CLASS_NAME, java::lang::Float::J2CPP_METHOD_NAME(2), java::lang::Float::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::compareTo(local_ref< java::lang::Float > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

cpp_byte java::lang::Float::byteValue()
{
	return cpp_byte(
		environment::get().get_jenv()->CallByteMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

cpp_double java::lang::Float::doubleValue()
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_boolean java::lang::Float::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::floatToIntBits(cpp_float const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::floatToRawIntBits(cpp_float const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

cpp_float java::lang::Float::floatValue()
{
	return cpp_float(
		environment::get().get_jenv()->CallFloatMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}

cpp_int java::lang::Float::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_float java::lang::Float::intBitsToFloat(cpp_int const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallStaticFloatMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::intValue()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>()
		)
	);
}

cpp_boolean java::lang::Float::isInfinite()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_boolean java::lang::Float::isInfinite(cpp_float const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::lang::Float::isNaN()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

cpp_boolean java::lang::Float::isNaN(cpp_float const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), true>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::lang::Float::longValue()
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>()
		)
	);
}

cpp_float java::lang::Float::parseFloat(local_ref< java::lang::String > const &a0)
{
	return cpp_float(
		environment::get().get_jenv()->CallStaticFloatMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), true>(),
			a0.get_jtype()
		)
	);
}

cpp_short java::lang::Float::shortValue()
{
	return cpp_short(
		environment::get().get_jenv()->CallShortMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Float::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>()
		)
	);
}

local_ref< java::lang::String > java::lang::Float::toString(cpp_float const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Float > java::lang::Float::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Float >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::compare(cpp_float const &a0, cpp_float const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallStaticIntMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Float > java::lang::Float::valueOf(cpp_float const &a0)
{
	return local_ref< java::lang::Float >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > java::lang::Float::toHexString(cpp_float const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int java::lang::Float::compareTo(local_ref< java::lang::Object > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(0),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(0),
	cpp_float
> java::lang::Float::MAX_VALUE;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(1),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(1),
	cpp_float
> java::lang::Float::MIN_VALUE;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(2),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(2),
	cpp_float
> java::lang::Float::NaN;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(3),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(3),
	cpp_float
> java::lang::Float::POSITIVE_INFINITY;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(4),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(4),
	cpp_float
> java::lang::Float::NEGATIVE_INFINITY;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(5),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(5),
	cpp_float
> java::lang::Float::MIN_NORMAL;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(6),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> java::lang::Float::MAX_EXPONENT;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(7),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> java::lang::Float::MIN_EXPONENT;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(8),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::Class >
> java::lang::Float::TYPE;

static_field<
	java::lang::Float::J2CPP_CLASS_NAME,
	java::lang::Float::J2CPP_FIELD_NAME(9),
	java::lang::Float::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> java::lang::Float::SIZE;


J2CPP_DEFINE_CLASS(java::lang::Float,"java/lang/Float")
J2CPP_DEFINE_METHOD(java::lang::Float,0,"<init>","(F)V")
J2CPP_DEFINE_METHOD(java::lang::Float,1,"<init>","(D)V")
J2CPP_DEFINE_METHOD(java::lang::Float,2,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Float,3,"compareTo","(Ljava/lang/Float;)I")
J2CPP_DEFINE_METHOD(java::lang::Float,4,"byteValue","()B")
J2CPP_DEFINE_METHOD(java::lang::Float,5,"doubleValue","()D")
J2CPP_DEFINE_METHOD(java::lang::Float,6,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Float,7,"floatToIntBits","(F)I")
J2CPP_DEFINE_METHOD(java::lang::Float,8,"floatToRawIntBits","(F)I")
J2CPP_DEFINE_METHOD(java::lang::Float,9,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::lang::Float,10,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Float,11,"intBitsToFloat","(I)F")
J2CPP_DEFINE_METHOD(java::lang::Float,12,"intValue","()I")
J2CPP_DEFINE_METHOD(java::lang::Float,13,"isInfinite","()Z")
J2CPP_DEFINE_METHOD(java::lang::Float,14,"isInfinite","(F)Z")
J2CPP_DEFINE_METHOD(java::lang::Float,15,"isNaN","()Z")
J2CPP_DEFINE_METHOD(java::lang::Float,16,"isNaN","(F)Z")
J2CPP_DEFINE_METHOD(java::lang::Float,17,"longValue","()J")
J2CPP_DEFINE_METHOD(java::lang::Float,18,"parseFloat","(Ljava/lang/String;)F")
J2CPP_DEFINE_METHOD(java::lang::Float,19,"shortValue","()S")
J2CPP_DEFINE_METHOD(java::lang::Float,20,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Float,21,"toString","(F)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Float,22,"valueOf","(Ljava/lang/String;)Ljava/lang/Float;")
J2CPP_DEFINE_METHOD(java::lang::Float,23,"compare","(FF)I")
J2CPP_DEFINE_METHOD(java::lang::Float,24,"valueOf","(F)Ljava/lang/Float;")
J2CPP_DEFINE_METHOD(java::lang::Float,25,"toHexString","(F)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Float,26,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::Float,27,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Float,0,"MAX_VALUE","F")
J2CPP_DEFINE_FIELD(java::lang::Float,1,"MIN_VALUE","F")
J2CPP_DEFINE_FIELD(java::lang::Float,2,"NaN","F")
J2CPP_DEFINE_FIELD(java::lang::Float,3,"POSITIVE_INFINITY","F")
J2CPP_DEFINE_FIELD(java::lang::Float,4,"NEGATIVE_INFINITY","F")
J2CPP_DEFINE_FIELD(java::lang::Float,5,"MIN_NORMAL","F")
J2CPP_DEFINE_FIELD(java::lang::Float,6,"MAX_EXPONENT","I")
J2CPP_DEFINE_FIELD(java::lang::Float,7,"MIN_EXPONENT","I")
J2CPP_DEFINE_FIELD(java::lang::Float,8,"TYPE","Ljava/lang/Class;")
J2CPP_DEFINE_FIELD(java::lang::Float,9,"SIZE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_FLOAT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
