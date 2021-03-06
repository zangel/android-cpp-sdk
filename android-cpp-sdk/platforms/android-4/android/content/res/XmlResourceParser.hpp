/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.res.XmlResourceParser
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_DECL


namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace xmlpull { namespace v1 { class XmlPullParser; } } } }


#include <android/util/AttributeSet.hpp>
#include <java/lang/Object.hpp>
#include <org/xmlpull/v1/XmlPullParser.hpp>


namespace j2cpp {

namespace android { namespace content { namespace res {

	class XmlResourceParser;
	class XmlResourceParser
		: public object<XmlResourceParser>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit XmlResourceParser(jobject jobj)
		: object<XmlResourceParser>(jobj)
		{
		}

		operator local_ref<android::util::AttributeSet>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::xmlpull::v1::XmlPullParser>() const;


		void close();
	}; //class XmlResourceParser

} //namespace res
} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_IMPL

namespace j2cpp {



android::content::res::XmlResourceParser::operator local_ref<android::util::AttributeSet>() const
{
	return local_ref<android::util::AttributeSet>(get_jobject());
}

android::content::res::XmlResourceParser::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::content::res::XmlResourceParser::operator local_ref<org::xmlpull::v1::XmlPullParser>() const
{
	return local_ref<org::xmlpull::v1::XmlPullParser>(get_jobject());
}

void android::content::res::XmlResourceParser::close()
{
	return call_method<
		android::content::res::XmlResourceParser::J2CPP_CLASS_NAME,
		android::content::res::XmlResourceParser::J2CPP_METHOD_NAME(0),
		android::content::res::XmlResourceParser::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::res::XmlResourceParser,"android/content/res/XmlResourceParser")
J2CPP_DEFINE_METHOD(android::content::res::XmlResourceParser,0,"close","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RES_XMLRESOURCEPARSER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
