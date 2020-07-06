   #include<iostream.h>
   #include<conio.h>
   class employee
   {
    long empid;
    protected:
    long phnno;
    char name[120];
    public:
    void enter()
    {
     cout<<"enter emp id=";
      cin>>empid;
      cout<<"enter phn no=";
      cin>>phnno;
      cout<<"enter the name of the employee=";
      cin>>name;
      }
      void display()
      {
      cout<<"\n employee id is="<<empid;
      cout<<"\n phone number is="<<phnno;
      cout<<"\nname of the employe is="<<name;
	    }
      };
      void main()
      {
       clrscr();
       employee e;
       e.enter();
       e.display();
       getch();
       }

