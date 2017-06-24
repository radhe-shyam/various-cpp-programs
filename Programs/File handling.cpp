#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;
class fileread
{
	private:
		char *a;
		int size;
	public:
		fileread(char *fn);
		void process();
		~fileread()
		    {
				delete a;
			}
};
fileread::fileread(char *fn)
			{
				long end, beg;
				ifstream obj;
				obj.open(fn,ios::in);
				if(obj.is_open())
			    	{
                   		beg=obj.tellg();
						obj.seekg(0,ios::end);
						end=obj.tellg();
						size=end-beg;
						a=new char[size];
						obj.seekg(0,ios::beg);
						obj.read(a,size);
						//cout<<a;
						obj.close();
					}
       			else
       			    {
	    				cout<<endl<<"File not found.\nProgram terminated..."<<endl<<endl;
	    				system("pause");
	    				exit(0);
					}
			}
			
void fileread::process()
	{
		int i,so=0,sc=0,co=0,cc=0,cio=0,cic=0,ic=0,ln=1,col=0,e[7][2];
		for(i=0;i<size;i++)
			{
				switch(a[i])
				    {
						case '[':   so++;
						            e[0][0]=ln;
									e[0][1]=col;
									break;
						case ']':   sc++;
						            e[1][0]=ln;
									e[1][1]=col;
									break;
						case '{':   co++;
						            e[2][0]=ln;
									e[2][1]=col;
									break;
						case '}':   cc++;
						            e[3][0]=ln;   //"
									e[3][1]=col;
									break;
						case '(':   cio++;
						            e[4][0]=ln;
									e[4][1]=col;
									break;
						case ')':   cic++;
						            e[5][0]=ln;
									e[5][1]=col;
									break;
						case '"':	ic++;
						            e[6][0]=ln;
									e[6][1]=col;
									break;
						case '\n':  ln++;
						            //cout<<endl<<col;
						            col=0;
									break;
					}
				col++;
				//cout<<a[i];
			}
			if (so!=sc)
			    {
					if(so>sc)
					    {
							cout<<endl<<"#->->->Extra \"[\" found at column no. "<<e[0][1]<< " in line no. "<<e[0][0];
						}
					else
					    {
							cout<<endl<<"#->->->Extra \"]\" found at column no. "<<e[1][1]<< " in line no. "<<e[1][0];
						}
				}
			else
			    cout<<endl<<"All \"[\" and \"]\" are correctly matched";
			if (co!=cc)
			    {
					if(co>cc)
					    {
							cout<<endl<<"#->->->Extra \"{\" found at column no. "<<e[2][1]<< " in line no. "<<e[2][0];
						}
					else
					    {
							cout<<endl<<"#->->->Extra \"}\" found at column no. "<<e[3][1]<< " in line no. "<<e[3][0];
						}
				}
			else
			    cout<<endl<<"All \"{\" and \"}\" are correctly matched";
			if (cio!=cic)
			    {
					if(cio>cic)
					    {
							cout<<endl<<"#->->->Extra \"(\" found at column no. "<<e[4][1]<< " in line no. "<<e[4][0];
						}
					else
					    {
							cout<<endl<<"#->->->Extra \")\" found at column no. "<<e[5][1]<< " in line no. "<<e[5][0];
						}
				}
			else
			    cout<<endl<<"All \"(\" and \")\" are correctly matched";
			if (ic%2)
			    cout<<endl<<"#->->->Extra Inverted comma( \" ) found at column "<<e[6][1]<< " in line "<<e[6][0];
			else
			    cout<<endl<<"All Inverted commas( \" ) are correctly matched";
	}

int main()
{
	char fn[40];
	cout<<"Enter the Name of file : - ";
	gets(fn);
	strcat(fn,".cpp");
	fileread obj1(fn);
	obj1.process();
	cout<<endl;
	system("pause");
	return 0;
}
/*
OUTPUT: -
Enter the Name of file : - 4

All "[" and "]" are correctly matched
All "{" and "}" are correctly matched
All "(" and ")" are correctly matched
All Inverted commas( " ) are correctly matched
Press any key to continue . . .
*/
