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

#include "AssemblyU2DCSharp_DragonBones_TimelineState_2_gen301411867.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TweenTimelineState`2<DragonBones.SlotFrameData,DragonBones.SlotTimelineData>
struct  TweenTimelineState_2_t2340660902  : public TimelineState_2_t301411867
{
public:
	// System.Single DragonBones.TweenTimelineState`2::_tweenProgress
	float ____tweenProgress_21;
	// System.Single DragonBones.TweenTimelineState`2::_tweenEasing
	float ____tweenEasing_22;
	// System.Single[] DragonBones.TweenTimelineState`2::_curve
	SingleU5BU5D_t2316563989* ____curve_23;

public:
	inline static int32_t get_offset_of__tweenProgress_21() { return static_cast<int32_t>(offsetof(TweenTimelineState_2_t2340660902, ____tweenProgress_21)); }
	inline float get__tweenProgress_21() const { return ____tweenProgress_21; }
	inline float* get_address_of__tweenProgress_21() { return &____tweenProgress_21; }
	inline void set__tweenProgress_21(float value)
	{
		____tweenProgress_21 = value;
	}

	inline static int32_t get_offset_of__tweenEasing_22() { return static_cast<int32_t>(offsetof(TweenTimelineState_2_t2340660902, ____tweenEasing_22)); }
	inline float get__tweenEasing_22() const { return ____tweenEasing_22; }
	inline float* get_address_of__tweenEasing_22() { return &____tweenEasing_22; }
	inline void set__tweenEasing_22(float value)
	{
		____tweenEasing_22 = value;
	}

	inline static int32_t get_offset_of__curve_23() { return static_cast<int32_t>(offsetof(TweenTimelineState_2_t2340660902, ____curve_23)); }
	inline SingleU5BU5D_t2316563989* get__curve_23() const { return ____curve_23; }
	inline SingleU5BU5D_t2316563989** get_address_of__curve_23() { return &____curve_23; }
	inline void set__curve_23(SingleU5BU5D_t2316563989* value)
	{
		____curve_23 = value;
		Il2CppCodeGenWriteBarrier(&____curve_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
