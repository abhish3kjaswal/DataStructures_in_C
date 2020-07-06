#include<iostream.h>
#include<conio.h>
class emp
{
 long empid,phnno,sal,credits;
 char name[20];
 public:
 emp()
 {
  sal=10000 ;
 // cout<<name<<"="<<sal;
  }
  void enter()
  {
  cout<<"enter employeeid=";
  cin>>empid;
  cout<<"enter the phone no. of employee=";
  cin>>phnno;
  cout<<"enter the name of the employee=";
  cin>>name;
  cout<<"enter credits scored=";
  cin>>credits;
  if(credits>50)
  {
  cout<<"\nenter sal=";
  cin>>sal;
  }
  }
  void display()
  {
   cout<<"employee id is="<<empid;
   cout<<"\n employee phone no is="<<phnno;
   cout<<"\n employee name is="<<name;
   cout<<"\n credits="<<credits;
   cout<<"\nsalary="<<sal;
   }
   };
   void main()
   {
   clrscr();
   emp e,b;
   cout<<"1st employee\n";
   e.enter();
   cout<<"\n2nd employee\n";
   b.enter();
   cout<<"\ndetails of 1st are \n";
   e.display();
   cout<<"\ndetails of 2nd are\n";
   b.display();
   getch();
   }