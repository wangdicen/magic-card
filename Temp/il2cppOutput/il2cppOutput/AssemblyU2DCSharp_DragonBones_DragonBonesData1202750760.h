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
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ArmatureData>
struct Dictionary_2_t469681387;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// DragonBones.CustomData
struct CustomData_t2526548513;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.DragonBonesData
struct  DragonBonesData_t1202750760  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.DragonBonesData::autoSearch
	bool ___autoSearch_5;
	// System.UInt32 DragonBones.DragonBonesData::frameRate
	uint32_t ___frameRate_6;
	// System.String DragonBones.DragonBonesData::name
	String_t* ___name_7;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.ArmatureData> DragonBones.DragonBonesData::armatures
	Dictionary_2_t469681387 * ___armatures_8;
	// System.Collections.Generic.List`1<System.Single> DragonBones.DragonBonesData::cachedFrames
	List_1_t1365137228 * ___cachedFrames_9;
	// DragonBones.CustomData DragonBones.DragonBonesData::userData
	CustomData_t2526548513 * ___userData_10;
	// System.Collections.Generic.List`1<System.String> DragonBones.DragonBonesData::_armatureNames
	List_1_t1375417109 * ____armatureNames_11;

public:
	inline static int32_t get_offset_of_autoSearch_5() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___autoSearch_5)); }
	inline bool get_autoSearch_5() const { return ___autoSearch_5; }
	inline bool* get_address_of_autoSearch_5() { return &___autoSearch_5; }
	inline void set_autoSearch_5(bool value)
	{
		___autoSearch_5 = value;
	}

	inline static int32_t get_offset_of_frameRate_6() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___frameRate_6)); }
	inline uint32_t get_frameRate_6() const { return ___frameRate_6; }
	inline uint32_t* get_address_of_frameRate_6() { return &___frameRate_6; }
	inline void set_frameRate_6(uint32_t value)
	{
		___frameRate_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier(&___name_7, value);
	}

	inline static int32_t get_offset_of_armatures_8() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___armatures_8)); }
	inline Dictionary_2_t469681387 * get_armatures_8() const { return ___armatures_8; }
	inline Dictionary_2_t469681387 ** get_address_of_armatures_8() { return &___armatures_8; }
	inline void set_armatures_8(Dictionary_2_t469681387 * value)
	{
		___armatures_8 = value;
		Il2CppCodeGenWriteBarrier(&___armatures_8, value);
	}

	inline static int32_t get_offset_of_cachedFrames_9() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___cachedFrames_9)); }
	inline List_1_t1365137228 * get_cachedFrames_9() const { return ___cachedFrames_9; }
	inline List_1_t1365137228 ** get_address_of_cachedFrames_9() { return &___cachedFrames_9; }
	inline void set_cachedFrames_9(List_1_t1365137228 * value)
	{
		___cachedFrames_9 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFrames_9, value);
	}

	inline static int32_t get_offset_of_userData_10() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ___userData_10)); }
	inline CustomData_t2526548513 * get_userData_10() const { return ___userData_10; }
	inline CustomData_t2526548513 ** get_address_of_userData_10() { return &___userData_10; }
	inline void set_userData_10(CustomData_t2526548513 * value)
	{
		___userData_10 = value;
		Il2CppCodeGenWriteBarrier(&___userData_10, value);
	}

	inline static int32_t get_offset_of__armatureNames_11() { return static_cast<int32_t>(offsetof(DragonBonesData_t1202750760, ____armatureNames_11)); }
	inline List_1_t1375417109 * get__armatureNames_11() const { return ____armatureNames_11; }
	inline List_1_t1375417109 ** get_address_of__armatureNames_11() { return &____armatureNames_11; }
	inline void set__armatureNames_11(List_1_t1375417109 * value)
	{
		____armatureNames_11 = value;
		Il2CppCodeGenWriteBarrier(&____armatureNames_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
