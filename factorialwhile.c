#include<stdio.h>
typedef unsigned long int UINT;
UINT fact(int);
int main()
{
int no=0,ret=0;
printf("enter a no:");
scanf("%d",&no);
ret=fact(no);
printf("factorial is:%d\n",ret);
return 0;
}
UINT fact(int value)
{
int cnt=0;
UINT ifact=1;
if(value<0)
{
value= -value;
}
cnt=1;
while(cnt<=value)
{
ifact=ifact*cnt;
cnt++;
}
return ifact;
}
