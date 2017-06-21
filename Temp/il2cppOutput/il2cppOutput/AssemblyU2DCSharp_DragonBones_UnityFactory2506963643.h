#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.IEventDispatcher`1<DragonBones.EventObject>
struct IEventDispatcher_1_t3019110679;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// DragonBones.WorldClock
struct WorldClock_t245661442;
// DragonBones.UnityFactory
struct UnityFactory_t2506963643;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData>
struct Dictionary_2_t2023169130;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.TextureAtlasData>
struct Dictionary_2_t3923978530;

#include "AssemblyU2DCSharp_DragonBones_BaseFactory19519355.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.UnityFactory
struct  UnityFactory_t2506963643  : public BaseFactory_t19519355
{
public:
	// System.String DragonBones.UnityFactory::defaultShaderName
	String_t* ___defaultShaderName_9;
	// System.String DragonBones.UnityFactory::_textureAtlasPath
	String_t* ____textureAtlasPath_10;
	// UnityEngine.GameObject DragonBones.UnityFactory::_armatureGameObject
	GameObject_t3674682005 * ____armatureGameObject_11;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData> DragonBones.UnityFactory::_pathDragonBonesDataMap
	Dictionary_2_t2023169130 * ____pathDragonBonesDataMap_12;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.TextureAtlasData> DragonBones.UnityFactory::_pathTextureAtlasDataMap
	Dictionary_2_t3923978530 * ____pathTextureAtlasDataMap_13;

public:
	inline static int32_t get_offset_of_defaultShaderName_9() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643, ___defaultShaderName_9)); }
	inline String_t* get_defaultShaderName_9() const { return ___defaultShaderName_9; }
	inline String_t** get_address_of_defaultShaderName_9() { return &___defaultShaderName_9; }
	inline void set_defaultShaderName_9(String_t* value)
	{
		___defaultShaderName_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultShaderName_9, value);
	}

	inline static int32_t get_offset_of__textureAtlasPath_10() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643, ____textureAtlasPath_10)); }
	inline String_t* get__textureAtlasPath_10() const { return ____textureAtlasPath_10; }
	inline String_t** get_address_of__textureAtlasPath_10() { return &____textureAtlasPath_10; }
	inline void set__textureAtlasPath_10(String_t* value)
	{
		____textureAtlasPath_10 = value;
		Il2CppCodeGenWriteBarrier(&____textureAtlasPath_10, value);
	}

	inline static int32_t get_offset_of__armatureGameObject_11() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643, ____armatureGameObject_11)); }
	inline GameObject_t3674682005 * get__armatureGameObject_11() const { return ____armatureGameObject_11; }
	inline GameObject_t3674682005 ** get_address_of__armatureGameObject_11() { return &____armatureGameObject_11; }
	inline void set__armatureGameObject_11(GameObject_t3674682005 * value)
	{
		____armatureGameObject_11 = value;
		Il2CppCodeGenWriteBarrier(&____armatureGameObject_11, value);
	}

	inline static int32_t get_offset_of__pathDragonBonesDataMap_12() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643, ____pathDragonBonesDataMap_12)); }
	inline Dictionary_2_t2023169130 * get__pathDragonBonesDataMap_12() const { return ____pathDragonBonesDataMap_12; }
	inline Dictionary_2_t2023169130 ** get_address_of__pathDragonBonesDataMap_12() { return &____pathDragonBonesDataMap_12; }
	inline void set__pathDragonBonesDataMap_12(Dictionary_2_t2023169130 * value)
	{
		____pathDragonBonesDataMap_12 = value;
		Il2CppCodeGenWriteBarrier(&____pathDragonBonesDataMap_12, value);
	}

	inline static int32_t get_offset_of__pathTextureAtlasDataMap_13() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643, ____pathTextureAtlasDataMap_13)); }
	inline Dictionary_2_t3923978530 * get__pathTextureAtlasDataMap_13() const { return ____pathTextureAtlasDataMap_13; }
	inline Dictionary_2_t3923978530 ** get_address_of__pathTextureAtlasDataMap_13() { return &____pathTextureAtlasDataMap_13; }
	inline void set__pathTextureAtlasDataMap_13(Dictionary_2_t3923978530 * value)
	{
		____pathTextureAtlasDataMap_13 = value;
		Il2CppCodeGenWriteBarrier(&____pathTextureAtlasDataMap_13, value);
	}
};

struct UnityFactory_t2506963643_StaticFields
{
public:
	// DragonBones.IEventDispatcher`1<DragonBones.EventObject> DragonBones.UnityFactory::_eventManager
	Il2CppObject* ____eventManager_5;
	// UnityEngine.GameObject DragonBones.UnityFactory::_gameObject
	GameObject_t3674682005 * ____gameObject_6;
	// DragonBones.WorldClock DragonBones.UnityFactory::_clock
	WorldClock_t245661442 * ____clock_7;
	// DragonBones.UnityFactory DragonBones.UnityFactory::factory
	UnityFactory_t2506963643 * ___factory_8;

public:
	inline static int32_t get_offset_of__eventManager_5() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643_StaticFields, ____eventManager_5)); }
	inline Il2CppObject* get__eventManager_5() const { return ____eventManager_5; }
	inline Il2CppObject** get_address_of__eventManager_5() { return &____eventManager_5; }
	inline void set__eventManager_5(Il2CppObject* value)
	{
		____eventManager_5 = value;
		Il2CppCodeGenWriteBarrier(&____eventManager_5, value);
	}

	inline static int32_t get_offset_of__gameObject_6() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643_StaticFields, ____gameObject_6)); }
	inline GameObject_t3674682005 * get__gameObject_6() const { return ____gameObject_6; }
	inline GameObject_t3674682005 ** get_address_of__gameObject_6() { return &____gameObject_6; }
	inline void set__gameObject_6(GameObject_t3674682005 * value)
	{
		____gameObject_6 = value;
		Il2CppCodeGenWriteBarrier(&____gameObject_6, value);
	}

	inline static int32_t get_offset_of__clock_7() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643_StaticFields, ____clock_7)); }
	inline WorldClock_t245661442 * get__clock_7() const { return ____clock_7; }
	inline WorldClock_t245661442 ** get_address_of__clock_7() { return &____clock_7; }
	inline void set__clock_7(WorldClock_t245661442 * value)
	{
		____clock_7 = value;
		Il2CppCodeGenWriteBarrier(&____clock_7, value);
	}

	inline static int32_t get_offset_of_factory_8() { return static_cast<int32_t>(offsetof(UnityFactory_t2506963643_StaticFields, ___factory_8)); }
	inline UnityFactory_t2506963643 * get_factory_8() const { return ___factory_8; }
	inline UnityFactory_t2506963643 ** get_address_of_factory_8() { return &___factory_8; }
	inline void set_factory_8(UnityFactory_t2506963643 * value)
	{
		___factory_8 = value;
		Il2CppCodeGenWriteBarrier(&___factory_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
