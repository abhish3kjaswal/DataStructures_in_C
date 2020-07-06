#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char a[10];
int i,j,n,c=0;
printf("enter the string:");
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]!=a[j])
		{
		c++;
	       //	break;
		}
	}
//	break;
}
printf("\nlength of longest substring:%d",c-1);
getch();
}