#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DragonBones.Point
struct Point_t3755811474;
// DragonBones.Matrix
struct Matrix_t655848487;
// System.String
struct String_t;
// DragonBones.ColorTransform
struct ColorTransform_t810296751;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1365137228;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;
// System.Collections.Generic.List`1<DragonBones.TextureData>
struct List_1_t1791377591;
// System.Collections.Generic.List`1<DragonBones.DisplayData>
struct List_1_t1891981534;
// System.Collections.Generic.List`1<DragonBones.Bone>
struct List_1_t3973475962;
// DragonBones.SkinSlotData
struct SkinSlotData_t3577659979;
// DragonBones.DisplayData
struct DisplayData_t523795982;
// DragonBones.TextureData
struct TextureData_t423192039;
// DragonBones.MeshData
struct MeshData_t3056745245;
// DragonBones.BoundingBoxData
struct BoundingBoxData_t3518226771;
// System.Object
struct Il2CppObject;
// DragonBones.Armature
struct Armature_t2093713247;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;

#include "AssemblyU2DCSharp_DragonBones_TransformObject3102074189.h"
#include "AssemblyU2DCSharp_DragonBones_BlendMode3235595158.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragonBones.Slot
struct  Slot_t2605794020  : public TransformObject_t3102074189
{
public:
	// System.String DragonBones.Slot::displayController
	String_t* ___displayController_15;
	// System.Boolean DragonBones.Slot::_displayDirty
	bool ____displayDirty_16;
	// System.Boolean DragonBones.Slot::_zOrderDirty
	bool ____zOrderDirty_17;
	// System.Boolean DragonBones.Slot::_blendModeDirty
	bool ____blendModeDirty_18;
	// System.Boolean DragonBones.Slot::_colorDirty
	bool ____colorDirty_19;
	// System.Boolean DragonBones.Slot::_originalDirty
	bool ____originalDirty_20;
	// System.Boolean DragonBones.Slot::_transformDirty
	bool ____transformDirty_21;
	// System.Boolean DragonBones.Slot::_meshDirty
	bool ____meshDirty_22;
	// System.Int32 DragonBones.Slot::_updateState
	int32_t ____updateState_23;
	// DragonBones.BlendMode DragonBones.Slot::_blendMode
	int32_t ____blendMode_24;
	// System.Int32 DragonBones.Slot::_displayIndex
	int32_t ____displayIndex_25;
	// System.Int32 DragonBones.Slot::_cachedFrameIndex
	int32_t ____cachedFrameIndex_26;
	// System.Int32 DragonBones.Slot::_zOrder
	int32_t ____zOrder_27;
	// System.Single DragonBones.Slot::_pivotX
	float ____pivotX_28;
	// System.Single DragonBones.Slot::_pivotY
	float ____pivotY_29;
	// DragonBones.Matrix DragonBones.Slot::_localMatrix
	Matrix_t655848487 * ____localMatrix_30;
	// DragonBones.ColorTransform DragonBones.Slot::_colorTransform
	ColorTransform_t810296751 * ____colorTransform_31;
	// System.Collections.Generic.List`1<System.Single> DragonBones.Slot::_ffdVertices
	List_1_t1365137228 * ____ffdVertices_32;
	// System.Collections.Generic.List`1<System.Object> DragonBones.Slot::_displayList
	List_1_t1244034627 * ____displayList_33;
	// System.Collections.Generic.List`1<DragonBones.TextureData> DragonBones.Slot::_textureDatas
	List_1_t1791377591 * ____textureDatas_34;
	// System.Collections.Generic.List`1<DragonBones.DisplayData> DragonBones.Slot::_replacedDisplayDatas
	List_1_t1891981534 * ____replacedDisplayDatas_35;
	// System.Collections.Generic.List`1<DragonBones.Bone> DragonBones.Slot::_meshBones
	List_1_t3973475962 * ____meshBones_36;
	// DragonBones.SkinSlotData DragonBones.Slot::_skinSlotData
	SkinSlotData_t3577659979 * ____skinSlotData_37;
	// DragonBones.DisplayData DragonBones.Slot::_displayData
	DisplayData_t523795982 * ____displayData_38;
	// DragonBones.DisplayData DragonBones.Slot::_replacedDisplayData
	DisplayData_t523795982 * ____replacedDisplayData_39;
	// DragonBones.TextureData DragonBones.Slot::_textureData
	TextureData_t423192039 * ____textureData_40;
	// DragonBones.MeshData DragonBones.Slot::_meshData
	MeshData_t3056745245 * ____meshData_41;
	// DragonBones.BoundingBoxData DragonBones.Slot::_boundingBoxData
	BoundingBoxData_t3518226771 * ____boundingBoxData_42;
	// System.Object DragonBones.Slot::_rawDisplay
	Il2CppObject * ____rawDisplay_43;
	// System.Object DragonBones.Slot::_meshDisplay
	Il2CppObject * ____meshDisplay_44;
	// System.Object DragonBones.Slot::_display
	Il2CppObject * ____display_45;
	// DragonBones.Armature DragonBones.Slot::_childArmature
	Armature_t2093713247 * ____childArmature_46;
	// System.Collections.Generic.List`1<System.Int32> DragonBones.Slot::_cachedFrameIndices
	List_1_t2522024052 * ____cachedFrameIndices_47;

public:
	inline static int32_t get_offset_of_displayController_15() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ___displayController_15)); }
	inline String_t* get_displayController_15() const { return ___displayController_15; }
	inline String_t** get_address_of_displayController_15() { return &___displayController_15; }
	inline void set_displayController_15(String_t* value)
	{
		___displayController_15 = value;
		Il2CppCodeGenWriteBarrier(&___displayController_15, value);
	}

	inline static int32_t get_offset_of__displayDirty_16() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____displayDirty_16)); }
	inline bool get__displayDirty_16() const { return ____displayDirty_16; }
	inline bool* get_address_of__displayDirty_16() { return &____displayDirty_16; }
	inline void set__displayDirty_16(bool value)
	{
		____displayDirty_16 = value;
	}

	inline static int32_t get_offset_of__zOrderDirty_17() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____zOrderDirty_17)); }
	inline bool get__zOrderDirty_17() const { return ____zOrderDirty_17; }
	inline bool* get_address_of__zOrderDirty_17() { return &____zOrderDirty_17; }
	inline void set__zOrderDirty_17(bool value)
	{
		____zOrderDirty_17 = value;
	}

	inline static int32_t get_offset_of__blendModeDirty_18() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____blendModeDirty_18)); }
	inline bool get__blendModeDirty_18() const { return ____blendModeDirty_18; }
	inline bool* get_address_of__blendModeDirty_18() { return &____blendModeDirty_18; }
	inline void set__blendModeDirty_18(bool value)
	{
		____blendModeDirty_18 = value;
	}

	inline static int32_t get_offset_of__colorDirty_19() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____colorDirty_19)); }
	inline bool get__colorDirty_19() const { return ____colorDirty_19; }
	inline bool* get_address_of__colorDirty_19() { return &____colorDirty_19; }
	inline void set__colorDirty_19(bool value)
	{
		____colorDirty_19 = value;
	}

	inline static int32_t get_offset_of__originalDirty_20() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____originalDirty_20)); }
	inline bool get__originalDirty_20() const { return ____originalDirty_20; }
	inline bool* get_address_of__originalDirty_20() { return &____originalDirty_20; }
	inline void set__originalDirty_20(bool value)
	{
		____originalDirty_20 = value;
	}

	inline static int32_t get_offset_of__transformDirty_21() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____transformDirty_21)); }
	inline bool get__transformDirty_21() const { return ____transformDirty_21; }
	inline bool* get_address_of__transformDirty_21() { return &____transformDirty_21; }
	inline void set__transformDirty_21(bool value)
	{
		____transformDirty_21 = value;
	}

	inline static int32_t get_offset_of__meshDirty_22() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____meshDirty_22)); }
	inline bool get__meshDirty_22() const { return ____meshDirty_22; }
	inline bool* get_address_of__meshDirty_22() { return &____meshDirty_22; }
	inline void set__meshDirty_22(bool value)
	{
		____meshDirty_22 = value;
	}

	inline static int32_t get_offset_of__updateState_23() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____updateState_23)); }
	inline int32_t get__updateState_23() const { return ____updateState_23; }
	inline int32_t* get_address_of__updateState_23() { return &____updateState_23; }
	inline void set__updateState_23(int32_t value)
	{
		____updateState_23 = value;
	}

	inline static int32_t get_offset_of__blendMode_24() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____blendMode_24)); }
	inline int32_t get__blendMode_24() const { return ____blendMode_24; }
	inline int32_t* get_address_of__blendMode_24() { return &____blendMode_24; }
	inline void set__blendMode_24(int32_t value)
	{
		____blendMode_24 = value;
	}

	inline static int32_t get_offset_of__displayIndex_25() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____displayIndex_25)); }
	inline int32_t get__displayIndex_25() const { return ____displayIndex_25; }
	inline int32_t* get_address_of__displayIndex_25() { return &____displayIndex_25; }
	inline void set__displayIndex_25(int32_t value)
	{
		____displayIndex_25 = value;
	}

	inline static int32_t get_offset_of__cachedFrameIndex_26() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____cachedFrameIndex_26)); }
	inline int32_t get__cachedFrameIndex_26() const { return ____cachedFrameIndex_26; }
	inline int32_t* get_address_of__cachedFrameIndex_26() { return &____cachedFrameIndex_26; }
	inline void set__cachedFrameIndex_26(int32_t value)
	{
		____cachedFrameIndex_26 = value;
	}

	inline static int32_t get_offset_of__zOrder_27() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____zOrder_27)); }
	inline int32_t get__zOrder_27() const { return ____zOrder_27; }
	inline int32_t* get_address_of__zOrder_27() { return &____zOrder_27; }
	inline void set__zOrder_27(int32_t value)
	{
		____zOrder_27 = value;
	}

	inline static int32_t get_offset_of__pivotX_28() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____pivotX_28)); }
	inline float get__pivotX_28() const { return ____pivotX_28; }
	inline float* get_address_of__pivotX_28() { return &____pivotX_28; }
	inline void set__pivotX_28(float value)
	{
		____pivotX_28 = value;
	}

	inline static int32_t get_offset_of__pivotY_29() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____pivotY_29)); }
	inline float get__pivotY_29() const { return ____pivotY_29; }
	inline float* get_address_of__pivotY_29() { return &____pivotY_29; }
	inline void set__pivotY_29(float value)
	{
		____pivotY_29 = value;
	}

	inline static int32_t get_offset_of__localMatrix_30() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____localMatrix_30)); }
	inline Matrix_t655848487 * get__localMatrix_30() const { return ____localMatrix_30; }
	inline Matrix_t655848487 ** get_address_of__localMatrix_30() { return &____localMatrix_30; }
	inline void set__localMatrix_30(Matrix_t655848487 * value)
	{
		____localMatrix_30 = value;
		Il2CppCodeGenWriteBarrier(&____localMatrix_30, value);
	}

	inline static int32_t get_offset_of__colorTransform_31() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____colorTransform_31)); }
	inline ColorTransform_t810296751 * get__colorTransform_31() const { return ____colorTransform_31; }
	inline ColorTransform_t810296751 ** get_address_of__colorTransform_31() { return &____colorTransform_31; }
	inline void set__colorTransform_31(ColorTransform_t810296751 * value)
	{
		____colorTransform_31 = value;
		Il2CppCodeGenWriteBarrier(&____colorTransform_31, value);
	}

	inline static int32_t get_offset_of__ffdVertices_32() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____ffdVertices_32)); }
	inline List_1_t1365137228 * get__ffdVertices_32() const { return ____ffdVertices_32; }
	inline List_1_t1365137228 ** get_address_of__ffdVertices_32() { return &____ffdVertices_32; }
	inline void set__ffdVertices_32(List_1_t1365137228 * value)
	{
		____ffdVertices_32 = value;
		Il2CppCodeGenWriteBarrier(&____ffdVertices_32, value);
	}

	inline static int32_t get_offset_of__displayList_33() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____displayList_33)); }
	inline List_1_t1244034627 * get__displayList_33() const { return ____displayList_33; }
	inline List_1_t1244034627 ** get_address_of__displayList_33() { return &____displayList_33; }
	inline void set__displayList_33(List_1_t1244034627 * value)
	{
		____displayList_33 = value;
		Il2CppCodeGenWriteBarrier(&____displayList_33, value);
	}

	inline static int32_t get_offset_of__textureDatas_34() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____textureDatas_34)); }
	inline List_1_t1791377591 * get__textureDatas_34() const { return ____textureDatas_34; }
	inline List_1_t1791377591 ** get_address_of__textureDatas_34() { return &____textureDatas_34; }
	inline void set__textureDatas_34(List_1_t1791377591 * value)
	{
		____textureDatas_34 = value;
		Il2CppCodeGenWriteBarrier(&____textureDatas_34, value);
	}

	inline static int32_t get_offset_of__replacedDisplayDatas_35() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____replacedDisplayDatas_35)); }
	inline List_1_t1891981534 * get__replacedDisplayDatas_35() const { return ____replacedDisplayDatas_35; }
	inline List_1_t1891981534 ** get_address_of__replacedDisplayDatas_35() { return &____replacedDisplayDatas_35; }
	inline void set__replacedDisplayDatas_35(List_1_t1891981534 * value)
	{
		____replacedDisplayDatas_35 = value;
		Il2CppCodeGenWriteBarrier(&____replacedDisplayDatas_35, value);
	}

	inline static int32_t get_offset_of__meshBones_36() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____meshBones_36)); }
	inline List_1_t3973475962 * get__meshBones_36() const { return ____meshBones_36; }
	inline List_1_t3973475962 ** get_address_of__meshBones_36() { return &____meshBones_36; }
	inline void set__meshBones_36(List_1_t3973475962 * value)
	{
		____meshBones_36 = value;
		Il2CppCodeGenWriteBarrier(&____meshBones_36, value);
	}

	inline static int32_t get_offset_of__skinSlotData_37() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____skinSlotData_37)); }
	inline SkinSlotData_t3577659979 * get__skinSlotData_37() const { return ____skinSlotData_37; }
	inline SkinSlotData_t3577659979 ** get_address_of__skinSlotData_37() { return &____skinSlotData_37; }
	inline void set__skinSlotData_37(SkinSlotData_t3577659979 * value)
	{
		____skinSlotData_37 = value;
		Il2CppCodeGenWriteBarrier(&____skinSlotData_37, value);
	}

	inline static int32_t get_offset_of__displayData_38() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____displayData_38)); }
	inline DisplayData_t523795982 * get__displayData_38() const { return ____displayData_38; }
	inline DisplayData_t523795982 ** get_address_of__displayData_38() { return &____displayData_38; }
	inline void set__displayData_38(DisplayData_t523795982 * value)
	{
		____displayData_38 = value;
		Il2CppCodeGenWriteBarrier(&____displayData_38, value);
	}

	inline static int32_t get_offset_of__replacedDisplayData_39() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____replacedDisplayData_39)); }
	inline DisplayData_t523795982 * get__replacedDisplayData_39() const { return ____replacedDisplayData_39; }
	inline DisplayData_t523795982 ** get_address_of__replacedDisplayData_39() { return &____replacedDisplayData_39; }
	inline void set__replacedDisplayData_39(DisplayData_t523795982 * value)
	{
		____replacedDisplayData_39 = value;
		Il2CppCodeGenWriteBarrier(&____replacedDisplayData_39, value);
	}

	inline static int32_t get_offset_of__textureData_40() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____textureData_40)); }
	inline TextureData_t423192039 * get__textureData_40() const { return ____textureData_40; }
	inline TextureData_t423192039 ** get_address_of__textureData_40() { return &____textureData_40; }
	inline void set__textureData_40(TextureData_t423192039 * value)
	{
		____textureData_40 = value;
		Il2CppCodeGenWriteBarrier(&____textureData_40, value);
	}

	inline static int32_t get_offset_of__meshData_41() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____meshData_41)); }
	inline MeshData_t3056745245 * get__meshData_41() const { return ____meshData_41; }
	inline MeshData_t3056745245 ** get_address_of__meshData_41() { return &____meshData_41; }
	inline void set__meshData_41(MeshData_t3056745245 * value)
	{
		____meshData_41 = value;
		Il2CppCodeGenWriteBarrier(&____meshData_41, value);
	}

	inline static int32_t get_offset_of__boundingBoxData_42() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____boundingBoxData_42)); }
	inline BoundingBoxData_t3518226771 * get__boundingBoxData_42() const { return ____boundingBoxData_42; }
	inline BoundingBoxData_t3518226771 ** get_address_of__boundingBoxData_42() { return &____boundingBoxData_42; }
	inline void set__boundingBoxData_42(BoundingBoxData_t3518226771 * value)
	{
		____boundingBoxData_42 = value;
		Il2CppCodeGenWriteBarrier(&____boundingBoxData_42, value);
	}

	inline static int32_t get_offset_of__rawDisplay_43() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____rawDisplay_43)); }
	inline Il2CppObject * get__rawDisplay_43() const { return ____rawDisplay_43; }
	inline Il2CppObject ** get_address_of__rawDisplay_43() { return &____rawDisplay_43; }
	inline void set__rawDisplay_43(Il2CppObject * value)
	{
		____rawDisplay_43 = value;
		Il2CppCodeGenWriteBarrier(&____rawDisplay_43, value);
	}

	inline static int32_t get_offset_of__meshDisplay_44() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____meshDisplay_44)); }
	inline Il2CppObject * get__meshDisplay_44() const { return ____meshDisplay_44; }
	inline Il2CppObject ** get_address_of__meshDisplay_44() { return &____meshDisplay_44; }
	inline void set__meshDisplay_44(Il2CppObject * value)
	{
		____meshDisplay_44 = value;
		Il2CppCodeGenWriteBarrier(&____meshDisplay_44, value);
	}

	inline static int32_t get_offset_of__display_45() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____display_45)); }
	inline Il2CppObject * get__display_45() const { return ____display_45; }
	inline Il2CppObject ** get_address_of__display_45() { return &____display_45; }
	inline void set__display_45(Il2CppObject * value)
	{
		____display_45 = value;
		Il2CppCodeGenWriteBarrier(&____display_45, value);
	}

	inline static int32_t get_offset_of__childArmature_46() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____childArmature_46)); }
	inline Armature_t2093713247 * get__childArmature_46() const { return ____childArmature_46; }
	inline Armature_t2093713247 ** get_address_of__childArmature_46() { return &____childArmature_46; }
	inline void set__childArmature_46(Armature_t2093713247 * value)
	{
		____childArmature_46 = value;
		Il2CppCodeGenWriteBarrier(&____childArmature_46, value);
	}

	inline static int32_t get_offset_of__cachedFrameIndices_47() { return static_cast<int32_t>(offsetof(Slot_t2605794020, ____cachedFrameIndices_47)); }
	inline List_1_t2522024052 * get__cachedFrameIndices_47() const { return ____cachedFrameIndices_47; }
	inline List_1_t2522024052 ** get_address_of__cachedFrameIndices_47() { return &____cachedFrameIndices_47; }
	inline void set__cachedFrameIndices_47(List_1_t2522024052 * value)
	{
		____cachedFrameIndices_47 = value;
		Il2CppCodeGenWriteBarrier(&____cachedFrameIndices_47, value);
	}
};

