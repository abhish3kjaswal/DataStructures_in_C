#include<iostream.h>
#include<conio.h>
class student
{
 int rno,marks;
 char name[20];
 public:
 void enter();
 void display();
 };
 void student::enter()
 {
  cout<<"enter the roll no of the student=";
  cin>>rno;
  cout<<"enter the marks of the student=";
  cin>>marks;
  cout<<"enter the name of the student=";
  cin>>name;
  }
  void student::display()
  {
   cout<<"\nroll no of the student="<<rno;
  cout<<"\nmarks of the student="<<marks;
   cout<<"\nname of the student="<<name;
   if(marks>30)
   { cout<<"\n"<<name<<" is pass";
   }
   else
   {
    cout<<"\n"<<name<<" is fail";
    }}
    void main()
    {
    clrscr();
    student s1,s2;
    s1.enter();
    s2.display();
    cout<<"\n\n";
    s1.enter();
    s2.display();

    getch();
    }