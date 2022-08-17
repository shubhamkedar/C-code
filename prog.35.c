#include<stdio.h>
int EvenSum(int);
int main()
{
	int iValue=0,iRet=0;
	printf("enter a no");
	scanf("%d",&iValue);
iRet=EvenSum(iValue);
printf("Sum of even  Digits is :%d\n",iRet);
return 0;
}
int EvenSum(int iNo)
{
int iCnt=0;
int iDigit=0;
int sum=0;
if(iNo<0)
{
iNo= -iNo;
}

while(iNo>0)
{
	iDigit=iNo%10;
	if((iDigit%2)==0)
	{
	sum=sum+iDigit;
	iCnt++;
	}
	iNo=iNo/10;
}
return sum;
}