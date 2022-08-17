#include<stdio.h>

char CharToggle(char c)
{
	if(c>='a'&&c<='z')
	{
		return c-32;
	}
	else if(c>='A'&&c<='Z')
	{
		return c+32;
	}
		
}

int main()
{
	char cRet='\0';
	char ch='\0';
	printf("Enter a Character :\n");
	scanf("%c",&ch);
	cRet=CharToggle(ch);
	printf("Toggle Letter is :%c\n",cRet);
	return 0;
}