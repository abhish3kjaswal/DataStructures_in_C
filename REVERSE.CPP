#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();

int x,rem,rev=0;
printf("enter the no.");
scanf("%d",&x);
while(x!=0)
{
rem=x%10;
x=x/10;
rev=rev*10+rem;
}
printf("%d",rev);
getch();
}