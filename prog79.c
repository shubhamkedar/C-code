#include<stdio.h>
#include<stdlib.h>
float Average(int Arr[],int iSize)
{
	int iSum=0,i=0;
	float fResult=0.0f;
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
		
	}
	fResult=(float)iSum/(float)iSize;  //Explicit Typecasting 
	return fResult;

}
int main()
{
	int iLength=0,i=0;
	float fRet=0.0f;
	int *ptr=NULL;
	printf("Enter  no of Elements\n");
	scanf("%d",&iLength);
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
	fRet=Average(ptr,iLength);
	printf("\nAverageis :%f\n",fRet);
	free(ptr);
	return 0;
}
