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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<DragonBones.BoneTimelineState>
struct List_1_t3938084670;
// System.Collections.Generic.List`1<DragonBones.SlotTimelineState>
struct List_1_t925288004;
// System.Collections.Generic.List`1<DragonBones.FFDTimelineState>
struct List_1_t3163085890;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationTimelineState
struct AnimationTimelineState_t2148066322;
// DragonBones.ZOrderTimelineState
struct ZOrderTimelineState_t2980966078;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.AnimationState
struct  AnimationState_t3368842707  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.AnimationState::displayControl
	bool ___displayControl_5;
	// System.Boolean DragonBones.AnimationState::additiveBlending
	bool ___additiveBlending_6;
	// System.Boolean DragonBones.AnimationState::actionEnabled
	bool ___actionEnabled_7;
	// System.UInt32 DragonBones.AnimationState::playTimes
	uint32_t ___playTimes_8;
	// System.Single DragonBones.AnimationState::timeScale
	float ___timeScale_9;
	// System.Single DragonBones.AnimationState::weight
	float ___weight_10;
	// System.Single DragonBones.AnimationState::autoFadeOutTime
	float ___autoFadeOutTime_11;
	// System.Single DragonBones.AnimationState::fadeTotalTime
	float ___fadeTotalTime_12;
	// System.Int32 DragonBones.AnimationState::_playheadState
	int32_t ____playheadState_13;
	// System.Int32 DragonBones.AnimationState::_fadeState
	int32_t ____fadeState_14;
	// System.Int32 DragonBones.AnimationState::_subFadeState
	int32_t ____subFadeState_15;
	// System.Int32 DragonBones.AnimationState::_layer
	int32_t ____layer_16;
	// System.Single DragonBones.AnimationState::_position
	float ____position_17;
	// System.Single DragonBones.AnimationState::_duration
	float ____duration_18;
	// System.Single DragonBones.AnimationState::_fadeTime
	float ____fadeTime_19;
	// System.Single DragonBones.AnimationState::_time
	float ____time_20;
	// System.Single DragonBones.AnimationState::_fadeProgress
	float ____fadeProgress_21;
	// System.Single DragonBones.AnimationState::_weightResult
	float ____weightResult_22;
	// System.String DragonBones.AnimationState::_name
	String_t* ____name_23;
	// System.String DragonBones.AnimationState::_group
	String_t* ____group_24;
	// System.Collections.Generic.List`1<System.String> DragonBones.AnimationState::_boneMask
	List_1_t1375417109 * ____boneMask_25;
	// System.Collections.Generic.List`1<DragonBones.BoneTimelineState> DragonBones.AnimationState::_boneTimelines
	List_1_t3938084670 * ____boneTimelines_26;
	// System.Collections.Generic.List`1<DragonBones.SlotTimelineState> DragonBones.AnimationState::_slotTimelines
	List_1_t925288004 * ____slotTimelines_27;
	// System.Collections.Generic.List`1<DragonBones.FFDTimelineState> DragonBones.AnimationState::_ffdTimelines
	List_1_t3163085890 * ____ffdTimelines_28;
	// DragonBones.AnimationData DragonBones.AnimationState::_animationData
	AnimationData_t1484381264 * ____animationData_29;
	// DragonBones.Armature DragonBones.AnimationState::_armature
	Armature_t2093713247 * ____armature_30;
	// DragonBones.AnimationTimelineState DragonBones.AnimationState::_timeline
	AnimationTimelineState_t2148066322 * ____timeline_31;
	// DragonBones.ZOrderTimelineState DragonBones.AnimationState::_zOrderTimeline
	ZOrderTimelineState_t2980966078 * ____zOrderTimeline_32;

