package com.cody.ndksimpledemo;


@SuppressWarnings("JniMissingFunction")   //todo Android Studio 3.2后可移除
public class NDKUtil {
    static {
        System.loadLibrary("ndkdemo");
    }

    public static native String getString();
}
