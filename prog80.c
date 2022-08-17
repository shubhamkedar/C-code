#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
           iCnt++;
		}
	}
return iCnt;
}
int main()
{
	int iLength=0,i=0,iRet=0;
	int *ptr=NULL;
	printf("Enter  no of Elements\n");
	scanf("%d",&iLength);
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
	iRet=CountEven(ptr,iLength);
	printf("\n No of Even Elements are :%d\n",iRet);
	free(ptr);
	return 0;
}