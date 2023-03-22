

#include <stdio.h>
#include <stdlib.h>

//System call libraries
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


#include<errno.h>
extern int errno;

//Static libraries
#include <widgets/window.h>

#include <FFmpeg/decodevideo.h>
#include <FFmpeg/demuxvideo.h>
#include <FFmpeg/encodevideo.h>

#include <SDLLIB/sdlwindow.h>

#include <sys/sys_fileio.h>


int main(int argc, char **argv){

	//Initialize Gtk
	gtk_init(&argc, &argv);

	sdlwindow();

	//Create Window
	//LaunchWindow();

	//CreateFile();

	/*
	if(mkdir("../../data/test", S_IRWXU | S_IRWXG | S_IRWXO) == -1){
		//Error Creating folder
		perror("Error");
		if(errno == EEXIST){
			//Folder Already Exists
			//Make a default Folder
			//g_print("Created a folder called Default Folder");
		}
	}
	*/

	// Use the mv system call to move the file to the directory
	/*
	if (rename("newfile.txt", "../../data/test/new.txt") == -1) {
		perror("Error moving file");
		//exit(EXIT_FAILURE);
	}
	*/

	
	//decodevideo("/home/lascelle/Videos/Sample2.mp4");
	//demuxer("/home/lascelle/Videos/tommy.mp4", "video.mp4", "audio.mp3");	
	

	//DO NOT RUN UNTIL UNDERSTOOD FULLY
	//videoencoder("/home/lascelle/Videos/Sea.mp4", "libx264");
	//videoencoder("/home/lascelle/Videos/test.mp4", "mpeg1video");

	return EXIT_SUCCESS;
}
