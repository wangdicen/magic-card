#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Bone
struct Bone_t2605290410;
// DragonBones.Transform
struct Transform_t3392663918;

#include "AssemblyU2DCSharp_DragonBones_TweenTimelineState_23715336010.h"
#include "AssemblyU2DCSharp_DragonBones_TweenType2509021767.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BoneTimelineState
struct  BoneTimelineState_t2569899118  : public TweenTimelineState_2_t3715336010
{
public:
	// DragonBones.Bone DragonBones.BoneTimelineState::bone
	Bone_t2605290410 * ___bone_24;
	// System.Boolean DragonBones.BoneTimelineState::_transformDirty
	bool ____transformDirty_25;
	// DragonBones.TweenType DragonBones.BoneTimelineState::_tweenTransform
	int32_t ____tweenTransform_26;
	// DragonBones.TweenType DragonBones.BoneTimelineState::_tweenRotate
	int32_t ____tweenRotate_27;
	// DragonBones.TweenType DragonBones.BoneTimelineState::_tweenScale
	int32_t ____tweenScale_28;
	// DragonBones.Transform DragonBones.BoneTimelineState::_transform
	Transform_t3392663918 * ____transform_29;
	// DragonBones.Transform DragonBones.BoneTimelineState::_durationTransform
	Transform_t3392663918 * ____durationTransform_30;
	// DragonBones.Transform DragonBones.BoneTimelineState::_boneTransform
	Transform_t3392663918 * ____boneTransform_31;
	// DragonBones.Transform DragonBones.BoneTimelineState::_originalTransform
	Transform_t3392663918 * ____originalTransform_32;

public:
	inline static int32_t get_offset_of_bone_24() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ___bone_24)); }
	inline Bone_t2605290410 * get_bone_24() const { return ___bone_24; }
	inline Bone_t2605290410 ** get_address_of_bone_24() { return &___bone_24; }
	inline void set_bone_24(Bone_t2605290410 * value)
	{
		___bone_24 = value;
		Il2CppCodeGenWriteBarrier(&___bone_24, value);
	}

	inline static int32_t get_offset_of__transformDirty_25() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____transformDirty_25)); }
	inline bool get__transformDirty_25() const { return ____transformDirty_25; }
	inline bool* get_address_of__transformDirty_25() { return &____transformDirty_25; }
	inline void set__transformDirty_25(bool value)
	{
		____transformDirty_25 = value;
	}

	inline static int32_t get_offset_of__tweenTransform_26() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____tweenTransform_26)); }
	inline int32_t get__tweenTransform_26() const { return ____tweenTransform_26; }
	inline int32_t* get_address_of__tweenTransform_26() { return &____tweenTransform_26; }
	inline void set__tweenTransform_26(int32_t value)
	{
		____tweenTransform_26 = value;
	}

	inline static int32_t get_offset_of__tweenRotate_27() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____tweenRotate_27)); }
	inline int32_t get__tweenRotate_27() const { return ____tweenRotate_27; }
	inline int32_t* get_address_of__tweenRotate_27() { return &____tweenRotate_27; }
	inline void set__tweenRotate_27(int32_t value)
	{
		____tweenRotate_27 = value;
	}

	inline static int32_t get_offset_of__tweenScale_28() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____tweenScale_28)); }
	inline int32_t get__tweenScale_28() const { return ____tweenScale_28; }
	inline int32_t* get_address_of__tweenScale_28() { return &____tweenScale_28; }
	inline void set__tweenScale_28(int32_t value)
	{
		____tweenScale_28 = value;
	}

	inline static int32_t get_offset_of__transform_29() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____transform_29)); }
	inline Transform_t3392663918 * get__transform_29() const { return ____transform_29; }
	inline Transform_t3392663918 ** get_address_of__transform_29() { return &____transform_29; }
	inline void set__transform_29(Transform_t3392663918 * value)
	{
		____transform_29 = value;
		Il2CppCodeGenWriteBarrier(&____transform_29, value);
	}

	inline static int32_t get_offset_of__durationTransform_30() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____durationTransform_30)); }
	inline Transform_t3392663918 * get__durationTransform_30() const { return ____durationTransform_30; }
	inline Transform_t3392663918 ** get_address_of__durationTransform_30() { return &____durationTransform_30; }
	inline void set__durationTransform_30(Transform_t3392663918 * value)
	{
		____durationTransform_30 = value;
		Il2CppCodeGenWriteBarrier(&____durationTransform_30, value);
	}

	inline static int32_t get_offset_of__boneTransform_31() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____boneTransform_31)); }
	inline Transform_t3392663918 * get__boneTransform_31() const { return ____boneTransform_31; }
	inline Transform_t3392663918 ** get_address_of__boneTransform_31() { return &____boneTransform_31; }
	inline void set__boneTransform_31(Transform_t3392663918 * value)
	{
		____boneTransform_31 = value;
		Il2CppCodeGenWriteBarrier(&____boneTransform_31, value);
	}

	inline static int32_t get_offset_of__originalTransform_32() { return static_cast<int32_t>(offsetof(BoneTimelineState_t2569899118, ____originalTransform_32)); }
	inline Transform_t3392663918 * get__originalTransform_32() const { return ____originalTransform_32; }
	inline Transform_t3392663918 ** get_address_of__originalTransform_32() { return &____originalTransform_32; }
	inline void set__originalTransform_32(Transform_t3392663918 * value)
	{
		____originalTransform_32 = value;
		Il2CppCodeGenWriteBarrier(&____originalTransform_32, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
