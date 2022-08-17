#include<stdio.h>

void Count(char *str)
{
	int Ccnt=0,Scnt=0;
	while(*str!=0)
	{
	if(*str>='A'&&*str<='Z')
	{
	Ccnt++;
	}
	else if(*str>='a'&&*str<='z')
	{
	Scnt++;
	}
	str++;
	}
printf("Small Letters are: %d\n",Scnt);
printf("Capital Letters are: %d\n",Ccnt);
}

int main()
{
	char Arr[20];
	printf("Enter a String :\n");
	scanf("%[^'\n']s",&Arr);
	Count(Arr);
	
	return 0;
}