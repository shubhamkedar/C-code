#include<stdio.h>

int CountCapital(char *str)
{
	int cnt=0;
	while(*str!=0)
	{
	if(*str>='A'&&*str<='Z')
	{
	cnt++;
	}
	str++;
	
	
	}
return cnt;	
}

int main()
{
	int iRet=0;
	char Arr[20];
	printf("Enter a String :\n");
	scanf("%s",&Arr);
	iRet=CountCapital(Arr);
	printf("Capital Letters are :%d\n",iRet);
	return 0;
}