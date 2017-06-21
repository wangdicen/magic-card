#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "AssemblyU2DCSharp_DragonBones_FrameData_1_gen1319851485.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TweenFrameData`1<DragonBones.ExtensionFrameData>
struct  TweenFrameData_1_t2567405166  : public FrameData_1_t1319851485
{
public:
	// System.Single DragonBones.TweenFrameData`1::tweenEasing
	float ___tweenEasing_9;
	// System.Single[] DragonBones.TweenFrameData`1::curve
	SingleU5BU5D_t2316563989* ___curve_10;

public:
	inline static int32_t get_offset_of_tweenEasing_9() { return static_cast<int32_t>(offsetof(TweenFrameData_1_t2567405166, ___tweenEasing_9)); }
	inline float get_tweenEasing_9() const { return ___tweenEasing_9; }
	inline float* get_address_of_tweenEasing_9() { return &___tweenEasing_9; }
	inline void set_tweenEasing_9(float value)
	{
		___tweenEasing_9 = value;
	}

	inline static int32_t get_offset_of_curve_10() { return static_cast<int32_t>(offsetof(TweenFrameData_1_t2567405166, ___curve_10)); }
	inline SingleU5BU5D_t2316563989* get_curve_10() const { return ___curve_10; }
	inline SingleU5BU5D_t2316563989** get_address_of_curve_10() { return &___curve_10; }
	inline void set_curve_10(SingleU5BU5D_t2316563989* value)
	{
		___curve_10 = value;
		Il2CppCodeGenWriteBarrier(&___curve_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
