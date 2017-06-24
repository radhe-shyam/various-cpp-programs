#include<iostream.h>
#include<conio.h>

class Test
{
    public :

        virtual void Show()
        {
            cout<<"I am in Test Class"<<endl;
        }
};

class Test1 : public Test
{
      public:
           virtual void Show()
           {
            cout<<"I am in Test1 Class"<<endl;
           }

};

main()
{
    Test *Obj;

    Test Obj1;   // Base Class Object

    Test1 Obj2;  //Derived Class Object

    Obj = &Obj2;

    Obj->Show();  //In this case derived class show function called.

    Obj = &Obj1;

    Obj->Show(); //In this case Base class show function called.
	getch();
	}
