#include<stdio.h>
#include<stdlib.h>
int Max(int Arr[],int iSize)
{
	int i=0,iMax=Arr[0];//for both +ve & -ve no for +ve Max=0
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
         iMax=Arr[i];
		}
		
		
	}

return iMax;
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
	iRet=Max(ptr,iLength);
	printf("\n Maximum is  :%d\n",iRet);
	free(ptr);
	return 0;
}