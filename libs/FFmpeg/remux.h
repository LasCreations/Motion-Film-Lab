
#ifndef REMUX_H
#define REMUX_H

/**
 * @file libavformat/libavcodec demuxing and muxing API usage example
 * @example remux.c
 *
 * Remux streams from one container format to another. Data is copied from the
 * input to the output without transcoding.
 */

#define __STDC_CONSTANT_MACROS 

#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>
 
static void log_packet(const AVFormatContext *fmt_ctx, const AVPacket *pkt, const char *tag);
 
int remux(const char *in_filename, const char *out_filename);

#endif 
