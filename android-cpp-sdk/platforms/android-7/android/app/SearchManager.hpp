/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.SearchManager
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_DECL
#define J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace app { namespace SearchManager_ { class OnCancelListener; } } } }
namespace j2cpp { namespace android { namespace app { namespace SearchManager_ { class OnDismissListener; } } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnDismissListener; } } } }
namespace j2cpp { namespace android { namespace content { class ComponentName; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnCancelListener; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/app/SearchManager.hpp>
#include <android/content/ComponentName.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/os/Bundle.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app {

	class SearchManager;
	namespace SearchManager_ {

		class OnCancelListener;
		class OnCancelListener
			: public object<OnCancelListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnCancelListener(jobject jobj)
			: object<OnCancelListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCancel();
		}; //class OnCancelListener

		class OnDismissListener;
		class OnDismissListener
			: public object<OnDismissListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnDismissListener(jobject jobj)
			: object<OnDismissListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onDismiss();
		}; //class OnDismissListener

	} //namespace SearchManager_

	class SearchManager
		: public object<SearchManager>
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
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)

		typedef SearchManager_::OnCancelListener OnCancelListener;
		typedef SearchManager_::OnDismissListener OnDismissListener;

		explicit SearchManager(jobject jobj)
		: object<SearchManager>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::content::DialogInterface_::OnDismissListener>() const;
		operator local_ref<android::content::DialogInterface_::OnCancelListener>() const;


		void startSearch(local_ref< java::lang::String >  const&, jboolean, local_ref< android::content::ComponentName >  const&, local_ref< android::os::Bundle >  const&, jboolean);
		void triggerSearch(local_ref< java::lang::String >  const&, local_ref< android::content::ComponentName >  const&, local_ref< android::os::Bundle >  const&);
		void stopSearch();
		void setOnDismissListener(local_ref< android::app::SearchManager_::OnDismissListener >  const&);
		void setOnCancelListener(local_ref< android::app::SearchManager_::OnCancelListener >  const&);
		void onCancel(local_ref< android::content::DialogInterface >  const&);
		void onDismiss(local_ref< android::content::DialogInterface >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jchar > MENU_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MENU_KEYCODE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > QUERY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > USER_QUERY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > APP_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::String > > ACTION_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), local_ref< java::lang::String > > EXTRA_DATA_KEY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< java::lang::String > > ACTION_MSG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), local_ref< java::lang::String > > SUGGEST_URI_PATH_QUERY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::lang::String > > SUGGEST_MIME_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::lang::String > > SUGGEST_URI_PATH_SHORTCUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::lang::String > > SHORTCUT_MIME_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::lang::String > > SUGGEST_COLUMN_FORMAT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::lang::String > > SUGGEST_COLUMN_TEXT_1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), local_ref< java::lang::String > > SUGGEST_COLUMN_TEXT_2;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), local_ref< java::lang::String > > SUGGEST_COLUMN_ICON_1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), local_ref< java::lang::String > > SUGGEST_COLUMN_ICON_2;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), local_ref< java::lang::String > > SUGGEST_COLUMN_INTENT_ACTION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), local_ref< java::lang::String > > SUGGEST_COLUMN_INTENT_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), local_ref< java::lang::String > > SUGGEST_COLUMN_INTENT_EXTRA_DATA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), local_ref< java::lang::String > > SUGGEST_COLUMN_INTENT_DATA_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), local_ref< java::lang::String > > SUGGEST_COLUMN_QUERY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), local_ref< java::lang::String > > SUGGEST_COLUMN_SHORTCUT_ID;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), local_ref< java::lang::String > > SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), local_ref< java::lang::String > > SUGGEST_NEVER_MAKE_SHORTCUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), local_ref< java::lang::String > > SUGGEST_PARAMETER_LIMIT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), local_ref< java::lang::String > > INTENT_ACTION_WEB_SEARCH_SETTINGS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), local_ref< java::lang::String > > INTENT_ACTION_SEARCHABLES_CHANGED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), local_ref< java::lang::String > > INTENT_ACTION_SEARCH_SETTINGS_CHANGED;
	}; //class SearchManager

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_IMPL
#define J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_IMPL

