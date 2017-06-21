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
// DragonBones.TextureAtlasData
struct TextureAtlasData_t3103560160;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TextureData
struct  TextureData_t423192039  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.TextureData::rotated
	bool ___rotated_5;
	// System.String DragonBones.TextureData::name
	String_t* ___name_6;
	// DragonBones.Rectangle DragonBones.TextureData::region
	Rectangle_t3461297009 * ___region_7;
	// DragonBones.Rectangle DragonBones.TextureData::frame
	Rectangle_t3461297009 * ___frame_8;
	// DragonBones.TextureAtlasData DragonBones.TextureData::parent
	TextureAtlasData_t3103560160 * ___parent_9;

public:
	inline static int32_t get_offset_of_rotated_5() { return static_cast<int32_t>(offsetof(TextureData_t423192039, ___rotated_5)); }
	inline bool get_rotated_5() const { return ___rotated_5; }
	inline bool* get_address_of_rotated_5() { return &___rotated_5; }
	inline void set_rotated_5(bool value)
	{
		___rotated_5 = value;
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(TextureData_t423192039, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_region_7() { return static_cast<int32_t>(offsetof(TextureData_t423192039, ___region_7)); }
	inline Rectangle_t3461297009 * get_region_7() const { return ___region_7; }
	inline Rectangle_t3461297009 ** get_address_of_region_7() { return &___region_7; }
	inline void set_region_7(Rectangle_t3461297009 * value)
	{
		___region_7 = value;
		Il2CppCodeGenWriteBarrier(&___region_7, value);
	}

	inline static int32_t get_offset_of_frame_8() { return static_cast<int32_t>(offsetof(TextureData_t423192039, ___frame_8)); }
	inline Rectangle_t3461297009 * get_frame_8() const { return ___frame_8; }
	inline Rectangle_t3461297009 ** get_address_of_frame_8() { return &___frame_8; }
	inline void set_frame_8(Rectangle_t3461297009 * value)
	{
		___frame_8 = value;
		Il2CppCodeGenWriteBarrier(&___frame_8, value);
	}

	inline static int32_t get_offset_of_parent_9() { return static_cast<int32_t>(offsetof(TextureData_t423192039, ___parent_9)); }
	inline TextureAtlasData_t3103560160 * get_parent_9() const { return ___parent_9; }
	inline TextureAtlasData_t3103560160 ** get_address_of_parent_9() { return &___parent_9; }
	inline void set_parent_9(TextureAtlasData_t3103560160 * value)
	{
		___parent_9 = value;
		Il2CppCodeGenWriteBarrier(&___parent_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
