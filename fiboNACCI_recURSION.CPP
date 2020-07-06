#include<stdio.h>
#include<conio.h>
int count=0;
int fib(int f)
{
if(f==0)
{
//count++;
return(0);
//count++;
}
if(f==1)
{
//count++;
return(1);
//count++;
}
else
{
return(fib(f-1)+fib(f-2));
//count++;
}
}

void main()
{
clrscr();
int num,i=0;
printf("Range for fibonacci series:");
scanf("%d",&num);
printf("\nFibonacci series:");
for(int c=i;c<=num;c++)
{
printf("%d\n",fib(i));
i++;
}
//printf("")
printf("\nCounts:%d",count);
printf("\n") ;
getch();
}