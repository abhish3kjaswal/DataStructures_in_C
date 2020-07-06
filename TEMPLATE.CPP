#include<iostream.h>
#include<conio.h>
template<class x,class y>
class test
{
 x a;
 y b;
 public:
 test(x t3,y t4)
 {
  a=t3;
  b=t4;
 }
  void display()
  {
    cout<<"\nvaue="<<a;
    cout<<"\nvalue="<<b;
  }
  };
  void main()
  {
   clrscr();
   test<int,float> t(12,52.2255635532);

   t.display();
   test<float,int> t2(20.325,125);
   t2.display();
   getch();
   }