#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.CustomData
struct  CustomData_t2526548513  : public BaseObject_t3159603414
{
public:
	// System.Collections.Generic.List`1<System.Int32> DragonBones.CustomData::ints
	List_1_t2522024052 * ___ints_5;
	// System.Collections.Generic.List`1<System.Single> DragonBones.CustomData::floats
	List_1_t1365137228 * ___floats_6;
	// System.Collections.Generic.List`1<System.String> DragonBones.CustomData::strings
	List_1_t1375417109 * ___strings_7;

public:
	inline static int32_t get_offset_of_ints_5() { return static_cast<int32_t>(offsetof(CustomData_t2526548513, ___ints_5)); }
	inline List_1_t2522024052 * get_ints_5() const { return ___ints_5; }
	inline List_1_t2522024052 ** get_address_of_ints_5() { return &___ints_5; }
	inline void set_ints_5(List_1_t2522024052 * value)
	{
		___ints_5 = value;
		Il2CppCodeGenWriteBarrier(&___ints_5, value);
	}

	inline static int32_t get_offset_of_floats_6() { return static_cast<int32_t>(offsetof(CustomData_t2526548513, ___floats_6)); }
	inline List_1_t1365137228 * get_floats_6() const { return ___floats_6; }
	inline List_1_t1365137228 ** get_address_of_floats_6() { return &___floats_6; }
	inline void set_floats_6(List_1_t1365137228 * value)
	{
		___floats_6 = value;
		Il2CppCodeGenWriteBarrier(&___floats_6, value);
	}

	inline static int32_t get_offset_of_strings_7() { return static_cast<int32_t>(offsetof(CustomData_t2526548513, ___strings_7)); }
	inline List_1_t1375417109 * get_strings_7() const { return ___strings_7; }
	inline List_1_t1375417109 ** get_address_of_strings_7() { return &___strings_7; }
	inline void set_strings_7(List_1_t1375417109 * value)
	{
		___strings_7 = value;
		Il2CppCodeGenWriteBarrier(&___strings_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
