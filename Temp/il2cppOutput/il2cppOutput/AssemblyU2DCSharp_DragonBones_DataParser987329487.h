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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// DragonBones.Point
struct Point_t3755811474;
// DragonBones.Transform
struct Transform_t3392663918;
// DragonBones.Matrix
struct Matrix_t655848487;
// System.Collections.Generic.List`1<DragonBones.BoneData>
struct List_1_t2573072196;
// DragonBones.DragonBonesData
struct DragonBonesData_t1202750760;
// DragonBones.ArmatureData
struct ArmatureData_t3944230313;
// DragonBones.SkinData
struct SkinData_t1378009773;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.AnimationData
struct AnimationData_t1484381264;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.DataParser
struct  DataParser_t987329487  : public Il2CppObject
{
public:
	// System.Boolean DragonBones.DataParser::_isOldData
	bool ____isOldData_106;
	// System.Boolean DragonBones.DataParser::_isGlobalTransform
	bool ____isGlobalTransform_107;
	// System.Boolean DragonBones.DataParser::_isAutoTween
	bool ____isAutoTween_108;
	// System.Single DragonBones.DataParser::_animationTweenEasing
	float ____animationTweenEasing_109;
	// DragonBones.Point DragonBones.DataParser::_timelinePivot
	Point_t3755811474 * ____timelinePivot_110;
	// DragonBones.Point DragonBones.DataParser::_helpPoint
	Point_t3755811474 * ____helpPoint_111;
	// DragonBones.Transform DragonBones.DataParser::_helpTransformA
	Transform_t3392663918 * ____helpTransformA_112;
	// DragonBones.Transform DragonBones.DataParser::_helpTransformB
	Transform_t3392663918 * ____helpTransformB_113;
	// DragonBones.Matrix DragonBones.DataParser::_helpMatrix
	Matrix_t655848487 * ____helpMatrix_114;
	// System.Collections.Generic.List`1<DragonBones.BoneData> DragonBones.DataParser::_rawBones
	List_1_t2573072196 * ____rawBones_115;
	// DragonBones.DragonBonesData DragonBones.DataParser::_data
	DragonBonesData_t1202750760 * ____data_116;
	// DragonBones.ArmatureData DragonBones.DataParser::_armature
	ArmatureData_t3944230313 * ____armature_117;
	// DragonBones.SkinData DragonBones.DataParser::_skin
	SkinData_t1378009773 * ____skin_118;
	// DragonBones.SkinSlotData DragonBones.DataParser::_skinSlotData
	SkinSlotData_t3577659979 * ____skinSlotData_119;
	// DragonBones.AnimationData DragonBones.DataParser::_animation
	AnimationData_t1484381264 * ____animation_120;
	// System.Object DragonBones.DataParser::_timeline
	Il2CppObject * ____timeline_121;

public:
	inline static int32_t get_offset_of__isOldData_106() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____isOldData_106)); }
	inline bool get__isOldData_106() const { return ____isOldData_106; }
	inline bool* get_address_of__isOldData_106() { return &____isOldData_106; }
	inline void set__isOldData_106(bool value)
	{
		____isOldData_106 = value;
	}

	inline static int32_t get_offset_of__isGlobalTransform_107() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____isGlobalTransform_107)); }
	inline bool get__isGlobalTransform_107() const { return ____isGlobalTransform_107; }
	inline bool* get_address_of__isGlobalTransform_107() { return &____isGlobalTransform_107; }
	inline void set__isGlobalTransform_107(bool value)
	{
		____isGlobalTransform_107 = value;
	}

	inline static int32_t get_offset_of__isAutoTween_108() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____isAutoTween_108)); }
	inline bool get__isAutoTween_108() const { return ____isAutoTween_108; }
	inline bool* get_address_of__isAutoTween_108() { return &____isAutoTween_108; }
	inline void set__isAutoTween_108(bool value)
	{
		____isAutoTween_108 = value;
	}

	inline static int32_t get_offset_of__animationTweenEasing_109() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____animationTweenEasing_109)); }
	inline float get__animationTweenEasing_109() const { return ____animationTweenEasing_109; }
	inline float* get_address_of__animationTweenEasing_109() { return &____animationTweenEasing_109; }
	inline void set__animationTweenEasing_109(float value)
	{
		____animationTweenEasing_109 = value;
	}

	inline static int32_t get_offset_of__timelinePivot_110() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____timelinePivot_110)); }
	inline Point_t3755811474 * get__timelinePivot_110() const { return ____timelinePivot_110; }
	inline Point_t3755811474 ** get_address_of__timelinePivot_110() { return &____timelinePivot_110; }
	inline void set__timelinePivot_110(Point_t3755811474 * value)
	{
		____timelinePivot_110 = value;
		Il2CppCodeGenWriteBarrier(&____timelinePivot_110, value);
	}

	inline static int32_t get_offset_of__helpPoint_111() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____helpPoint_111)); }
	inline Point_t3755811474 * get__helpPoint_111() const { return ____helpPoint_111; }
	inline Point_t3755811474 ** get_address_of__helpPoint_111() { return &____helpPoint_111; }
	inline void set__helpPoint_111(Point_t3755811474 * value)
	{
		____helpPoint_111 = value;
		Il2CppCodeGenWriteBarrier(&____helpPoint_111, value);
	}

	inline static int32_t get_offset_of__helpTransformA_112() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____helpTransformA_112)); }
	inline Transform_t3392663918 * get__helpTransformA_112() const { return ____helpTransformA_112; }
	inline Transform_t3392663918 ** get_address_of__helpTransformA_112() { return &____helpTransformA_112; }
	inline void set__helpTransformA_112(Transform_t3392663918 * value)
	{
		____helpTransformA_112 = value;
		Il2CppCodeGenWriteBarrier(&____helpTransformA_112, value);
	}

	inline static int32_t get_offset_of__helpTransformB_113() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____helpTransformB_113)); }
	inline Transform_t3392663918 * get__helpTransformB_113() const { return ____helpTransformB_113; }
	inline Transform_t3392663918 ** get_address_of__helpTransformB_113() { return &____helpTransformB_113; }
	inline void set__helpTransformB_113(Transform_t3392663918 * value)
	{
		____helpTransformB_113 = value;
		Il2CppCodeGenWriteBarrier(&____helpTransformB_113, value);
	}

	inline static int32_t get_offset_of__helpMatrix_114() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____helpMatrix_114)); }
	inline Matrix_t655848487 * get__helpMatrix_114() const { return ____helpMatrix_114; }
	inline Matrix_t655848487 ** get_address_of__helpMatrix_114() { return &____helpMatrix_114; }
	inline void set__helpMatrix_114(Matrix_t655848487 * value)
	{
		____helpMatrix_114 = value;
		Il2CppCodeGenWriteBarrier(&____helpMatrix_114, value);
	}

	inline static int32_t get_offset_of__rawBones_115() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____rawBones_115)); }
	inline List_1_t2573072196 * get__rawBones_115() const { return ____rawBones_115; }
	inline List_1_t2573072196 ** get_address_of__rawBones_115() { return &____rawBones_115; }
	inline void set__rawBones_115(List_1_t2573072196 * value)
	{
		____rawBones_115 = value;
		Il2CppCodeGenWriteBarrier(&____rawBones_115, value);
	}

	inline static int32_t get_offset_of__data_116() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____data_116)); }
	inline DragonBonesData_t1202750760 * get__data_116() const { return ____data_116; }
	inline DragonBonesData_t1202750760 ** get_address_of__data_116() { return &____data_116; }
	inline void set__data_116(DragonBonesData_t1202750760 * value)
	{
		____data_116 = value;
		Il2CppCodeGenWriteBarrier(&____data_116, value);
	}

	inline static int32_t get_offset_of__armature_117() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____armature_117)); }
	inline ArmatureData_t3944230313 * get__armature_117() const { return ____armature_117; }
	inline ArmatureData_t3944230313 ** get_address_of__armature_117() { return &____armature_117; }
	inline void set__armature_117(ArmatureData_t3944230313 * value)
	{
		____armature_117 = value;
		Il2CppCodeGenWriteBarrier(&____armature_117, value);
	}

	inline static int32_t get_offset_of__skin_118() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____skin_118)); }
	inline SkinData_t1378009773 * get__skin_118() const { return ____skin_118; }
	inline SkinData_t1378009773 ** get_address_of__skin_118() { return &____skin_118; }
	inline void set__skin_118(SkinData_t1378009773 * value)
	{
		____skin_118 = value;
		Il2CppCodeGenWriteBarrier(&____skin_118, value);
	}

	inline static int32_t get_offset_of__skinSlotData_119() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____skinSlotData_119)); }
	inline SkinSlotData_t3577659979 * get__skinSlotData_119() const { return ____skinSlotData_119; }
	inline SkinSlotData_t3577659979 ** get_address_of__skinSlotData_119() { return &____skinSlotData_119; }
	inline void set__skinSlotData_119(SkinSlotData_t3577659979 * value)
	{
		____skinSlotData_119 = value;
		Il2CppCodeGenWriteBarrier(&____skinSlotData_119, value);
	}

	inline static int32_t get_offset_of__animation_120() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____animation_120)); }
	inline AnimationData_t1484381264 * get__animation_120() const { return ____animation_120; }
	inline AnimationData_t1484381264 ** get_address_of__animation_120() { return &____animation_120; }
	inline void set__animation_120(AnimationData_t1484381264 * value)
	{
		____animation_120 = value;
		Il2CppCodeGenWriteBarrier(&____animation_120, value);
	}

	inline static int32_t get_offset_of__timeline_121() { return static_cast<int32_t>(offsetof(DataParser_t987329487, ____timeline_121)); }
	inline Il2CppObject * get__timeline_121() const { return ____timeline_121; }
	inline Il2CppObject ** get_address_of__timeline_121() { return &____timeline_121; }
	inline void set__timeline_121(Il2CppObject * value)
	{
		____timeline_121 = value;
		Il2CppCodeGenWriteBarrier(&____timeline_121, value);
	}
};

