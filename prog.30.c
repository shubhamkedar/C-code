#include<stdio.h>
int CountDigit(int);
int main()
{
	int iValue=0,iRet=0;
	printf("enter a no");
	scanf("%d",&iValue);
iRet=CountDigit(iValue);
printf("No of Digits is :%d\n",iRet);
return 0;
}
int CountDigit(int iNo)
{
int iCnt=0;
int iDigit=0;
if(iNo<0)
{
iNo= -iNo;
}
if(iNo==0)
{
	return 1;
}
while(iNo>0)
{
	iDigit=iNo%10;
	iCnt++;
	iNo=iNo/10;
}
return iCnt;
}