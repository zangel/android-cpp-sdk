/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Double
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_DOUBLE_HPP_DECL
#define J2CPP_JAVA_LANG_DOUBLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Class.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Double;
	class Double
		: public object<Double>
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

		explicit Double(jobject jobj)
		: object<Double>(jobj)
		{
		}

		operator local_ref<java::lang::Number>() const;
		operator local_ref<java::lang::Comparable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		Double(jdouble);
		Double(local_ref< java::lang::String > const&);
		jint compareTo(local_ref< java::lang::Double >  const&);
		jbyte byteValue();
		static jlong doubleToLongBits(jdouble);
		static jlong doubleToRawLongBits(jdouble);
		jdouble doubleValue();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jfloat floatValue();
		jint hashCode();
		jint intValue();
		jboolean isInfinite();
		static jboolean isInfinite(jdouble);
		jboolean isNaN();
		static jboolean isNaN(jdouble);
		static jdouble longBitsToDouble(jlong);
		jlong longValue();
		static jdouble parseDouble(local_ref< java::lang::String >  const&);
		jshort shortValue();
		local_ref< java::lang::String > toString();
		static local_ref< java::lang::String > toString(jdouble);
		static local_ref< java::lang::Double > valueOf(local_ref< java::lang::String >  const&);
		static jint compare(jdouble, jdouble);
		static local_ref< java::lang::Double > valueOf(jdouble);
		static local_ref< java::lang::String > toHexString(jdouble);
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jdouble > MAX_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jdouble > MIN_VALUE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jdouble > NaN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jdouble > POSITIVE_INFINITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jdouble > NEGATIVE_INFINITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jdouble > MIN_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > MAX_EXPONENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MIN_EXPONENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::Class > > TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > SIZE;
	}; //class Double

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_DOUBLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_DOUBLE_HPP_IMPL
#define J2CPP_JAVA_LANG_DOUBLE_HPP_IMPL

namespace j2cpp {



java::lang::Double::operator local_ref<java::lang::Number>() const
{
	return local_ref<java::lang::Number>(get_jobject());
}

java::lang::Double::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}

java::lang::Double::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::Double::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::lang::Double::Double(jdouble a0)
: object<java::lang::Double>(
	call_new_object<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(0),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(0)
	>(a0)
)
{
}



java::lang::Double::Double(local_ref< java::lang::String > const &a0)
: object<java::lang::Double>(
	call_new_object<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(1),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


jint java::lang::Double::compareTo(local_ref< java::lang::Double > const &a0)
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(2),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject(), a0);
}

jbyte java::lang::Double::byteValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(3),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(3), 
		jbyte
	>(get_jobject());
}

jlong java::lang::Double::doubleToLongBits(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(4),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(a0);
}

jlong java::lang::Double::doubleToRawLongBits(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(5),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(5), 
		jlong
	>(a0);
}

jdouble java::lang::Double::doubleValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(6),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(6), 
		jdouble
	>(get_jobject());
}

jboolean java::lang::Double::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(7),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(7), 
		jboolean
	>(get_jobject(), a0);
}

jfloat java::lang::Double::floatValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(8),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(8), 
		jfloat
	>(get_jobject());
}

jint java::lang::Double::hashCode()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(9),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(9), 
		jint
	>(get_jobject());
}

jint java::lang::Double::intValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(10),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(10), 
		jint
	>(get_jobject());
}

jboolean java::lang::Double::isInfinite()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(11),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(11), 
		jboolean
	>(get_jobject());
}

jboolean java::lang::Double::isInfinite(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(12),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(12), 
		jboolean
	>(a0);
}

jboolean java::lang::Double::isNaN()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(13),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject());
}

jboolean java::lang::Double::isNaN(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(14),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(14), 
		jboolean
	>(a0);
}

jdouble java::lang::Double::longBitsToDouble(jlong a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(15),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(15), 
		jdouble
	>(a0);
}

jlong java::lang::Double::longValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(16),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(16), 
		jlong
	>(get_jobject());
}

jdouble java::lang::Double::parseDouble(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(17),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(17), 
		jdouble
	>(a0);
}

jshort java::lang::Double::shortValue()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(18),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(18), 
		jshort
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Double::toString()
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(19),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Double::toString(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(20),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< java::lang::Double > java::lang::Double::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(21),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::Double >
	>(a0);
}

jint java::lang::Double::compare(jdouble a0, jdouble a1)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(22),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(a0, a1);
}

local_ref< java::lang::Double > java::lang::Double::valueOf(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(23),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::Double >
	>(a0);
}

