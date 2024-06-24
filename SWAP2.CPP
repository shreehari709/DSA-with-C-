//pass by value
#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
clrscr();
printf("Enter the value in A\n");
scanf("%d",&a);
printf("Enter the value in B\n");
scanf("%d",&b);
swap(&a,&b);//calling
printf("\n After the swapping 1\n");
printf("A=%d and B=%d",a,b);
getch();
}
void swap(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("\n After swapping 2\n");
printf("A=%d and B=%d",*x,*y);
}