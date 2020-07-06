#include<iostream.h>
#include<conio.h>
double power(double,int);
void main()
{
 clrscr();
 double n,r;
 int p,b;
 cout<<"enter the  number=";
 cin>>n;
 cout<<"\nenter the  power=";
 cin>>p;
 r=power(n,p);
 cout<<" \nresult= "<<r;
 r=power(n,b=2);
// cout<<"\nresult= "<<r;
 getch();
 }








 double power(double a,int b=2)
{
 int x=1,i;
 for(i=1;i<=b;i++)
 {
  x=x*a;
  }
  return(x);
  }