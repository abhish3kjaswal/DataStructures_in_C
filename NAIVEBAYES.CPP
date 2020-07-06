#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
 char t[200],p[200];

 int n,m;
 printf("Text :");
 scanf("%s",&t);
 printf("Pattern:");
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
    printf("\nstring matched=%d",s);
    }
  }
   getch();}