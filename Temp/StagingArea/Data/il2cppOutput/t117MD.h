﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t117;
struct t117_marshaled;
struct t11;
struct t5;
#include "t528.h"
#include "t192.h"
#include "t193.h"
#include "t124.h"

 void m3185 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t117 * m3186 (t5 * __this, t117 * p0, t192  p1, t193  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t117 * m3187 (t5 * __this, t117 * p0, t192 * p1, t193 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m480 (t5 * __this, t117 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m738 (t5 * __this, t117 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3188 (t5 * __this, t117 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2466 (t5 * __this, t117 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t11* m700 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2554 (t117 * __this, t11* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2421 (t117 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t11* m478 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m476 (t117 * __this, t5 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m477 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m3189 (t5 * __this, t117 * p0, t117 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m3190 (t5 * __this, t117 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m3191 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t124 m3192 (t117 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t117 * m737 (t5 * __this, t117 * p0, t192  p1, t193  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m3193 (t5 * __this, t5 * p0, t11* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m1954 (t5 * __this, t117 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m750 (t5 * __this, t117 * p0, t117 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m751 (t5 * __this, t117 * p0, t117 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t117_marshal(const t117& unmarshaled, t117_marshaled& marshaled);
void t117_marshal_back(const t117_marshaled& marshaled, t117& unmarshaled);
void t117_marshal_cleanup(t117_marshaled& marshaled);