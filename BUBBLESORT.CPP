
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
   int a[100],i,j,c,n,co=0;
   printf("enter the no of elements:");
   scanf("%d",&n);
   printf("enter the elements to sort:");
   for(i=0;i<n;i++)
   {

     scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
     co++;
      for(j=0;j<n-i-1;j++)
      {
       co++;
       if(a[j]>a[j+1])
       {
       co++;
	 c=a[j];
	 a[j]=a[j+1];
	 a[j+1]=c;
	 }  co++;
	 } co++;
	 }co++;
	 printf("sorted elements are:\n");
	 for(i=0;i<n;i++)
	 {
	    printf("  %d",a[i]);  }
	    printf("\nc=%d\n",co);
		  getch();
		   }
