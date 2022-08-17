#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iSize)
{
	int i=0,iMax=Arr[0],iMin=[0],Diff=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
         iMax=Arr[i];
		}
		if(Arr[i]<iMax)
		{
         iMin=Arr[i];
		}
		
	}
	Diff=iMax-iMin;
return Diff;
}
int main()
{
	int iLength=0,i=0,iRet=0,No=0;
	int *ptr=NULL;
	printf("Enter  no of Elements\n");
	scanf("%d",&iLength);
	//printf("Enter a No");
	//scanf("%d",&No);
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
	iRet=Difference(ptr,iLength);
	printf("\n Difference is  :%d\n",iRet);
	free(ptr);
	return 0;
}