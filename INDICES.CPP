#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,j,n;
printf("enter the size of the array :");
scanf("%d",&n);
printf("the size of the array is : %d and  enter the elements of the array :",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if((a[i]+a[j]==12))
{
printf("\nindices of the elements are :%d and %d",i,j);
break ;
}
}
}
 getch();

}