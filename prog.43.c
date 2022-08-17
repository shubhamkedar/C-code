#include<stdio.h>
int  Power(int,int);
int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("enter a no ");
	scanf("%d",&iValue1);
	printf("enter its Power ");
	scanf("%d",&iValue2);
	iRet=Power(iValue1,iValue2);
	printf("%d\n",iRet);
return 0;
}
int Power(int iNo1,int iNo2)
{
	int cnt,iSum=1;
	if(iNo1<0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2<0)
	{
		iNo2 = -iNo2;
	}
	
	for(cnt=1;cnt<=iNo2;cnt++)
	{
		iSum=iSum*iNo1;
	}
return iSum;
}
