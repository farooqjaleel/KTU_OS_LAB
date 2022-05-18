#include<stdio.h>
#include<sys/stat.h>

int main()
{
	struct stat file;
	stat("stat.c",&file);
	
	printf("\n\nST_Mode : %o \n\n\n",file.st_mode);
	
	return 0;
}

