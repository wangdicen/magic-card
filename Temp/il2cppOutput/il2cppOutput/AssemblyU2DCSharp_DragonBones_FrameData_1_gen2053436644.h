#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.ZOrderFrameData
struct ZOrderFrameData_t3304331685;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.FrameData`1<DragonBones.ZOrderFrameData>
struct  FrameData_1_t2053436644  : public BaseObject_t3159603414
{
public:
	// System.Single DragonBones.FrameData`1::position
	float ___position_5;
	// System.Single DragonBones.FrameData`1::duration
	float ___duration_6;
	// T DragonBones.FrameData`1::prev
	ZOrderFrameData_t3304331685 * ___prev_7;
	// T DragonBones.FrameData`1::next
	ZOrderFrameData_t3304331685 * ___next_8;

public:
	inline static int32_t get_offset_of_position_5() { return static_cast<int32_t>(offsetof(FrameData_1_t2053436644, ___position_5)); }
	inline float get_position_5() const { return ___position_5; }
	inline float* get_address_of_position_5() { return &___position_5; }
	inline void set_position_5(float value)
	{
		___position_5 = value;
	}

	inline static int32_t get_offset_of_duration_6() { return static_cast<int32_t>(offsetof(FrameData_1_t2053436644, ___duration_6)); }
	inline float get_duration_6() const { return ___duration_6; }
	inline float* get_address_of_duration_6() { return &___duration_6; }
	inline void set_duration_6(float value)
	{
		___duration_6 = value;
	}

	inline static int32_t get_offset_of_prev_7() { return static_cast<int32_t>(offsetof(FrameData_1_t2053436644, ___prev_7)); }
	inline ZOrderFrameData_t3304331685 * get_prev_7() const { return ___prev_7; }
	inline ZOrderFrameData_t3304331685 ** get_address_of_prev_7() { return &___prev_7; }
	inline void set_prev_7(ZOrderFrameData_t3304331685 * value)
	{
		___prev_7 = value;
		Il2CppCodeGenWriteBarrier(&___prev_7, value);
	}

	inline static int32_t get_offset_of_next_8() { return static_cast<int32_t>(offsetof(FrameData_1_t2053436644, ___next_8)); }
	inline ZOrderFrameData_t3304331685 * get_next_8() const { return ___next_8; }
	inline ZOrderFrameData_t3304331685 ** get_address_of_next_8() { return &___next_8; }
	inline void set_next_8(ZOrderFrameData_t3304331685 * value)
	{
		___next_8 = value;
		Il2CppCodeGenWriteBarrier(&___next_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
