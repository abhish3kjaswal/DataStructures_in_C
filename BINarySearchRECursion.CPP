#include<stdio.h>
#include<conio.h>
int count=0;
int bin(int [],int ,int ,int );
void main()
{
clrscr();
	int a[10],i,n,l,x;
	printf(" enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	 }
	  printf("\n enter the element to be searched :");
	  scanf("%d",&x);
	  i=0;
	  l=n-1;
	  bin(a,i,l,x);
	  printf("\n no of counts are:%d",count);
	  getch();
	    }
int bin(int a[],int i,int l,int x)
{count+2;
int mid;
 if(l==i)
 { count+2;
  if(x==a[i])
  {        count++;
   printf("\nelement at:%d",i);
   return a[i];
   }              count++;
   }
 else
    { count++;
      mid=(l+i)/2;
     if(x==a[mid])
     {       count+2;
      printf("\nelement at mid:%d",mid);
      }
      else if(x<a[mid])
      {    count+2;
       return bin(a,i,mid,x);
       }
       else
       {  count+2;
	return bin(a,mid+1,l,x);
	}
    }        count++;
 return 0;
}