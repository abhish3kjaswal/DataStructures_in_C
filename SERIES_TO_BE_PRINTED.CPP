#include<stdio.h>
#include<conio.h>
int count=0;
int fib(int f)
{
if(f==0)
{
count++;
return(0);

}
if(f==1)
{
count+2;
return(1);

}
else
{
return(fib(f-1)+fib(f-2));
count++;
}
}

void main()
{
clrscr();
int num,i=0;
printf("enter no till the series to be printed :");
scanf("%d",&num);
printf("\nFibonacci series:");
for(int c=i;c<=num;c++)
{
printf("%d\n",fib(i));
i++;
}
//printf("")
printf("\nno of Counts:%d",count);
printf("\n") ;
getch();
}