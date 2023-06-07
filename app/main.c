/*
 

*/

#include <widgets/window.h>

#include <FFmpeg/decodestream.h>
#include <FFmpeg/decodeaudio.h>
#include <FFmpeg/encodeaudio.h>
#include <FFmpeg/scalevideo.h>

void Window_Starter(){
	g_print("Hello");
}

int main(int argc, char **argv){	
	#ifdef _WIN32
		printf("Not yet compatable on windows");
		exit(0);
	#elif __linux__
		printf("Running on linux");
		Window_Starter();
	#elif __APPLE__
		printf("Not yet compatable on Mac OS");
		exit(0);
	#endif
	
	return EXIT_SUCCESS;
}
