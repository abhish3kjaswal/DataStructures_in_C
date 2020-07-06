#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a=0,b=1,c,t=0,count=0;
printf("Series should be printed upto:");
scanf("%d",&c)   ;
printf("Required Fibonacci series:");
printf("\n%d\n",a);
count++;
printf("%d\n",b);
count++;
while(t<c)
{ count++;
t=a+b;
a=b;
b=t   ;
printf("%d  ",t);
}        count++;
printf("\nCo	unts:%d",count) ;
printf("\n") ;
getch();
return 0;
}
