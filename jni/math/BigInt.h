/* DO NOT EDIT THIS FILE - it is machine generated */
#include "../global/functions.h"
#include <stdio.h>
/* Header for class org_algo4j_math_BigInt */

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef _Included_org_algo4j_math_BigInt
#define _Included_org_algo4j_math_BigInt

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    plus
 * Signature: ([B[B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_plus(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    times
 * Signature: ([B[B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_times(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    timesBruteForce
 * Signature: ([B[B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_timesBruteForce(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    times10
 * Signature: ([B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_times10(
		JNIEnv *,
		jclass,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    divide
 * Signature: ([B[B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_divide(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    minus
 * Signature: ([B[B)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_minus(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jbyteArray;

/**
 * Class:     org_algo4j_math_BigInt
 * Method:    pow
 * Signature: ([BI)[B
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_pow(
		JNIEnv *,
		jclass,
		jbyteArray,
		jint
) -> jbyteArray;


/*
 * Class:     org_algo4j_math_BigInt
 * Method:    fastPower
 * Signature: ([BII)I
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_fastPower(
		JNIEnv *,
		jclass,
		jbyteArray,
		jint,
		jint
) -> jint;


/**
 * Class:     org_algo4j_math_BigInt
 * Method:    compareTo
 * Signature: ([B[B)I
 */
JNIEXPORT auto JNICALL Java_org_algo4j_math_BigInt_compareTo(
		JNIEnv *,
		jclass,
		jbyteArray,
		jbyteArray
) -> jint;

#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_algo4j_math_BigInt


#pragma clang diagnostic pop