#include<stdio.h>
#include<conio.h>
int count=0;
int Partition(int b[],int i,int j)
{
count=count+2;
  int x=b[i];
  int temp=i;
  for(int k=i+1;k<=j;k++)
  { count++;
   if(x>b[k])
     {   count++;
	temp=temp+1;
    int m=b[temp];
	b[temp]=b[k];
	b[k]=m;
	 }
  }
   count++;
    int n=b[i];
	b[i]=b[temp];
	b[temp]=n;
    return temp;
}
int Quicksort(int a[],int f,int l)
{  count=count+2;
 int m;
 if(f==l)
  {  count++;
  return a[f];
  }
  else if(f<l)
  { count++;
  m=Partition(a,f,l);
  Quicksort(a,f,m-1);
  Quicksort(a,m+1,l);
  }
 return m;
}
void main()
{
	clrscr();
																																																												    //																									clrscr();
 int c,arr[20],s,first,last;
 printf("\nEnter the size of array:");
 scanf("%d",&s);
 printf("Enter an unsorted list of elements:");
 for(c=1;c<=s;c++)
 {
 scanf("%d",&arr[c]);
 }
 first=1;last=s;
 Quicksort(arr,first,last);
printf("Sorted list:\n");
 for(c=1;c<=s;c++)
 {
 printf("%d  ",arr[c]);
 }
 printf("\nCounts:%d",count);
 getch();
}