#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

void main(){
	int p,p1,p2,p3;
	p=fork();
	if(p==-1){
	printf("error");
	exit(1);
	}
	if(p!=0){
	p1= getpid();
	printf("\nprocess id of parent is%d",p1);
	}
	else{
	p2=getpid();
	printf("\nprocess id of child is %d",p2);
	}
	
}


