
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int array[100],item,top=-1,max=10;
if(top==max-1)
{
printf("Stack is full");
}
else
{
top=top+1;
printf("enter the element");
scanf("%d",&item);
array[top]=item;
}
for(int i=0;i<=max;i++)
printf("stack is:%d",array[i]);

getch();
}





