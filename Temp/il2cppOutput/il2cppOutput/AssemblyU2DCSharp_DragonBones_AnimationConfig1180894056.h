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

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_AnimationFadeOutMode3110578871.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.AnimationConfig
struct  AnimationConfig_t1180894056  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.AnimationConfig::pauseFadeOut
	bool ___pauseFadeOut_5;
	// DragonBones.AnimationFadeOutMode DragonBones.AnimationConfig::fadeOutMode
	int32_t ___fadeOutMode_6;
	// System.Single DragonBones.AnimationConfig::fadeOutTime
	float ___fadeOutTime_7;
	// System.Single DragonBones.AnimationConfig::fadeOutEasing
	float ___fadeOutEasing_8;
	// System.Boolean DragonBones.AnimationConfig::additiveBlending
	bool ___additiveBlending_9;
	// System.Boolean DragonBones.AnimationConfig::displayControl
	bool ___displayControl_10;
	// System.Boolean DragonBones.AnimationConfig::pauseFadeIn
	bool ___pauseFadeIn_11;
	// System.Boolean DragonBones.AnimationConfig::actionEnabled
	bool ___actionEnabled_12;
	// System.Int32 DragonBones.AnimationConfig::playTimes
	int32_t ___playTimes_13;
	// System.Int32 DragonBones.AnimationConfig::layer
	int32_t ___layer_14;
	// System.Single DragonBones.AnimationConfig::position
	float ___position_15;
	// System.Single DragonBones.AnimationConfig::duration
	float ___duration_16;
	// System.Single DragonBones.AnimationConfig::timeScale
	float ___timeScale_17;
	// System.Single DragonBones.AnimationConfig::fadeInTime
	float ___fadeInTime_18;
	// System.Single DragonBones.AnimationConfig::autoFadeOutTime
	float ___autoFadeOutTime_19;
	// System.Single DragonBones.AnimationConfig::fadeInEasing
	float ___fadeInEasing_20;
	// System.Single DragonBones.AnimationConfig::weight
	float ___weight_21;
	// System.String DragonBones.AnimationConfig::name
	String_t* ___name_22;
	// System.String DragonBones.AnimationConfig::animationName
	String_t* ___animationName_23;
	// System.String DragonBones.AnimationConfig::group
	String_t* ___group_24;
	// System.Collections.Generic.List`1<System.String> DragonBones.AnimationConfig::boneMask
	List_1_t1375417109 * ___boneMask_25;

