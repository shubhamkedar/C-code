#include<stdio.h>
int main()
{
	int Arr[5],iSum=0,iCnt; //array of 5 integers
	printf("Enter Nos:");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	scanf("%d",&Arr[iCnt]);
	}
iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4];
printf("%d",iSum);
	return 0;
}