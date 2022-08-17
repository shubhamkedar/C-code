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
	lseek(fd,-5,2);
		read(fd,Arr,5);
		printf("Data from file is:");
		write(1,Arr,5);
		printf("\n");
		close(fd);
		return 0;
	}
	
