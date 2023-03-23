

#include "sys_folder.h"

void makefolder(){
	
	if(mkdir("../../data/test", S_IRWXU | S_IRWXG | S_IRWXO) == -1){
		//Error Creating folder
		perror("Error");
		if(errno == EEXIST){
			//Folder Already Exists
			//Make a default Folder
			//g_print("Created a folder called Default Folder");
		}
	}	
}
