/*================================================================================
  code generated by: java2cpp
  class: java.net.ContentHandlerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_DECL
#define J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace net { class ContentHandler; } } }


#include <java/lang/String.hpp>
#include <java/net/ContentHandler.hpp>


namespace j2cpp {

namespace java { namespace net {

	class ContentHandlerFactory;
	class ContentHandlerFactory
		: public cpp_object<ContentHandlerFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ContentHandlerFactory(jobject jobj)
		: cpp_object<ContentHandlerFactory>(jobj)
		{
		}

		local_ref< java::net::ContentHandler > createContentHandler(local_ref< java::lang::String > const&);
	}; //class ContentHandlerFactory

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_IMPL
#define J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_IMPL

namespace j2cpp {


local_ref< java::net::ContentHandler > java::net::ContentHandlerFactory::createContentHandler(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::net::ContentHandler >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::ContentHandlerFactory,"java/net/ContentHandlerFactory")
J2CPP_DEFINE_METHOD(java::net::ContentHandlerFactory,0,"createContentHandler","(Ljava/lang/String;)Ljava/net/ContentHandler;")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_CONTENTHANDLERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
