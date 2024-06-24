#include<stdio.h>
int Binarysearch(int[],int,int);
int main()
{
 int x[20],n,i,p,key;
 printf("\n Enter the number of element ");
 scanf("%d",&n);
 printf("\n Enter the %d elements in asending order\n",n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&x[i]);
 }
 	printf("\n Enter the element to be Searched ");
 	scanf("%d", &key);
 	p=Binarysearch(x,n,key);
 	if(p==-1)
 	printf("\n The search is unsccessfull\n");
 	else
 	printf("%d is Found at location %d",key,p);


return 0;
}
 
int Binarysearch(int a[],int n,int x)
{
	int lo,hi,mid;
	lo=0;
	hi=n-1;
	while(lo<=hi)
	{
	 mid=(lo+hi)/2;
	 if(x==a[mid])
	 return(mid);
	 if(x<a[mid])
	 hi=mid-1;
	 else
	 lo=mid+1;
	}
	return(-1);
}

