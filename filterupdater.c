#include<stdio.h>
void display(int);
int main()
{
int no=0;
printf("enter a no");
scanf("%d",&no);
display(no);
return 0;
}
void display (int value)
{
int i=0;
if(value==0)   //filter 
{
printf("Your entered value is 0");
}
if(value<0)     //updater
{
value = -value;
}
for(i=value;i>=1;i--)
{
printf("%d\n",i);
}
}