struct Slot_t2605794020_StaticFields
{
public:
	// DragonBones.Point DragonBones.Slot::_helpPoint
	Point_t3755811474 * ____helpPoint_13;
	// DragonBones.Matrix DragonBones.Slot::_helpMatrix
	Matrix_t655848487 * ____helpMatrix_14;

public:
	inline static int32_t get_offset_of__helpPoint_13() { return static_cast<int32_t>(offsetof(Slot_t2605794020_StaticFields, ____helpPoint_13)); }
	inline Point_t3755811474 * get__helpPoint_13() const { return ____helpPoint_13; }
	inline Point_t3755811474 ** get_address_of__helpPoint_13() { return &____helpPoint_13; }
	inline void set__helpPoint_13(Point_t3755811474 * value)
	{
		____helpPoint_13 = value;
		Il2CppCodeGenWriteBarrier(&____helpPoint_13, value);
	}

	inline static int32_t get_offset_of__helpMatrix_14() { return static_cast<int32_t>(offsetof(Slot_t2605794020_StaticFields, ____helpMatrix_14)); }
	inline Matrix_t655848487 * get__helpMatrix_14() const { return ____helpMatrix_14; }
	inline Matrix_t655848487 ** get_address_of__helpMatrix_14() { return &____helpMatrix_14; }
	inline void set__helpMatrix_14(Matrix_t655848487 * value)
	{
		____helpMatrix_14 = value;
		Il2CppCodeGenWriteBarrier(&____helpMatrix_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
