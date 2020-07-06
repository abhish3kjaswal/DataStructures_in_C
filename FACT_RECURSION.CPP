#include<stdio.h>
#include<conio.h>
int count=0;
int fact(int a)
{
//int count=0;
 if(a>=1)
 {
 count++;
 return a*fact(a-1);
 //printf("=%d",count);
 }
 else
 {
   count+=2;
   return 1;
   }

   }
   void main()
   {  //int count=0;
    clrscr();
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    count++;
    printf("\n fact is=%d",fact(n));
    printf("\n count =%d",count);
    getch();
    }
