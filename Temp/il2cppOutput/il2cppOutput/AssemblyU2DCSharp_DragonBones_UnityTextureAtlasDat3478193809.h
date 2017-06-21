#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharp_DragonBones_TextureAtlasData3103560160.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.UnityTextureAtlasData
struct  UnityTextureAtlasData_t3478193809  : public TextureAtlasData_t3103560160
{
public:
	// System.Boolean DragonBones.UnityTextureAtlasData::_disposeTexture
	bool ____disposeTexture_12;
	// UnityEngine.Material DragonBones.UnityTextureAtlasData::texture
	Material_t3870600107 * ___texture_13;

public:
	inline static int32_t get_offset_of__disposeTexture_12() { return static_cast<int32_t>(offsetof(UnityTextureAtlasData_t3478193809, ____disposeTexture_12)); }
	inline bool get__disposeTexture_12() const { return ____disposeTexture_12; }
	inline bool* get_address_of__disposeTexture_12() { return &____disposeTexture_12; }
	inline void set__disposeTexture_12(bool value)
	{
		____disposeTexture_12 = value;
	}

	inline static int32_t get_offset_of_texture_13() { return static_cast<int32_t>(offsetof(UnityTextureAtlasData_t3478193809, ___texture_13)); }
	inline Material_t3870600107 * get_texture_13() const { return ___texture_13; }
	inline Material_t3870600107 ** get_address_of_texture_13() { return &___texture_13; }
	inline void set_texture_13(Material_t3870600107 * value)
	{
		___texture_13 = value;
		Il2CppCodeGenWriteBarrier(&___texture_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
