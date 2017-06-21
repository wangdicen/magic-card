#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Armature
struct Armature_t2093713247;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_DragonBones_UnityEventDispatcher2956979819.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.UnityArmatureComponent
struct  UnityArmatureComponent_t1694836469  : public UnityEventDispatcher_1_t2956979819
{
public:
	// System.Boolean DragonBones.UnityArmatureComponent::_disposeProxy
	bool ____disposeProxy_3;
	// DragonBones.Armature DragonBones.UnityArmatureComponent::_armature
	Armature_t2093713247 * ____armature_4;
	// UnityEngine.TextAsset DragonBones.UnityArmatureComponent::dragonBonesJSON
	TextAsset_t3836129977 * ___dragonBonesJSON_5;
	// System.Collections.Generic.List`1<System.String> DragonBones.UnityArmatureComponent::textureAtlasJSON
	List_1_t1375417109 * ___textureAtlasJSON_6;
	// System.String DragonBones.UnityArmatureComponent::armatureName
	String_t* ___armatureName_7;
	// System.String DragonBones.UnityArmatureComponent::animationName
	String_t* ___animationName_8;
	// System.String DragonBones.UnityArmatureComponent::_sortingLayerName
	String_t* ____sortingLayerName_9;
	// System.Int32 DragonBones.UnityArmatureComponent::_sortingOrder
	int32_t ____sortingOrder_10;
	// System.Single DragonBones.UnityArmatureComponent::_zSpace
	float ____zSpace_11;

public:
	inline static int32_t get_offset_of__disposeProxy_3() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ____disposeProxy_3)); }
	inline bool get__disposeProxy_3() const { return ____disposeProxy_3; }
	inline bool* get_address_of__disposeProxy_3() { return &____disposeProxy_3; }
	inline void set__disposeProxy_3(bool value)
	{
		____disposeProxy_3 = value;
	}

	inline static int32_t get_offset_of__armature_4() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ____armature_4)); }
	inline Armature_t2093713247 * get__armature_4() const { return ____armature_4; }
	inline Armature_t2093713247 ** get_address_of__armature_4() { return &____armature_4; }
	inline void set__armature_4(Armature_t2093713247 * value)
	{
		____armature_4 = value;
		Il2CppCodeGenWriteBarrier(&____armature_4, value);
	}

	inline static int32_t get_offset_of_dragonBonesJSON_5() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ___dragonBonesJSON_5)); }
	inline TextAsset_t3836129977 * get_dragonBonesJSON_5() const { return ___dragonBonesJSON_5; }
	inline TextAsset_t3836129977 ** get_address_of_dragonBonesJSON_5() { return &___dragonBonesJSON_5; }
	inline void set_dragonBonesJSON_5(TextAsset_t3836129977 * value)
	{
		___dragonBonesJSON_5 = value;
		Il2CppCodeGenWriteBarrier(&___dragonBonesJSON_5, value);
	}

	inline static int32_t get_offset_of_textureAtlasJSON_6() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ___textureAtlasJSON_6)); }
	inline List_1_t1375417109 * get_textureAtlasJSON_6() const { return ___textureAtlasJSON_6; }
	inline List_1_t1375417109 ** get_address_of_textureAtlasJSON_6() { return &___textureAtlasJSON_6; }
	inline void set_textureAtlasJSON_6(List_1_t1375417109 * value)
	{
		___textureAtlasJSON_6 = value;
		Il2CppCodeGenWriteBarrier(&___textureAtlasJSON_6, value);
	}

	inline static int32_t get_offset_of_armatureName_7() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ___armatureName_7)); }
	inline String_t* get_armatureName_7() const { return ___armatureName_7; }
	inline String_t** get_address_of_armatureName_7() { return &___armatureName_7; }
	inline void set_armatureName_7(String_t* value)
	{
		___armatureName_7 = value;
		Il2CppCodeGenWriteBarrier(&___armatureName_7, value);
	}

	inline static int32_t get_offset_of_animationName_8() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ___animationName_8)); }
	inline String_t* get_animationName_8() const { return ___animationName_8; }
	inline String_t** get_address_of_animationName_8() { return &___animationName_8; }
	inline void set_animationName_8(String_t* value)
	{
		___animationName_8 = value;
		Il2CppCodeGenWriteBarrier(&___animationName_8, value);
	}

	inline static int32_t get_offset_of__sortingLayerName_9() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ____sortingLayerName_9)); }
	inline String_t* get__sortingLayerName_9() const { return ____sortingLayerName_9; }
	inline String_t** get_address_of__sortingLayerName_9() { return &____sortingLayerName_9; }
	inline void set__sortingLayerName_9(String_t* value)
	{
		____sortingLayerName_9 = value;
		Il2CppCodeGenWriteBarrier(&____sortingLayerName_9, value);
	}

	inline static int32_t get_offset_of__sortingOrder_10() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ____sortingOrder_10)); }
	inline int32_t get__sortingOrder_10() const { return ____sortingOrder_10; }
	inline int32_t* get_address_of__sortingOrder_10() { return &____sortingOrder_10; }
	inline void set__sortingOrder_10(int32_t value)
	{
		____sortingOrder_10 = value;
	}

	inline static int32_t get_offset_of__zSpace_11() { return static_cast<int32_t>(offsetof(UnityArmatureComponent_t1694836469, ____zSpace_11)); }
	inline float get__zSpace_11() const { return ____zSpace_11; }
	inline float* get_address_of__zSpace_11() { return &____zSpace_11; }
	inline void set__zSpace_11(float value)
	{
		____zSpace_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
