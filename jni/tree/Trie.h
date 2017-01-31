/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_algo4j_tree_Trie */

#ifndef _Included_org_algo4j_tree_Trie
#define _Included_org_algo4j_tree_Trie

#ifdef __cplusplus
extern "C" {
#endif /// __cplusplus

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    createTrie
 * Signature: ()J
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_createTrie(
		JNIEnv *,
		jclass
) -> jlong;

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    deleteTrie
 * Signature: (J)V
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_deleteTrie(
		JNIEnv *,
		jclass,
    jlong
) -> void;

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    insert
 * Signature: (J[B)V
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_insert(
		JNIEnv *,
		jobject,
		jlong,
		jbyteArray
) -> void;

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    remove
 * Signature: (J[B)V
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_remove(
		JNIEnv *,
		jobject,
		jlong,
		jbyteArray
) -> void;

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    contains
 * Signature: (J[B)Z
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_contains(
		JNIEnv *,
		jobject,
		jlong,
		jbyteArray
) -> jboolean;

/**
 * Class:     org_algo4j_tree_Trie
 * Method:    containsPrefix
 * Signature: (J[B)Z
 */
JNIEXPORT auto JNICALL Java_org_algo4j_tree_Trie_containsPrefix(
		JNIEnv *,
		jobject,
		jlong,
		jbyteArray
) -> jboolean;

#ifdef __cplusplus
}
#endif /// __cplusplus

#endif /// _Included_org_algo4j_tree_Trie
