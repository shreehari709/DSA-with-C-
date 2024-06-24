#include<stdio.h>

int main()
{
  int a[5],i;
  printf("Enter the Element of Array\n");
  for(i=0;i<=5;i++)
  {
  	 scanf("\t%d",&a[i]);
  	 //printf("\t");
  }
  for(i=5;i>=0;i--)
  {
  	 printf("%d\t",a[i]);
  }
  return 0;
}
