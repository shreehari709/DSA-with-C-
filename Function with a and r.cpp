#include<stdio.h>
 int sum(int a,int b);
int main()
 {
   int a,b,c;
 
  /* printf("Enter the two numbers:\n");
   scanf("\n%d \n%d", &a, &b);*/
 
   c=sum(a,b);
 
   printf("\nAddition of two number is : %d",c);
   return 0;
}
 
int sum(int x, int y) 
{
   int sum;
   printf("Enter the two numbers:\n");
   scanf("\n%d \n%d", &x, &y);
   sum=x + y;
   return sum;
}