namespace j2cpp {




android::app::SearchManager_::OnCancelListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::app::SearchManager_::OnCancelListener::onCancel()
{
	return call_method<
		android::app::SearchManager_::OnCancelListener::J2CPP_CLASS_NAME,
		android::app::SearchManager_::OnCancelListener::J2CPP_METHOD_NAME(0),
		android::app::SearchManager_::OnCancelListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::app::SearchManager_::OnCancelListener,"android/app/SearchManager$OnCancelListener")
J2CPP_DEFINE_METHOD(android::app::SearchManager_::OnCancelListener,0,"onCancel","()V")


android::app::SearchManager_::OnDismissListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::app::SearchManager_::OnDismissListener::onDismiss()
{
	return call_method<
		android::app::SearchManager_::OnDismissListener::J2CPP_CLASS_NAME,
		android::app::SearchManager_::OnDismissListener::J2CPP_METHOD_NAME(0),
		android::app::SearchManager_::OnDismissListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(android::app::SearchManager_::OnDismissListener,"android/app/SearchManager$OnDismissListener")
J2CPP_DEFINE_METHOD(android::app::SearchManager_::OnDismissListener,0,"onDismiss","()V")



android::app::SearchManager::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::app::SearchManager::operator local_ref<android::content::DialogInterface_::OnDismissListener>() const
{
	return local_ref<android::content::DialogInterface_::OnDismissListener>(get_jobject());
}

android::app::SearchManager::operator local_ref<android::content::DialogInterface_::OnCancelListener>() const
{
	return local_ref<android::content::DialogInterface_::OnCancelListener>(get_jobject());
}


void android::app::SearchManager::startSearch(local_ref< java::lang::String > const &a0, jboolean a1, local_ref< android::content::ComponentName > const &a2, local_ref< android::os::Bundle > const &a3, jboolean a4)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(1),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0, a1, a2, a3, a4);
}

void android::app::SearchManager::triggerSearch(local_ref< java::lang::String > const &a0, local_ref< android::content::ComponentName > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(2),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1, a2);
}

void android::app::SearchManager::stopSearch()
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(3),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

void android::app::SearchManager::setOnDismissListener(local_ref< android::app::SearchManager_::OnDismissListener > const &a0)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(4),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}

void android::app::SearchManager::setOnCancelListener(local_ref< android::app::SearchManager_::OnCancelListener > const &a0)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(5),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void android::app::SearchManager::onCancel(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(6),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}

void android::app::SearchManager::onDismiss(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::app::SearchManager::J2CPP_CLASS_NAME,
		android::app::SearchManager::J2CPP_METHOD_NAME(7),
		android::app::SearchManager::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}


static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(0),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(0),
	jchar
> android::app::SearchManager::MENU_KEY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(1),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::app::SearchManager::MENU_KEYCODE;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(2),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::app::SearchManager::QUERY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(3),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::app::SearchManager::USER_QUERY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(4),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::app::SearchManager::APP_DATA;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(5),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::String >
> android::app::SearchManager::ACTION_KEY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(6),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(6),
	local_ref< java::lang::String >
> android::app::SearchManager::EXTRA_DATA_KEY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(7),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(7),
	local_ref< java::lang::String >
> android::app::SearchManager::ACTION_MSG;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(8),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(8),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_URI_PATH_QUERY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(9),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(9),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_MIME_TYPE;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(10),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(10),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_URI_PATH_SHORTCUT;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(11),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(11),
	local_ref< java::lang::String >
