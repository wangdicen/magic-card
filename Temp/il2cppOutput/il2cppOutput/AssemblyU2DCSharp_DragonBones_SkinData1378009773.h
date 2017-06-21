#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinSlotData>
struct Dictionary_2_t103111053;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SkinData
struct  SkinData_t1378009773  : public BaseObject_t3159603414
{
public:
	// System.String DragonBones.SkinData::name
	String_t* ___name_5;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinSlotData> DragonBones.SkinData::slots
	Dictionary_2_t103111053 * ___slots_6;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(SkinData_t1378009773, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(SkinData_t1378009773, ___slots_6)); }
	inline Dictionary_2_t103111053 * get_slots_6() const { return ___slots_6; }
	inline Dictionary_2_t103111053 ** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(Dictionary_2_t103111053 * value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier(&___slots_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
