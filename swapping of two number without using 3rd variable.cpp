#include<stdio.h>

int main()
{
int a,b;
printf("Enter the two number:\n ");
scanf("%d %d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("Number after swapping:\n%d\n%d",a,b);
return 0;
}
