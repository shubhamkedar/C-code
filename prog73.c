#include<stdio.h>
int main()
{
	int Arr[5],iSum=0,iCnt; //array of 5 integers
	printf("Enter Nos:");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}
	for(iCnt=0;iCnt<5;iCnt++)
	{
iSum=iSum+Arr[iCnt];
}
printf("%d",iSum);
	return 0;
}