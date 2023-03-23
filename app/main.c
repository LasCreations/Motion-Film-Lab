
//Static libraries
#include <widgets/window.h>

#include <FFmpeg/decodevideo.h>
#include <FFmpeg/demuxvideo.h>
#include <FFmpeg/encodevideo.h>

#include <FFmpeg/encodeaudio.h>
#include <FFmpeg/decodeaudio.h>

#include <FFmpeg/transcoding.h>

#include <FFmpeg/metadata.h>

#include <SDLLIB/sdlwindow.h>

#include <sys/sys_fileio.h>

int main(int argc, char **argv){

	#ifdef _WIN32
		printf("Running on windows");
	#elif __linux__
		printf("Running on linux");
	#elif __APPLE__
		printf("Running on Mac OS");
	#endif

	//Initialize Gtk
	gtk_init(&argc, &argv);

	
	//transcodevideo("/home/lascelle/Videos/Sample.mp4", "test.mkv");
	
	//Decoding an original video
	//decodevideo("/home/lascelle/Videos/Sample.mp4");

	//showmetadata("/home/lascelle/Videos/Sample.mp4");

	/*Demuxing a video into two different streams
	* Video Stream (Without audio)
	* Audio Stream
	*/
	//demuxer("/home/lascelle/Videos/future.mp4", "video.mp4", "audio.mp3");
	
	//videoencoder("video.mp4", "libx264");
	
	//encodeaudio("audio.mp3");
	//decodeaudio("audio.mp3", "decodedaudio.mp3");

	//DO NOT RUN UNTIL UNDERSTOOD FULLY
	//videoencoder("/home/lascelle/Videos/Sea.mp4", "libx264");
	//videoencoder("/home/lascelle/Videos/test.mp4", "mpeg1video");
	
	return EXIT_SUCCESS;
}
