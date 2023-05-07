#ifndef SCALE_VIDEO_H
#define SCALE_VIDEO_H



#include <libavutil/imgutils.h>
#include <libavutil/parseutils.h>
#include <libswscale/swscale.h>



static void fill_yuv_image(uint8_t *data[4], int linesize[4],int width, int height, int frame_index);

int scalevideo(const char *dst_filename, const char *dst_size);

#endif
