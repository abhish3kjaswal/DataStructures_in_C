#include<stdio.h>
#include<conio.h>
int quicksort(int [],int ,int );
int partition(int [],int ,int );
void main()
{
int ar[200],first,last,i,n;
printf("enter the no of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
first=1; last=n;
quicksort(ar,first,last);
printf("series:");
for(i=0;i<n;i++)
{
printf(" %d",ar[i]);
}
getch();
}
int quicksort(int a[],int f,int l)
{ int m;
 if(f==l)
 {
 return a[f];
 }
 else if(f<l)
 {
  m=partition(a,f,l);
  quicksort(a,f,m-1);
  quicksort(a,m+1,l);
  }
  return m;
  }
  int partition(int b[],int i,int j)
  {        int k;
   int x=b[i];
   int temp=i;
   for(k=i+1;k<=j;k++)
   {
   if(x>b[k])
   {
    temp=temp+1;
    int c=b[temp];
    b[temp]=b[k];
    b[k]=c;
    }     }
    int n=b[i];
    b[i]=b[temp];
    b[temp]=n;
    return temp;
    }