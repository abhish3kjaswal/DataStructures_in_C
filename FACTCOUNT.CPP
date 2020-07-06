#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int fact=1,i,n,count=0;
 printf("enter the element:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  count++;
  fact=fact*i;
  }      count++;
   printf("\nvalue is:%d",fact);
   printf("\ncount=:%d",count);
   getch();
   }

