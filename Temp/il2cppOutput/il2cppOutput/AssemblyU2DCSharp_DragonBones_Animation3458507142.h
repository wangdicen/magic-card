#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData>
struct Dictionary_2_t2304799634;
// System.Collections.Generic.List`1<DragonBones.AnimationState>
struct List_1_t442060963;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.AnimationState
struct AnimationState_t3368842707;
// DragonBones.AnimationConfig
struct AnimationConfig_t1180894056;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.Animation
struct  Animation_t3458507142  : public BaseObject_t3159603414
{
public:
	// System.Single DragonBones.Animation::timeScale
	float ___timeScale_5;
	// System.Boolean DragonBones.Animation::_isPlaying
	bool ____isPlaying_6;
	// System.Boolean DragonBones.Animation::_animationStateDirty
	bool ____animationStateDirty_7;
	// System.Boolean DragonBones.Animation::_timelineStateDirty
	bool ____timelineStateDirty_8;
	// System.Int32 DragonBones.Animation::_cacheFrameIndex
	int32_t ____cacheFrameIndex_9;
	// System.Collections.Generic.List`1<System.String> DragonBones.Animation::_animationNames
	List_1_t1375417109 * ____animationNames_10;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData> DragonBones.Animation::_animations
	Dictionary_2_t2304799634 * ____animations_11;
	// System.Collections.Generic.List`1<DragonBones.AnimationState> DragonBones.Animation::_animationStates
	List_1_t442060963 * ____animationStates_12;
	// DragonBones.Armature DragonBones.Animation::_armature
	Armature_t2093713247 * ____armature_13;
	// DragonBones.AnimationState DragonBones.Animation::_lastAnimationState
	AnimationState_t3368842707 * ____lastAnimationState_14;
	// DragonBones.AnimationConfig DragonBones.Animation::_animationConfig
	AnimationConfig_t1180894056 * ____animationConfig_15;

public:
	inline static int32_t get_offset_of_timeScale_5() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ___timeScale_5)); }
	inline float get_timeScale_5() const { return ___timeScale_5; }
	inline float* get_address_of_timeScale_5() { return &___timeScale_5; }
	inline void set_timeScale_5(float value)
	{
		___timeScale_5 = value;
	}

	inline static int32_t get_offset_of__isPlaying_6() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____isPlaying_6)); }
	inline bool get__isPlaying_6() const { return ____isPlaying_6; }
	inline bool* get_address_of__isPlaying_6() { return &____isPlaying_6; }
	inline void set__isPlaying_6(bool value)
	{
		____isPlaying_6 = value;
	}

	inline static int32_t get_offset_of__animationStateDirty_7() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____animationStateDirty_7)); }
	inline bool get__animationStateDirty_7() const { return ____animationStateDirty_7; }
	inline bool* get_address_of__animationStateDirty_7() { return &____animationStateDirty_7; }
	inline void set__animationStateDirty_7(bool value)
	{
		____animationStateDirty_7 = value;
	}

	inline static int32_t get_offset_of__timelineStateDirty_8() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____timelineStateDirty_8)); }
	inline bool get__timelineStateDirty_8() const { return ____timelineStateDirty_8; }
	inline bool* get_address_of__timelineStateDirty_8() { return &____timelineStateDirty_8; }
	inline void set__timelineStateDirty_8(bool value)
	{
		____timelineStateDirty_8 = value;
	}

	inline static int32_t get_offset_of__cacheFrameIndex_9() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____cacheFrameIndex_9)); }
	inline int32_t get__cacheFrameIndex_9() const { return ____cacheFrameIndex_9; }
	inline int32_t* get_address_of__cacheFrameIndex_9() { return &____cacheFrameIndex_9; }
	inline void set__cacheFrameIndex_9(int32_t value)
	{
		____cacheFrameIndex_9 = value;
	}

	inline static int32_t get_offset_of__animationNames_10() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____animationNames_10)); }
	inline List_1_t1375417109 * get__animationNames_10() const { return ____animationNames_10; }
	inline List_1_t1375417109 ** get_address_of__animationNames_10() { return &____animationNames_10; }
	inline void set__animationNames_10(List_1_t1375417109 * value)
	{
		____animationNames_10 = value;
		Il2CppCodeGenWriteBarrier(&____animationNames_10, value);
	}

	inline static int32_t get_offset_of__animations_11() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____animations_11)); }
	inline Dictionary_2_t2304799634 * get__animations_11() const { return ____animations_11; }
	inline Dictionary_2_t2304799634 ** get_address_of__animations_11() { return &____animations_11; }
	inline void set__animations_11(Dictionary_2_t2304799634 * value)
	{
		____animations_11 = value;
		Il2CppCodeGenWriteBarrier(&____animations_11, value);
	}

	inline static int32_t get_offset_of__animationStates_12() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____animationStates_12)); }
	inline List_1_t442060963 * get__animationStates_12() const { return ____animationStates_12; }
	inline List_1_t442060963 ** get_address_of__animationStates_12() { return &____animationStates_12; }
	inline void set__animationStates_12(List_1_t442060963 * value)
	{
		____animationStates_12 = value;
		Il2CppCodeGenWriteBarrier(&____animationStates_12, value);
	}

	inline static int32_t get_offset_of__armature_13() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____armature_13)); }
	inline Armature_t2093713247 * get__armature_13() const { return ____armature_13; }
	inline Armature_t2093713247 ** get_address_of__armature_13() { return &____armature_13; }
	inline void set__armature_13(Armature_t2093713247 * value)
	{
		____armature_13 = value;
		Il2CppCodeGenWriteBarrier(&____armature_13, value);
	}

	inline static int32_t get_offset_of__lastAnimationState_14() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____lastAnimationState_14)); }
	inline AnimationState_t3368842707 * get__lastAnimationState_14() const { return ____lastAnimationState_14; }
	inline AnimationState_t3368842707 ** get_address_of__lastAnimationState_14() { return &____lastAnimationState_14; }
	inline void set__lastAnimationState_14(AnimationState_t3368842707 * value)
	{
		____lastAnimationState_14 = value;
		Il2CppCodeGenWriteBarrier(&____lastAnimationState_14, value);
	}

	inline static int32_t get_offset_of__animationConfig_15() { return static_cast<int32_t>(offsetof(Animation_t3458507142, ____animationConfig_15)); }
	inline AnimationConfig_t1180894056 * get__animationConfig_15() const { return ____animationConfig_15; }
	inline AnimationConfig_t1180894056 ** get_address_of__animationConfig_15() { return &____animationConfig_15; }
	inline void set__animationConfig_15(AnimationConfig_t1180894056 * value)
	{
		____animationConfig_15 = value;
		Il2CppCodeGenWriteBarrier(&____animationConfig_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
