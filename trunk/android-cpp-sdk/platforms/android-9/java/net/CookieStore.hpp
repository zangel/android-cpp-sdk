/*================================================================================
  code generated by: java2cpp
  class: java.net.CookieStore
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIESTORE_HPP_DECL
#define J2CPP_JAVA_NET_COOKIESTORE_HPP_DECL


namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace net { class HttpCookie; } } }
namespace j2cpp { namespace java { namespace net { class URI; } } }


#include <java/net/HttpCookie.hpp>
#include <java/net/URI.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace java { namespace net {

	class CookieStore;
	class CookieStore
		: public cpp_object<CookieStore>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		CookieStore(jobject jobj)
		: cpp_object<CookieStore>(jobj)
		{
		}

		void add(local_ref< java::net::URI > const&, local_ref< java::net::HttpCookie > const&);
		local_ref< java::util::List > get(local_ref< java::net::URI > const&);
		local_ref< java::util::List > getCookies();
		local_ref< java::util::List > getURIs();
		cpp_boolean remove(local_ref< java::net::URI > const&, local_ref< java::net::HttpCookie > const&);
		cpp_boolean removeAll();
	}; //class CookieStore

} //namespace net
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIESTORE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_COOKIESTORE_HPP_IMPL
#define J2CPP_JAVA_NET_COOKIESTORE_HPP_IMPL

namespace j2cpp {


void java::net::CookieStore::add(local_ref< java::net::URI > const &a0, local_ref< java::net::HttpCookie > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::util::List > java::net::CookieStore::get(local_ref< java::net::URI > const &a0)
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::List > java::net::CookieStore::getCookies()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::util::List > java::net::CookieStore::getURIs()
{
	return local_ref< java::util::List >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean java::net::CookieStore::remove(local_ref< java::net::URI > const &a0, local_ref< java::net::HttpCookie > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean java::net::CookieStore::removeAll()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::net::CookieStore,"java/net/CookieStore")
J2CPP_DEFINE_METHOD(java::net::CookieStore,0,"add","(Ljava/net/URI;Ljava/net/HttpCookie;)V")
J2CPP_DEFINE_METHOD(java::net::CookieStore,1,"get","(Ljava/net/URI;)Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::net::CookieStore,2,"getCookies","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::net::CookieStore,3,"getURIs","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(java::net::CookieStore,4,"remove","(Ljava/net/URI;Ljava/net/HttpCookie;)Z")
J2CPP_DEFINE_METHOD(java::net::CookieStore,5,"removeAll","()Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_COOKIESTORE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
