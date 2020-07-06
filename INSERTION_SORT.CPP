	#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100],i,j,c,n,temp,count=0;
printf("enter the no of elements:");
scanf("%d",&n);
printf("\nenter elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 for(j=1;j<=n;j++)
 {
 count++;
   temp=a[j];
   c=j-1;
   while(c>=0 && temp<a[c])
   {     count++;
      a[c+1]=a[c];
      c=c-1;
      }     count++;
      a[c+1]=temp;
      }        count++;
      printf("\n list is:");
      for(i=0;i<n;i++)
      {
	printf("%d  ",a[i]);
	}
	printf("\n no of counts are :%d",count);
	getch();
	}






























