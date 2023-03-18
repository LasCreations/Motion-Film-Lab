

#ifndef SYS_FILE_IO_H
#define SYS_FILE_IO_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//System call libraries
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>


#include<errno.h>
extern int errno;

void CreateFile();


#endif

