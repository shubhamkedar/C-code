#include<stdio.h>
unsigned int strlenX(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{return 0;}
while(*str!='\0')
{
	iCnt++;
	str++;
}
return iCnt;
}
int main()
{
	int iRet=0;
	char Arr[10];
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
iRet=strlenX(Arr);
printf("Length of string is %d\n",iRet);
	return 0;
}