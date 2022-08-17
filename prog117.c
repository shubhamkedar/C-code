#include<stdio.h>

int CountSmall(char *str)
{
	int cnt=0;
	while(*str!=0)
	{
	if(*str>='a'&&*str<='z')
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
	iRet=CountSmall(Arr);
	printf("Small Letters are :%d\n",iRet);
	return 0;
}