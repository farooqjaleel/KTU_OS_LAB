#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
	pid_t cpid;
	
	if(fork()==0)
	{
		exit(0);
	}
	else
	{
		cpid=wait(NULL);
	}
	
	printf("\n\n Parent PID : %d\n\n",getpid());
	printf("\n\n Child PID : %d\n\n\n",cpid);
	
	return 0;

}

