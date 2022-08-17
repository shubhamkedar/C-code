#include<stdio.h>

char CapitalToSmall(char c)
{
	if(c>='A'&&c<='Z')
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
	cRet=CapitalToSmall(ch);
	printf("Small Character is :%c\n",cRet);
	return 0;
}