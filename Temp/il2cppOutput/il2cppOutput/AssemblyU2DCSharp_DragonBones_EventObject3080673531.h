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
// DragonBones.AnimationFrameData
struct AnimationFrameData_t4096186617;
// DragonBones.CustomData
struct CustomData_t2526548513;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.Bone
struct Bone_t2605290410;
// DragonBones.Slot
struct Slot_t2605794020;
// DragonBones.AnimationState
struct AnimationState_t3368842707;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.EventObject
struct  EventObject_t3080673531  : public BaseObject_t3159603414
{
public:
	// System.String DragonBones.EventObject::type
	String_t* ___type_14;
	// System.String DragonBones.EventObject::name
	String_t* ___name_15;
	// DragonBones.AnimationFrameData DragonBones.EventObject::frame
	AnimationFrameData_t4096186617 * ___frame_16;
	// DragonBones.CustomData DragonBones.EventObject::data
	CustomData_t2526548513 * ___data_17;
	// DragonBones.Armature DragonBones.EventObject::armature
	Armature_t2093713247 * ___armature_18;
	// DragonBones.Bone DragonBones.EventObject::bone
	Bone_t2605290410 * ___bone_19;
	// DragonBones.Slot DragonBones.EventObject::slot
	Slot_t2605794020 * ___slot_20;
	// DragonBones.AnimationState DragonBones.EventObject::animationState
	AnimationState_t3368842707 * ___animationState_21;

public:
	inline static int32_t get_offset_of_type_14() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___type_14)); }
	inline String_t* get_type_14() const { return ___type_14; }
	inline String_t** get_address_of_type_14() { return &___type_14; }
	inline void set_type_14(String_t* value)
	{
		___type_14 = value;
		Il2CppCodeGenWriteBarrier(&___type_14, value);
	}

	inline static int32_t get_offset_of_name_15() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___name_15)); }
	inline String_t* get_name_15() const { return ___name_15; }
	inline String_t** get_address_of_name_15() { return &___name_15; }
	inline void set_name_15(String_t* value)
	{
		___name_15 = value;
		Il2CppCodeGenWriteBarrier(&___name_15, value);
	}

	inline static int32_t get_offset_of_frame_16() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___frame_16)); }
	inline AnimationFrameData_t4096186617 * get_frame_16() const { return ___frame_16; }
	inline AnimationFrameData_t4096186617 ** get_address_of_frame_16() { return &___frame_16; }
	inline void set_frame_16(AnimationFrameData_t4096186617 * value)
	{
		___frame_16 = value;
		Il2CppCodeGenWriteBarrier(&___frame_16, value);
	}

	inline static int32_t get_offset_of_data_17() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___data_17)); }
	inline CustomData_t2526548513 * get_data_17() const { return ___data_17; }
	inline CustomData_t2526548513 ** get_address_of_data_17() { return &___data_17; }
	inline void set_data_17(CustomData_t2526548513 * value)
	{
		___data_17 = value;
		Il2CppCodeGenWriteBarrier(&___data_17, value);
	}

	inline static int32_t get_offset_of_armature_18() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___armature_18)); }
	inline Armature_t2093713247 * get_armature_18() const { return ___armature_18; }
	inline Armature_t2093713247 ** get_address_of_armature_18() { return &___armature_18; }
	inline void set_armature_18(Armature_t2093713247 * value)
	{
		___armature_18 = value;
		Il2CppCodeGenWriteBarrier(&___armature_18, value);
	}

	inline static int32_t get_offset_of_bone_19() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___bone_19)); }
	inline Bone_t2605290410 * get_bone_19() const { return ___bone_19; }
	inline Bone_t2605290410 ** get_address_of_bone_19() { return &___bone_19; }
	inline void set_bone_19(Bone_t2605290410 * value)
	{
		___bone_19 = value;
		Il2CppCodeGenWriteBarrier(&___bone_19, value);
	}

	inline static int32_t get_offset_of_slot_20() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___slot_20)); }
	inline Slot_t2605794020 * get_slot_20() const { return ___slot_20; }
	inline Slot_t2605794020 ** get_address_of_slot_20() { return &___slot_20; }
	inline void set_slot_20(Slot_t2605794020 * value)
	{
		___slot_20 = value;
		Il2CppCodeGenWriteBarrier(&___slot_20, value);
	}

	inline static int32_t get_offset_of_animationState_21() { return static_cast<int32_t>(offsetof(EventObject_t3080673531, ___animationState_21)); }
	inline AnimationState_t3368842707 * get_animationState_21() const { return ___animationState_21; }
	inline AnimationState_t3368842707 ** get_address_of_animationState_21() { return &___animationState_21; }
	inline void set_animationState_21(AnimationState_t3368842707 * value)
	{
		___animationState_21 = value;
		Il2CppCodeGenWriteBarrier(&___animationState_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