public:
	inline static int32_t get_offset_of_pauseFadeOut_5() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___pauseFadeOut_5)); }
	inline bool get_pauseFadeOut_5() const { return ___pauseFadeOut_5; }
	inline bool* get_address_of_pauseFadeOut_5() { return &___pauseFadeOut_5; }
	inline void set_pauseFadeOut_5(bool value)
	{
		___pauseFadeOut_5 = value;
	}

	inline static int32_t get_offset_of_fadeOutMode_6() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___fadeOutMode_6)); }
	inline int32_t get_fadeOutMode_6() const { return ___fadeOutMode_6; }
	inline int32_t* get_address_of_fadeOutMode_6() { return &___fadeOutMode_6; }
	inline void set_fadeOutMode_6(int32_t value)
	{
		___fadeOutMode_6 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_7() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___fadeOutTime_7)); }
	inline float get_fadeOutTime_7() const { return ___fadeOutTime_7; }
	inline float* get_address_of_fadeOutTime_7() { return &___fadeOutTime_7; }
	inline void set_fadeOutTime_7(float value)
	{
		___fadeOutTime_7 = value;
	}

	inline static int32_t get_offset_of_fadeOutEasing_8() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___fadeOutEasing_8)); }
	inline float get_fadeOutEasing_8() const { return ___fadeOutEasing_8; }
	inline float* get_address_of_fadeOutEasing_8() { return &___fadeOutEasing_8; }
	inline void set_fadeOutEasing_8(float value)
	{
		___fadeOutEasing_8 = value;
	}

	inline static int32_t get_offset_of_additiveBlending_9() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___additiveBlending_9)); }
	inline bool get_additiveBlending_9() const { return ___additiveBlending_9; }
	inline bool* get_address_of_additiveBlending_9() { return &___additiveBlending_9; }
	inline void set_additiveBlending_9(bool value)
	{
		___additiveBlending_9 = value;
	}

	inline static int32_t get_offset_of_displayControl_10() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___displayControl_10)); }
	inline bool get_displayControl_10() const { return ___displayControl_10; }
	inline bool* get_address_of_displayControl_10() { return &___displayControl_10; }
	inline void set_displayControl_10(bool value)
	{
		___displayControl_10 = value;
	}

	inline static int32_t get_offset_of_pauseFadeIn_11() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___pauseFadeIn_11)); }
	inline bool get_pauseFadeIn_11() const { return ___pauseFadeIn_11; }
	inline bool* get_address_of_pauseFadeIn_11() { return &___pauseFadeIn_11; }
	inline void set_pauseFadeIn_11(bool value)
	{
		___pauseFadeIn_11 = value;
	}

	inline static int32_t get_offset_of_actionEnabled_12() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___actionEnabled_12)); }
	inline bool get_actionEnabled_12() const { return ___actionEnabled_12; }
	inline bool* get_address_of_actionEnabled_12() { return &___actionEnabled_12; }
	inline void set_actionEnabled_12(bool value)
	{
		___actionEnabled_12 = value;
	}

	inline static int32_t get_offset_of_playTimes_13() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___playTimes_13)); }
	inline int32_t get_playTimes_13() const { return ___playTimes_13; }
	inline int32_t* get_address_of_playTimes_13() { return &___playTimes_13; }
	inline void set_playTimes_13(int32_t value)
	{
		___playTimes_13 = value;
	}

	inline static int32_t get_offset_of_layer_14() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___layer_14)); }
	inline int32_t get_layer_14() const { return ___layer_14; }
	inline int32_t* get_address_of_layer_14() { return &___layer_14; }
	inline void set_layer_14(int32_t value)
	{
		___layer_14 = value;
	}

	inline static int32_t get_offset_of_position_15() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___position_15)); }
	inline float get_position_15() const { return ___position_15; }
	inline float* get_address_of_position_15() { return &___position_15; }
	inline void set_position_15(float value)
	{
		___position_15 = value;
	}

	inline static int32_t get_offset_of_duration_16() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___duration_16)); }
	inline float get_duration_16() const { return ___duration_16; }
	inline float* get_address_of_duration_16() { return &___duration_16; }
	inline void set_duration_16(float value)
	{
		___duration_16 = value;
	}

	inline static int32_t get_offset_of_timeScale_17() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___timeScale_17)); }
	inline float get_timeScale_17() const { return ___timeScale_17; }
	inline float* get_address_of_timeScale_17() { return &___timeScale_17; }
	inline void set_timeScale_17(float value)
	{
		___timeScale_17 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_18() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___fadeInTime_18)); }
	inline float get_fadeInTime_18() const { return ___fadeInTime_18; }
	inline float* get_address_of_fadeInTime_18() { return &___fadeInTime_18; }
	inline void set_fadeInTime_18(float value)
	{
		___fadeInTime_18 = value;
	}

	inline static int32_t get_offset_of_autoFadeOutTime_19() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___autoFadeOutTime_19)); }
	inline float get_autoFadeOutTime_19() const { return ___autoFadeOutTime_19; }
	inline float* get_address_of_autoFadeOutTime_19() { return &___autoFadeOutTime_19; }
	inline void set_autoFadeOutTime_19(float value)
	{
		___autoFadeOutTime_19 = value;
	}

	inline static int32_t get_offset_of_fadeInEasing_20() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___fadeInEasing_20)); }
	inline float get_fadeInEasing_20() const { return ___fadeInEasing_20; }
	inline float* get_address_of_fadeInEasing_20() { return &___fadeInEasing_20; }
	inline void set_fadeInEasing_20(float value)
	{
		___fadeInEasing_20 = value;
	}

	inline static int32_t get_offset_of_weight_21() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___weight_21)); }
	inline float get_weight_21() const { return ___weight_21; }
	inline float* get_address_of_weight_21() { return &___weight_21; }
	inline void set_weight_21(float value)
	{
		___weight_21 = value;
	}

	inline static int32_t get_offset_of_name_22() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___name_22)); }
	inline String_t* get_name_22() const { return ___name_22; }
	inline String_t** get_address_of_name_22() { return &___name_22; }
	inline void set_name_22(String_t* value)
	{
		___name_22 = value;
		Il2CppCodeGenWriteBarrier(&___name_22, value);
	}

	inline static int32_t get_offset_of_animationName_23() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___animationName_23)); }
	inline String_t* get_animationName_23() const { return ___animationName_23; }
	inline String_t** get_address_of_animationName_23() { return &___animationName_23; }
	inline void set_animationName_23(String_t* value)
	{
		___animationName_23 = value;
		Il2CppCodeGenWriteBarrier(&___animationName_23, value);
	}

	inline static int32_t get_offset_of_group_24() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___group_24)); }
	inline String_t* get_group_24() const { return ___group_24; }
	inline String_t** get_address_of_group_24() { return &___group_24; }
	inline void set_group_24(String_t* value)
	{
		___group_24 = value;
		Il2CppCodeGenWriteBarrier(&___group_24, value);
	}

	inline static int32_t get_offset_of_boneMask_25() { return static_cast<int32_t>(offsetof(AnimationConfig_t1180894056, ___boneMask_25)); }
	inline List_1_t1375417109 * get_boneMask_25() const { return ___boneMask_25; }
	inline List_1_t1375417109 ** get_address_of_boneMask_25() { return &___boneMask_25; }
	inline void set_boneMask_25(List_1_t1375417109 * value)
	{
		___boneMask_25 = value;
		Il2CppCodeGenWriteBarrier(&___boneMask_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
