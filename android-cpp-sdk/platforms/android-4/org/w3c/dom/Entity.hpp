/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.w3c.dom.Entity
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL
#define J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace w3c { namespace dom { class Node; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/w3c/dom/Node.hpp>


namespace j2cpp {

namespace org { namespace w3c { namespace dom {

	class Entity;
	class Entity
		: public object<Entity>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Entity(jobject jobj)
		: object<Entity>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::w3c::dom::Node>() const;


		local_ref< java::lang::String > getPublicId();
		local_ref< java::lang::String > getSystemId();
		local_ref< java::lang::String > getNotationName();
	}; //class Entity

} //namespace dom
} //namespace w3c
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL
#define J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL

namespace j2cpp {



org::w3c::dom::Entity::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::w3c::dom::Entity::operator local_ref<org::w3c::dom::Node>() const
{
	return local_ref<org::w3c::dom::Node>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Entity::getPublicId()
{
	return call_method<
		org::w3c::dom::Entity::J2CPP_CLASS_NAME,
		org::w3c::dom::Entity::J2CPP_METHOD_NAME(0),
		org::w3c::dom::Entity::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Entity::getSystemId()
{
	return call_method<
		org::w3c::dom::Entity::J2CPP_CLASS_NAME,
		org::w3c::dom::Entity::J2CPP_METHOD_NAME(1),
		org::w3c::dom::Entity::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > org::w3c::dom::Entity::getNotationName()
{
	return call_method<
		org::w3c::dom::Entity::J2CPP_CLASS_NAME,
		org::w3c::dom::Entity::J2CPP_METHOD_NAME(2),
		org::w3c::dom::Entity::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::w3c::dom::Entity,"org/w3c/dom/Entity")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,0,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,1,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::w3c::dom::Entity,2,"getNotationName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ORG_W3C_DOM_ENTITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
