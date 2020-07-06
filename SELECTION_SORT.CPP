 #include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int a[100],i,min,j,c,n,count=0;
 printf("enter the no of elements:");
 scanf("%d",&n);
 printf("\nenter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }

 for(i=0;i<n;i++)
 {
 count=count+1;
 min=a[i];
   for(j=i;j<n;j++)
   {
     count=count+1;
     if(min>a[j])
     {
       c=a[j];
       a[j]=a[i];
       a[i]=c;
       }
       } count=count+1;
       }count=count+1;
       printf("\n*** selection sort ***\n\n");

       for(i=0;i<n;i++)
       {
       printf("  %d ",a[i]);
	    }
	    printf("\n no of counts:%d",count);
       getch();
       }
