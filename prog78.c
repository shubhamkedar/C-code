#include<stdio.h>
#include<stdlib.h>
int Addition(int Brr[],int iSize)
{
	int iCnt=0,iSum=0;
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
iSum=iSum+Brr[iCnt];
}
return iSum;
}
int main()
{
	int *Arr=NULL;
	int iRet=0,iCnt=0,iLength=0; //array of 5 integers
	printf("Enter no of Elements\n");
	scanf("%d",&iLength);
	
	Arr=(int *)malloc(sizeof(int)*iLength);
	
	printf("Enter Nos:");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}
	iRet=Addition(Arr,iLength);
printf("%d",iRet);
free(Arr);
	return 0;
}