> android::app::SearchManager::SHORTCUT_MIME_TYPE;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(12),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(12),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_FORMAT;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(13),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(13),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_TEXT_1;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(14),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(14),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_TEXT_2;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(15),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(15),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_ICON_1;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(16),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(16),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_ICON_2;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(17),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(17),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_INTENT_ACTION;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(18),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(18),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_INTENT_DATA;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(19),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(19),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_INTENT_EXTRA_DATA;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(20),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(20),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_INTENT_DATA_ID;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(21),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(21),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_QUERY;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(22),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(22),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_SHORTCUT_ID;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(23),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(23),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(24),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(24),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_NEVER_MAKE_SHORTCUT;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(25),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(25),
	local_ref< java::lang::String >
> android::app::SearchManager::SUGGEST_PARAMETER_LIMIT;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(26),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(26),
	local_ref< java::lang::String >
> android::app::SearchManager::INTENT_ACTION_WEB_SEARCH_SETTINGS;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(27),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(27),
	local_ref< java::lang::String >
> android::app::SearchManager::INTENT_ACTION_SEARCHABLES_CHANGED;

static_field<
	android::app::SearchManager::J2CPP_CLASS_NAME,
	android::app::SearchManager::J2CPP_FIELD_NAME(28),
	android::app::SearchManager::J2CPP_FIELD_SIGNATURE(28),
	local_ref< java::lang::String >
> android::app::SearchManager::INTENT_ACTION_SEARCH_SETTINGS_CHANGED;


J2CPP_DEFINE_CLASS(android::app::SearchManager,"android/app/SearchManager")
J2CPP_DEFINE_METHOD(android::app::SearchManager,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,1,"startSearch","(Ljava/lang/String;ZLandroid/content/ComponentName;Landroid/os/Bundle;Z)V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,2,"triggerSearch","(Ljava/lang/String;Landroid/content/ComponentName;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,3,"stopSearch","()V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,4,"setOnDismissListener","(Landroid/app/SearchManager$OnDismissListener;)V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,5,"setOnCancelListener","(Landroid/app/SearchManager$OnCancelListener;)V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,6,"onCancel","(Landroid/content/DialogInterface;)V")
J2CPP_DEFINE_METHOD(android::app::SearchManager,7,"onDismiss","(Landroid/content/DialogInterface;)V")
J2CPP_DEFINE_FIELD(android::app::SearchManager,0,"MENU_KEY","C")
J2CPP_DEFINE_FIELD(android::app::SearchManager,1,"MENU_KEYCODE","I")
J2CPP_DEFINE_FIELD(android::app::SearchManager,2,"QUERY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,3,"USER_QUERY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,4,"APP_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,5,"ACTION_KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,6,"EXTRA_DATA_KEY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,7,"ACTION_MSG","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,8,"SUGGEST_URI_PATH_QUERY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,9,"SUGGEST_MIME_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,10,"SUGGEST_URI_PATH_SHORTCUT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,11,"SHORTCUT_MIME_TYPE","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,12,"SUGGEST_COLUMN_FORMAT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,13,"SUGGEST_COLUMN_TEXT_1","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,14,"SUGGEST_COLUMN_TEXT_2","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,15,"SUGGEST_COLUMN_ICON_1","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,16,"SUGGEST_COLUMN_ICON_2","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,17,"SUGGEST_COLUMN_INTENT_ACTION","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,18,"SUGGEST_COLUMN_INTENT_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,19,"SUGGEST_COLUMN_INTENT_EXTRA_DATA","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,20,"SUGGEST_COLUMN_INTENT_DATA_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,21,"SUGGEST_COLUMN_QUERY","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,22,"SUGGEST_COLUMN_SHORTCUT_ID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,23,"SUGGEST_COLUMN_SPINNER_WHILE_REFRESHING","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,24,"SUGGEST_NEVER_MAKE_SHORTCUT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,25,"SUGGEST_PARAMETER_LIMIT","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,26,"INTENT_ACTION_WEB_SEARCH_SETTINGS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,27,"INTENT_ACTION_SEARCHABLES_CHANGED","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::app::SearchManager,28,"INTENT_ACTION_SEARCH_SETTINGS_CHANGED","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_SEARCHMANAGER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
