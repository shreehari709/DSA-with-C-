#include<stdio.h>
#include<conio.h>
int rec(int x)
{
	int p;
	if(x==1)
	return(1);
	else
	p=x*rec(x-1);
	return (p);
}
int main()
{
	int num,fact;
	printf("Enter the number: ");
	scanf("%d",&num);
	fact=rec(num);
	printf("Factorial value=%d",fact);
	getch();
	return 0;
}