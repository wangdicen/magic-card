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
// DragonBones.Matrix
struct Matrix_t655848487;
// DragonBones.Transform
struct Transform_t3392663918;
// System.Object
struct Il2CppObject;
// DragonBones.Armature
struct Armature_t2093713247;
// DragonBones.Bone
struct Bone_t2605290410;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.TransformObject
struct  TransformObject_t3102074189  : public BaseObject_t3159603414
{
public:
	// System.String DragonBones.TransformObject::name
	String_t* ___name_5;
	// DragonBones.Matrix DragonBones.TransformObject::globalTransformMatrix
	Matrix_t655848487 * ___globalTransformMatrix_6;
	// DragonBones.Transform DragonBones.TransformObject::global
	Transform_t3392663918 * ___global_7;
	// DragonBones.Transform DragonBones.TransformObject::offset
	Transform_t3392663918 * ___offset_8;
	// DragonBones.Transform DragonBones.TransformObject::origin
	Transform_t3392663918 * ___origin_9;
	// System.Object DragonBones.TransformObject::userData
	Il2CppObject * ___userData_10;
	// DragonBones.Armature DragonBones.TransformObject::_armature
	Armature_t2093713247 * ____armature_11;
	// DragonBones.Bone DragonBones.TransformObject::_parent
	Bone_t2605290410 * ____parent_12;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___name_5)); }
	inline String_t* get_name_5() const { return ___name_5; }
	inline String_t** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(String_t* value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier(&___name_5, value);
	}

	inline static int32_t get_offset_of_globalTransformMatrix_6() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___globalTransformMatrix_6)); }
	inline Matrix_t655848487 * get_globalTransformMatrix_6() const { return ___globalTransformMatrix_6; }
	inline Matrix_t655848487 ** get_address_of_globalTransformMatrix_6() { return &___globalTransformMatrix_6; }
	inline void set_globalTransformMatrix_6(Matrix_t655848487 * value)
	{
		___globalTransformMatrix_6 = value;
		Il2CppCodeGenWriteBarrier(&___globalTransformMatrix_6, value);
	}

	inline static int32_t get_offset_of_global_7() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___global_7)); }
	inline Transform_t3392663918 * get_global_7() const { return ___global_7; }
	inline Transform_t3392663918 ** get_address_of_global_7() { return &___global_7; }
	inline void set_global_7(Transform_t3392663918 * value)
	{
		___global_7 = value;
		Il2CppCodeGenWriteBarrier(&___global_7, value);
	}

	inline static int32_t get_offset_of_offset_8() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___offset_8)); }
	inline Transform_t3392663918 * get_offset_8() const { return ___offset_8; }
	inline Transform_t3392663918 ** get_address_of_offset_8() { return &___offset_8; }
	inline void set_offset_8(Transform_t3392663918 * value)
	{
		___offset_8 = value;
		Il2CppCodeGenWriteBarrier(&___offset_8, value);
	}

	inline static int32_t get_offset_of_origin_9() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___origin_9)); }
	inline Transform_t3392663918 * get_origin_9() const { return ___origin_9; }
	inline Transform_t3392663918 ** get_address_of_origin_9() { return &___origin_9; }
	inline void set_origin_9(Transform_t3392663918 * value)
	{
		___origin_9 = value;
		Il2CppCodeGenWriteBarrier(&___origin_9, value);
	}

	inline static int32_t get_offset_of_userData_10() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ___userData_10)); }
	inline Il2CppObject * get_userData_10() const { return ___userData_10; }
	inline Il2CppObject ** get_address_of_userData_10() { return &___userData_10; }
	inline void set_userData_10(Il2CppObject * value)
	{
		___userData_10 = value;
		Il2CppCodeGenWriteBarrier(&___userData_10, value);
	}

	inline static int32_t get_offset_of__armature_11() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ____armature_11)); }
	inline Armature_t2093713247 * get__armature_11() const { return ____armature_11; }
	inline Armature_t2093713247 ** get_address_of__armature_11() { return &____armature_11; }
	inline void set__armature_11(Armature_t2093713247 * value)
	{
		____armature_11 = value;
		Il2CppCodeGenWriteBarrier(&____armature_11, value);
	}

	inline static int32_t get_offset_of__parent_12() { return static_cast<int32_t>(offsetof(TransformObject_t3102074189, ____parent_12)); }
	inline Bone_t2605290410 * get__parent_12() const { return ____parent_12; }
	inline Bone_t2605290410 ** get_address_of__parent_12() { return &____parent_12; }
	inline void set__parent_12(Bone_t2605290410 * value)
	{
		____parent_12 = value;
		Il2CppCodeGenWriteBarrier(&____parent_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
