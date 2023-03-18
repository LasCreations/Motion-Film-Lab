

#include "sys_fileio.h"


void CreateFile(){
	// Create the file using the open system call
	if((open("../../data/newfile.txt", O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR)) == -1){
		perror("Error creating file");
	}
}
