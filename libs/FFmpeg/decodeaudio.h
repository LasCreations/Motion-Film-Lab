

#ifndef DECODE_AUDIO_H
#define DECODE_AUDIO_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
#include <libavutil/frame.h>
#include <libavutil/mem.h>
  
#include <libavcodec/avcodec.h>
  
#define AUDIO_INBUF_SIZE 20480
#define AUDIO_REFILL_THRESH 4096


static int get_format_from_sample_fmt(const char **fmt, enum AVSampleFormat sample_fmt);

static void decode(AVCodecContext *dec_ctx, AVPacket *pkt, AVFrame *frame,FILE *outfile);

int decodeaudio(const char *filename, const char *outputname);


#endif
