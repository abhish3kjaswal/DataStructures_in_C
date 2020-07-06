#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[]={288,32,123,31,21,10};
int l=a[0];
for(int i=0;i<=6;i++)
{
if(l<a[i])
	{l=a[i];}
}
printf("%d",l);
getch();
}