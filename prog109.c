#include<stdio.h>

void DisplayTable()
{
	int i=0;
	printf("ASCII table is \n");
	printf("\n********************************\n");
	printf("Decimal\tHexaDecimal\toctal\tCharacter\n");
	printf("\n*******************************\n");
	for(i=0;i<=127;i++)
	{
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
	printf("\n*************************************\n");
}
int main()
{
 	return 0;
}