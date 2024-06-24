#include <stdio.h>
int main(){
   int arr1[100],i,n,p,x;   
       printf("Enter the size of array : ");
       scanf("%d", &n);
       printf("Enter %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)        {
	      scanf("%d",&arr1[i]);	    }	
   printf("Input the value to be inserted : ");
   scanf("%d",&x);
   printf("Enter the Position, where the value to be inserted :");
   scanf("%d",&p);
   printf("The current list of the array :\n");
   for(i=0;i<n;i++)
      printf("%d",arr1[i]);   
   for(i=n;i>=p;i--)
      arr1[i]= arr1[i-1];
      arr1[p-1]=x;
   printf("\n\nAfter Entering the new element in the list :\n");
   for(i=0;i<=n;i++)
      printf("%d",arr1[i]);
	  printf("\n\n");
	  return 0;
}