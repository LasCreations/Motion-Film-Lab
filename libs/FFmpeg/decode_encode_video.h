

#ifndef DECODE_ENCODE_VIDEO_H
#define DECODE_ENCODE_VIDEO_H


#include <math.h>
#include <libavutil/opt.h>
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/common.h>
#include <libavutil/imgutils.h>
#include <libavutil/mathematics.h>
#include <libavutil/samplefmt.h>

#define INBUF_SIZE 4096
#define AUDIO_INBUF_SIZE 20480
#define AUDIO_REFILL_THRESH 4096


static int check_sample_fmt(AVCodec *codec, enum AVSampleFormat sample_fmt);

static int select_sample_rate(AVCodec *codec);

static int select_channel_layout(AVCodec *codec);

static void audio_encode_example(const char *filename);

static void audio_decode_example(const char *outfilename, const char *filename);

static void video_encode_example(const char *filename, int codec_id);

static void pgm_save(unsigned char *buf, int wrap, int xsize, int ysize,char *filename);

static int decode_write_frame(const char *outfilename, AVCodecContext *avctx,AVFrame *frame, int *frame_count, AVPacket *pkt, int last);

static void video_decode_example(const char *outfilename, const char *filename);

int decode_encode_video(char *filename, char *outputfilename, char *output_type);

#endif
