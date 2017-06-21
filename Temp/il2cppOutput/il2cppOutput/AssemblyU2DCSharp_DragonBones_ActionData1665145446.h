#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.SlotData
struct SlotData_t2442829486;
// DragonBones.AnimationConfig
struct AnimationConfig_t1180894056;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_ActionType1665645046.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.ActionData
struct  ActionData_t1665145446  : public BaseObject_t3159603414
{
public:
	// DragonBones.ActionType DragonBones.ActionData::type
	int32_t ___type_5;
	// DragonBones.BoneData DragonBones.ActionData::bone
	BoneData_t1204886644 * ___bone_6;
	// DragonBones.SlotData DragonBones.ActionData::slot
	SlotData_t2442829486 * ___slot_7;
	// DragonBones.AnimationConfig DragonBones.ActionData::animationConfig
	AnimationConfig_t1180894056 * ___animationConfig_8;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(ActionData_t1665145446, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_bone_6() { return static_cast<int32_t>(offsetof(ActionData_t1665145446, ___bone_6)); }
	inline BoneData_t1204886644 * get_bone_6() const { return ___bone_6; }
	inline BoneData_t1204886644 ** get_address_of_bone_6() { return &___bone_6; }
	inline void set_bone_6(BoneData_t1204886644 * value)
	{
		___bone_6 = value;
		Il2CppCodeGenWriteBarrier(&___bone_6, value);
	}

	inline static int32_t get_offset_of_slot_7() { return static_cast<int32_t>(offsetof(ActionData_t1665145446, ___slot_7)); }
	inline SlotData_t2442829486 * get_slot_7() const { return ___slot_7; }
	inline SlotData_t2442829486 ** get_address_of_slot_7() { return &___slot_7; }
	inline void set_slot_7(SlotData_t2442829486 * value)
	{
		___slot_7 = value;
		Il2CppCodeGenWriteBarrier(&___slot_7, value);
	}

	inline static int32_t get_offset_of_animationConfig_8() { return static_cast<int32_t>(offsetof(ActionData_t1665145446, ___animationConfig_8)); }
	inline AnimationConfig_t1180894056 * get_animationConfig_8() const { return ___animationConfig_8; }
	inline AnimationConfig_t1180894056 ** get_address_of_animationConfig_8() { return &___animationConfig_8; }
	inline void set_animationConfig_8(AnimationConfig_t1180894056 * value)
	{
		___animationConfig_8 = value;
		Il2CppCodeGenWriteBarrier(&___animationConfig_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
