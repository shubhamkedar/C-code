#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
	if(c>='a'&&c<='z')
	{return true;}
		else
			
			{return false;}
}

int main()
{
	bool bRet=false;
	char ch='\0';
	printf("Enter a Character:\n");
	scanf("%c",&ch);
	bRet=CheckSmall(ch);
	if(bRet==true)
	{
		printf("It is Small\n");
	}
	else{printf("It is not  Small\n");}
	return 0;
}