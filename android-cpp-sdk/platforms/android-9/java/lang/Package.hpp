/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Package
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_PACKAGE_HPP_DECL
#define J2CPP_JAVA_LANG_PACKAGE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }
namespace j2cpp { namespace java { namespace lang { namespace reflect { class AnnotatedElement; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace net { class URL; } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/annotation/Annotation.hpp>
#include <java/lang/reflect/AnnotatedElement.hpp>
#include <java/net/URL.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Package;
	class Package
		: public object<Package>
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

		explicit Package(jobject jobj)
		: object<Package>(jobj)
		{
		}

		operator local_ref<java::lang::reflect::AnnotatedElement>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::annotation::Annotation > getAnnotation(local_ref< java::lang::Class >  const&);
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > getAnnotations();
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > getDeclaredAnnotations();
		jboolean isAnnotationPresent(local_ref< java::lang::Class >  const&);
		local_ref< java::lang::String > getImplementationTitle();
		local_ref< java::lang::String > getImplementationVendor();
		local_ref< java::lang::String > getImplementationVersion();
		local_ref< java::lang::String > getName();
		static local_ref< java::lang::Package > getPackage(local_ref< java::lang::String >  const&);
		static local_ref< array< local_ref< java::lang::Package >, 1> > getPackages();
		local_ref< java::lang::String > getSpecificationTitle();
		local_ref< java::lang::String > getSpecificationVendor();
		local_ref< java::lang::String > getSpecificationVersion();
		jint hashCode();
		jboolean isCompatibleWith(local_ref< java::lang::String >  const&);
		jboolean isSealed();
		jboolean isSealed(local_ref< java::net::URL >  const&);
		local_ref< java::lang::String > toString();
	}; //class Package

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_PACKAGE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_PACKAGE_HPP_IMPL
#define J2CPP_JAVA_LANG_PACKAGE_HPP_IMPL

namespace j2cpp {



java::lang::Package::operator local_ref<java::lang::reflect::AnnotatedElement>() const
{
	return local_ref<java::lang::reflect::AnnotatedElement>(get_jobject());
}

java::lang::Package::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::annotation::Annotation > java::lang::Package::getAnnotation(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(1),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::annotation::Annotation >
	>(get_jobject(), a0);
}

local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > java::lang::Package::getAnnotations()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(2),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> > java::lang::Package::getDeclaredAnnotations()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(3),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< array< local_ref< java::lang::annotation::Annotation >, 1> >
	>(get_jobject());
}

jboolean java::lang::Package::isAnnotationPresent(local_ref< java::lang::Class > const &a0)
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(4),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::lang::Package::getImplementationTitle()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(5),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Package::getImplementationVendor()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(6),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Package::getImplementationVersion()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(7),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Package::getName()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(8),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::Package > java::lang::Package::getPackage(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(9),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Package >
	>(a0);
}

local_ref< array< local_ref< java::lang::Package >, 1> > java::lang::Package::getPackages()
{
	return call_static_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(10),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< array< local_ref< java::lang::Package >, 1> >
	>();
}

local_ref< java::lang::String > java::lang::Package::getSpecificationTitle()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(11),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Package::getSpecificationVendor()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(12),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::lang::Package::getSpecificationVersion()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(13),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::lang::Package::hashCode()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(14),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(14), 
		jint
	>(get_jobject());
}

jboolean java::lang::Package::isCompatibleWith(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(15),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::lang::Package::isSealed()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(16),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject());
}

jboolean java::lang::Package::isSealed(local_ref< java::net::URL > const &a0)
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(17),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(17), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::String > java::lang::Package::toString()
{
	return call_method<
		java::lang::Package::J2CPP_CLASS_NAME,
		java::lang::Package::J2CPP_METHOD_NAME(18),
		java::lang::Package::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::Package,"java/lang/Package")
J2CPP_DEFINE_METHOD(java::lang::Package,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Package,1,"getAnnotation","(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;")
J2CPP_DEFINE_METHOD(java::lang::Package,2,"getAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::Package,3,"getDeclaredAnnotations","()[java.lang.annotation.Annotation")
J2CPP_DEFINE_METHOD(java::lang::Package,4,"isAnnotationPresent","(Ljava/lang/Class;)Z")
J2CPP_DEFINE_METHOD(java::lang::Package,5,"getImplementationTitle","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,6,"getImplementationVendor","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,7,"getImplementationVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,8,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,9,"getPackage","(Ljava/lang/String;)Ljava/lang/Package;")
J2CPP_DEFINE_METHOD(java::lang::Package,10,"getPackages","()[java.lang.Package")
J2CPP_DEFINE_METHOD(java::lang::Package,11,"getSpecificationTitle","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,12,"getSpecificationVendor","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,13,"getSpecificationVersion","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Package,14,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::lang::Package,15,"isCompatibleWith","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::lang::Package,16,"isSealed","()Z")
J2CPP_DEFINE_METHOD(java::lang::Package,17,"isSealed","(Ljava/net/URL;)Z")
J2CPP_DEFINE_METHOD(java::lang::Package,18,"toString","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_PACKAGE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
