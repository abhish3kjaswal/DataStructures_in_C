#include<stdio.h>
#include<conio.h>
#include<string.h>
void palin(char [],int ,int );
void main()
{
clrscr();
char a[20],x;
printf("enter the string :");
gets(a);
x=strlen(a);
palin(a,x,0);
getch();
}
void palin(char a[],int s,int i)
{
if(a[i]==a[s-1])
{
		if((i+1==s)||(i==s))
		{
			printf("%s -> it is a palindrome",a);

			return ;
		}
palin(a,s-1,i+1);
}
else
{
printf("%s ->it is not a palindrome",a);
}
 }