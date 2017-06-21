﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.BoneTimelineData
struct BoneTimelineData_t211682901;
// DragonBones.BoneFrameData
struct BoneFrameData_t1992691541;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.AnimationTimelineState
struct AnimationTimelineState_t2148066322;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TimelineState`2<DragonBones.BoneFrameData,DragonBones.BoneTimelineData>
struct  TimelineState_2_t1676086975  : public BaseObject_t3159603414
{
public:
	// System.Int32 DragonBones.TimelineState`2::_playState
	int32_t ____playState_5;
	// System.UInt32 DragonBones.TimelineState`2::_currentPlayTimes
	uint32_t ____currentPlayTimes_6;
	// System.Single DragonBones.TimelineState`2::_currentTime
	float ____currentTime_7;
	// M DragonBones.TimelineState`2::_timelineData
	BoneTimelineData_t211682901 * ____timelineData_8;
	// System.UInt32 DragonBones.TimelineState`2::_frameRate
	uint32_t ____frameRate_9;
	// System.UInt32 DragonBones.TimelineState`2::_keyFrameCount
	uint32_t ____keyFrameCount_10;
	// System.UInt32 DragonBones.TimelineState`2::_frameCount
	uint32_t ____frameCount_11;
	// System.Single DragonBones.TimelineState`2::_position
	float ____position_12;
	// System.Single DragonBones.TimelineState`2::_duration
	float ____duration_13;
	// System.Single DragonBones.TimelineState`2::_animationDutation
	float ____animationDutation_14;
	// System.Single DragonBones.TimelineState`2::_timeScale
	float ____timeScale_15;
	// System.Single DragonBones.TimelineState`2::_timeOffset
	float ____timeOffset_16;
	// T DragonBones.TimelineState`2::_currentFrame
	BoneFrameData_t1992691541 * ____currentFrame_17;
	// DragonBones.Armature DragonBones.TimelineState`2::_armature
	Armature_t2093713247 * ____armature_18;
	// DragonBones.AnimationState DragonBones.TimelineState`2::_animationState
	AnimationState_t3368842707 * ____animationState_19;
	// DragonBones.AnimationTimelineState DragonBones.TimelineState`2::_mainTimeline
	AnimationTimelineState_t2148066322 * ____mainTimeline_20;

