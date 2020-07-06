#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{              clrscr();
int n,m;
char t[100],p[100];
printf("enter the text:");
scanf("%s",&t);
printf("enter the pattern:");
scanf("%s",&p);
n=strlen(t);
m=strlen(p);
for(int s=0;s<=n-m;s++)
{
for(int j=0;j<m;j++)

if(t[s+j]!=p[j])
{
 break;
 }
 if(j==m)
 {
  printf("matched at=%d",s);
  }
  }
  getch();
  }

