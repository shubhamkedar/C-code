#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char Arr[]="Hello";
	int fd=0;
	fd=open("LB17.txt",O_RDWR|O_APPEND);
	if(fd== -1)
	{
		printf("Unable to open file \n");
		return -1;
	}
		write(fd,Arr,5);
		close(fd);
		return 0;
	}
}