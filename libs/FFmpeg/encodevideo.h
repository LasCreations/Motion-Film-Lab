

#ifndef ENCODE_VIDEO_H
#define ENCODE_VIDEO_H

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
  
 #include <libavcodec/avcodec.h>
  
 #include <libavutil/opt.h>
 #include <libavutil/imgutils.h>

static void encode(AVCodecContext *enc_ctx, AVFrame *frame, AVPacket *pkt, FILE *outfile);

int videoencoder(char *filename, char *codec_name);

#endif
