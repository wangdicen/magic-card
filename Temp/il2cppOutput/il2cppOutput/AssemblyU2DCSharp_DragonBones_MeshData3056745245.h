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
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_t304066077;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t3684749541;
// System.Collections.Generic.List`1<DragonBones.BoneData>
struct List_1_t2573072196;
// System.Collections.Generic.List`1<DragonBones.Matrix>
struct List_1_t2024034039;

#include "AssemblyU2DCSharp_DragonBones_BaseObject3159603414.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.MeshData
struct  MeshData_t3056745245  : public BaseObject_t3159603414
{
public:
	// System.Boolean DragonBones.MeshData::skinned
	bool ___skinned_5;
	// System.String DragonBones.MeshData::name
	String_t* ___name_6;
	// DragonBones.Matrix DragonBones.MeshData::slotPose
	Matrix_t655848487 * ___slotPose_7;
	// System.Collections.Generic.List`1<System.Single> DragonBones.MeshData::uvs
	List_1_t1365137228 * ___uvs_8;
	// System.Collections.Generic.List`1<System.Single> DragonBones.MeshData::vertices
	List_1_t1365137228 * ___vertices_9;
	// System.Collections.Generic.List`1<System.Int32> DragonBones.MeshData::vertexIndices
	List_1_t2522024052 * ___vertexIndices_10;
	// System.Collections.Generic.List`1<System.Int32[]> DragonBones.MeshData::boneIndices
	List_1_t304066077 * ___boneIndices_11;
	// System.Collections.Generic.List`1<System.Single[]> DragonBones.MeshData::weights
	List_1_t3684749541 * ___weights_12;
	// System.Collections.Generic.List`1<System.Single[]> DragonBones.MeshData::boneVertices
	List_1_t3684749541 * ___boneVertices_13;
	// System.Collections.Generic.List`1<DragonBones.BoneData> DragonBones.MeshData::bones
	List_1_t2573072196 * ___bones_14;
	// System.Collections.Generic.List`1<DragonBones.Matrix> DragonBones.MeshData::inverseBindPose
	List_1_t2024034039 * ___inverseBindPose_15;

public:
	inline static int32_t get_offset_of_skinned_5() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___skinned_5)); }
	inline bool get_skinned_5() const { return ___skinned_5; }
	inline bool* get_address_of_skinned_5() { return &___skinned_5; }
	inline void set_skinned_5(bool value)
	{
		___skinned_5 = value;
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier(&___name_6, value);
	}

	inline static int32_t get_offset_of_slotPose_7() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___slotPose_7)); }
	inline Matrix_t655848487 * get_slotPose_7() const { return ___slotPose_7; }
	inline Matrix_t655848487 ** get_address_of_slotPose_7() { return &___slotPose_7; }
	inline void set_slotPose_7(Matrix_t655848487 * value)
	{
		___slotPose_7 = value;
		Il2CppCodeGenWriteBarrier(&___slotPose_7, value);
	}

	inline static int32_t get_offset_of_uvs_8() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___uvs_8)); }
	inline List_1_t1365137228 * get_uvs_8() const { return ___uvs_8; }
	inline List_1_t1365137228 ** get_address_of_uvs_8() { return &___uvs_8; }
	inline void set_uvs_8(List_1_t1365137228 * value)
	{
		___uvs_8 = value;
		Il2CppCodeGenWriteBarrier(&___uvs_8, value);
	}

	inline static int32_t get_offset_of_vertices_9() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___vertices_9)); }
	inline List_1_t1365137228 * get_vertices_9() const { return ___vertices_9; }
	inline List_1_t1365137228 ** get_address_of_vertices_9() { return &___vertices_9; }
	inline void set_vertices_9(List_1_t1365137228 * value)
	{
		___vertices_9 = value;
		Il2CppCodeGenWriteBarrier(&___vertices_9, value);
	}

	inline static int32_t get_offset_of_vertexIndices_10() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___vertexIndices_10)); }
	inline List_1_t2522024052 * get_vertexIndices_10() const { return ___vertexIndices_10; }
	inline List_1_t2522024052 ** get_address_of_vertexIndices_10() { return &___vertexIndices_10; }
	inline void set_vertexIndices_10(List_1_t2522024052 * value)
	{
		___vertexIndices_10 = value;
		Il2CppCodeGenWriteBarrier(&___vertexIndices_10, value);
	}

	inline static int32_t get_offset_of_boneIndices_11() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___boneIndices_11)); }
	inline List_1_t304066077 * get_boneIndices_11() const { return ___boneIndices_11; }
	inline List_1_t304066077 ** get_address_of_boneIndices_11() { return &___boneIndices_11; }
	inline void set_boneIndices_11(List_1_t304066077 * value)
	{
		___boneIndices_11 = value;
		Il2CppCodeGenWriteBarrier(&___boneIndices_11, value);
	}

	inline static int32_t get_offset_of_weights_12() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___weights_12)); }
	inline List_1_t3684749541 * get_weights_12() const { return ___weights_12; }
	inline List_1_t3684749541 ** get_address_of_weights_12() { return &___weights_12; }
	inline void set_weights_12(List_1_t3684749541 * value)
	{
		___weights_12 = value;
		Il2CppCodeGenWriteBarrier(&___weights_12, value);
	}

	inline static int32_t get_offset_of_boneVertices_13() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___boneVertices_13)); }
	inline List_1_t3684749541 * get_boneVertices_13() const { return ___boneVertices_13; }
	inline List_1_t3684749541 ** get_address_of_boneVertices_13() { return &___boneVertices_13; }
	inline void set_boneVertices_13(List_1_t3684749541 * value)
	{
		___boneVertices_13 = value;
		Il2CppCodeGenWriteBarrier(&___boneVertices_13, value);
	}

	inline static int32_t get_offset_of_bones_14() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___bones_14)); }
	inline List_1_t2573072196 * get_bones_14() const { return ___bones_14; }
	inline List_1_t2573072196 ** get_address_of_bones_14() { return &___bones_14; }
	inline void set_bones_14(List_1_t2573072196 * value)
	{
		___bones_14 = value;
		Il2CppCodeGenWriteBarrier(&___bones_14, value);
	}

	inline static int32_t get_offset_of_inverseBindPose_15() { return static_cast<int32_t>(offsetof(MeshData_t3056745245, ___inverseBindPose_15)); }
	inline List_1_t2024034039 * get_inverseBindPose_15() const { return ___inverseBindPose_15; }
	inline List_1_t2024034039 ** get_address_of_inverseBindPose_15() { return &___inverseBindPose_15; }
	inline void set_inverseBindPose_15(List_1_t2024034039 * value)
	{
		___inverseBindPose_15 = value;
		Il2CppCodeGenWriteBarrier(&___inverseBindPose_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
