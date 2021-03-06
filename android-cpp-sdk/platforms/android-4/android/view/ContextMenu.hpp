/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.ContextMenu
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL
#define J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace view { class Menu; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/Menu.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ContextMenu;
	namespace ContextMenu_ {

		class ContextMenuInfo;
		class ContextMenuInfo
			: public object<ContextMenuInfo>
		{
		public:

			J2CPP_DECLARE_CLASS


			explicit ContextMenuInfo(jobject jobj)
			: object<ContextMenuInfo>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;

		}; //class ContextMenuInfo

	} //namespace ContextMenu_

	class ContextMenu
		: public object<ContextMenu>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef ContextMenu_::ContextMenuInfo ContextMenuInfo;

		explicit ContextMenu(jobject jobj)
		: object<ContextMenu>(jobj)
		{
		}

		operator local_ref<android::view::Menu>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< android::view::ContextMenu > setHeaderTitle(jint);
		local_ref< android::view::ContextMenu > setHeaderTitle(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::view::ContextMenu > setHeaderIcon(jint);
		local_ref< android::view::ContextMenu > setHeaderIcon(local_ref< android::graphics::drawable::Drawable >  const&);
		local_ref< android::view::ContextMenu > setHeaderView(local_ref< android::view::View >  const&);
		void clearHeader();
	}; //class ContextMenu

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL
#define J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL

namespace j2cpp {




android::view::ContextMenu_::ContextMenuInfo::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(android::view::ContextMenu_::ContextMenuInfo,"android/view/ContextMenu$ContextMenuInfo")



android::view::ContextMenu::operator local_ref<android::view::Menu>() const
{
	return local_ref<android::view::Menu>(get_jobject());
}

android::view::ContextMenu::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderTitle(jint a0)
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(0),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< android::view::ContextMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(1),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< android::view::ContextMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderIcon(jint a0)
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(2),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::view::ContextMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(3),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::ContextMenu >
	>(get_jobject(), a0);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderView(local_ref< android::view::View > const &a0)
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(4),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< android::view::ContextMenu >
	>(get_jobject(), a0);
}

void android::view::ContextMenu::clearHeader()
{
	return call_method<
		android::view::ContextMenu::J2CPP_CLASS_NAME,
		android::view::ContextMenu::J2CPP_METHOD_NAME(5),
		android::view::ContextMenu::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::view::ContextMenu,"android/view/ContextMenu")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,0,"setHeaderTitle","(I)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,1,"setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,2,"setHeaderIcon","(I)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,3,"setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,4,"setHeaderView","(Landroid/view/View;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,5,"clearHeader","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
