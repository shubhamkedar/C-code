#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char Arr[10];
	int fd=0;
	fd=open("LB17.txt",O_RDWR|O_APPEND);
	if(fd== -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
	lseek(fd,5,0);
		read(fd,Arr,5);
		write(1,Arr,5);
		printf("\n");
		
		lseek(fd,5,1);
		
		read(fd,Arr,5);
		write(1,Arr,5);
		
		
		printf("\n");
		close(fd);
		return 0;
	}
	
