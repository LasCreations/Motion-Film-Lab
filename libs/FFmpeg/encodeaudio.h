#ifndef ENCODE_AUDIO_H
#define ENCODE_AUDIO_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
  
#include <libavcodec/avcodec.h>
  
#include <libavutil/channel_layout.h>
#include <libavutil/common.h>
#include <libavutil/frame.h>
#include <libavutil/samplefmt.h>



static int check_sample_fmt(const AVCodec *codec, enum AVSampleFormat sample_fmt);

static int select_sample_rate(const AVCodec *codec);

static int select_channel_layout(const AVCodec *codec, AVChannelLayout *dst);

static int encoder(AVCodecContext *ctx, AVFrame *frame, AVPacket *pkt,FILE *output);

int encodeaudio(const char *filename);


#endif
