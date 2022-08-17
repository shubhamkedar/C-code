#include<stdio.h>
void display();
int main()
{

display();
return 0;
}
void display()
{
int no=1234;
int digit=0;
digit=no%10;
printf("%d",digit);
no=no/10;
digit=no%10;
printf("%d",digit);
no=no/10;
digit=no%10;
printf("%d",digit);
no=no/10;
digit=no%10;
printf("%d",digit);
no=no/10;
}