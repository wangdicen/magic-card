#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Transform
struct Transform_t3392663918;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_t3973475962;
// System.Collections.Generic.List`1<DragonBones.Slot>
struct List_1_t3973979572;
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.Bone
struct Bone_t2605290410;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "AssemblyU2DCSharp_DragonBones_TransformObject3102074189.h"
#include "AssemblyU2DCSharp_DragonBones_BoneTransformDirty310967568.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.Bone
struct  Bone_t2605290410  : public TransformObject_t3102074189
{
public:
	// System.Boolean DragonBones.Bone::inheritTranslation
	bool ___inheritTranslation_13;
	// System.Boolean DragonBones.Bone::inheritRotation
	bool ___inheritRotation_14;
	// System.Boolean DragonBones.Bone::inheritScale
	bool ___inheritScale_15;
	// System.Boolean DragonBones.Bone::ikBendPositive
	bool ___ikBendPositive_16;
	// System.Single DragonBones.Bone::length
	float ___length_17;
	// System.Single DragonBones.Bone::ikWeight
	float ___ikWeight_18;
	// DragonBones.BoneTransformDirty DragonBones.Bone::_transformDirty
	int32_t ____transformDirty_19;
	// System.Boolean DragonBones.Bone::_visible
	bool ____visible_20;
	// System.Int32 DragonBones.Bone::_cachedFrameIndex
	int32_t ____cachedFrameIndex_21;
	// System.UInt32 DragonBones.Bone::_ikChain
	uint32_t ____ikChain_22;
	// System.Int32 DragonBones.Bone::_ikChainIndex
	int32_t ____ikChainIndex_23;
	// System.Int32 DragonBones.Bone::_updateState
	int32_t ____updateState_24;
	// System.Int32 DragonBones.Bone::_blendLayer
	int32_t ____blendLayer_25;
	// System.Single DragonBones.Bone::_blendLeftWeight
	float ____blendLeftWeight_26;
	// System.Single DragonBones.Bone::_blendTotalWeight
	float ____blendTotalWeight_27;
	// DragonBones.Transform DragonBones.Bone::_animationPose
	Transform_t3392663918 * ____animationPose_28;
	// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Bone::_bones
	List_1_t3973475962 * ____bones_29;
	// System.Collections.Generic.List`1<DragonBones.Slot> DragonBones.Bone::_slots
	List_1_t3973979572 * ____slots_30;
	// DragonBones.BoneData DragonBones.Bone::_boneData
	BoneData_t1204886644 * ____boneData_31;
	// DragonBones.Bone DragonBones.Bone::_ik
	Bone_t2605290410 * ____ik_32;
	// System.Collections.Generic.List`1<System.Int32> DragonBones.Bone::_cachedFrameIndices
	List_1_t2522024052 * ____cachedFrameIndices_33;

public:
	inline static int32_t get_offset_of_inheritTranslation_13() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___inheritTranslation_13)); }
	inline bool get_inheritTranslation_13() const { return ___inheritTranslation_13; }
	inline bool* get_address_of_inheritTranslation_13() { return &___inheritTranslation_13; }
	inline void set_inheritTranslation_13(bool value)
	{
		___inheritTranslation_13 = value;
	}

	inline static int32_t get_offset_of_inheritRotation_14() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___inheritRotation_14)); }
	inline bool get_inheritRotation_14() const { return ___inheritRotation_14; }
	inline bool* get_address_of_inheritRotation_14() { return &___inheritRotation_14; }
	inline void set_inheritRotation_14(bool value)
	{
		___inheritRotation_14 = value;
	}

	inline static int32_t get_offset_of_inheritScale_15() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___inheritScale_15)); }
	inline bool get_inheritScale_15() const { return ___inheritScale_15; }
	inline bool* get_address_of_inheritScale_15() { return &___inheritScale_15; }
	inline void set_inheritScale_15(bool value)
	{
		___inheritScale_15 = value;
	}

	inline static int32_t get_offset_of_ikBendPositive_16() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___ikBendPositive_16)); }
	inline bool get_ikBendPositive_16() const { return ___ikBendPositive_16; }
	inline bool* get_address_of_ikBendPositive_16() { return &___ikBendPositive_16; }
	inline void set_ikBendPositive_16(bool value)
	{
		___ikBendPositive_16 = value;
	}

	inline static int32_t get_offset_of_length_17() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___length_17)); }
	inline float get_length_17() const { return ___length_17; }
	inline float* get_address_of_length_17() { return &___length_17; }
	inline void set_length_17(float value)
	{
		___length_17 = value;
	}

	inline static int32_t get_offset_of_ikWeight_18() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ___ikWeight_18)); }
	inline float get_ikWeight_18() const { return ___ikWeight_18; }
	inline float* get_address_of_ikWeight_18() { return &___ikWeight_18; }
	inline void set_ikWeight_18(float value)
	{
		___ikWeight_18 = value;
	}

	inline static int32_t get_offset_of__transformDirty_19() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____transformDirty_19)); }
	inline int32_t get__transformDirty_19() const { return ____transformDirty_19; }
	inline int32_t* get_address_of__transformDirty_19() { return &____transformDirty_19; }
	inline void set__transformDirty_19(int32_t value)
	{
		____transformDirty_19 = value;
	}

	inline static int32_t get_offset_of__visible_20() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____visible_20)); }
	inline bool get__visible_20() const { return ____visible_20; }
	inline bool* get_address_of__visible_20() { return &____visible_20; }
	inline void set__visible_20(bool value)
	{
		____visible_20 = value;
	}

	inline static int32_t get_offset_of__cachedFrameIndex_21() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____cachedFrameIndex_21)); }
	inline int32_t get__cachedFrameIndex_21() const { return ____cachedFrameIndex_21; }
	inline int32_t* get_address_of__cachedFrameIndex_21() { return &____cachedFrameIndex_21; }
	inline void set__cachedFrameIndex_21(int32_t value)
	{
		____cachedFrameIndex_21 = value;
	}

	inline static int32_t get_offset_of__ikChain_22() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____ikChain_22)); }
	inline uint32_t get__ikChain_22() const { return ____ikChain_22; }
	inline uint32_t* get_address_of__ikChain_22() { return &____ikChain_22; }
	inline void set__ikChain_22(uint32_t value)
	{
		____ikChain_22 = value;
	}

	inline static int32_t get_offset_of__ikChainIndex_23() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____ikChainIndex_23)); }
	inline int32_t get__ikChainIndex_23() const { return ____ikChainIndex_23; }
	inline int32_t* get_address_of__ikChainIndex_23() { return &____ikChainIndex_23; }
	inline void set__ikChainIndex_23(int32_t value)
	{
		____ikChainIndex_23 = value;
	}

	inline static int32_t get_offset_of__updateState_24() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____updateState_24)); }
	inline int32_t get__updateState_24() const { return ____updateState_24; }
	inline int32_t* get_address_of__updateState_24() { return &____updateState_24; }
	inline void set__updateState_24(int32_t value)
	{
		____updateState_24 = value;
	}

	inline static int32_t get_offset_of__blendLayer_25() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____blendLayer_25)); }
	inline int32_t get__blendLayer_25() const { return ____blendLayer_25; }
	inline int32_t* get_address_of__blendLayer_25() { return &____blendLayer_25; }
	inline void set__blendLayer_25(int32_t value)
	{
		____blendLayer_25 = value;
	}

	inline static int32_t get_offset_of__blendLeftWeight_26() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____blendLeftWeight_26)); }
	inline float get__blendLeftWeight_26() const { return ____blendLeftWeight_26; }
	inline float* get_address_of__blendLeftWeight_26() { return &____blendLeftWeight_26; }
	inline void set__blendLeftWeight_26(float value)
	{
		____blendLeftWeight_26 = value;
	}

	inline static int32_t get_offset_of__blendTotalWeight_27() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____blendTotalWeight_27)); }
	inline float get__blendTotalWeight_27() const { return ____blendTotalWeight_27; }
	inline float* get_address_of__blendTotalWeight_27() { return &____blendTotalWeight_27; }
	inline void set__blendTotalWeight_27(float value)
	{
		____blendTotalWeight_27 = value;
	}

	inline static int32_t get_offset_of__animationPose_28() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____animationPose_28)); }
	inline Transform_t3392663918 * get__animationPose_28() const { return ____animationPose_28; }
	inline Transform_t3392663918 ** get_address_of__animationPose_28() { return &____animationPose_28; }
	inline void set__animationPose_28(Transform_t3392663918 * value)
	{
		____animationPose_28 = value;
		Il2CppCodeGenWriteBarrier(&____animationPose_28, value);
	}

	inline static int32_t get_offset_of__bones_29() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____bones_29)); }
	inline List_1_t3973475962 * get__bones_29() const { return ____bones_29; }
	inline List_1_t3973475962 ** get_address_of__bones_29() { return &____bones_29; }
	inline void set__bones_29(List_1_t3973475962 * value)
	{
		____bones_29 = value;
		Il2CppCodeGenWriteBarrier(&____bones_29, value);
	}

	inline static int32_t get_offset_of__slots_30() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____slots_30)); }
	inline List_1_t3973979572 * get__slots_30() const { return ____slots_30; }
	inline List_1_t3973979572 ** get_address_of__slots_30() { return &____slots_30; }
	inline void set__slots_30(List_1_t3973979572 * value)
	{
		____slots_30 = value;
		Il2CppCodeGenWriteBarrier(&____slots_30, value);
	}

	inline static int32_t get_offset_of__boneData_31() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____boneData_31)); }
	inline BoneData_t1204886644 * get__boneData_31() const { return ____boneData_31; }
	inline BoneData_t1204886644 ** get_address_of__boneData_31() { return &____boneData_31; }
	inline void set__boneData_31(BoneData_t1204886644 * value)
	{
		____boneData_31 = value;
		Il2CppCodeGenWriteBarrier(&____boneData_31, value);
	}

	inline static int32_t get_offset_of__ik_32() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____ik_32)); }
	inline Bone_t2605290410 * get__ik_32() const { return ____ik_32; }
	inline Bone_t2605290410 ** get_address_of__ik_32() { return &____ik_32; }
	inline void set__ik_32(Bone_t2605290410 * value)
	{
		____ik_32 = value;
		Il2CppCodeGenWriteBarrier(&____ik_32, value);
	}

	inline static int32_t get_offset_of__cachedFrameIndices_33() { return static_cast<int32_t>(offsetof(Bone_t2605290410, ____cachedFrameIndices_33)); }
	inline List_1_t2522024052 * get__cachedFrameIndices_33() const { return ____cachedFrameIndices_33; }
	inline List_1_t2522024052 ** get_address_of__cachedFrameIndices_33() { return &____cachedFrameIndices_33; }
	inline void set__cachedFrameIndices_33(List_1_t2522024052 * value)
	{
		____cachedFrameIndices_33 = value;
		Il2CppCodeGenWriteBarrier(&____cachedFrameIndices_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
