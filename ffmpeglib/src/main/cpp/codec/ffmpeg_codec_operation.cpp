//
// Created by glumes on 2019/3/16.
//

#include "ffmpeg_codec_operation.h"

static FFmpegCodec ffmpegCodec;

/**
 * mp4 到 yuv
 */
extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecMp4ToYUV(JNIEnv *env, jobject instance,
                                                                 jstring inname_,
                                                                 jstring outname_) {
    const char *inname = env->GetStringUTFChars(inname_, 0);
    const char *outname = env->GetStringUTFChars(outname_, 0);

    LOGD("convert %s to %s", inname, outname);

    ffmpegCodec.codec_mp4_to_yuv(inname, outname);

    env->ReleaseStringUTFChars(inname_, inname);
    env->ReleaseStringUTFChars(outname_, outname);
}

/**
 * yuv 到 h264
 */
extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecYUVToH264(JNIEnv *env, jobject instance,
                                                                 jstring inname_,
                                                                 jstring outname_) {
    const char *inname = env->GetStringUTFChars(inname_, 0);
    const char *outname = env->GetStringUTFChars(outname_, 0);

    LOGD("convert %s to %s", inname, outname);

    ffmpegCodec.codec_yuv_to_h264(inname, outname);

    env->ReleaseStringUTFChars(inname_, inname);
    env->ReleaseStringUTFChars(outname_, outname);
}


extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecMp4To264(JNIEnv *env, jobject instance,
                                                                      jstring inname_,
                                                                      jstring outname_) {
    const char *inname = env->GetStringUTFChars(inname_, 0);
    const char *outname = env->GetStringUTFChars(outname_, 0);

    LOGD("convert %s to %s", inname, outname);

    ffmpegCodec.codec_mp4_to_h264(inname, outname);

    env->ReleaseStringUTFChars(inname_, inname);
    env->ReleaseStringUTFChars(outname_, outname);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_decodeVideo2YUV(JNIEnv *env, jobject instance,
                                                                     jstring inname_,
                                                                     jstring outname_) {
    const char *inname = env->GetStringUTFChars(inname_, 0);
    const char *outname = env->GetStringUTFChars(outname_, 0);

    LOGD("convert %s to %s", inname, outname);

    ffmpegCodec.codec_mp4_to_yuv(inname, outname);

    env->ReleaseStringUTFChars(inname_, inname);
    env->ReleaseStringUTFChars(outname_, outname);
}


/**
 * 将 H264 数据 编码成 Mp4 文件
 */
extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecH264ToMp4(JNIEnv *env, jobject instance,
                                                                     jstring inname_,
                                                                     jstring outname_) {
    const char *inname = env->GetStringUTFChars(inname_, 0);
    const char *outname = env->GetStringUTFChars(outname_, 0);

    LOGD("convert %s to %s", inname, outname);

    ffmpegCodec.codec_h264_to_mp4(inname, outname);

    env->ReleaseStringUTFChars(inname_, inname);
    env->ReleaseStringUTFChars(outname_, outname);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecMp4ToH264(JNIEnv *env, jobject instance,
                                                                    jstring input_mp4_file_path_,
                                                                    jstring mp4_to_yuv_output_path_) {
    const char *input_mp4_file_path = env->GetStringUTFChars(input_mp4_file_path_, 0);
    const char *mp4_to_yuv_output_path = env->GetStringUTFChars(mp4_to_yuv_output_path_, 0);


    env->ReleaseStringUTFChars(input_mp4_file_path_, input_mp4_file_path);
    env->ReleaseStringUTFChars(mp4_to_yuv_output_path_, mp4_to_yuv_output_path);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecH264ToYUV(JNIEnv *env, jobject instance,
                                                                    jstring input_yuv_file_path_,
                                                                    jstring yuv_to_h264_output_path_) {
    const char *input_yuv_file_path = env->GetStringUTFChars(input_yuv_file_path_, 0);
    const char *yuv_to_h264_output_path = env->GetStringUTFChars(yuv_to_h264_output_path_, 0);


    env->ReleaseStringUTFChars(input_yuv_file_path_, input_yuv_file_path);
    env->ReleaseStringUTFChars(yuv_to_h264_output_path_, yuv_to_h264_output_path);
}


extern "C"
JNIEXPORT void JNICALL
Java_com_glumes_ffmpeglib_codec_FFmpegCodecOperation_codecYUVToMp4(JNIEnv *env, jobject instance,
                                                                   jstring input_yuv_file_path_,
                                                                   jstring yuvto_mp4_output_path_) {
    const char *input_yuv_file_path = env->GetStringUTFChars(input_yuv_file_path_, 0);
    const char *yuv_to_mp4_output_path = env->GetStringUTFChars(yuvto_mp4_output_path_, 0);

    LOGD("convert %s to %s", input_yuv_file_path, yuv_to_mp4_output_path);

    ffmpegCodec.codec_yuv_to_h264(input_yuv_file_path, yuv_to_mp4_output_path);

    env->ReleaseStringUTFChars(input_yuv_file_path_, input_yuv_file_path);
    env->ReleaseStringUTFChars(yuvto_mp4_output_path_, yuv_to_mp4_output_path);
}