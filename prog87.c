#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool CheckNo(int Arr[],int iSize)
{
	int i=0;
	bool iRet=false;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
        iRet=true;
		break;
		}
		
	}
	return iRet;
}
int main()
{
	int iLength=0,i=0,No=0;
	bool bRet= false;
	int *ptr=NULL;
	printf("Enter  no of Elements\n");
	scanf("%d",&iLength);
	//printf("Enter a No");
	//scanf("%d",&No);
	ptr =(int *) malloc(sizeof(int)*iLength);
	printf("Enter Elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Entered Data is:\n");
	for(i=0;i<iLength;i++)    //to show the elements , not necessary
	{
		printf("%d\t",ptr[i]);
	}
	bRet=CheckNo(ptr,iLength);
	if(bRet == true )
	{
	printf("\n No is Present\n");
	}
	else{
		printf("\n No is Absent");
		}
	free(ptr);
	return 0;
}