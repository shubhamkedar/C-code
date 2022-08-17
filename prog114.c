#include<stdio.h>

char SmallToCapital(char c)
{
	if(c>='a'&&c<='z')
	{
		return c-32;
	}
		
}

int main()
{
	char cRet='\0';
	char ch='\0';
	printf("Enter a Character :\n");
	scanf("%c",&ch);
	cRet=SmallToCapital(ch);
	printf("Capital No is :%c\n",cRet);
	return 0;
}