#include <jni.h>

extern "C" {

jstring Java_jp_ne_ibis_ndklocalarmmodetest_MainActivity_getTextNative(JNIEnv*, jobject);

};

jstring Java_jp_ne_ibis_ndklocalarmmodetest_MainActivity_getTextNative(JNIEnv* env, jobject object) {
    debug_printf("This is a test.\n");
    return env->NewStringUTF("Text from native!");
}