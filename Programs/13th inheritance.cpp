#include<iostream.h>
#include<conio.h>
class university
{
      public:
             char name[10],place[10];
             void getdata()
             {
                  cout<<"Enter the university name\n";
                  cin>>name;
                  cout<<"Enter the University place\n";
                  cin>>place;
             
             }
             void printdata()
             {
                  cout<<"University Name\t"<<name<<"\n";
                  cout<<"University place\t"<<place<<"\n";
             }
};
class department:protected university
{
      public:
             char dname[20];
             int nstud,nstaff;
             void get()
             {
                  getdata();
                  cout<<"Enter the name of the department\n";
                  cin>>dname;
                  cout<<"Enter the number of student in the department\n";
                  cin>>nstud;
                  cout<<"Enter the number of staff in the department\n";
                  cin>>nstaff;
             }
             void print()
             {
                  printdata();
                  cout<<"Department Name\t"<<dname<<"\n";
                  cout<<"No of students\t"<<nstud<<"\n";
                  cout<<"No of staff\t"<<nstaff<<"\n";
             }
};
class staff:private department
{
      public:
             char name[20],sub[20];
             int salary,exp;
             void read()
             {
                  get();
                  cout<<"Enter the name of the staff\n";
                  cin>>name;
                  cout<<"Enter the subject that the staff handling\n";
                  cin>>sub;
                  cout<<"Enter the salary\n";
                  cin>>salary;
                  cout<<"Enter the experience\n";
                  cin>>exp;
             }
             void display()
             {
                  print();
                  cout<<"Staff Name\t"<<name<<"\n";
                  cout<<"Subject\t"<<sub<<"\n";
                  cout<<"Salary\t"<<salary<<"\n";
                  cout<<"Experience\t"<<exp<<"\n";
             }
};
class student:private department
{
      public:
             char name[20],course[10];
             int cyear,total;
             void input()
             {
                  get();
                  cout<<"Enter the name of the student\n";
                  cin>>name;
                  cout<<"Enter the course\n";
                  cin>>course;
                  cout<<"Enter the year of course\n";
                  cin>>cyear;
                  cout<<"Enter the total marks\n";
                  cin>>total;
             }
             void output()
             {
                  print();
                  cout<<"Student Name\t"<<name<<"\n";
                  cout<<"Course Name\t"<<course<<"\n";
                  cout<<"year of course\t"<<cyear<<"\n";
                  cout<<"Total marks\t"<<total<<"\n";
             }
};
main()
{
      staff s;
      student stud;
      s.read();
      s.display();
      stud.input();
      stud.output();
      getch();
}
      
      
      
