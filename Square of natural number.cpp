#include<stdio.h>

int main()
{
 int n,p=1,i;
 printf("Enter the number of terms : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	p=i*i;
 	printf(" %d ",p);
 }
return 0;
}
