#include<stdio.h>
#include<stdlib.h>

int  FirstOcc(int Arr[],int iSize,int iNo)
{
	int i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		
		{break;}
		}
		if(i==iSize)
		{
			return -1;
		}
		else {return i;}
	}
	

int main()
{
	int iLength=0,i=0,No=0,iRet= 0;
	int *ptr=NULL;
	printf("Enter  no of Elements\n");
	scanf("%d",&iLength);
	printf("Enter a No");
	scanf("%d",&No);
	ptr =(int *) malloc(sizeof(int)*iLength);
	printf("Enter Elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Entered Data is:\n");
	for(i=0;i<iLength;i++)    //to show the elements , not necessary
	{
		printf("%d\t",ptr[i]);
	}
	iRet=FirstOcc(ptr,iLength,No);
	if(iRet == -1 )
	{
	printf("\n There is no such No\n");
	}
	else{
		printf("\n No is there at index %d\n",iRet);
		}
	free(ptr);
	return 0;
}