#include<stdio.h>
int main()
{	
int i,n,a[10],key;
 printf("Enter the number of elements ");
 scanf("%d",&n);
 printf("Enter the Elements \n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the element to be Searched ");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
 	if(key==a[i])
 	{
 	printf("%d is found in %d loaction",key,i);
 	break;
    }
}
    if(key!=a[i])
    printf("%d is not found at any location",key);
return 0;
}
