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
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneTimelineData>
struct Dictionary_2_t1032101271;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotTimelineData>
struct Dictionary_2_t103630289;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,DragonBones.FFDTimelineData>>>
struct Dictionary_2_t3340674711;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t1844984270;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t3342442422;
// DragonBones.ZOrderTimelineData
struct ZOrderTimelineData_t3965721093;

#include "AssemblyU2DCSharp_DragonBones_TimelineData_1_gen3246274352.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.AnimationData
struct  AnimationData_t1484381264  : public TimelineData_1_t3246274352
{
public:
	// System.UInt32 DragonBones.AnimationData::frameCount
	uint32_t ___frameCount_8;
	// System.UInt32 DragonBones.AnimationData::playTimes
	uint32_t ___playTimes_9;
	// System.Single DragonBones.AnimationData::duration
	float ___duration_10;
	// System.Single DragonBones.AnimationData::fadeInTime
	float ___fadeInTime_11;
	// System.Single DragonBones.AnimationData::cacheFrameRate
	float ___cacheFrameRate_12;
	// System.String DragonBones.AnimationData::name
	String_t* ___name_13;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneTimelineData> DragonBones.AnimationData::boneTimelines
	Dictionary_2_t1032101271 * ___boneTimelines_14;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotTimelineData> DragonBones.AnimationData::slotTimelines
	Dictionary_2_t103630289 * ___slotTimelines_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,DragonBones.FFDTimelineData>>> DragonBones.AnimationData::ffdTimelines
	Dictionary_2_t3340674711 * ___ffdTimelines_16;
	// System.Collections.Generic.List`1<System.Boolean> DragonBones.AnimationData::cachedFrames
	List_1_t1844984270 * ___cachedFrames_17;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> DragonBones.AnimationData::boneCachedFrameIndices
	Dictionary_2_t3342442422 * ___boneCachedFrameIndices_18;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> DragonBones.AnimationData::slotCachedFrameIndices
	Dictionary_2_t3342442422 * ___slotCachedFrameIndices_19;
	// DragonBones.ZOrderTimelineData DragonBones.AnimationData::zOrderTimeline
	ZOrderTimelineData_t3965721093 * ___zOrderTimeline_20;

public:
	inline static int32_t get_offset_of_frameCount_8() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___frameCount_8)); }
	inline uint32_t get_frameCount_8() const { return ___frameCount_8; }
	inline uint32_t* get_address_of_frameCount_8() { return &___frameCount_8; }
	inline void set_frameCount_8(uint32_t value)
	{
		___frameCount_8 = value;
	}

	inline static int32_t get_offset_of_playTimes_9() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___playTimes_9)); }
	inline uint32_t get_playTimes_9() const { return ___playTimes_9; }
	inline uint32_t* get_address_of_playTimes_9() { return &___playTimes_9; }
	inline void set_playTimes_9(uint32_t value)
	{
		___playTimes_9 = value;
	}

	inline static int32_t get_offset_of_duration_10() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___duration_10)); }
	inline float get_duration_10() const { return ___duration_10; }
	inline float* get_address_of_duration_10() { return &___duration_10; }
	inline void set_duration_10(float value)
	{
		___duration_10 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_11() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___fadeInTime_11)); }
	inline float get_fadeInTime_11() const { return ___fadeInTime_11; }
	inline float* get_address_of_fadeInTime_11() { return &___fadeInTime_11; }
	inline void set_fadeInTime_11(float value)
	{
		___fadeInTime_11 = value;
	}

	inline static int32_t get_offset_of_cacheFrameRate_12() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___cacheFrameRate_12)); }
	inline float get_cacheFrameRate_12() const { return ___cacheFrameRate_12; }
	inline float* get_address_of_cacheFrameRate_12() { return &___cacheFrameRate_12; }
	inline void set_cacheFrameRate_12(float value)
	{
		___cacheFrameRate_12 = value;
	}

	inline static int32_t get_offset_of_name_13() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___name_13)); }
	inline String_t* get_name_13() const { return ___name_13; }
	inline String_t** get_address_of_name_13() { return &___name_13; }
	inline void set_name_13(String_t* value)
	{
		___name_13 = value;
		Il2CppCodeGenWriteBarrier(&___name_13, value);
	}

	inline static int32_t get_offset_of_boneTimelines_14() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___boneTimelines_14)); }
	inline Dictionary_2_t1032101271 * get_boneTimelines_14() const { return ___boneTimelines_14; }
	inline Dictionary_2_t1032101271 ** get_address_of_boneTimelines_14() { return &___boneTimelines_14; }
	inline void set_boneTimelines_14(Dictionary_2_t1032101271 * value)
	{
		___boneTimelines_14 = value;
		Il2CppCodeGenWriteBarrier(&___boneTimelines_14, value);
	}

	inline static int32_t get_offset_of_slotTimelines_15() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___slotTimelines_15)); }
	inline Dictionary_2_t103630289 * get_slotTimelines_15() const { return ___slotTimelines_15; }
	inline Dictionary_2_t103630289 ** get_address_of_slotTimelines_15() { return &___slotTimelines_15; }
	inline void set_slotTimelines_15(Dictionary_2_t103630289 * value)
	{
		___slotTimelines_15 = value;
		Il2CppCodeGenWriteBarrier(&___slotTimelines_15, value);
	}

	inline static int32_t get_offset_of_ffdTimelines_16() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___ffdTimelines_16)); }
	inline Dictionary_2_t3340674711 * get_ffdTimelines_16() const { return ___ffdTimelines_16; }
	inline Dictionary_2_t3340674711 ** get_address_of_ffdTimelines_16() { return &___ffdTimelines_16; }
	inline void set_ffdTimelines_16(Dictionary_2_t3340674711 * value)
	{
		___ffdTimelines_16 = value;
		Il2CppCodeGenWriteBarrier(&___ffdTimelines_16, value);
	}

	inline static int32_t get_offset_of_cachedFrames_17() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___cachedFrames_17)); }
	inline List_1_t1844984270 * get_cachedFrames_17() const { return ___cachedFrames_17; }
	inline List_1_t1844984270 ** get_address_of_cachedFrames_17() { return &___cachedFrames_17; }
	inline void set_cachedFrames_17(List_1_t1844984270 * value)
	{
		___cachedFrames_17 = value;
		Il2CppCodeGenWriteBarrier(&___cachedFrames_17, value);
	}

	inline static int32_t get_offset_of_boneCachedFrameIndices_18() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___boneCachedFrameIndices_18)); }
	inline Dictionary_2_t3342442422 * get_boneCachedFrameIndices_18() const { return ___boneCachedFrameIndices_18; }
	inline Dictionary_2_t3342442422 ** get_address_of_boneCachedFrameIndices_18() { return &___boneCachedFrameIndices_18; }
	inline void set_boneCachedFrameIndices_18(Dictionary_2_t3342442422 * value)
	{
		___boneCachedFrameIndices_18 = value;
		Il2CppCodeGenWriteBarrier(&___boneCachedFrameIndices_18, value);
	}

	inline static int32_t get_offset_of_slotCachedFrameIndices_19() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___slotCachedFrameIndices_19)); }
	inline Dictionary_2_t3342442422 * get_slotCachedFrameIndices_19() const { return ___slotCachedFrameIndices_19; }
	inline Dictionary_2_t3342442422 ** get_address_of_slotCachedFrameIndices_19() { return &___slotCachedFrameIndices_19; }
	inline void set_slotCachedFrameIndices_19(Dictionary_2_t3342442422 * value)
	{
		___slotCachedFrameIndices_19 = value;
		Il2CppCodeGenWriteBarrier(&___slotCachedFrameIndices_19, value);
	}

	inline static int32_t get_offset_of_zOrderTimeline_20() { return static_cast<int32_t>(offsetof(AnimationData_t1484381264, ___zOrderTimeline_20)); }
	inline ZOrderTimelineData_t3965721093 * get_zOrderTimeline_20() const { return ___zOrderTimeline_20; }
	inline ZOrderTimelineData_t3965721093 ** get_address_of_zOrderTimeline_20() { return &___zOrderTimeline_20; }
	inline void set_zOrderTimeline_20(ZOrderTimelineData_t3965721093 * value)
	{
		___zOrderTimeline_20 = value;
		Il2CppCodeGenWriteBarrier(&___zOrderTimeline_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
