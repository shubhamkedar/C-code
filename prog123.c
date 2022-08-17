#include<stdio.h>
int CountFreq(char *str,char ch)
{
	int iCnt=0;
	if(str==NULL)
	{return -1;}
while(*str!='\0')
{
	if(*str==ch)
	{
		iCnt++;
	}
	str++;
}
return iCnt;
}
int main()
{
	char Arr[30];
	int iRet=0;
	char cValue='\0';
	printf("Enter a String\n");
	scanf("%[^'\n']s",Arr);
	printf("Enter a Character:\n");
	scanf(" %c",&cValue); //SPACE BEFORE %C IS IMP TO STOP EXECUTING 
	iRet=CountFreq(Arr,cValue);
	printf("Freq is :%d",iRet);
	return 0;
}