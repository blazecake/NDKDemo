#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_mz_ndk_ndkdemo_JNIDemo_testJni(JNIEnv *env, jobject instance) {
    // TODO
    return (*env)->NewStringUTF(env, "hello world");
}

JNIEXPORT jstring JNICALL
Java_com_mz_ndk_ndkdemo_JNIDemo_getPwd(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "abc");
}