struct DataParser_t987329487_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.String> DragonBones.DataParser::DATA_VERSIONS
	List_1_t1375417109 * ___DATA_VERSIONS_105;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DragonBones.DataParser::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_122;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DragonBones.DataParser::<>f__switch$map2
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map2_123;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DragonBones.DataParser::<>f__switch$map3
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map3_124;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DragonBones.DataParser::<>f__switch$map4
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map4_125;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> DragonBones.DataParser::<>f__switch$map5
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map5_126;

public:
	inline static int32_t get_offset_of_DATA_VERSIONS_105() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___DATA_VERSIONS_105)); }
	inline List_1_t1375417109 * get_DATA_VERSIONS_105() const { return ___DATA_VERSIONS_105; }
	inline List_1_t1375417109 ** get_address_of_DATA_VERSIONS_105() { return &___DATA_VERSIONS_105; }
	inline void set_DATA_VERSIONS_105(List_1_t1375417109 * value)
	{
		___DATA_VERSIONS_105 = value;
		Il2CppCodeGenWriteBarrier(&___DATA_VERSIONS_105, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_122() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___U3CU3Ef__switchU24map1_122)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_122() const { return ___U3CU3Ef__switchU24map1_122; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_122() { return &___U3CU3Ef__switchU24map1_122; }
	inline void set_U3CU3Ef__switchU24map1_122(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_122 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_122, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_123() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___U3CU3Ef__switchU24map2_123)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map2_123() const { return ___U3CU3Ef__switchU24map2_123; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map2_123() { return &___U3CU3Ef__switchU24map2_123; }
	inline void set_U3CU3Ef__switchU24map2_123(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map2_123 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map2_123, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_124() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___U3CU3Ef__switchU24map3_124)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map3_124() const { return ___U3CU3Ef__switchU24map3_124; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map3_124() { return &___U3CU3Ef__switchU24map3_124; }
	inline void set_U3CU3Ef__switchU24map3_124(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map3_124 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map3_124, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map4_125() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___U3CU3Ef__switchU24map4_125)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map4_125() const { return ___U3CU3Ef__switchU24map4_125; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map4_125() { return &___U3CU3Ef__switchU24map4_125; }
	inline void set_U3CU3Ef__switchU24map4_125(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map4_125 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map4_125, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_126() { return static_cast<int32_t>(offsetof(DataParser_t987329487_StaticFields, ___U3CU3Ef__switchU24map5_126)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map5_126() const { return ___U3CU3Ef__switchU24map5_126; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map5_126() { return &___U3CU3Ef__switchU24map5_126; }
	inline void set_U3CU3Ef__switchU24map5_126(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map5_126 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map5_126, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
