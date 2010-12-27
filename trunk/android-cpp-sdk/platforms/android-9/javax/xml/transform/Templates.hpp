/*================================================================================
  code generated by: java2cpp
  class: javax.xml.transform.Templates
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace transform { class Transformer; } } } }
namespace j2cpp { namespace java { namespace util { class Properties; } } }


#include <java/util/Properties.hpp>
#include <javax/xml/transform/Transformer.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class Templates;
	class Templates
		: public cpp_object<Templates>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		Templates(jobject jobj)
		: cpp_object<Templates>(jobj)
		{
		}

		local_ref< javax::xml::transform::Transformer > newTransformer();
		local_ref< java::util::Properties > getOutputProperties();
	}; //class Templates

} //namespace transform
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_IMPL

namespace j2cpp {


local_ref< javax::xml::transform::Transformer > javax::xml::transform::Templates::newTransformer()
{
	return local_ref< javax::xml::transform::Transformer >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

local_ref< java::util::Properties > javax::xml::transform::Templates::getOutputProperties()
{
	return local_ref< java::util::Properties >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::transform::Templates,"javax/xml/transform/Templates")
J2CPP_DEFINE_METHOD(javax::xml::transform::Templates,0,"newTransformer","()Ljavax/xml/transform/Transformer;")
J2CPP_DEFINE_METHOD(javax::xml::transform::Templates,1,"getOutputProperties","()Ljava/util/Properties;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TEMPLATES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
