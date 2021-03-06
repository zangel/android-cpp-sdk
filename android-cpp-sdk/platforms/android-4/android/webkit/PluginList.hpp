/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.PluginList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_DECL


namespace j2cpp { namespace android { namespace webkit { class Plugin; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/content/Context.hpp>
#include <android/webkit/Plugin.hpp>
#include <java/lang/Object.hpp>
#include <java/util/List.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class PluginList;
	class PluginList
		: public object<PluginList>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		explicit PluginList(jobject jobj)
		: object<PluginList>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		PluginList();
		local_ref< java::util::List > getList();
		void addPlugin(local_ref< android::webkit::Plugin >  const&);
		void removePlugin(local_ref< android::webkit::Plugin >  const&);
		void clear();
		void pluginClicked(local_ref< android::content::Context >  const&, jint);
	}; //class PluginList

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_IMPL

namespace j2cpp {



android::webkit::PluginList::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::PluginList::PluginList()
: object<android::webkit::PluginList>(
	call_new_object<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(0),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::util::List > android::webkit::PluginList::getList()
{
	return call_method<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(1),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::List >
	>(get_jobject());
}

void android::webkit::PluginList::addPlugin(local_ref< android::webkit::Plugin > const &a0)
{
	return call_method<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(2),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

void android::webkit::PluginList::removePlugin(local_ref< android::webkit::Plugin > const &a0)
{
	return call_method<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(3),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void android::webkit::PluginList::clear()
{
	return call_method<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(4),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void android::webkit::PluginList::pluginClicked(local_ref< android::content::Context > const &a0, jint a1)
{
	return call_method<
		android::webkit::PluginList::J2CPP_CLASS_NAME,
		android::webkit::PluginList::J2CPP_METHOD_NAME(5),
		android::webkit::PluginList::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::webkit::PluginList,"android/webkit/PluginList")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,1,"getList","()Ljava/util/List;")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,2,"addPlugin","(Landroid/webkit/Plugin;)V")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,3,"removePlugin","(Landroid/webkit/Plugin;)V")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,4,"clear","()V")
J2CPP_DEFINE_METHOD(android::webkit::PluginList,5,"pluginClicked","(Landroid/content/Context;I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_PLUGINLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
