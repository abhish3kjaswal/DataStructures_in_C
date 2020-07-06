#include<iostream.h>
#include<conio.h>
template<class t>
class abc
{
t x,y,z;
public:
void input(t a,t b)
{
x=a;
y=b;
z=a+b;
}
void display()
{
 cout<<"\nvalue x="<<x<<"\nvalue y="<<y<<"\nsum="<<z;
 }}
  ;
  void main()
  {
  clrscr();
   abc<int> a1;
   a1.input(50,85);
   a1.display();
   abc<float> b;
   b.input(50.23655,125.23);
   b.display();
   getch();
   }