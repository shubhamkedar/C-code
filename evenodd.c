#include<stdio.h>
#include<stdbool.h>
bool checkeven(int);
int main()
{
int no=0; bool ret=false;
printf("enter a no:");
scanf("%d",&no);
ret=checkeven(no);
if(ret==true)
{
printf("%d is even.",no);
}
else
{
printf("%d is odd",no);
}

}
bool checkeven(int value)
{
if((value%2)==0)
{
return true;
}
else
{
return false;
}
}

