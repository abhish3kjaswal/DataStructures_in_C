#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
int a[]={10,0,5,0,2};
int r[10],begin=0,end,i=0,c;
c=sizeof(a)/sizeof(int);
printf("size of the array :%d",c);
end=c-1;
while(i<c)
{
	if(a[i]==0)
	{
	r[end]=a[i];
	end--;
	}
	if(a[i]!=0)
	{
	r[begin]=a[i];
	begin++;
	}
	if((begin==end)||(begin+1==end))
	{
	break;
	}
	i++;
}
for(i=0;i<c;i++)
{
printf("\n%d",r[i]);
}
getch();
}