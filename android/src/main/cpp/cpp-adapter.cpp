#include <jni.h>
#include "react-native-bls-signatures.h"
// using namespace bls;


extern "C"
JNIEXPORT jdouble JNICALL
Java_com_blssignatures_BlsSignaturesModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return blssignatures::multiply(a, b);
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_blssignatures_BlsSignaturesModule_nativeAdd(JNIEnv *env, jclass type, jint a) {
    return blssignatures::add(a);
}
