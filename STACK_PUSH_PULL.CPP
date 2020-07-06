#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
int a[10],max=10,top=-1,item,ch,c,i;
do
{
printf("enter the choice\n *** 1 for insertion ***\n *** 2 for deletion ***\n*** 3 for exit ***\n");
scanf("%d",&ch);
switch(ch){
case 1:{
printf("*** insertion ***");
if(top==max-1)
{
 printf("\n**** stack is full\n");
 }
 else
 {
  printf("enter the element=");
  scanf("%d",&item);
  top=top+1;
  a[top]=item;
  }
  for(i=0;i<=top;i++)
  {
   printf("\nstack=%d",a[i]);
   }}
   break;
   case 2:{
   printf("*** deletion ***");
   if(top==-1)
   { printf("\n***stack is empty**");
   }
   else
   {
   item=a[top];
   top=top-1;
   }
   for(i=0;i<=top;i++)
   { printf("\nstack=%d",a[i]);
  }} break;}
   printf("\nif u want to continue press 1 or discontinue press 2 ");
   scanf("%d",&c);
   }
   while(c==1);
   getch();
   }

