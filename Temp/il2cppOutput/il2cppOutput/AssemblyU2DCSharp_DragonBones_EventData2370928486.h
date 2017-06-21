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
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.SlotData
struct SlotData_t2442829486;
// DragonBones.CustomData
struct CustomData_t2526548513;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_EventType2371428086.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.EventData
struct  EventData_t2370928486  : public BaseObject_t3159603414
{
public:
	// DragonBones.EventType DragonBones.EventData::type
	int32_t ___type_5;
	// System.String DragonBones.EventData::name
	String_t* ___name_6;
	// DragonBones.BoneData DragonBones.EventData::bone
	BoneData_t1204886644 * ___bone_7;
	// DragonBones.SlotData DragonBones.EventData::slot
	SlotData_t2442829486 * ___slot_8;
	// DragonBones.CustomData DragonBones.EventData::data
	CustomData_t2526548513 * ___data_9;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(EventData_t2370928486, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(EventData_t2370928486, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_bone_7() { return static_cast<int32_t>(offsetof(EventData_t2370928486, ___bone_7)); }
	inline BoneData_t1204886644 * get_bone_7() const { return ___bone_7; }
	inline BoneData_t1204886644 ** get_address_of_bone_7() { return &___bone_7; }
	inline void set_bone_7(BoneData_t1204886644 * value)
	{
		___bone_7 = value;
		Il2CppCodeGenWriteBarrier(&___bone_7, value);
	}

	inline static int32_t get_offset_of_slot_8() { return static_cast<int32_t>(offsetof(EventData_t2370928486, ___slot_8)); }
	inline SlotData_t2442829486 * get_slot_8() const { return ___slot_8; }
	inline SlotData_t2442829486 ** get_address_of_slot_8() { return &___slot_8; }
	inline void set_slot_8(SlotData_t2442829486 * value)
	{
		___slot_8 = value;
		Il2CppCodeGenWriteBarrier(&___slot_8, value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(EventData_t2370928486, ___data_9)); }
	inline CustomData_t2526548513 * get_data_9() const { return ___data_9; }
	inline CustomData_t2526548513 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(CustomData_t2526548513 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier(&___data_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
