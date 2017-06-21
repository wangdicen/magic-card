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

// DragonBones.ListenerDelegate`1<System.Object>
struct ListenerDelegate_1_t449451208;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void DragonBones.ListenerDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ListenerDelegate_1__ctor_m775508023_gshared (ListenerDelegate_1_t449451208 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define ListenerDelegate_1__ctor_m775508023(__this, ___object0, ___method1, method) ((  void (*) (ListenerDelegate_1_t449451208 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ListenerDelegate_1__ctor_m775508023_gshared)(__this, ___object0, ___method1, method)
// System.Void DragonBones.ListenerDelegate`1<System.Object>::Invoke(System.String,T)
extern "C"  void ListenerDelegate_1_Invoke_m1963883689_gshared (ListenerDelegate_1_t449451208 * __this, String_t* ___type0, Il2CppObject * ___eventObject1, const MethodInfo* method);
#define ListenerDelegate_1_Invoke_m1963883689(__this, ___type0, ___eventObject1, method) ((  void (*) (ListenerDelegate_1_t449451208 *, String_t*, Il2CppObject *, const MethodInfo*))ListenerDelegate_1_Invoke_m1963883689_gshared)(__this, ___type0, ___eventObject1, method)
// System.IAsyncResult DragonBones.ListenerDelegate`1<System.Object>::BeginInvoke(System.String,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ListenerDelegate_1_BeginInvoke_m280637638_gshared (ListenerDelegate_1_t449451208 * __this, String_t* ___type0, Il2CppObject * ___eventObject1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define ListenerDelegate_1_BeginInvoke_m280637638(__this, ___type0, ___eventObject1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (ListenerDelegate_1_t449451208 *, String_t*, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))ListenerDelegate_1_BeginInvoke_m280637638_gshared)(__this, ___type0, ___eventObject1, ___callback2, ___object3, method)
// System.Void DragonBones.ListenerDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void ListenerDelegate_1_EndInvoke_m3526587847_gshared (ListenerDelegate_1_t449451208 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define ListenerDelegate_1_EndInvoke_m3526587847(__this, ___result0, method) ((  void (*) (ListenerDelegate_1_t449451208 *, Il2CppObject *, const MethodInfo*))ListenerDelegate_1_EndInvoke_m3526587847_gshared)(__this, ___result0, method)
