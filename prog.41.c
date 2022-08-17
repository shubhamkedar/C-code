#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNumber);
int main()
{
int iValue=0;
bool bRet= false;
printf("enter a no:\n");
scanf("%d",&iValue);
bRet=CheckPerfect(iValue);
if(bRet= true)
{
printf("It  is  perfect No\n");
}
else
{
printf("It is not Perfect No\n");
}
return 0;
}
bool CheckPerfect(int iNumber)
{
int iSum=0,iCnt=0;

	if(iNumber<0)
	{
		iNumber= -iNumber;
	}
	for(iCnt=1;iCnt<=iNumber/2;iCnt++)
	{
		if((iNumber%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
	
}
