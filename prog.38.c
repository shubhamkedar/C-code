#include<stdio.h>
#include<stdbool.h>
bool Pal(int);
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("Enter a no:");
	scanf("%d",&iValue);
	bRet=Pal(iValue);
	if(bRet==true)
	{
		printf("No is Palindrome\n");
	}
	else
	{
		printf("No is not palindrome");
	}
	
	return 0;
}
bool Pal(int iNo)
{
	int iDigit=0,iRev=0,temp=0;
	temp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	if(temp==iRev)
	{
	return true;
	}
	else
	{
		return false;
	}
}