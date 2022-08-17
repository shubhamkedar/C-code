#include<stdio.h>
int Count(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{return -1;}
while(*str!='\0')
{
	if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u'))
	{
		iCnt++;
	}
}
return iCnt;
}
int main()
{
	char Arr[30];
	int iRet=0;
	printf("Enter a String");
	scanf("%[^'\n']s",Arr);
	iRet=Count(Arr);
	printf("No of vowels are:",iRet);
	return 0;
}