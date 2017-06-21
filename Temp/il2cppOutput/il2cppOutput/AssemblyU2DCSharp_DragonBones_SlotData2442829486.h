#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.ColorTransform
struct ColorTransform_t810296751;
// System.String
struct String_t;
// System.Collections.Generic.List`1<DragonBones.ActionData>
struct List_1_t3033330998;
// DragonBones.BoneData
struct BoneData_t1204886644;
// DragonBones.CustomData
struct CustomData_t2526548513;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_BlendMode3235595158.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SlotData
struct  SlotData_t2442829486  : public BaseObject_t3159603414
{
public:
	// System.Int32 DragonBones.SlotData::displayIndex
	int32_t ___displayIndex_6;
	// System.Int32 DragonBones.SlotData::zOrder
	int32_t ___zOrder_7;
	// DragonBones.BlendMode DragonBones.SlotData::blendMode
	int32_t ___blendMode_8;
	// System.String DragonBones.SlotData::name
	String_t* ___name_9;
	// System.Collections.Generic.List`1<DragonBones.ActionData> DragonBones.SlotData::actions
	List_1_t3033330998 * ___actions_10;
	// DragonBones.BoneData DragonBones.SlotData::parent
	BoneData_t1204886644 * ___parent_11;
	// DragonBones.ColorTransform DragonBones.SlotData::color
	ColorTransform_t810296751 * ___color_12;
	// DragonBones.CustomData DragonBones.SlotData::userData
	CustomData_t2526548513 * ___userData_13;

public:
	inline static int32_t get_offset_of_displayIndex_6() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___displayIndex_6)); }
	inline int32_t get_displayIndex_6() const { return ___displayIndex_6; }
	inline int32_t* get_address_of_displayIndex_6() { return &___displayIndex_6; }
	inline void set_displayIndex_6(int32_t value)
	{
		___displayIndex_6 = value;
	}

	inline static int32_t get_offset_of_zOrder_7() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___zOrder_7)); }
	inline int32_t get_zOrder_7() const { return ___zOrder_7; }
	inline int32_t* get_address_of_zOrder_7() { return &___zOrder_7; }
	inline void set_zOrder_7(int32_t value)
	{
		___zOrder_7 = value;
	}

	inline static int32_t get_offset_of_blendMode_8() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___blendMode_8)); }
	inline int32_t get_blendMode_8() const { return ___blendMode_8; }
	inline int32_t* get_address_of_blendMode_8() { return &___blendMode_8; }
	inline void set_blendMode_8(int32_t value)
	{
		___blendMode_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier(&___name_9, value);
	}

	inline static int32_t get_offset_of_actions_10() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___actions_10)); }
	inline List_1_t3033330998 * get_actions_10() const { return ___actions_10; }
	inline List_1_t3033330998 ** get_address_of_actions_10() { return &___actions_10; }
	inline void set_actions_10(List_1_t3033330998 * value)
	{
		___actions_10 = value;
		Il2CppCodeGenWriteBarrier(&___actions_10, value);
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___parent_11)); }
	inline BoneData_t1204886644 * get_parent_11() const { return ___parent_11; }
	inline BoneData_t1204886644 ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(BoneData_t1204886644 * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier(&___parent_11, value);
	}

	inline static int32_t get_offset_of_color_12() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___color_12)); }
	inline ColorTransform_t810296751 * get_color_12() const { return ___color_12; }
	inline ColorTransform_t810296751 ** get_address_of_color_12() { return &___color_12; }
	inline void set_color_12(ColorTransform_t810296751 * value)
	{
		___color_12 = value;
		Il2CppCodeGenWriteBarrier(&___color_12, value);
	}

	inline static int32_t get_offset_of_userData_13() { return static_cast<int32_t>(offsetof(SlotData_t2442829486, ___userData_13)); }
	inline CustomData_t2526548513 * get_userData_13() const { return ___userData_13; }
	inline CustomData_t2526548513 ** get_address_of_userData_13() { return &___userData_13; }
	inline void set_userData_13(CustomData_t2526548513 * value)
	{
		___userData_13 = value;
		Il2CppCodeGenWriteBarrier(&___userData_13, value);
	}
};

struct SlotData_t2442829486_StaticFields
{
public:
	// DragonBones.ColorTransform DragonBones.SlotData::DEFAULT_COLOR
	ColorTransform_t810296751 * ___DEFAULT_COLOR_5;

public:
	inline static int32_t get_offset_of_DEFAULT_COLOR_5() { return static_cast<int32_t>(offsetof(SlotData_t2442829486_StaticFields, ___DEFAULT_COLOR_5)); }
	inline ColorTransform_t810296751 * get_DEFAULT_COLOR_5() const { return ___DEFAULT_COLOR_5; }
	inline ColorTransform_t810296751 ** get_address_of_DEFAULT_COLOR_5() { return &___DEFAULT_COLOR_5; }
	inline void set_DEFAULT_COLOR_5(ColorTransform_t810296751 * value)
	{
		___DEFAULT_COLOR_5 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_COLOR_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
