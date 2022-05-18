#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void create()
{
	if(fork() == 0)
	{
		printf("\n\nChild Process Created..!\n\n");
		printf("\n Process ID : %d \n\n\n",getpid());

	}
	else
	{
		printf("\nParent Process Created..!\n\n");
		printf("\n Process ID : %d \n\n\n",getpid());
	}
}

int main()
{
	printf("\nProcessing.....\n\n\n");
	create();
	printf("\nProcess Completed\n\n\n");
	return 0;
}

