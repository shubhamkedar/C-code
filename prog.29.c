#include<stdio.h>
int display(int);
int main()
{
	int iValue=0,iRet;
	printf("enter a no");
	scanf("%d",&iValue);
iRet=display(iValue);
printf("addn is :%d",iRet);
return 0;
}
int display(int iNo)
{
int value;
int iDigit=0;
while(iNo>0)
{
	iDigit=iNo%10;
	value=value+iDigit;
	iNo=iNo/10;
}
return value;
}