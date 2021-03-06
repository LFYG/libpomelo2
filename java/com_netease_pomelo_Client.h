/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_netease_pomelo_Client */

#ifndef _Included_com_netease_pomelo_Client
#define _Included_com_netease_pomelo_Client
#ifdef __cplusplus
extern "C" {
#endif
#undef com_netease_pomelo_Client_PC_RC_OK
#define com_netease_pomelo_Client_PC_RC_OK 0L
#undef com_netease_pomelo_Client_PC_RC_ERROR
#define com_netease_pomelo_Client_PC_RC_ERROR -1L
#undef com_netease_pomelo_Client_PC_RC_TIMEOUT
#define com_netease_pomelo_Client_PC_RC_TIMEOUT -2L
#undef com_netease_pomelo_Client_PC_RC_INVALID_JSON
#define com_netease_pomelo_Client_PC_RC_INVALID_JSON -3L
#undef com_netease_pomelo_Client_PC_RC_INVALID_ARG
#define com_netease_pomelo_Client_PC_RC_INVALID_ARG -4L
#undef com_netease_pomelo_Client_PC_RC_NO_TRANS
#define com_netease_pomelo_Client_PC_RC_NO_TRANS -5L
#undef com_netease_pomelo_Client_PC_RC_INVALID_THREAD
#define com_netease_pomelo_Client_PC_RC_INVALID_THREAD -6L
#undef com_netease_pomelo_Client_PC_RC_TRANS_ERROR
#define com_netease_pomelo_Client_PC_RC_TRANS_ERROR -7L
#undef com_netease_pomelo_Client_PC_RC_INVALID_ROUTE
#define com_netease_pomelo_Client_PC_RC_INVALID_ROUTE -8L
#undef com_netease_pomelo_Client_PC_RC_INVALID_STATE
#define com_netease_pomelo_Client_PC_RC_INVALID_STATE -9L
#undef com_netease_pomelo_Client_PC_RC_NOT_FOUND
#define com_netease_pomelo_Client_PC_RC_NOT_FOUND -10L
#undef com_netease_pomelo_Client_PC_RC_RESET
#define com_netease_pomelo_Client_PC_RC_RESET -11L
#undef com_netease_pomelo_Client_PC_ST_NOT_INITED
#define com_netease_pomelo_Client_PC_ST_NOT_INITED 0L
#undef com_netease_pomelo_Client_PC_ST_INITED
#define com_netease_pomelo_Client_PC_ST_INITED 1L
#undef com_netease_pomelo_Client_PC_ST_CONNECTING
#define com_netease_pomelo_Client_PC_ST_CONNECTING 2L
#undef com_netease_pomelo_Client_PC_ST_CONNECTED
#define com_netease_pomelo_Client_PC_ST_CONNECTED 3L
#undef com_netease_pomelo_Client_PC_ST_DISCONNECTING
#define com_netease_pomelo_Client_PC_ST_DISCONNECTING 4L
#undef com_netease_pomelo_Client_PC_ST_UNKNOWN
#define com_netease_pomelo_Client_PC_ST_UNKNOWN 5L
#undef com_netease_pomelo_Client_PC_LOG_DEBUG
#define com_netease_pomelo_Client_PC_LOG_DEBUG 0L
#undef com_netease_pomelo_Client_PC_LOG_INFO
#define com_netease_pomelo_Client_PC_LOG_INFO 1L
#undef com_netease_pomelo_Client_PC_LOG_WARN
#define com_netease_pomelo_Client_PC_LOG_WARN 2L
#undef com_netease_pomelo_Client_PC_LOG_ERROR
#define com_netease_pomelo_Client_PC_LOG_ERROR 3L
#undef com_netease_pomelo_Client_PC_LOG_DISABLE
#define com_netease_pomelo_Client_PC_LOG_DISABLE 4L
#undef com_netease_pomelo_Client_PC_EV_USER_DEFINED_PUSH
#define com_netease_pomelo_Client_PC_EV_USER_DEFINED_PUSH 0L
#undef com_netease_pomelo_Client_PC_EV_CONNECTED
#define com_netease_pomelo_Client_PC_EV_CONNECTED 1L
#undef com_netease_pomelo_Client_PC_EV_CONNECT_ERROR
#define com_netease_pomelo_Client_PC_EV_CONNECT_ERROR 2L
#undef com_netease_pomelo_Client_PC_EV_CONNECT_FAILED
#define com_netease_pomelo_Client_PC_EV_CONNECT_FAILED 3L
#undef com_netease_pomelo_Client_PC_EV_DISCONNECT
#define com_netease_pomelo_Client_PC_EV_DISCONNECT 4L
#undef com_netease_pomelo_Client_PC_EV_KICKED_BY_SERVER
#define com_netease_pomelo_Client_PC_EV_KICKED_BY_SERVER 5L
#undef com_netease_pomelo_Client_PC_EV_UNEXPECTED_DISCONNECT
#define com_netease_pomelo_Client_PC_EV_UNEXPECTED_DISCONNECT 6L
#undef com_netease_pomelo_Client_PC_EV_PROTO_ERROR
#define com_netease_pomelo_Client_PC_EV_PROTO_ERROR 7L
#undef com_netease_pomelo_Client_PC_EV_INVALID_HANDLER_ID
#define com_netease_pomelo_Client_PC_EV_INVALID_HANDLER_ID -1L
#undef com_netease_pomelo_Client_PC_WITHOUT_TIMEOUT
#define com_netease_pomelo_Client_PC_WITHOUT_TIMEOUT -1L
/*
 * Class:     com_netease_pomelo_Client
 * Method:    libInit
 * Signature: (ILjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_netease_pomelo_Client_libInit
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    libCleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_netease_pomelo_Client_libCleanup
  (JNIEnv *, jclass);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    evToStr
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_netease_pomelo_Client_evToStr
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    rcToStr
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_netease_pomelo_Client_rcToStr
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    stateToStr
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_netease_pomelo_Client_stateToStr
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    init
 * Signature: (ZZLcom/netease/pomelo/Client/LocalStorage;)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_init
  (JNIEnv *, jobject, jboolean, jboolean, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    connect
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_connect
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    state
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_state
  (JNIEnv *, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    request
 * Signature: (Ljava/lang/String;Ljava/lang/String;ILcom/netease/pomelo/Client/RequestCallback;)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_request
  (JNIEnv *, jobject, jstring, jstring, jint, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    notify
 * Signature: (Ljava/lang/String;Ljava/lang/String;ILcom/netease/pomelo/Client/NotifyCallback;)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_notify
  (JNIEnv *, jobject, jstring, jstring, jint, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    disconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_disconnect
  (JNIEnv *, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    poll
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_poll
  (JNIEnv *, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    quality
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_quality
  (JNIEnv *, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    destroy
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    addEventHandler
 * Signature: (Lcom/netease/pomelo/Client/EventHandler;)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_addEventHandler
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_netease_pomelo_Client
 * Method:    rmEventHandler
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_netease_pomelo_Client_rmEventHandler
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
