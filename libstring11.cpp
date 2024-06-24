#include<stdio.h>
#include<conio.h>
#include<string.h>
void Xstrcpy(char *s1,char *t1)
{
 while(*s1!='\0')
 {
  *t1=*s1;
  s1++;
  t1++;
 }
void main()
{
 char s[]="Pallab";
 char t[10];
 clrscr();
 strcpy(t,s);
 printf("Source string=%\n",s);
 printf("Target string=%s",t);
 getch();
}