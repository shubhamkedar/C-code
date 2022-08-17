#include<stdio.h>
int main()
{
	int Arr[8],iSum=0; //array of 5 integers
	printf("Enter Nos:");
	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);
	scanf("%d",&Arr[5]);
	scanf("%d",&Arr[6]);
	scanf("%d",&Arr[7]);
iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[4]+Arr[5]+Arr[6]+Arr[7];
printf("%d",iSum);
	return 0;
}