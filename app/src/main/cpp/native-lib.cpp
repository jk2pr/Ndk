#include <jni.h>
#include <string>

extern "C" JNIEXPORT void

JNICALL
Java_com_hoppers_ndk_MainActivity_stringFromJNI(
        JNIEnv *env, jobject obj /* this */) {
    std::string hello = "Hello from C++";
    jclass clazz = env->FindClass("com/hoppers/ndk/MainActivity");
    jmethodID jm = env->GetMethodID(clazz, "setText", "(I)V");
     for (jint i = 0; i < 10; ++i) {
    // printf("&s",i);
   // jstring jstr = env->NewStringUTF("THis is ");
    env->CallVoidMethod(obj, jm, i);
     }

   // return env->NewStringUTF(hello.c_str());
}
