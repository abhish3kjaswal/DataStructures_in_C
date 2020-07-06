#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x=234; int s=0;
while(x!=0)
{
s=s+x%10;
 x=x/10;

}
printf("%d",s);
getch();
}