#include<stdio.h>
int linearsearch(int[],int,int);
int main()
{
 int x[20],n,i,p,key;
 printf("Enter the number of elements ");
 scanf("%d",&n);
 printf("Enter %d Element \n",n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&x[i]);
 }
 printf("\n Enter the element to be searched \n");
 scanf("%d",&key);
 p=linearsearch(x,n,key);
 if(p==-1)
 printf("The Search is Unsuccessfull\n");
 else
 printf("\n %d is Found in at location %d ", key,p);
 return 0;
}
int linearsearch(int a[],int n,int x)
{
 int i;
 for(i=0;i<n;i++)
 {
 	if(x==a[i])
 	 return (i);
	 }	
return (-1);
}
