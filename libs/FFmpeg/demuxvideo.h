

#ifndef DEMUX_VIDEO_H
#define DEMUX_VIDEO_H


#include <libavutil/imgutils.h>
#include <libavutil/samplefmt.h>
#include <libavutil/timestamp.h>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>



static AVFormatContext *fmt_ctx = NULL;
static AVCodecContext *video_dec_ctx = NULL, *audio_dec_ctx;
static int width, height;
static enum AVPixelFormat pix_fmt;
static AVStream *video_stream = NULL, *audio_stream = NULL;
static FILE *video_dst_file = NULL;
static FILE *audio_dst_file = NULL;
 
static uint8_t *video_dst_data[4] = {NULL};
static int video_dst_linesize[4];
static int video_dst_bufsize;
 
static int video_stream_idx = -1, audio_stream_idx = -1;
static AVFrame *frame = NULL;
static AVPacket *pkt = NULL;
static int video_frame_count = 0;
static int audio_frame_count = 0;



static int output_video_frame(AVFrame *frame);

static int output_audio_frame(AVFrame *frame);

static int decode_packet(AVCodecContext *dec, const AVPacket *pkt);

static int open_codec_context(int *stream_idx, AVCodecContext **dec_ctx, AVFormatContext *fmt_ctx, enum AVMediaType type, char *src_filename);

static int get_format_from_sample_fmt(const char **fmt,enum AVSampleFormat sample_fmt);

int demuxer(char *src_filename, char *video_dst_filename, char *audio_dst_filename);

#endif
