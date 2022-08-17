#include<stdio.h>
void DisplayTable(int);
int main()
{
	int iValue;
	printf("enter a no to display its table");
	scanf("%d",&iValue);
	DisplayTable(iValue);
return 0;
}
void DisplayTable(int iNo)
{
	int cnt,iSum=1;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	if(iNo==0)
	{
		return ;
	}
	for(cnt=1;cnt<=10;cnt++)
	{
		iSum=cnt*iNo;
			printf("%d\n",iSum);
	}

}
