
#include "decodestream.h"

void decodestream(char filename[]){
	AVFormatContext *fmt_ctx = NULL;
	const AVDictionaryEntry *tag = NULL;
	int ret;
	
	//fill format context with file info
	if((ret = avformat_open_input(&fmt_ctx, filename, NULL, NULL)<0))
		av_log(NULL, AV_LOG_ERROR, "Failed to open input file\n");



	// get streams info from format context
	if ((ret = avformat_find_stream_info(fmt_ctx, NULL)) < 0)
		av_log(NULL, AV_LOG_ERROR, "Cannot find stream information\n");
		//return ret;


	// Check if the input file is an audio or video
	int audio_streams = 0, video_streams = 0;
	
	for (int i = 0; i < fmt_ctx->nb_streams; i++) {
		AVStream *stream = fmt_ctx->streams[i];
		if (stream->codecpar->codec_type == AVMEDIA_TYPE_AUDIO) {
			audio_streams++;
		}else if (stream->codecpar->codec_type == AVMEDIA_TYPE_VIDEO) {
			video_streams++;
		}
	}
	
	if (video_streams > 0 && audio_streams > 0) {
		av_log(NULL, AV_LOG_INFO, "Input file is a video with audio file\n");
	}
	else if (audio_streams > 0) {
		av_log(NULL, AV_LOG_INFO, "Input file is an audio file\n");
	} 
	else if (video_streams > 0 && audio_streams < 0) {
		av_log(NULL, AV_LOG_INFO, "Input file is a video without file\n");
	} 
	
	
	// loop streams and dump info
	for (int i = 0; i < fmt_ctx->nb_streams; i++){
		av_dump_format(fmt_ctx, i, filename, false);		
	}
	
	// close format context
	avformat_close_input(&fmt_ctx);
	avformat_free_context(fmt_ctx);

}
