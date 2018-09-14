#include "com_cody_ndksimpledemo_NDKUtil.h"   //引入.h头文件
//实现.h中的方法
JNIEXPORT jstring JNICALL Java_com_cody_ndksimpledemo_NDKUtil_getString
        (JNIEnv *env, jclass type) {
    return env->NewStringUTF("Hello NDK");
}
