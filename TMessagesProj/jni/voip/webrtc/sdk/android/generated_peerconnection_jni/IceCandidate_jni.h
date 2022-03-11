// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/IceCandidate

#ifndef org_webrtc_IceCandidate_JNI
#define org_webrtc_IceCandidate_JNI

#include <jni.h>

#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_IceCandidate[];
const char kClassPath_org_webrtc_IceCandidate[] = "org/webrtc/IceCandidate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_IceCandidate_clazz(nullptr);
#ifndef org_webrtc_IceCandidate_clazz_defined
#define org_webrtc_IceCandidate_clazz_defined
inline jclass org_webrtc_IceCandidate_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_IceCandidate,
      &g_org_webrtc_IceCandidate_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_IceCandidate_Constructor(nullptr);
static base::android::ScopedJavaLocalRef<jobject> Java_IceCandidate_Constructor(JNIEnv* env, const
    base::android::JavaRef<jstring>& sdpMid,
    JniIntWrapper sdpMLineIndex,
    const base::android::JavaRef<jstring>& sdp,
    const base::android::JavaRef<jstring>& serverUrl,
    const base::android::JavaRef<jobject>& adapterType) {
  jclass clazz = org_webrtc_IceCandidate_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_IceCandidate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
"(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lorg/webrtc/PeerConnection$AdapterType;)V",
          &g_org_webrtc_IceCandidate_Constructor);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, sdpMid.obj(), as_jint(sdpMLineIndex), sdp.obj(),
              serverUrl.obj(), adapterType.obj());
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_IceCandidate_getSdpMid(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_IceCandidate_getSdpMid(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_IceCandidate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_IceCandidate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getSdpMid",
          "()Ljava/lang/String;",
          &g_org_webrtc_IceCandidate_getSdpMid);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_IceCandidate_getSdp(nullptr);
static base::android::ScopedJavaLocalRef<jstring> Java_IceCandidate_getSdp(JNIEnv* env, const
    base::android::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_IceCandidate_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_IceCandidate_clazz(env), NULL);

  jni_generator::JniJavaCallContextChecked call_context;
  call_context.Init<
      base::android::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getSdp",
          "()Ljava/lang/String;",
          &g_org_webrtc_IceCandidate_getSdp);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_IceCandidate_JNI
