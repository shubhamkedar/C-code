#include<stdio.h>
#include<stdlib.h>
int SumOdd(int Arr[],int iSize)
{
	int i=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2!=0)
		{
          iSum=iSum+Arr[i];
		}
	}
return iSum;
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
	iRet=SumOdd(ptr,iLength);
	printf("\n Addition is  :%d\n",iRet);
	free(ptr);
	return 0;
}