public:
	inline static int32_t get_offset_of_displayControl_5() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___displayControl_5)); }
	inline bool get_displayControl_5() const { return ___displayControl_5; }
	inline bool* get_address_of_displayControl_5() { return &___displayControl_5; }
	inline void set_displayControl_5(bool value)
	{
		___displayControl_5 = value;
	}

	inline static int32_t get_offset_of_additiveBlending_6() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___additiveBlending_6)); }
	inline bool get_additiveBlending_6() const { return ___additiveBlending_6; }
	inline bool* get_address_of_additiveBlending_6() { return &___additiveBlending_6; }
	inline void set_additiveBlending_6(bool value)
	{
		___additiveBlending_6 = value;
	}

	inline static int32_t get_offset_of_actionEnabled_7() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___actionEnabled_7)); }
	inline bool get_actionEnabled_7() const { return ___actionEnabled_7; }
	inline bool* get_address_of_actionEnabled_7() { return &___actionEnabled_7; }
	inline void set_actionEnabled_7(bool value)
	{
		___actionEnabled_7 = value;
	}

	inline static int32_t get_offset_of_playTimes_8() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___playTimes_8)); }
	inline uint32_t get_playTimes_8() const { return ___playTimes_8; }
	inline uint32_t* get_address_of_playTimes_8() { return &___playTimes_8; }
	inline void set_playTimes_8(uint32_t value)
	{
		___playTimes_8 = value;
	}

	inline static int32_t get_offset_of_timeScale_9() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___timeScale_9)); }
	inline float get_timeScale_9() const { return ___timeScale_9; }
	inline float* get_address_of_timeScale_9() { return &___timeScale_9; }
	inline void set_timeScale_9(float value)
	{
		___timeScale_9 = value;
	}

	inline static int32_t get_offset_of_weight_10() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___weight_10)); }
	inline float get_weight_10() const { return ___weight_10; }
	inline float* get_address_of_weight_10() { return &___weight_10; }
	inline void set_weight_10(float value)
	{
		___weight_10 = value;
	}

	inline static int32_t get_offset_of_autoFadeOutTime_11() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___autoFadeOutTime_11)); }
	inline float get_autoFadeOutTime_11() const { return ___autoFadeOutTime_11; }
	inline float* get_address_of_autoFadeOutTime_11() { return &___autoFadeOutTime_11; }
	inline void set_autoFadeOutTime_11(float value)
	{
		___autoFadeOutTime_11 = value;
	}

	inline static int32_t get_offset_of_fadeTotalTime_12() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ___fadeTotalTime_12)); }
	inline float get_fadeTotalTime_12() const { return ___fadeTotalTime_12; }
	inline float* get_address_of_fadeTotalTime_12() { return &___fadeTotalTime_12; }
	inline void set_fadeTotalTime_12(float value)
	{
		___fadeTotalTime_12 = value;
	}

	inline static int32_t get_offset_of__playheadState_13() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____playheadState_13)); }
	inline int32_t get__playheadState_13() const { return ____playheadState_13; }
	inline int32_t* get_address_of__playheadState_13() { return &____playheadState_13; }
	inline void set__playheadState_13(int32_t value)
	{
		____playheadState_13 = value;
	}

	inline static int32_t get_offset_of__fadeState_14() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____fadeState_14)); }
	inline int32_t get__fadeState_14() const { return ____fadeState_14; }
	inline int32_t* get_address_of__fadeState_14() { return &____fadeState_14; }
	inline void set__fadeState_14(int32_t value)
	{
		____fadeState_14 = value;
	}

	inline static int32_t get_offset_of__subFadeState_15() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____subFadeState_15)); }
	inline int32_t get__subFadeState_15() const { return ____subFadeState_15; }
	inline int32_t* get_address_of__subFadeState_15() { return &____subFadeState_15; }
	inline void set__subFadeState_15(int32_t value)
	{
		____subFadeState_15 = value;
	}

	inline static int32_t get_offset_of__layer_16() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____layer_16)); }
	inline int32_t get__layer_16() const { return ____layer_16; }
	inline int32_t* get_address_of__layer_16() { return &____layer_16; }
	inline void set__layer_16(int32_t value)
	{
		____layer_16 = value;
	}

	inline static int32_t get_offset_of__position_17() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____position_17)); }
	inline float get__position_17() const { return ____position_17; }
	inline float* get_address_of__position_17() { return &____position_17; }
	inline void set__position_17(float value)
	{
		____position_17 = value;
	}

	inline static int32_t get_offset_of__duration_18() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____duration_18)); }
	inline float get__duration_18() const { return ____duration_18; }
	inline float* get_address_of__duration_18() { return &____duration_18; }
	inline void set__duration_18(float value)
	{
		____duration_18 = value;
	}

	inline static int32_t get_offset_of__fadeTime_19() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____fadeTime_19)); }
	inline float get__fadeTime_19() const { return ____fadeTime_19; }
	inline float* get_address_of__fadeTime_19() { return &____fadeTime_19; }
	inline void set__fadeTime_19(float value)
	{
		____fadeTime_19 = value;
	}

	inline static int32_t get_offset_of__time_20() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____time_20)); }
	inline float get__time_20() const { return ____time_20; }
	inline float* get_address_of__time_20() { return &____time_20; }
	inline void set__time_20(float value)
	{
		____time_20 = value;
	}

	inline static int32_t get_offset_of__fadeProgress_21() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____fadeProgress_21)); }
	inline float get__fadeProgress_21() const { return ____fadeProgress_21; }
	inline float* get_address_of__fadeProgress_21() { return &____fadeProgress_21; }
	inline void set__fadeProgress_21(float value)
	{
		____fadeProgress_21 = value;
	}

	inline static int32_t get_offset_of__weightResult_22() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____weightResult_22)); }
	inline float get__weightResult_22() const { return ____weightResult_22; }
	inline float* get_address_of__weightResult_22() { return &____weightResult_22; }
	inline void set__weightResult_22(float value)
	{
		____weightResult_22 = value;
	}

	inline static int32_t get_offset_of__name_23() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____name_23)); }
	inline String_t* get__name_23() const { return ____name_23; }
	inline String_t** get_address_of__name_23() { return &____name_23; }
	inline void set__name_23(String_t* value)
	{
		____name_23 = value;
		Il2CppCodeGenWriteBarrier(&____name_23, value);
	}

	inline static int32_t get_offset_of__group_24() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____group_24)); }
	inline String_t* get__group_24() const { return ____group_24; }
	inline String_t** get_address_of__group_24() { return &____group_24; }
	inline void set__group_24(String_t* value)
	{
		____group_24 = value;
		Il2CppCodeGenWriteBarrier(&____group_24, value);
	}

	inline static int32_t get_offset_of__boneMask_25() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____boneMask_25)); }
	inline List_1_t1375417109 * get__boneMask_25() const { return ____boneMask_25; }
	inline List_1_t1375417109 ** get_address_of__boneMask_25() { return &____boneMask_25; }
	inline void set__boneMask_25(List_1_t1375417109 * value)
	{
		____boneMask_25 = value;
		Il2CppCodeGenWriteBarrier(&____boneMask_25, value);
	}

	inline static int32_t get_offset_of__boneTimelines_26() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____boneTimelines_26)); }
	inline List_1_t3938084670 * get__boneTimelines_26() const { return ____boneTimelines_26; }
	inline List_1_t3938084670 ** get_address_of__boneTimelines_26() { return &____boneTimelines_26; }
	inline void set__boneTimelines_26(List_1_t3938084670 * value)
	{
		____boneTimelines_26 = value;
		Il2CppCodeGenWriteBarrier(&____boneTimelines_26, value);
	}

	inline static int32_t get_offset_of__slotTimelines_27() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____slotTimelines_27)); }
	inline List_1_t925288004 * get__slotTimelines_27() const { return ____slotTimelines_27; }
	inline List_1_t925288004 ** get_address_of__slotTimelines_27() { return &____slotTimelines_27; }
	inline void set__slotTimelines_27(List_1_t925288004 * value)
	{
		____slotTimelines_27 = value;
		Il2CppCodeGenWriteBarrier(&____slotTimelines_27, value);
	}

	inline static int32_t get_offset_of__ffdTimelines_28() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____ffdTimelines_28)); }
	inline List_1_t3163085890 * get__ffdTimelines_28() const { return ____ffdTimelines_28; }
	inline List_1_t3163085890 ** get_address_of__ffdTimelines_28() { return &____ffdTimelines_28; }
	inline void set__ffdTimelines_28(List_1_t3163085890 * value)
	{
		____ffdTimelines_28 = value;
		Il2CppCodeGenWriteBarrier(&____ffdTimelines_28, value);
	}

	inline static int32_t get_offset_of__animationData_29() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____animationData_29)); }
	inline AnimationData_t1484381264 * get__animationData_29() const { return ____animationData_29; }
	inline AnimationData_t1484381264 ** get_address_of__animationData_29() { return &____animationData_29; }
	inline void set__animationData_29(AnimationData_t1484381264 * value)
	{
		____animationData_29 = value;
		Il2CppCodeGenWriteBarrier(&____animationData_29, value);
	}

	inline static int32_t get_offset_of__armature_30() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____armature_30)); }
	inline Armature_t2093713247 * get__armature_30() const { return ____armature_30; }
	inline Armature_t2093713247 ** get_address_of__armature_30() { return &____armature_30; }
	inline void set__armature_30(Armature_t2093713247 * value)
	{
		____armature_30 = value;
		Il2CppCodeGenWriteBarrier(&____armature_30, value);
	}

	inline static int32_t get_offset_of__timeline_31() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____timeline_31)); }
	inline AnimationTimelineState_t2148066322 * get__timeline_31() const { return ____timeline_31; }
	inline AnimationTimelineState_t2148066322 ** get_address_of__timeline_31() { return &____timeline_31; }
	inline void set__timeline_31(AnimationTimelineState_t2148066322 * value)
	{
		____timeline_31 = value;
		Il2CppCodeGenWriteBarrier(&____timeline_31, value);
	}

	inline static int32_t get_offset_of__zOrderTimeline_32() { return static_cast<int32_t>(offsetof(AnimationState_t3368842707, ____zOrderTimeline_32)); }
	inline ZOrderTimelineState_t2980966078 * get__zOrderTimeline_32() const { return ____zOrderTimeline_32; }
	inline ZOrderTimelineState_t2980966078 ** get_address_of__zOrderTimeline_32() { return &____zOrderTimeline_32; }
	inline void set__zOrderTimeline_32(ZOrderTimelineState_t2980966078 * value)
	{
		____zOrderTimeline_32 = value;
		Il2CppCodeGenWriteBarrier(&____zOrderTimeline_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
