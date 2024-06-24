#include<stdio.h>
#include<conio.h>
#include<string.h>
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