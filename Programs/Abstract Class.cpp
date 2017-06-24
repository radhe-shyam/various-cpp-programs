#include<iostream.h>
class students
{
public:
char name[20];
int age,regno;
void getdata1()
{
cout<<"Enetr NAME AGE & ROLLNO"<<"\n";
cin>>name>>age>>regno;
}
virtual void display()
{}
};
class arts:public students
{
public:
char sub1[20],sub2[20],sub3[20];
void getdata()
{
students::getdata1();
cout<<"Enetr subject names";
cin>>sub1;
cout<<"\n";
cin>>sub2;
cout<<"\n";
cin>>sub3;
cout<<"\n";
}
void display()
{
cout<<name<<"\n"<<age<<"\n"<<regno<<"\n"<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
}
};
class engg:public students
{
public:
char sub1[20],sub2[20],sub3[20];
void getdata()
{
students::getdata1();
cout<<"Enetr subject names";
cin>>sub1;
cout<<"\n";
cin>>sub2;
cout<<"\n";
cin>>sub3;
cout<<"\n";
}
void display()
{
cout<<name<<"\n"<<regno<<"\n"<<age<<"\n"<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
}
};
class mech:public engg
{
};
class electrical:public engg
{
};
class civil:public engg
{
};
class medical:public students
{
public:
char sub1[20],sub2[20],sub3[20];
void getdata()
{
students::getdata1();
cout<<"Enetr subject names";
cin>>sub1;
cout<<"\n";
cin>>sub2;
cout<<"\n";
cin>>sub3;
cout<<"\n";
}
void display()
{
cout<<name<<"\n"<<regno<<"\n"<<age<<"\n"<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n";
}
};
int main()
{
    int n,i;
    cout<<"Enter no of students";
    cin>>n;
    for(i=0;i<n;i++)
    {
    arts s[100];
    s[i].getdata();
    s[i].display();
    }
    system("pause");
}
