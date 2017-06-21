#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// System.Collections.Generic.List`1<DragonBones.EventData>
struct List_1_t3739114038;

#include "AssemblyU2DCSharp_DragonBones_FrameData_1_gen2845291576.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.AnimationFrameData
struct  AnimationFrameData_t4096186617  : public FrameData_1_t2845291576
{
public:
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.AnimationFrameData::actions
	List_1_t3033330998 * ___actions_9;
	// System.Collections.Generic.List`1<DragonBones.EventData> DragonBones.AnimationFrameData::events
	List_1_t3739114038 * ___events_10;

public:
	inline static int32_t get_offset_of_actions_9() { return static_cast<int32_t>(offsetof(AnimationFrameData_t4096186617, ___actions_9)); }
	inline List_1_t3033330998 * get_actions_9() const { return ___actions_9; }
	inline List_1_t3033330998 ** get_address_of_actions_9() { return &___actions_9; }
	inline void set_actions_9(List_1_t3033330998 * value)
	{
		___actions_9 = value;
		Il2CppCodeGenWriteBarrier(&___actions_9, value);
	}

	inline static int32_t get_offset_of_events_10() { return static_cast<int32_t>(offsetof(AnimationFrameData_t4096186617, ___events_10)); }
	inline List_1_t3739114038 * get_events_10() const { return ___events_10; }
	inline List_1_t3739114038 ** get_address_of_events_10() { return &___events_10; }
	inline void set_events_10(List_1_t3739114038 * value)
	{
		___events_10 = value;
		Il2CppCodeGenWriteBarrier(&___events_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
