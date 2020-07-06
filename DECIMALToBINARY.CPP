#include<stdio.h>
#include<conio.h>
long long convert(int );
void main()
{
clrscr();
int n;
printf("decimal number");
printf("enter the decimal number:");
scanf("%d",&n);
printf("%d in decimal = %lld in binary",n,convert(n));
getch();
}
long long convert(int n)
{
long long binary=0;
int re,i=1,s=1;
while(n!=0)
{
re=n%2;
printf("step %d:%d/2, remainder=%d,quotient=%d\n",s++,n,re,n/2);
n/=2;
binary +=re*i;
i*=10;
}
return binary;
}
