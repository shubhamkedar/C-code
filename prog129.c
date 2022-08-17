#include<stdio.h>
void DisplayBinary(int iNo)
{
	int iTemp=0;
	while(iNo!=0)
	{
		iTemp=iNo%2;
		printf("%d",iTemp);
		iNo=iNo/2;
	}
}
int main()
{
	int iValue=0;
	printf("Enter a no:\n");
	scanf("%d",&iValue);
	DisplayBinary(iValue);
	return 0;
}