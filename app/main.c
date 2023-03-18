
#include <stdio.h>
#include <stdlib.h>


//Static libraries
#include <widgets/window.h>
#include <FFmpeg/decodevideo.h>
#include <FFmpeg/demuxvideo.h>

int main(int argc, char **argv){

	//gtk_init(&argc, &argv);
	//LaunchWindow();
	
	//DecodeVideo("/home/lascelle/Videos/Sample2.mp4");
	demuxer("/home/lascelle/Videos/Sample2.mp4", "test.mp4", "audio.mp3");	




	return EXIT_SUCCESS;
}
