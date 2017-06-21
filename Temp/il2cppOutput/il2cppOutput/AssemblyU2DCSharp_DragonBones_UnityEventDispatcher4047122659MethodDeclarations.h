#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DragonBones.UnityEventDispatcher`1<System.Object>
struct UnityEventDispatcher_1_t4047122659;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// DragonBones.ListenerDelegate`1<System.Object>
struct ListenerDelegate_1_t449451208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void DragonBones.UnityEventDispatcher`1<System.Object>::.ctor()
extern "C"  void UnityEventDispatcher_1__ctor_m3114296478_gshared (UnityEventDispatcher_1_t4047122659 * __this, const MethodInfo* method);
#define UnityEventDispatcher_1__ctor_m3114296478(__this, method) ((  void (*) (UnityEventDispatcher_1_t4047122659 *, const MethodInfo*))UnityEventDispatcher_1__ctor_m3114296478_gshared)(__this, method)
// System.Void DragonBones.UnityEventDispatcher`1<System.Object>::DispatchEvent(System.String,T)
extern "C"  void UnityEventDispatcher_1_DispatchEvent_m2782403486_gshared (UnityEventDispatcher_1_t4047122659 * __this, String_t* ___type0, Il2CppObject * ___eventObject1, const MethodInfo* method);
#define UnityEventDispatcher_1_DispatchEvent_m2782403486(__this, ___type0, ___eventObject1, method) ((  void (*) (UnityEventDispatcher_1_t4047122659 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEventDispatcher_1_DispatchEvent_m2782403486_gshared)(__this, ___type0, ___eventObject1, method)
// System.Boolean DragonBones.UnityEventDispatcher`1<System.Object>::HasEventListener(System.String)
extern "C"  bool UnityEventDispatcher_1_HasEventListener_m3902865820_gshared (UnityEventDispatcher_1_t4047122659 * __this, String_t* ___type0, const MethodInfo* method);
#define UnityEventDispatcher_1_HasEventListener_m3902865820(__this, ___type0, method) ((  bool (*) (UnityEventDispatcher_1_t4047122659 *, String_t*, const MethodInfo*))UnityEventDispatcher_1_HasEventListener_m3902865820_gshared)(__this, ___type0, method)
// System.Void DragonBones.UnityEventDispatcher`1<System.Object>::AddEventListener(System.String,DragonBones.ListenerDelegate`1<T>)
extern "C"  void UnityEventDispatcher_1_AddEventListener_m899876785_gshared (UnityEventDispatcher_1_t4047122659 * __this, String_t* ___type0, ListenerDelegate_1_t449451208 * ___listener1, const MethodInfo* method);
#define UnityEventDispatcher_1_AddEventListener_m899876785(__this, ___type0, ___listener1, method) ((  void (*) (UnityEventDispatcher_1_t4047122659 *, String_t*, ListenerDelegate_1_t449451208 *, const MethodInfo*))UnityEventDispatcher_1_AddEventListener_m899876785_gshared)(__this, ___type0, ___listener1, method)
// System.Void DragonBones.UnityEventDispatcher`1<System.Object>::RemoveEventListener(System.String,DragonBones.ListenerDelegate`1<T>)
extern "C"  void UnityEventDispatcher_1_RemoveEventListener_m4081417342_gshared (UnityEventDispatcher_1_t4047122659 * __this, String_t* ___type0, ListenerDelegate_1_t449451208 * ___listener1, const MethodInfo* method);
#define UnityEventDispatcher_1_RemoveEventListener_m4081417342(__this, ___type0, ___listener1, method) ((  void (*) (UnityEventDispatcher_1_t4047122659 *, String_t*, ListenerDelegate_1_t449451208 *, const MethodInfo*))UnityEventDispatcher_1_RemoveEventListener_m4081417342_gshared)(__this, ___type0, ___listener1, method)
