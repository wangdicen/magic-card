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
// DragonBones.Point
struct Point_t3755811474;
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.TextureData
struct TextureData_t423192039;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.MeshData
struct MeshData_t3056745245;
// DragonBones.BoundingBoxData
struct BoundingBoxData_t3518226771;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"
#include "AssemblyU2DCSharp_DragonBones_DisplayType524295582.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.DisplayData
struct  DisplayData_t523795982  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.DisplayData::isRelativePivot
	bool ___isRelativePivot_5;
	// DragonBones.DisplayType DragonBones.DisplayData::type
	int32_t ___type_6;
	// System.Boolean DragonBones.DisplayData::inheritAnimation
	bool ___inheritAnimation_7;
	// System.String DragonBones.DisplayData::name
	String_t* ___name_8;
	// System.String DragonBones.DisplayData::path
	String_t* ___path_9;
	// System.String DragonBones.DisplayData::share
	String_t* ___share_10;
	// DragonBones.Point DragonBones.DisplayData::pivot
	Point_t3755811474 * ___pivot_11;
	// DragonBones.Transform DragonBones.DisplayData::transform
	Transform_t3392663918 * ___transform_12;
	// DragonBones.TextureData DragonBones.DisplayData::texture
	TextureData_t423192039 * ___texture_13;
	// DragonBones.ArmatureData DragonBones.DisplayData::armature
	ArmatureData_t3944230313 * ___armature_14;
	// DragonBones.MeshData DragonBones.DisplayData::mesh
	MeshData_t3056745245 * ___mesh_15;
	// DragonBones.BoundingBoxData DragonBones.DisplayData::boundingBox
	BoundingBoxData_t3518226771 * ___boundingBox_16;

public:
	inline static int32_t get_offset_of_isRelativePivot_5() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___isRelativePivot_5)); }
	inline bool get_isRelativePivot_5() const { return ___isRelativePivot_5; }
	inline bool* get_address_of_isRelativePivot_5() { return &___isRelativePivot_5; }
	inline void set_isRelativePivot_5(bool value)
	{
		___isRelativePivot_5 = value;
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_inheritAnimation_7() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___inheritAnimation_7)); }
	inline bool get_inheritAnimation_7() const { return ___inheritAnimation_7; }
	inline bool* get_address_of_inheritAnimation_7() { return &___inheritAnimation_7; }
	inline void set_inheritAnimation_7(bool value)
	{
		___inheritAnimation_7 = value;
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier(&___name_8, value);
	}

	inline static int32_t get_offset_of_path_9() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___path_9)); }
	inline String_t* get_path_9() const { return ___path_9; }
	inline String_t** get_address_of_path_9() { return &___path_9; }
	inline void set_path_9(String_t* value)
	{
		___path_9 = value;
		Il2CppCodeGenWriteBarrier(&___path_9, value);
	}

	inline static int32_t get_offset_of_share_10() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___share_10)); }
	inline String_t* get_share_10() const { return ___share_10; }
	inline String_t** get_address_of_share_10() { return &___share_10; }
	inline void set_share_10(String_t* value)
	{
		___share_10 = value;
		Il2CppCodeGenWriteBarrier(&___share_10, value);
	}

	inline static int32_t get_offset_of_pivot_11() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___pivot_11)); }
	inline Point_t3755811474 * get_pivot_11() const { return ___pivot_11; }
	inline Point_t3755811474 ** get_address_of_pivot_11() { return &___pivot_11; }
	inline void set_pivot_11(Point_t3755811474 * value)
	{
		___pivot_11 = value;
		Il2CppCodeGenWriteBarrier(&___pivot_11, value);
	}

	inline static int32_t get_offset_of_transform_12() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___transform_12)); }
	inline Transform_t3392663918 * get_transform_12() const { return ___transform_12; }
	inline Transform_t3392663918 ** get_address_of_transform_12() { return &___transform_12; }
	inline void set_transform_12(Transform_t3392663918 * value)
	{
		___transform_12 = value;
		Il2CppCodeGenWriteBarrier(&___transform_12, value);
	}

	inline static int32_t get_offset_of_texture_13() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___texture_13)); }
	inline TextureData_t423192039 * get_texture_13() const { return ___texture_13; }
	inline TextureData_t423192039 ** get_address_of_texture_13() { return &___texture_13; }
	inline void set_texture_13(TextureData_t423192039 * value)
	{
		___texture_13 = value;
		Il2CppCodeGenWriteBarrier(&___texture_13, value);
	}

	inline static int32_t get_offset_of_armature_14() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___armature_14)); }
	inline ArmatureData_t3944230313 * get_armature_14() const { return ___armature_14; }
	inline ArmatureData_t3944230313 ** get_address_of_armature_14() { return &___armature_14; }
	inline void set_armature_14(ArmatureData_t3944230313 * value)
	{
		___armature_14 = value;
		Il2CppCodeGenWriteBarrier(&___armature_14, value);
	}

	inline static int32_t get_offset_of_mesh_15() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___mesh_15)); }
	inline MeshData_t3056745245 * get_mesh_15() const { return ___mesh_15; }
	inline MeshData_t3056745245 ** get_address_of_mesh_15() { return &___mesh_15; }
	inline void set_mesh_15(MeshData_t3056745245 * value)
	{
		___mesh_15 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_15, value);
	}

	inline static int32_t get_offset_of_boundingBox_16() { return static_cast<int32_t>(offsetof(DisplayData_t523795982, ___boundingBox_16)); }
	inline BoundingBoxData_t3518226771 * get_boundingBox_16() const { return ___boundingBox_16; }
	inline BoundingBoxData_t3518226771 ** get_address_of_boundingBox_16() { return &___boundingBox_16; }
	inline void set_boundingBox_16(BoundingBoxData_t3518226771 * value)
	{
		___boundingBox_16 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBox_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
