#include<stdio.h>
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
	int Arr[5],iRet=0,iCnt=0; //array of 5 integers
	printf("Enter Nos:");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}
	iRet=Addition(Arr,5);
printf("%d",iRet);
	return 0;
}