#include<stdio.h>
int main()
{
	int Arr[5],iSum=0,iCnt; //array of 5 integers
	printf("Enter Nos:");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}
iSum=iSum+Arr[0];
iSum=iSum+Arr[1];
iSum=iSum+Arr[2];
iSum=iSum+Arr[3];
iSum=iSum+Arr[4];
printf("%d",iSum);
	return 0;
}