#include<stdio.h>
#include<stdlib.h>
int main()
{
 int key,n,a[10],i;
 printf("Enter the number of elements\n");
 scanf("%d",&n);
 printf("Enter the value in Ascending Order\n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&a[i]);
 }
 printf("Enter the number to be searched\n");
 scanf("%d",&key);
 int lo=0,hi=n-1,mid;
while(lo<=hi){
 	mid=hi+lo/2;
 	if(key==a[mid])
 	printf("Number %d is Found in at %d location",key,mid);
 	if(key<a[mid])
 	hi=mid-1;
 	else
 	lo=mid+1;
 }
if(key!=a[mid])
  printf("%d is not found at any loaction",key);
return 0;
}
