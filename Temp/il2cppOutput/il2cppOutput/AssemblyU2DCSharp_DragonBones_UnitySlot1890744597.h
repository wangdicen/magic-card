#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// DragonBones.UnityArmatureComponent
struct UnityArmatureComponent_t1694836469;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "AssemblyU2DCSharp_DragonBones_Slot2605794020.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.UnitySlot
struct  UnitySlot_t1890744597  : public Slot_t2605794020
{
public:
	// System.Boolean DragonBones.UnitySlot::_skewed
	bool ____skewed_51;
	// DragonBones.UnityArmatureComponent DragonBones.UnitySlot::_proxy
	UnityArmatureComponent_t1694836469 * ____proxy_52;
	// UnityEngine.GameObject DragonBones.UnitySlot::_renderDisplay
	GameObject_t3674682005 * ____renderDisplay_53;
	// UnityEngine.Mesh DragonBones.UnitySlot::_mesh
	Mesh_t4241756145 * ____mesh_54;
	// UnityEngine.Vector2[] DragonBones.UnitySlot::_uvs
	Vector2U5BU5D_t4024180168* ____uvs_55;
	// UnityEngine.Vector3[] DragonBones.UnitySlot::_vertices
	Vector3U5BU5D_t215400611* ____vertices_56;

public:
	inline static int32_t get_offset_of__skewed_51() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____skewed_51)); }
	inline bool get__skewed_51() const { return ____skewed_51; }
	inline bool* get_address_of__skewed_51() { return &____skewed_51; }
	inline void set__skewed_51(bool value)
	{
		____skewed_51 = value;
	}

	inline static int32_t get_offset_of__proxy_52() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____proxy_52)); }
	inline UnityArmatureComponent_t1694836469 * get__proxy_52() const { return ____proxy_52; }
	inline UnityArmatureComponent_t1694836469 ** get_address_of__proxy_52() { return &____proxy_52; }
	inline void set__proxy_52(UnityArmatureComponent_t1694836469 * value)
	{
		____proxy_52 = value;
		Il2CppCodeGenWriteBarrier(&____proxy_52, value);
	}

	inline static int32_t get_offset_of__renderDisplay_53() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____renderDisplay_53)); }
	inline GameObject_t3674682005 * get__renderDisplay_53() const { return ____renderDisplay_53; }
	inline GameObject_t3674682005 ** get_address_of__renderDisplay_53() { return &____renderDisplay_53; }
	inline void set__renderDisplay_53(GameObject_t3674682005 * value)
	{
		____renderDisplay_53 = value;
		Il2CppCodeGenWriteBarrier(&____renderDisplay_53, value);
	}

	inline static int32_t get_offset_of__mesh_54() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____mesh_54)); }
	inline Mesh_t4241756145 * get__mesh_54() const { return ____mesh_54; }
	inline Mesh_t4241756145 ** get_address_of__mesh_54() { return &____mesh_54; }
	inline void set__mesh_54(Mesh_t4241756145 * value)
	{
		____mesh_54 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_54, value);
	}

	inline static int32_t get_offset_of__uvs_55() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____uvs_55)); }
	inline Vector2U5BU5D_t4024180168* get__uvs_55() const { return ____uvs_55; }
	inline Vector2U5BU5D_t4024180168** get_address_of__uvs_55() { return &____uvs_55; }
	inline void set__uvs_55(Vector2U5BU5D_t4024180168* value)
	{
		____uvs_55 = value;
		Il2CppCodeGenWriteBarrier(&____uvs_55, value);
	}

	inline static int32_t get_offset_of__vertices_56() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597, ____vertices_56)); }
	inline Vector3U5BU5D_t215400611* get__vertices_56() const { return ____vertices_56; }
	inline Vector3U5BU5D_t215400611** get_address_of__vertices_56() { return &____vertices_56; }
	inline void set__vertices_56(Vector3U5BU5D_t215400611* value)
	{
		____vertices_56 = value;
		Il2CppCodeGenWriteBarrier(&____vertices_56, value);
	}
};

struct UnitySlot_t1890744597_StaticFields
{
public:
	// System.Int32[] DragonBones.UnitySlot::TRIANGLES
	Int32U5BU5D_t3230847821* ___TRIANGLES_48;
	// UnityEngine.Vector3 DragonBones.UnitySlot::_helpVector3
	Vector3_t4282066566  ____helpVector3_49;
	// UnityEngine.Vector2[] DragonBones.UnitySlot::_helpVector2s
	Vector2U5BU5D_t4024180168* ____helpVector2s_50;

public:
	inline static int32_t get_offset_of_TRIANGLES_48() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597_StaticFields, ___TRIANGLES_48)); }
	inline Int32U5BU5D_t3230847821* get_TRIANGLES_48() const { return ___TRIANGLES_48; }
	inline Int32U5BU5D_t3230847821** get_address_of_TRIANGLES_48() { return &___TRIANGLES_48; }
	inline void set_TRIANGLES_48(Int32U5BU5D_t3230847821* value)
	{
		___TRIANGLES_48 = value;
		Il2CppCodeGenWriteBarrier(&___TRIANGLES_48, value);
	}

	inline static int32_t get_offset_of__helpVector3_49() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597_StaticFields, ____helpVector3_49)); }
	inline Vector3_t4282066566  get__helpVector3_49() const { return ____helpVector3_49; }
	inline Vector3_t4282066566 * get_address_of__helpVector3_49() { return &____helpVector3_49; }
	inline void set__helpVector3_49(Vector3_t4282066566  value)
	{
		____helpVector3_49 = value;
	}

	inline static int32_t get_offset_of__helpVector2s_50() { return static_cast<int32_t>(offsetof(UnitySlot_t1890744597_StaticFields, ____helpVector2s_50)); }
	inline Vector2U5BU5D_t4024180168* get__helpVector2s_50() const { return ____helpVector2s_50; }
	inline Vector2U5BU5D_t4024180168** get_address_of__helpVector2s_50() { return &____helpVector2s_50; }
	inline void set__helpVector2s_50(Vector2U5BU5D_t4024180168* value)
	{
		____helpVector2s_50 = value;
		Il2CppCodeGenWriteBarrier(&____helpVector2s_50, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
