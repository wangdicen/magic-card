#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Transform
struct Transform_t3392663918;

#include "AssemblyU2DCSharp_DragonBones_TweenFrameData_1_gen1989350181.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BoneFrameData
struct  BoneFrameData_t1992691541  : public TweenFrameData_1_t1989350181
{
public:
	// System.Boolean DragonBones.BoneFrameData::tweenScale
	bool ___tweenScale_11;
	// System.Single DragonBones.BoneFrameData::tweenRotate
	float ___tweenRotate_12;
	// DragonBones.Transform DragonBones.BoneFrameData::transform
	Transform_t3392663918 * ___transform_13;

public:
	inline static int32_t get_offset_of_tweenScale_11() { return static_cast<int32_t>(offsetof(BoneFrameData_t1992691541, ___tweenScale_11)); }
	inline bool get_tweenScale_11() const { return ___tweenScale_11; }
	inline bool* get_address_of_tweenScale_11() { return &___tweenScale_11; }
	inline void set_tweenScale_11(bool value)
	{
		___tweenScale_11 = value;
	}

	inline static int32_t get_offset_of_tweenRotate_12() { return static_cast<int32_t>(offsetof(BoneFrameData_t1992691541, ___tweenRotate_12)); }
	inline float get_tweenRotate_12() const { return ___tweenRotate_12; }
	inline float* get_address_of_tweenRotate_12() { return &___tweenRotate_12; }
	inline void set_tweenRotate_12(float value)
	{
		___tweenRotate_12 = value;
	}

	inline static int32_t get_offset_of_transform_13() { return static_cast<int32_t>(offsetof(BoneFrameData_t1992691541, ___transform_13)); }
	inline Transform_t3392663918 * get_transform_13() const { return ___transform_13; }
	inline Transform_t3392663918 ** get_address_of_transform_13() { return &___transform_13; }
	inline void set_transform_13(Transform_t3392663918 * value)
	{
		___transform_13 = value;
		Il2CppCodeGenWriteBarrier(&___transform_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
