package com.mz.ndk.ndkdemo;

/**
 * Created by MZ on 2017/12/20.
 */

public class JNIDemo {

    static {
        System.loadLibrary("jniDemo");
    }

    public native String testJni();

    public native String getPwd();
}
