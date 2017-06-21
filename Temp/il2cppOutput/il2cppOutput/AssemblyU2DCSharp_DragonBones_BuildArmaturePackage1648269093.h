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
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.SkinData
struct SkinData_t1378009773;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BuildArmaturePackage
struct  BuildArmaturePackage_t1648269093  : public Il2CppObject
{
public:
	// System.String DragonBones.BuildArmaturePackage::dataName
	String_t* ___dataName_0;
	// System.String DragonBones.BuildArmaturePackage::textureAtlasName
	String_t* ___textureAtlasName_1;
	// DragonBones.DragonBonesData DragonBones.BuildArmaturePackage::data
	DragonBonesData_t1202750760 * ___data_2;
	// DragonBones.ArmatureData DragonBones.BuildArmaturePackage::armature
	ArmatureData_t3944230313 * ___armature_3;
	// DragonBones.SkinData DragonBones.BuildArmaturePackage::skin
	SkinData_t1378009773 * ___skin_4;

public:
	inline static int32_t get_offset_of_dataName_0() { return static_cast<int32_t>(offsetof(BuildArmaturePackage_t1648269093, ___dataName_0)); }
	inline String_t* get_dataName_0() const { return ___dataName_0; }
	inline String_t** get_address_of_dataName_0() { return &___dataName_0; }
	inline void set_dataName_0(String_t* value)
	{
		___dataName_0 = value;
		Il2CppCodeGenWriteBarrier(&___dataName_0, value);
	}

	inline static int32_t get_offset_of_textureAtlasName_1() { return static_cast<int32_t>(offsetof(BuildArmaturePackage_t1648269093, ___textureAtlasName_1)); }
	inline String_t* get_textureAtlasName_1() const { return ___textureAtlasName_1; }
	inline String_t** get_address_of_textureAtlasName_1() { return &___textureAtlasName_1; }
	inline void set_textureAtlasName_1(String_t* value)
	{
		___textureAtlasName_1 = value;
		Il2CppCodeGenWriteBarrier(&___textureAtlasName_1, value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(BuildArmaturePackage_t1648269093, ___data_2)); }
	inline DragonBonesData_t1202750760 * get_data_2() const { return ___data_2; }
	inline DragonBonesData_t1202750760 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(DragonBonesData_t1202750760 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier(&___data_2, value);
	}

	inline static int32_t get_offset_of_armature_3() { return static_cast<int32_t>(offsetof(BuildArmaturePackage_t1648269093, ___armature_3)); }
	inline ArmatureData_t3944230313 * get_armature_3() const { return ___armature_3; }
	inline ArmatureData_t3944230313 ** get_address_of_armature_3() { return &___armature_3; }
	inline void set_armature_3(ArmatureData_t3944230313 * value)
	{
		___armature_3 = value;
		Il2CppCodeGenWriteBarrier(&___armature_3, value);
	}

	inline static int32_t get_offset_of_skin_4() { return static_cast<int32_t>(offsetof(BuildArmaturePackage_t1648269093, ___skin_4)); }
	inline SkinData_t1378009773 * get_skin_4() const { return ___skin_4; }
	inline SkinData_t1378009773 ** get_address_of_skin_4() { return &___skin_4; }
	inline void set_skin_4(SkinData_t1378009773 * value)
	{
		___skin_4 = value;
		Il2CppCodeGenWriteBarrier(&___skin_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
