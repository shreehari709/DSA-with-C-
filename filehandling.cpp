#include<stdio.h>

int main()
{
 FILE *fp;
 char ch;
 fp=fopen("Test.c","r");
 while(1)
 {
 	 ch=fgetc(fp);
 	 if(fp==NULL)
 	   {
 	  	puts("Cannot open a file");
 	  	exit();	
	   }
   if(ch==EOF)
    break;
    printf("%c",ch);
 }
 fclose(fp);
return 0;
}