public:
	inline static int32_t get_offset_of__playState_5() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____playState_5)); }
	inline int32_t get__playState_5() const { return ____playState_5; }
	inline int32_t* get_address_of__playState_5() { return &____playState_5; }
	inline void set__playState_5(int32_t value)
	{
		____playState_5 = value;
	}

	inline static int32_t get_offset_of__currentPlayTimes_6() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____currentPlayTimes_6)); }
	inline uint32_t get__currentPlayTimes_6() const { return ____currentPlayTimes_6; }
	inline uint32_t* get_address_of__currentPlayTimes_6() { return &____currentPlayTimes_6; }
	inline void set__currentPlayTimes_6(uint32_t value)
	{
		____currentPlayTimes_6 = value;
	}

	inline static int32_t get_offset_of__currentTime_7() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____currentTime_7)); }
	inline float get__currentTime_7() const { return ____currentTime_7; }
	inline float* get_address_of__currentTime_7() { return &____currentTime_7; }
	inline void set__currentTime_7(float value)
	{
		____currentTime_7 = value;
	}

	inline static int32_t get_offset_of__timelineData_8() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____timelineData_8)); }
	inline BoneTimelineData_t211682901 * get__timelineData_8() const { return ____timelineData_8; }
	inline BoneTimelineData_t211682901 ** get_address_of__timelineData_8() { return &____timelineData_8; }
	inline void set__timelineData_8(BoneTimelineData_t211682901 * value)
	{
		____timelineData_8 = value;
		Il2CppCodeGenWriteBarrier(&____timelineData_8, value);
	}

	inline static int32_t get_offset_of__frameRate_9() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____frameRate_9)); }
	inline uint32_t get__frameRate_9() const { return ____frameRate_9; }
	inline uint32_t* get_address_of__frameRate_9() { return &____frameRate_9; }
	inline void set__frameRate_9(uint32_t value)
	{
		____frameRate_9 = value;
	}

	inline static int32_t get_offset_of__keyFrameCount_10() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____keyFrameCount_10)); }
	inline uint32_t get__keyFrameCount_10() const { return ____keyFrameCount_10; }
	inline uint32_t* get_address_of__keyFrameCount_10() { return &____keyFrameCount_10; }
	inline void set__keyFrameCount_10(uint32_t value)
	{
		____keyFrameCount_10 = value;
	}

	inline static int32_t get_offset_of__frameCount_11() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____frameCount_11)); }
	inline uint32_t get__frameCount_11() const { return ____frameCount_11; }
	inline uint32_t* get_address_of__frameCount_11() { return &____frameCount_11; }
	inline void set__frameCount_11(uint32_t value)
	{
		____frameCount_11 = value;
	}

	inline static int32_t get_offset_of__position_12() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____position_12)); }
	inline float get__position_12() const { return ____position_12; }
	inline float* get_address_of__position_12() { return &____position_12; }
	inline void set__position_12(float value)
	{
		____position_12 = value;
	}

	inline static int32_t get_offset_of__duration_13() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____duration_13)); }
	inline float get__duration_13() const { return ____duration_13; }
	inline float* get_address_of__duration_13() { return &____duration_13; }
	inline void set__duration_13(float value)
	{
		____duration_13 = value;
	}

	inline static int32_t get_offset_of__animationDutation_14() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____animationDutation_14)); }
	inline float get__animationDutation_14() const { return ____animationDutation_14; }
	inline float* get_address_of__animationDutation_14() { return &____animationDutation_14; }
	inline void set__animationDutation_14(float value)
	{
		____animationDutation_14 = value;
	}

	inline static int32_t get_offset_of__timeScale_15() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____timeScale_15)); }
	inline float get__timeScale_15() const { return ____timeScale_15; }
	inline float* get_address_of__timeScale_15() { return &____timeScale_15; }
	inline void set__timeScale_15(float value)
	{
		____timeScale_15 = value;
	}

	inline static int32_t get_offset_of__timeOffset_16() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____timeOffset_16)); }
	inline float get__timeOffset_16() const { return ____timeOffset_16; }
	inline float* get_address_of__timeOffset_16() { return &____timeOffset_16; }
	inline void set__timeOffset_16(float value)
	{
		____timeOffset_16 = value;
	}

	inline static int32_t get_offset_of__currentFrame_17() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____currentFrame_17)); }
	inline BoneFrameData_t1992691541 * get__currentFrame_17() const { return ____currentFrame_17; }
	inline BoneFrameData_t1992691541 ** get_address_of__currentFrame_17() { return &____currentFrame_17; }
	inline void set__currentFrame_17(BoneFrameData_t1992691541 * value)
	{
		____currentFrame_17 = value;
		Il2CppCodeGenWriteBarrier(&____currentFrame_17, value);
	}

	inline static int32_t get_offset_of__armature_18() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____armature_18)); }
	inline Armature_t2093713247 * get__armature_18() const { return ____armature_18; }
	inline Armature_t2093713247 ** get_address_of__armature_18() { return &____armature_18; }
	inline void set__armature_18(Armature_t2093713247 * value)
	{
		____armature_18 = value;
		Il2CppCodeGenWriteBarrier(&____armature_18, value);
	}

	inline static int32_t get_offset_of__animationState_19() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____animationState_19)); }
	inline AnimationState_t3368842707 * get__animationState_19() const { return ____animationState_19; }
	inline AnimationState_t3368842707 ** get_address_of__animationState_19() { return &____animationState_19; }
	inline void set__animationState_19(AnimationState_t3368842707 * value)
	{
		____animationState_19 = value;
		Il2CppCodeGenWriteBarrier(&____animationState_19, value);
	}

	inline static int32_t get_offset_of__mainTimeline_20() { return static_cast<int32_t>(offsetof(TimelineState_2_t1676086975, ____mainTimeline_20)); }
	inline AnimationTimelineState_t2148066322 * get__mainTimeline_20() const { return ____mainTimeline_20; }
	inline AnimationTimelineState_t2148066322 ** get_address_of__mainTimeline_20() { return &____mainTimeline_20; }
	inline void set__mainTimeline_20(AnimationTimelineState_t2148066322 * value)
	{
		____mainTimeline_20 = value;
		Il2CppCodeGenWriteBarrier(&____mainTimeline_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
