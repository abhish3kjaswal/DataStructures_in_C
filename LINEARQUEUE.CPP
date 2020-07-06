#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],max=10,i,front=-1,rear=-1,item;
while(1)
{
 if(rear==max-1)
 {
	printf("full");
 }
 if(front==-1 && rear==-1)
 {
	front++;
	rear++;
 }
 else{
 printf("enter the item:");
 scanf("%d",&item);
 rear++;
 a[rear]=item;
 }
}
getch();
}