local_ref< java::lang::String > java::lang::Double::toHexString(jdouble a0)
{
	return call_static_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(24),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::String >
	>(a0);
}

jint java::lang::Double::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::lang::Double::J2CPP_CLASS_NAME,
		java::lang::Double::J2CPP_METHOD_NAME(25),
		java::lang::Double::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}



static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(0),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(0),
	jdouble
> java::lang::Double::MAX_VALUE;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(1),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(1),
	jdouble
> java::lang::Double::MIN_VALUE;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(2),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(2),
	jdouble
> java::lang::Double::NaN;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(3),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(3),
	jdouble
> java::lang::Double::POSITIVE_INFINITY;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(4),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(4),
	jdouble
> java::lang::Double::NEGATIVE_INFINITY;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(5),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(5),
	jdouble
> java::lang::Double::MIN_NORMAL;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(6),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(6),
	jint
> java::lang::Double::MAX_EXPONENT;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(7),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(7),
	jint
> java::lang::Double::MIN_EXPONENT;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(8),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::Class >
> java::lang::Double::TYPE;

static_field<
	java::lang::Double::J2CPP_CLASS_NAME,
	java::lang::Double::J2CPP_FIELD_NAME(9),
	java::lang::Double::J2CPP_FIELD_SIGNATURE(9),
	jint
> java::lang::Double::SIZE;


J2CPP_DEFINE_CLASS(java::lang::Double,"java/lang/Double")
J2CPP_DEFINE_METHOD(java::lang::Double,0,"<init>","(D)V")
J2CPP_DEFINE_METHOD(java::lang::Double,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Double,2,"compareTo","(Ljava/lang/Double;)I")
J2CPP_DEFINE_METHOD(java::lang::Double,3,"byteValue","()B")
J2CPP_DEFINE_METHOD(java::lang::Double,4,"doubleToLongBits","(D)J")
J2CPP_DEFINE_METHOD(java::lang::Double,5,"doubleToRawLongBits","(D)J")
J2CPP_DEFINE_METHOD(java::lang::Double,6,"doubleValue","()D")
J2CPP_DEFINE_METHOD(java::lang::Double,7,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::lang::Double,8,"floatValue","()F")
J2CPP_DEFINE_METHOD(java::lang::Double,9,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Double,10,"intValue","()I")
J2CPP_DEFINE_METHOD(java::lang::Double,11,"isInfinite","()Z")
J2CPP_DEFINE_METHOD(java::lang::Double,12,"isInfinite","(D)Z")
J2CPP_DEFINE_METHOD(java::lang::Double,13,"isNaN","()Z")
J2CPP_DEFINE_METHOD(java::lang::Double,14,"isNaN","(D)Z")
J2CPP_DEFINE_METHOD(java::lang::Double,15,"longBitsToDouble","(J)D")
J2CPP_DEFINE_METHOD(java::lang::Double,16,"longValue","()J")
J2CPP_DEFINE_METHOD(java::lang::Double,17,"parseDouble","(Ljava/lang/String;)D")
J2CPP_DEFINE_METHOD(java::lang::Double,18,"shortValue","()S")
J2CPP_DEFINE_METHOD(java::lang::Double,19,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Double,20,"toString","(D)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Double,21,"valueOf","(Ljava/lang/String;)Ljava/lang/Double;")
J2CPP_DEFINE_METHOD(java::lang::Double,22,"compare","(DD)I")
J2CPP_DEFINE_METHOD(java::lang::Double,23,"valueOf","(D)Ljava/lang/Double;")
J2CPP_DEFINE_METHOD(java::lang::Double,24,"toHexString","(D)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Double,25,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::lang::Double,26,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Double,0,"MAX_VALUE","D")
J2CPP_DEFINE_FIELD(java::lang::Double,1,"MIN_VALUE","D")
J2CPP_DEFINE_FIELD(java::lang::Double,2,"NaN","D")
J2CPP_DEFINE_FIELD(java::lang::Double,3,"POSITIVE_INFINITY","D")
J2CPP_DEFINE_FIELD(java::lang::Double,4,"NEGATIVE_INFINITY","D")
J2CPP_DEFINE_FIELD(java::lang::Double,5,"MIN_NORMAL","D")
J2CPP_DEFINE_FIELD(java::lang::Double,6,"MAX_EXPONENT","I")
J2CPP_DEFINE_FIELD(java::lang::Double,7,"MIN_EXPONENT","I")
J2CPP_DEFINE_FIELD(java::lang::Double,8,"TYPE","Ljava/lang/Class;")
J2CPP_DEFINE_FIELD(java::lang::Double,9,"SIZE","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_DOUBLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
