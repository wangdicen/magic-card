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
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.TextureData>
struct Dictionary_2_t1243610409;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TextureAtlasData
struct  TextureAtlasData_t3103560160  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.TextureAtlasData::autoSearch
	bool ___autoSearch_5;
	// System.Single DragonBones.TextureAtlasData::scale
	float ___scale_6;
	// System.Single DragonBones.TextureAtlasData::width
	float ___width_7;
	// System.Single DragonBones.TextureAtlasData::height
	float ___height_8;
	// System.String DragonBones.TextureAtlasData::name
	String_t* ___name_9;
	// System.String DragonBones.TextureAtlasData::imagePath
	String_t* ___imagePath_10;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.TextureData> DragonBones.TextureAtlasData::textures
	Dictionary_2_t1243610409 * ___textures_11;

public:
	inline static int32_t get_offset_of_autoSearch_5() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___autoSearch_5)); }
	inline bool get_autoSearch_5() const { return ___autoSearch_5; }
	inline bool* get_address_of_autoSearch_5() { return &___autoSearch_5; }
	inline void set_autoSearch_5(bool value)
	{
		___autoSearch_5 = value;
	}

	inline static int32_t get_offset_of_scale_6() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___scale_6)); }
	inline float get_scale_6() const { return ___scale_6; }
	inline float* get_address_of_scale_6() { return &___scale_6; }
	inline void set_scale_6(float value)
	{
		___scale_6 = value;
	}

	inline static int32_t get_offset_of_width_7() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___width_7)); }
	inline float get_width_7() const { return ___width_7; }
	inline float* get_address_of_width_7() { return &___width_7; }
	inline void set_width_7(float value)
	{
		___width_7 = value;
	}

	inline static int32_t get_offset_of_height_8() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___height_8)); }
	inline float get_height_8() const { return ___height_8; }
	inline float* get_address_of_height_8() { return &___height_8; }
	inline void set_height_8(float value)
	{
		___height_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier(&___name_9, value);
	}

	inline static int32_t get_offset_of_imagePath_10() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___imagePath_10)); }
	inline String_t* get_imagePath_10() const { return ___imagePath_10; }
	inline String_t** get_address_of_imagePath_10() { return &___imagePath_10; }
	inline void set_imagePath_10(String_t* value)
	{
		___imagePath_10 = value;
		Il2CppCodeGenWriteBarrier(&___imagePath_10, value);
	}

	inline static int32_t get_offset_of_textures_11() { return static_cast<int32_t>(offsetof(TextureAtlasData_t3103560160, ___textures_11)); }
	inline Dictionary_2_t1243610409 * get_textures_11() const { return ___textures_11; }
	inline Dictionary_2_t1243610409 ** get_address_of_textures_11() { return &___textures_11; }
	inline void set_textures_11(Dictionary_2_t1243610409 * value)
	{
		___textures_11 = value;
		Il2CppCodeGenWriteBarrier(&___textures_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
