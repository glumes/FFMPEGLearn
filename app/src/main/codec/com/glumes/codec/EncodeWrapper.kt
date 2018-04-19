package com.glumes.codec

import com.glumes.ffmpeglib.FFmpegSample
import com.glumes.ffmpeglib.codec.EncodeUtils
import com.glumes.util.FileContants
import com.glumes.util.TYPE_ENCODE_YUV_TO_H264

/**
 * Created by glumes on 19/04/2018
 */
class EncodeWrapper {

    companion object {

        fun handleEecode(ops: Int) {
            when (ops) {
                TYPE_ENCODE_YUV_TO_H264 -> {

                    EncodeUtils.encode_YUV_to_H264("", FileContants.FILE_H264)

                }
            }
        }
    }
}