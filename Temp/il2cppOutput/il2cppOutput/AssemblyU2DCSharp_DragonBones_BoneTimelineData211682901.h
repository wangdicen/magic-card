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
// DragonBones.Transform
struct Transform_t3392663918;

#include "AssemblyU2DCSharp_DragonBones_TimelineData_1_gen1142779276.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BoneTimelineData
struct  BoneTimelineData_t211682901  : public TimelineData_1_t1142779276
{
public:
	// DragonBones.BoneData DragonBones.BoneTimelineData::bone
	BoneData_t1204886644 * ___bone_8;
	// DragonBones.Transform DragonBones.BoneTimelineData::originTransform
	Transform_t3392663918 * ___originTransform_9;

public:
	inline static int32_t get_offset_of_bone_8() { return static_cast<int32_t>(offsetof(BoneTimelineData_t211682901, ___bone_8)); }
	inline BoneData_t1204886644 * get_bone_8() const { return ___bone_8; }
	inline BoneData_t1204886644 ** get_address_of_bone_8() { return &___bone_8; }
	inline void set_bone_8(BoneData_t1204886644 * value)
	{
		___bone_8 = value;
		Il2CppCodeGenWriteBarrier(&___bone_8, value);
	}

	inline static int32_t get_offset_of_originTransform_9() { return static_cast<int32_t>(offsetof(BoneTimelineData_t211682901, ___originTransform_9)); }
	inline Transform_t3392663918 * get_originTransform_9() const { return ___originTransform_9; }
	inline Transform_t3392663918 ** get_address_of_originTransform_9() { return &___originTransform_9; }
	inline void set_originTransform_9(Transform_t3392663918 * value)
	{
		___originTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___originTransform_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
