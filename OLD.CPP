#include<stdio.h>
int main()
{

int r,a,s,old;
printf("Enter the age of Ram ");
scanf("%d",&r);
printf("Enter the age of Ajay ");
scanf("%d",&a);
printf("Enter the age of Shayam ");
scanf("%d",&s);
if(r>a)
{
 if(r>s)
 {
 old=r;
 printf("RAM IS OLD");
 }
else
  {
  old=s;
  printf("Shaym is old");
  }
 }
else
 {
 if(s>a)
 {
 old=s;
 printf("Shayam is old");
 }
 else
 {
 old=a;
 printf("Ajay is old\n");
 }
 printf(" and his age is =%d\n",old);
}

}