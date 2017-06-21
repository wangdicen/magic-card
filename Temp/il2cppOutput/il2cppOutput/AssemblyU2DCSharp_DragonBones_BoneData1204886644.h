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
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.CustomData
struct CustomData_t2526548513;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BoneData
struct  BoneData_t1204886644  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.BoneData::inheritTranslation
	bool ___inheritTranslation_5;
	// System.Boolean DragonBones.BoneData::inheritRotation
	bool ___inheritRotation_6;
	// System.Boolean DragonBones.BoneData::inheritScale
	bool ___inheritScale_7;
	// System.Boolean DragonBones.BoneData::bendPositive
	bool ___bendPositive_8;
	// System.UInt32 DragonBones.BoneData::chain
	uint32_t ___chain_9;
	// System.Int32 DragonBones.BoneData::chainIndex
	int32_t ___chainIndex_10;
	// System.Single DragonBones.BoneData::weight
	float ___weight_11;
	// System.Single DragonBones.BoneData::length
	float ___length_12;
	// System.String DragonBones.BoneData::name
	String_t* ___name_13;
	// DragonBones.Transform DragonBones.BoneData::transform
	Transform_t3392663918 * ___transform_14;
	// DragonBones.BoneData DragonBones.BoneData::parent
	BoneData_t1204886644 * ___parent_15;
	// DragonBones.BoneData DragonBones.BoneData::ik
	BoneData_t1204886644 * ___ik_16;
	// DragonBones.CustomData DragonBones.BoneData::userData
	CustomData_t2526548513 * ___userData_17;

public:
	inline static int32_t get_offset_of_inheritTranslation_5() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___inheritTranslation_5)); }
	inline bool get_inheritTranslation_5() const { return ___inheritTranslation_5; }
	inline bool* get_address_of_inheritTranslation_5() { return &___inheritTranslation_5; }
	inline void set_inheritTranslation_5(bool value)
	{
		___inheritTranslation_5 = value;
	}

	inline static int32_t get_offset_of_inheritRotation_6() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___inheritRotation_6)); }
	inline bool get_inheritRotation_6() const { return ___inheritRotation_6; }
	inline bool* get_address_of_inheritRotation_6() { return &___inheritRotation_6; }
	inline void set_inheritRotation_6(bool value)
	{
		___inheritRotation_6 = value;
	}

	inline static int32_t get_offset_of_inheritScale_7() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___inheritScale_7)); }
	inline bool get_inheritScale_7() const { return ___inheritScale_7; }
	inline bool* get_address_of_inheritScale_7() { return &___inheritScale_7; }
	inline void set_inheritScale_7(bool value)
	{
		___inheritScale_7 = value;
	}

	inline static int32_t get_offset_of_bendPositive_8() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___bendPositive_8)); }
	inline bool get_bendPositive_8() const { return ___bendPositive_8; }
	inline bool* get_address_of_bendPositive_8() { return &___bendPositive_8; }
	inline void set_bendPositive_8(bool value)
	{
		___bendPositive_8 = value;
	}

	inline static int32_t get_offset_of_chain_9() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___chain_9)); }
	inline uint32_t get_chain_9() const { return ___chain_9; }
	inline uint32_t* get_address_of_chain_9() { return &___chain_9; }
	inline void set_chain_9(uint32_t value)
	{
		___chain_9 = value;
	}

	inline static int32_t get_offset_of_chainIndex_10() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___chainIndex_10)); }
	inline int32_t get_chainIndex_10() const { return ___chainIndex_10; }
	inline int32_t* get_address_of_chainIndex_10() { return &___chainIndex_10; }
	inline void set_chainIndex_10(int32_t value)
	{
		___chainIndex_10 = value;
	}

	inline static int32_t get_offset_of_weight_11() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___weight_11)); }
	inline float get_weight_11() const { return ___weight_11; }
	inline float* get_address_of_weight_11() { return &___weight_11; }
	inline void set_weight_11(float value)
	{
		___weight_11 = value;
	}

	inline static int32_t get_offset_of_length_12() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___length_12)); }
	inline float get_length_12() const { return ___length_12; }
	inline float* get_address_of_length_12() { return &___length_12; }
	inline void set_length_12(float value)
	{
		___length_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier(&___name_13, value);
	}

	inline static int32_t get_offset_of_transform_14() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___transform_14)); }
	inline Transform_t3392663918 * get_transform_14() const { return ___transform_14; }
	inline Transform_t3392663918 ** get_address_of_transform_14() { return &___transform_14; }
	inline void set_transform_14(Transform_t3392663918 * value)
	{
		___transform_14 = value;
		Il2CppCodeGenWriteBarrier(&___transform_14, value);
	}

	inline static int32_t get_offset_of_parent_15() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___parent_15)); }
	inline BoneData_t1204886644 * get_parent_15() const { return ___parent_15; }
	inline BoneData_t1204886644 ** get_address_of_parent_15() { return &___parent_15; }
	inline void set_parent_15(BoneData_t1204886644 * value)
	{
		___parent_15 = value;
		Il2CppCodeGenWriteBarrier(&___parent_15, value);
	}

	inline static int32_t get_offset_of_ik_16() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___ik_16)); }
	inline BoneData_t1204886644 * get_ik_16() const { return ___ik_16; }
	inline BoneData_t1204886644 ** get_address_of_ik_16() { return &___ik_16; }
	inline void set_ik_16(BoneData_t1204886644 * value)
	{
		___ik_16 = value;
		Il2CppCodeGenWriteBarrier(&___ik_16, value);
	}

	inline static int32_t get_offset_of_userData_17() { return static_cast<int32_t>(offsetof(BoneData_t1204886644, ___userData_17)); }
	inline CustomData_t2526548513 * get_userData_17() const { return ___userData_17; }
	inline CustomData_t2526548513 ** get_address_of_userData_17() { return &___userData_17; }
	inline void set_userData_17(CustomData_t2526548513 * value)
	{
		___userData_17 = value;
		Il2CppCodeGenWriteBarrier(&___userData_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
