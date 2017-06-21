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
// DragonBones.Rectangle
struct Rectangle_t3461297009;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneData>
struct Dictionary_2_t2025305014;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotData>
struct Dictionary_2_t3263247856;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinData>
struct Dictionary_2_t2198428143;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData>
struct Dictionary_2_t2304799634;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// DragonBones.CustomData
struct CustomData_t2526548513;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<DragonBones.BoneData>
struct List_1_t2573072196;
// System.Collections.Generic.List`1<DragonBones.SlotData>
struct List_1_t3811015038;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.BoneData>>
struct Dictionary_2_t3393490566;
// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.AnimationData
struct AnimationData_t1484381264;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_ArmatureType3944729913.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.ArmatureData
struct  ArmatureData_t3944230313  : public BaseObject_t3159603414
{
public:
	// System.UInt32 DragonBones.ArmatureData::frameRate
	uint32_t ___frameRate_5;
	// DragonBones.ArmatureType DragonBones.ArmatureData::type
	int32_t ___type_6;
	// System.UInt32 DragonBones.ArmatureData::cacheFrameRate
	uint32_t ___cacheFrameRate_7;
	// System.Single DragonBones.ArmatureData::scale
	float ___scale_8;
	// System.String DragonBones.ArmatureData::name
	String_t* ___name_9;
	// DragonBones.Rectangle DragonBones.ArmatureData::aabb
	Rectangle_t3461297009 * ___aabb_10;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.BoneData> DragonBones.ArmatureData::bones
	Dictionary_2_t2025305014 * ___bones_11;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SlotData> DragonBones.ArmatureData::slots
	Dictionary_2_t3263247856 * ___slots_12;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.SkinData> DragonBones.ArmatureData::skins
	Dictionary_2_t2198428143 * ___skins_13;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.AnimationData> DragonBones.ArmatureData::animations
	Dictionary_2_t2304799634 * ___animations_14;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.ArmatureData::actions
	List_1_t3033330998 * ___actions_15;
	// DragonBones.DragonBonesData DragonBones.ArmatureData::parent
	DragonBonesData_t1202750760 * ___parent_16;
	// DragonBones.CustomData DragonBones.ArmatureData::userData
	CustomData_t2526548513 * ___userData_17;
	// System.Boolean DragonBones.ArmatureData::_boneDirty
	bool ____boneDirty_18;
	// System.Boolean DragonBones.ArmatureData::_slotDirty
	bool ____slotDirty_19;
	// System.Collections.Generic.List`1<System.String> DragonBones.ArmatureData::_animationNames
	List_1_t1375417109 * ____animationNames_20;
	// System.Collections.Generic.List`1<DragonBones.BoneData> DragonBones.ArmatureData::_sortedBones
	List_1_t2573072196 * ____sortedBones_21;
	// System.Collections.Generic.List`1<DragonBones.SlotData> DragonBones.ArmatureData::_sortedSlots
	List_1_t3811015038 * ____sortedSlots_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.BoneData>> DragonBones.ArmatureData::_bonesChildren
	Dictionary_2_t3393490566 * ____bonesChildren_23;
	// DragonBones.SkinData DragonBones.ArmatureData::_defaultSkin
	SkinData_t1378009773 * ____defaultSkin_24;
	// DragonBones.AnimationData DragonBones.ArmatureData::_defaultAnimation
	AnimationData_t1484381264 * ____defaultAnimation_25;

public:
	inline static int32_t get_offset_of_frameRate_5() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___frameRate_5)); }
	inline uint32_t get_frameRate_5() const { return ___frameRate_5; }
	inline uint32_t* get_address_of_frameRate_5() { return &___frameRate_5; }
	inline void set_frameRate_5(uint32_t value)
	{
		___frameRate_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_cacheFrameRate_7() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___cacheFrameRate_7)); }
	inline uint32_t get_cacheFrameRate_7() const { return ___cacheFrameRate_7; }
	inline uint32_t* get_address_of_cacheFrameRate_7() { return &___cacheFrameRate_7; }
	inline void set_cacheFrameRate_7(uint32_t value)
	{
		___cacheFrameRate_7 = value;
	}

	inline static int32_t get_offset_of_scale_8() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___scale_8)); }
	inline float get_scale_8() const { return ___scale_8; }
	inline float* get_address_of_scale_8() { return &___scale_8; }
	inline void set_scale_8(float value)
	{
		___scale_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier(&___name_9, value);
	}

	inline static int32_t get_offset_of_aabb_10() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___aabb_10)); }
	inline Rectangle_t3461297009 * get_aabb_10() const { return ___aabb_10; }
	inline Rectangle_t3461297009 ** get_address_of_aabb_10() { return &___aabb_10; }
	inline void set_aabb_10(Rectangle_t3461297009 * value)
	{
		___aabb_10 = value;
		Il2CppCodeGenWriteBarrier(&___aabb_10, value);
	}

	inline static int32_t get_offset_of_bones_11() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___bones_11)); }
	inline Dictionary_2_t2025305014 * get_bones_11() const { return ___bones_11; }
	inline Dictionary_2_t2025305014 ** get_address_of_bones_11() { return &___bones_11; }
	inline void set_bones_11(Dictionary_2_t2025305014 * value)
	{
		___bones_11 = value;
		Il2CppCodeGenWriteBarrier(&___bones_11, value);
	}

	inline static int32_t get_offset_of_slots_12() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___slots_12)); }
	inline Dictionary_2_t3263247856 * get_slots_12() const { return ___slots_12; }
	inline Dictionary_2_t3263247856 ** get_address_of_slots_12() { return &___slots_12; }
	inline void set_slots_12(Dictionary_2_t3263247856 * value)
	{
		___slots_12 = value;
		Il2CppCodeGenWriteBarrier(&___slots_12, value);
	}

	inline static int32_t get_offset_of_skins_13() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___skins_13)); }
	inline Dictionary_2_t2198428143 * get_skins_13() const { return ___skins_13; }
	inline Dictionary_2_t2198428143 ** get_address_of_skins_13() { return &___skins_13; }
	inline void set_skins_13(Dictionary_2_t2198428143 * value)
	{
		___skins_13 = value;
		Il2CppCodeGenWriteBarrier(&___skins_13, value);
	}

	inline static int32_t get_offset_of_animations_14() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___animations_14)); }
	inline Dictionary_2_t2304799634 * get_animations_14() const { return ___animations_14; }
	inline Dictionary_2_t2304799634 ** get_address_of_animations_14() { return &___animations_14; }
	inline void set_animations_14(Dictionary_2_t2304799634 * value)
	{
		___animations_14 = value;
		Il2CppCodeGenWriteBarrier(&___animations_14, value);
	}

	inline static int32_t get_offset_of_actions_15() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___actions_15)); }
	inline List_1_t3033330998 * get_actions_15() const { return ___actions_15; }
	inline List_1_t3033330998 ** get_address_of_actions_15() { return &___actions_15; }
	inline void set_actions_15(List_1_t3033330998 * value)
	{
		___actions_15 = value;
		Il2CppCodeGenWriteBarrier(&___actions_15, value);
	}

	inline static int32_t get_offset_of_parent_16() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___parent_16)); }
	inline DragonBonesData_t1202750760 * get_parent_16() const { return ___parent_16; }
	inline DragonBonesData_t1202750760 ** get_address_of_parent_16() { return &___parent_16; }
	inline void set_parent_16(DragonBonesData_t1202750760 * value)
	{
		___parent_16 = value;
		Il2CppCodeGenWriteBarrier(&___parent_16, value);
	}

	inline static int32_t get_offset_of_userData_17() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ___userData_17)); }
	inline CustomData_t2526548513 * get_userData_17() const { return ___userData_17; }
	inline CustomData_t2526548513 ** get_address_of_userData_17() { return &___userData_17; }
	inline void set_userData_17(CustomData_t2526548513 * value)
	{
		___userData_17 = value;
		Il2CppCodeGenWriteBarrier(&___userData_17, value);
	}

	inline static int32_t get_offset_of__boneDirty_18() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____boneDirty_18)); }
	inline bool get__boneDirty_18() const { return ____boneDirty_18; }
	inline bool* get_address_of__boneDirty_18() { return &____boneDirty_18; }
	inline void set__boneDirty_18(bool value)
	{
		____boneDirty_18 = value;
	}

	inline static int32_t get_offset_of__slotDirty_19() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____slotDirty_19)); }
	inline bool get__slotDirty_19() const { return ____slotDirty_19; }
	inline bool* get_address_of__slotDirty_19() { return &____slotDirty_19; }
	inline void set__slotDirty_19(bool value)
	{
		____slotDirty_19 = value;
	}

	inline static int32_t get_offset_of__animationNames_20() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____animationNames_20)); }
	inline List_1_t1375417109 * get__animationNames_20() const { return ____animationNames_20; }
	inline List_1_t1375417109 ** get_address_of__animationNames_20() { return &____animationNames_20; }
	inline void set__animationNames_20(List_1_t1375417109 * value)
	{
		____animationNames_20 = value;
		Il2CppCodeGenWriteBarrier(&____animationNames_20, value);
	}

	inline static int32_t get_offset_of__sortedBones_21() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____sortedBones_21)); }
	inline List_1_t2573072196 * get__sortedBones_21() const { return ____sortedBones_21; }
	inline List_1_t2573072196 ** get_address_of__sortedBones_21() { return &____sortedBones_21; }
	inline void set__sortedBones_21(List_1_t2573072196 * value)
	{
		____sortedBones_21 = value;
		Il2CppCodeGenWriteBarrier(&____sortedBones_21, value);
	}

	inline static int32_t get_offset_of__sortedSlots_22() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____sortedSlots_22)); }
	inline List_1_t3811015038 * get__sortedSlots_22() const { return ____sortedSlots_22; }
	inline List_1_t3811015038 ** get_address_of__sortedSlots_22() { return &____sortedSlots_22; }
	inline void set__sortedSlots_22(List_1_t3811015038 * value)
	{
		____sortedSlots_22 = value;
		Il2CppCodeGenWriteBarrier(&____sortedSlots_22, value);
	}

	inline static int32_t get_offset_of__bonesChildren_23() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____bonesChildren_23)); }
	inline Dictionary_2_t3393490566 * get__bonesChildren_23() const { return ____bonesChildren_23; }
	inline Dictionary_2_t3393490566 ** get_address_of__bonesChildren_23() { return &____bonesChildren_23; }
	inline void set__bonesChildren_23(Dictionary_2_t3393490566 * value)
	{
		____bonesChildren_23 = value;
		Il2CppCodeGenWriteBarrier(&____bonesChildren_23, value);
	}

	inline static int32_t get_offset_of__defaultSkin_24() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____defaultSkin_24)); }
	inline SkinData_t1378009773 * get__defaultSkin_24() const { return ____defaultSkin_24; }
	inline SkinData_t1378009773 ** get_address_of__defaultSkin_24() { return &____defaultSkin_24; }
	inline void set__defaultSkin_24(SkinData_t1378009773 * value)
	{
		____defaultSkin_24 = value;
		Il2CppCodeGenWriteBarrier(&____defaultSkin_24, value);
	}

	inline static int32_t get_offset_of__defaultAnimation_25() { return static_cast<int32_t>(offsetof(ArmatureData_t3944230313, ____defaultAnimation_25)); }
	inline AnimationData_t1484381264 * get__defaultAnimation_25() const { return ____defaultAnimation_25; }
	inline AnimationData_t1484381264 ** get_address_of__defaultAnimation_25() { return &____defaultAnimation_25; }
	inline void set__defaultAnimation_25(AnimationData_t1484381264 * value)
	{
		____defaultAnimation_25 = value;
		Il2CppCodeGenWriteBarrier(&____defaultAnimation_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
