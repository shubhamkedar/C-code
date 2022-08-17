#include<stdio.h>

int SpaceCount(char *str)
{
	int iCnt=0;
	while(*str!=0)
	{
	if(*str==' ')
	{
	iCnt++;
	}
	str++;
	}
return iCnt;
}

int main()
{
	int iRet=0;
	char Arr[20];
	printf("Enter a String :\n");
	scanf("%[^'\n']s",&Arr);
	iRet=SpaceCount(Arr);
	printf("Spaces are :%d\n",iRet);
	return 0;
}