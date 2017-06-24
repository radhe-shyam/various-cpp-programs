#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(int argc, char *argv[])
{
	char ch;
 FILE *in, *out;
 printf("%s\n%s\n%d",argv[1],argv[2],argc);
 if(argc!=3)
 {
		printf("You didnt given the file name");
		getch();
		return 0;
 }
 in=fopen(argv[1],"r");
 out=fopen(argv[2],"w");
 while(!feof(in))
 {
  ch=getc(in);
  putc(ch,out);
 }
 fclose(in);
 fclose(out);
 getch();
return 0;
 }
