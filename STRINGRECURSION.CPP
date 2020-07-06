#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char s[100],r[400];
int b,e,c=0;
printf("enter the string ");
gets(s);
while(s[c]!='\0')
{
c++;
}
e=c-1;      a
for(b=0;b<c;b++)
{
r[b]=s[e];
e--;
}
r[b]='\0';
printf("%s",r);
getch();
}