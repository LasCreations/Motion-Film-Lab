
#include "metadata.h"


int showmetadata (const char* filename){
	AVFormatContext *fmt_ctx = NULL;
	const AVDictionaryEntry *tag = NULL;
	int ret;

    	if((ret = avformat_open_input(&fmt_ctx, filename, NULL, NULL)))
		return ret;

    	if ((ret = avformat_find_stream_info(fmt_ctx, NULL)) < 0) {
        	av_log(NULL, AV_LOG_ERROR, "Cannot find stream information\n");
        	return ret;
    	}
	
	/*
	while ((tag = av_dict_iterate(fmt_ctx->metadata, tag)))
        	printf("%s=%s\n", tag->key, tag->value);
	*/

	while ((tag = av_dict_get(fmt_ctx->metadata, "", tag, AV_DICT_IGNORE_SUFFIX)))
	    printf("%s=%s\n", tag->key, tag->value);
	
	avformat_close_input(&fmt_ctx);
    	
	return 0;
}
