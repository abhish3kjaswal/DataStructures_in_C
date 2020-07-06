#include<stdio.h>
#include<conio.h>
void main()
{                     clrscr();
  int a[5],i,front=-1,rear=-1,max=5,ch,c,item;
do
{
   printf("enter the choice\n 1 for insertion\n2 for deletion\n3 to exit=");
   scanf("%d",&ch);
   switch(ch){
   case 1:{ printf("\n insertion");
   printf("\nenter the element to be inserted=");
   scanf("%d",&item);
   if(((rear==max-1)&&(front==0))||(front==rear+1))
   {
   printf("\n overflow");
   break;
   }
    if((front==-1)&&(rear==-1))
   {
     front++;
     rear++;
     a[rear]=item;
     }
     else if((rear==max-1)&&(front>0))
     {
      rear=0;
      a[rear]=item;
      }
      else
      {
       rear++;
       a[rear]=item;
       }
       printf("\nelements are\n");
       for(i=front;i<=rear;i++)
   {    printf("\n=%d",a[i]);
    }   }
	break;
	case 2:{printf("\ndeletion");
	if(front==-1)
	{
	 printf("\nempty");
	 break;
	 }
	 if(front==rear)
	 {
	  item=a[front];
	  front=-1;
	  rear=-1;
	  }
	  if(front==max-1)
	  {
	   item=a[front];
	   front++;
	   }
	   else{
	   item=a[front];
	   front++;
	   }
	   printf("\nelements are\n");
	   for(i=front;i<=rear;i++)
     {	   printf("\n=%d",a[i]);
      }	   }}
      printf("\nif you want to continue press 1 or to discontinue press 2=");
      scanf("%d",&c);
      }
      while(c==1);
      }