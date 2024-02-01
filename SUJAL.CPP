#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
cout<<"\n ENTER STRING\n";
char s[100], temp;
gets(s);
int len-strlen(s);
int l-len-1;
for (int i=0;i<len/2;i++)
{
temp =s[i];
s[i]=s[1];
s[1] = temp;
1- ;
}
cout<<"\n REVERSE OF STRING=\n"<<s;
getch();
}