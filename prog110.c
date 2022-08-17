#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char c)
{
	if(c>='A'&&c<='Z')
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
	bRet=CheckCapital(ch);
	if(bRet==true)
	{
		printf("It is Capital\n");
	}
	else{printf("It is Small\n");}
	return 0;
}