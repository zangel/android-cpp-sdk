/*================================================================================
  code generated by: java2cpp
  class: org.json.JSONObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL
#define J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Number; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Iterator; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace org { namespace json { class JSONArray; } } }
namespace j2cpp { namespace org { namespace json { class JSONTokener; } } }


#include <java/lang/Number.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Iterator.hpp>
#include <java/util/Map.hpp>
#include <org/json/JSONArray.hpp>
#include <org/json/JSONTokener.hpp>


namespace j2cpp {

namespace org { namespace json {

	class JSONObject;
	class JSONObject
		: public cpp_object<JSONObject>
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
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_FIELD(0)

		JSONObject(jobject jobj)
		: cpp_object<JSONObject>(jobj)
		{
		}

		cpp_int length();
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String > const&, cpp_boolean const&);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String > const&, cpp_double const&);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String > const&, cpp_int const&);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String > const&, cpp_long const&);
		local_ref< org::json::JSONObject > put(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< org::json::JSONObject > putOpt(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< org::json::JSONObject > accumulate(local_ref< java::lang::String > const&, local_ref< java::lang::Object > const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::String > const&);
		cpp_boolean isNull(local_ref< java::lang::String > const&);
		cpp_boolean has(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::String > const&);
		local_ref< java::lang::Object > opt(local_ref< java::lang::String > const&);
		cpp_boolean getBoolean(local_ref< java::lang::String > const&);
		cpp_boolean optBoolean(local_ref< java::lang::String > const&);
		cpp_boolean optBoolean(local_ref< java::lang::String > const&, cpp_boolean const&);
		cpp_double getDouble(local_ref< java::lang::String > const&);
		cpp_double optDouble(local_ref< java::lang::String > const&);
		cpp_double optDouble(local_ref< java::lang::String > const&, cpp_double const&);
		cpp_int getInt(local_ref< java::lang::String > const&);
		cpp_int optInt(local_ref< java::lang::String > const&);
		cpp_int optInt(local_ref< java::lang::String > const&, cpp_int const&);
		cpp_long getLong(local_ref< java::lang::String > const&);
		cpp_long optLong(local_ref< java::lang::String > const&);
		cpp_long optLong(local_ref< java::lang::String > const&, cpp_long const&);
		local_ref< java::lang::String > getString(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > optString(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > optString(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< org::json::JSONArray > getJSONArray(local_ref< java::lang::String > const&);
		local_ref< org::json::JSONArray > optJSONArray(local_ref< java::lang::String > const&);
		local_ref< org::json::JSONObject > getJSONObject(local_ref< java::lang::String > const&);
		local_ref< org::json::JSONObject > optJSONObject(local_ref< java::lang::String > const&);
		local_ref< org::json::JSONArray > toJSONArray(local_ref< org::json::JSONArray > const&);
		local_ref< java::util::Iterator > keys();
		local_ref< org::json::JSONArray > names();
		local_ref< java::lang::String > toString();
		local_ref< java::lang::String > toString(cpp_int const&);
		static local_ref< java::lang::String > numberToString(local_ref< java::lang::Number > const&);
		static local_ref< java::lang::String > quote(local_ref< java::lang::String > const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Object > > NULL;
	}; //class JSONObject

} //namespace json
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL
#define J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::json::JSONObject > create< org::json::JSONObject>()
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->NewObject(
			get_class<org::json::JSONObject::J2CPP_CLASS_NAME>(),
			get_method_id<org::json::JSONObject::J2CPP_CLASS_NAME, org::json::JSONObject::J2CPP_METHOD_NAME(0), org::json::JSONObject::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< org::json::JSONObject > create< org::json::JSONObject>(local_ref< java::util::Map > const &a0)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->NewObject(
			get_class<org::json::JSONObject::J2CPP_CLASS_NAME>(),
			get_method_id<org::json::JSONObject::J2CPP_CLASS_NAME, org::json::JSONObject::J2CPP_METHOD_NAME(1), org::json::JSONObject::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::json::JSONObject > create< org::json::JSONObject>(local_ref< org::json::JSONTokener > const &a0)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->NewObject(
			get_class<org::json::JSONObject::J2CPP_CLASS_NAME>(),
			get_method_id<org::json::JSONObject::J2CPP_CLASS_NAME, org::json::JSONObject::J2CPP_METHOD_NAME(2), org::json::JSONObject::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::json::JSONObject > create< org::json::JSONObject>(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->NewObject(
			get_class<org::json::JSONObject::J2CPP_CLASS_NAME>(),
			get_method_id<org::json::JSONObject::J2CPP_CLASS_NAME, org::json::JSONObject::J2CPP_METHOD_NAME(3), org::json::JSONObject::J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< org::json::JSONObject > create< org::json::JSONObject>(local_ref< org::json::JSONObject > const &a0, local_ref< cpp_object_array<java::lang::String, 1> > const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->NewObject(
			get_class<org::json::JSONObject::J2CPP_CLASS_NAME>(),
			get_method_id<org::json::JSONObject::J2CPP_CLASS_NAME, org::json::JSONObject::J2CPP_METHOD_NAME(4), org::json::JSONObject::J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::json::JSONObject::length()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, cpp_double const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::put(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::putOpt(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::accumulate(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::Object > org::json::JSONObject::remove(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::json::JSONObject::isNull(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::json::JSONObject::has(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > org::json::JSONObject::get(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::Object > org::json::JSONObject::opt(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::json::JSONObject::getBoolean(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::json::JSONObject::optBoolean(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean org::json::JSONObject::optBoolean(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_double org::json::JSONObject::getDouble(local_ref< java::lang::String > const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double org::json::JSONObject::optDouble(local_ref< java::lang::String > const &a0)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

cpp_double org::json::JSONObject::optDouble(local_ref< java::lang::String > const &a0, cpp_double const &a1)
{
	return cpp_double(
		environment::get().get_jenv()->CallDoubleMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_int org::json::JSONObject::getInt(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(24), J2CPP_METHOD_SIGNATURE(24), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::json::JSONObject::optInt(local_ref< java::lang::String > const &a0)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(25), J2CPP_METHOD_SIGNATURE(25), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int org::json::JSONObject::optInt(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(26), J2CPP_METHOD_SIGNATURE(26), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_long org::json::JSONObject::getLong(local_ref< java::lang::String > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(27), J2CPP_METHOD_SIGNATURE(27), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long org::json::JSONObject::optLong(local_ref< java::lang::String > const &a0)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long org::json::JSONObject::optLong(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::getString(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(30), J2CPP_METHOD_SIGNATURE(30), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::optString(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(31), J2CPP_METHOD_SIGNATURE(31), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::optString(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(32), J2CPP_METHOD_SIGNATURE(32), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< org::json::JSONArray > org::json::JSONObject::getJSONArray(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(33), J2CPP_METHOD_SIGNATURE(33), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONArray > org::json::JSONObject::optJSONArray(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(34), J2CPP_METHOD_SIGNATURE(34), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::getJSONObject(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(35), J2CPP_METHOD_SIGNATURE(35), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONObject > org::json::JSONObject::optJSONObject(local_ref< java::lang::String > const &a0)
{
	return local_ref< org::json::JSONObject >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(36), J2CPP_METHOD_SIGNATURE(36), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< org::json::JSONArray > org::json::JSONObject::toJSONArray(local_ref< org::json::JSONArray > const &a0)
{
	return local_ref< org::json::JSONArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(37), J2CPP_METHOD_SIGNATURE(37), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::util::Iterator > org::json::JSONObject::keys()
{
	return local_ref< java::util::Iterator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(38), J2CPP_METHOD_SIGNATURE(38), false>()
		)
	);
}

local_ref< org::json::JSONArray > org::json::JSONObject::names()
{
	return local_ref< org::json::JSONArray >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(39), J2CPP_METHOD_SIGNATURE(39), false>()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(40), J2CPP_METHOD_SIGNATURE(40), false>()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::toString(cpp_int const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(41), J2CPP_METHOD_SIGNATURE(41), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::numberToString(local_ref< java::lang::Number > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(42), J2CPP_METHOD_SIGNATURE(42), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > org::json::JSONObject::quote(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(43), J2CPP_METHOD_SIGNATURE(43), true>(),
			a0.get_jtype()
		)
	);
}


static_field<
	org::json::JSONObject::J2CPP_CLASS_NAME,
	org::json::JSONObject::J2CPP_FIELD_NAME(0),
	org::json::JSONObject::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Object >
> org::json::JSONObject::NULL;


J2CPP_DEFINE_CLASS(org::json::JSONObject,"org/json/JSONObject")
J2CPP_DEFINE_METHOD(org::json::JSONObject,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,1,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,2,"<init>","(Lorg/json/JSONTokener;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,4,"<init>","(Lorg/json/JSONObject;[java.lang.String)V")
J2CPP_DEFINE_METHOD(org::json::JSONObject,5,"length","()I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,6,"put","(Ljava/lang/String;Z)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,7,"put","(Ljava/lang/String;D)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,8,"put","(Ljava/lang/String;I)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,9,"put","(Ljava/lang/String;J)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,10,"put","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,11,"putOpt","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,12,"accumulate","(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,13,"remove","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,14,"isNull","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,15,"has","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,16,"get","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,17,"opt","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,18,"getBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,19,"optBoolean","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,20,"optBoolean","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(org::json::JSONObject,21,"getDouble","(Ljava/lang/String;)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,22,"optDouble","(Ljava/lang/String;)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,23,"optDouble","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(org::json::JSONObject,24,"getInt","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,25,"optInt","(Ljava/lang/String;)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,26,"optInt","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(org::json::JSONObject,27,"getLong","(Ljava/lang/String;)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,28,"optLong","(Ljava/lang/String;)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,29,"optLong","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(org::json::JSONObject,30,"getString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,31,"optString","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,32,"optString","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,33,"getJSONArray","(Ljava/lang/String;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,34,"optJSONArray","(Ljava/lang/String;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,35,"getJSONObject","(Ljava/lang/String;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,36,"optJSONObject","(Ljava/lang/String;)Lorg/json/JSONObject;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,37,"toJSONArray","(Lorg/json/JSONArray;)Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,38,"keys","()Ljava/util/Iterator;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,39,"names","()Lorg/json/JSONArray;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,40,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,41,"toString","(I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,42,"numberToString","(Ljava/lang/Number;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,43,"quote","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::json::JSONObject,44,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::json::JSONObject,0,"NULL","Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ORG_JSON_JSONOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
