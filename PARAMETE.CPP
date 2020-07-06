#include<iostream.h>
#include<conio.h>
class student
{
 long rno;
 public:
 student(int a)
 {
  rno=a;

  }
   void enter()
   {
   cout<<"enter rollno=";
   cin>>rno;
   }
   void display()
   {

   cout<<"roll no is="<<rno;
   }
   };
   void main()
   {        clrscr();
    student s(103);
    s.enter();
    s.display();
    getch();
    }