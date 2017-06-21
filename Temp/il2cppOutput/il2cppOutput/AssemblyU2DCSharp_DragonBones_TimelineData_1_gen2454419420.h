#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DragonBones.ZOrderFrameData>
struct List_1_t377549941;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TimelineData`1<DragonBones.ZOrderFrameData>
struct  TimelineData_1_t2454419420  : public BaseObject_t3159603414
{
public:
	// System.Single DragonBones.TimelineData`1::scale
	float ___scale_5;
	// System.Single DragonBones.TimelineData`1::offset
	float ___offset_6;
	// System.Collections.Generic.List`1<T> DragonBones.TimelineData`1::frames
	List_1_t377549941 * ___frames_7;

public:
	inline static int32_t get_offset_of_scale_5() { return static_cast<int32_t>(offsetof(TimelineData_1_t2454419420, ___scale_5)); }
	inline float get_scale_5() const { return ___scale_5; }
	inline float* get_address_of_scale_5() { return &___scale_5; }
	inline void set_scale_5(float value)
	{
		___scale_5 = value;
	}

	inline static int32_t get_offset_of_offset_6() { return static_cast<int32_t>(offsetof(TimelineData_1_t2454419420, ___offset_6)); }
	inline float get_offset_6() const { return ___offset_6; }
	inline float* get_address_of_offset_6() { return &___offset_6; }
	inline void set_offset_6(float value)
	{
		___offset_6 = value;
	}

	inline static int32_t get_offset_of_frames_7() { return static_cast<int32_t>(offsetof(TimelineData_1_t2454419420, ___frames_7)); }
	inline List_1_t377549941 * get_frames_7() const { return ___frames_7; }
	inline List_1_t377549941 ** get_address_of_frames_7() { return &___frames_7; }
	inline void set_frames_7(List_1_t377549941 * value)
	{
		___frames_7 = value;
		Il2CppCodeGenWriteBarrier(&___frames_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
