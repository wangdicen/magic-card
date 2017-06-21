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

#include "AssemblyU2DCSharp_DragonBones_TweenFrameData_1_gen459531563.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.SlotFrameData
struct  SlotFrameData_t462872923  : public TweenFrameData_1_t459531563
{
public:
	// System.Int32 DragonBones.SlotFrameData::displayIndex
	int32_t ___displayIndex_12;
	// DragonBones.ColorTransform DragonBones.SlotFrameData::color
	ColorTransform_t810296751 * ___color_13;

public:
	inline static int32_t get_offset_of_displayIndex_12() { return static_cast<int32_t>(offsetof(SlotFrameData_t462872923, ___displayIndex_12)); }
	inline int32_t get_displayIndex_12() const { return ___displayIndex_12; }
	inline int32_t* get_address_of_displayIndex_12() { return &___displayIndex_12; }
	inline void set_displayIndex_12(int32_t value)
	{
		___displayIndex_12 = value;
	}

	inline static int32_t get_offset_of_color_13() { return static_cast<int32_t>(offsetof(SlotFrameData_t462872923, ___color_13)); }
	inline ColorTransform_t810296751 * get_color_13() const { return ___color_13; }
	inline ColorTransform_t810296751 ** get_address_of_color_13() { return &___color_13; }
	inline void set_color_13(ColorTransform_t810296751 * value)
	{
		___color_13 = value;
		Il2CppCodeGenWriteBarrier(&___color_13, value);
	}
};

struct SlotFrameData_t462872923_StaticFields
{
public:
	// DragonBones.ColorTransform DragonBones.SlotFrameData::DEFAULT_COLOR
	ColorTransform_t810296751 * ___DEFAULT_COLOR_11;

public:
	inline static int32_t get_offset_of_DEFAULT_COLOR_11() { return static_cast<int32_t>(offsetof(SlotFrameData_t462872923_StaticFields, ___DEFAULT_COLOR_11)); }
	inline ColorTransform_t810296751 * get_DEFAULT_COLOR_11() const { return ___DEFAULT_COLOR_11; }
	inline ColorTransform_t810296751 ** get_address_of_DEFAULT_COLOR_11() { return &___DEFAULT_COLOR_11; }
	inline void set_DEFAULT_COLOR_11(ColorTransform_t810296751 * value)
	{
		___DEFAULT_COLOR_11 = value;
		Il2CppCodeGenWriteBarrier(&___DEFAULT_COLOR_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
