#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.ObjectDataParser
struct ObjectDataParser_t911555310;
// DragonBones.DataParser
struct DataParser_t987329487;
// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData>
struct Dictionary_2_t2023169130;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>>
struct Dictionary_2_t997196786;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.BaseFactory
struct  BaseFactory_t19519355  : public Il2CppObject
{
public:
	// System.Boolean DragonBones.BaseFactory::autoSearch
	bool ___autoSearch_1;
	// DragonBones.DataParser DragonBones.BaseFactory::_dataParser
	DataParser_t987329487 * ____dataParser_2;
	// System.Collections.Generic.Dictionary`2<System.String,DragonBones.DragonBonesData> DragonBones.BaseFactory::_dragonBonesDataMap
	Dictionary_2_t2023169130 * ____dragonBonesDataMap_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<DragonBones.TextureAtlasData>> DragonBones.BaseFactory::_textureAtlasDataMap
	Dictionary_2_t997196786 * ____textureAtlasDataMap_4;

public:
	inline static int32_t get_offset_of_autoSearch_1() { return static_cast<int32_t>(offsetof(BaseFactory_t19519355, ___autoSearch_1)); }
	inline bool get_autoSearch_1() const { return ___autoSearch_1; }
	inline bool* get_address_of_autoSearch_1() { return &___autoSearch_1; }
	inline void set_autoSearch_1(bool value)
	{
		___autoSearch_1 = value;
	}

	inline static int32_t get_offset_of__dataParser_2() { return static_cast<int32_t>(offsetof(BaseFactory_t19519355, ____dataParser_2)); }
	inline DataParser_t987329487 * get__dataParser_2() const { return ____dataParser_2; }
	inline DataParser_t987329487 ** get_address_of__dataParser_2() { return &____dataParser_2; }
	inline void set__dataParser_2(DataParser_t987329487 * value)
	{
		____dataParser_2 = value;
		Il2CppCodeGenWriteBarrier(&____dataParser_2, value);
	}

	inline static int32_t get_offset_of__dragonBonesDataMap_3() { return static_cast<int32_t>(offsetof(BaseFactory_t19519355, ____dragonBonesDataMap_3)); }
	inline Dictionary_2_t2023169130 * get__dragonBonesDataMap_3() const { return ____dragonBonesDataMap_3; }
	inline Dictionary_2_t2023169130 ** get_address_of__dragonBonesDataMap_3() { return &____dragonBonesDataMap_3; }
	inline void set__dragonBonesDataMap_3(Dictionary_2_t2023169130 * value)
	{
		____dragonBonesDataMap_3 = value;
		Il2CppCodeGenWriteBarrier(&____dragonBonesDataMap_3, value);
	}

	inline static int32_t get_offset_of__textureAtlasDataMap_4() { return static_cast<int32_t>(offsetof(BaseFactory_t19519355, ____textureAtlasDataMap_4)); }
	inline Dictionary_2_t997196786 * get__textureAtlasDataMap_4() const { return ____textureAtlasDataMap_4; }
	inline Dictionary_2_t997196786 ** get_address_of__textureAtlasDataMap_4() { return &____textureAtlasDataMap_4; }
	inline void set__textureAtlasDataMap_4(Dictionary_2_t997196786 * value)
	{
		____textureAtlasDataMap_4 = value;
		Il2CppCodeGenWriteBarrier(&____textureAtlasDataMap_4, value);
	}
};

struct BaseFactory_t19519355_StaticFields
{
public:
	// DragonBones.ObjectDataParser DragonBones.BaseFactory::_defaultDataParser
	ObjectDataParser_t911555310 * ____defaultDataParser_0;

public:
	inline static int32_t get_offset_of__defaultDataParser_0() { return static_cast<int32_t>(offsetof(BaseFactory_t19519355_StaticFields, ____defaultDataParser_0)); }
	inline ObjectDataParser_t911555310 * get__defaultDataParser_0() const { return ____defaultDataParser_0; }
	inline ObjectDataParser_t911555310 ** get_address_of__defaultDataParser_0() { return &____defaultDataParser_0; }
	inline void set__defaultDataParser_0(ObjectDataParser_t911555310 * value)
	{
		____defaultDataParser_0 = value;
		Il2CppCodeGenWriteBarrier(&____defaultDataParser_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
