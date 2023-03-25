
//Static libraries
#include <widgets/window.h>

#include <FFmpeg/decodevideo.h>
#include <FFmpeg/demuxvideo.h>
#include <FFmpeg/encodevideo.h>

#include <FFmpeg/encodeaudio.h>
#include <FFmpeg/decodeaudio.h>

#include <FFmpeg/transcoding.h>
#include <FFmpeg/remux.h>

#include <FFmpeg/metadata.h>

#include <SDLLIB/sdlwindow.h>

#include <sys/sys_fileio.h>

int main(int argc, char **argv){
	
	//Check which OS the executable is running on
	#ifdef _WIN32
		//printf("Running on windows");
	#elif __linux__
		//printf("Running on linux");
	#elif __APPLE__
		//printf("Running on Mac OS");
	#endif

	//Initialize Gtk
	//gtk_init(&argc, &argv);

	
	/*Transcoding is the process of converting a video or audio file from one format to another. 
	 * Unlike remuxing, transcoding involves re-encoding the video and/or audio streams 
	 * to a new format, which can result in a loss of quality*/
	//transcodevideo("/home/lascelle/Videos/Sample.mp4", "test.mkv");
	
	/*copying the video and audio streams from one container format to another, without re-encoding the streams.*/
	//remux("/home/lascelle/Videos/future.mp4", "video.mkv");
	
	/*transforming a compressed video stream (in a format like H.264 or MPEG-4)
	 * into an uncompressed video stream that can be displayed or edited */
	//decodevideo("/home/lascelle/Videos/Sample.mp4");
	decodevideo("/home/lascelle/Videos/tommylee.mp3");

	/* is information that describes the content, structure, and properties of a file*/
	//showmetadata("/home/lascelle/Videos/Sample.mp4");	

	/* This splits the video file into two streams -> Audio and Video */
	//demuxer("/home/lascelle/Videos/future.mp4", "video.mp4", "audio.raw");

	//decodeaudio("/home/lascelle/Videos/tommylee.mp3", "testaudio.wav");
	
	return EXIT_SUCCESS;
}
