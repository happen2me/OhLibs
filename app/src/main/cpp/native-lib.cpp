#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_website_nyanko_sakamoto_oh_1libs_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
