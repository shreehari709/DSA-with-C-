#include<stdio.h>
int c,temp=0,i;
int main()
{
    int a[20],n,key;
    printf("Enter the number of array\n");
    scanf("%d",&n);
    printf("Enter the elements in Array\n");
    for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
           
    for (i = 1; i < n-1; i++)   
    {  
       temp=a[i];
       int j=i-1;
	   while(j>=0&&temp<=a[j])
	   {
	   	a[j+1]=a[j];
	   	j=j-1;
		   }    
		   a[j+1]=temp;
    }  
    
	 printf("Shorted Array\n");
	 for(int x=0;x<n;x++)
	 {
	 	printf(" %d ",a[x]);
	 	printf("\t");
	 }
        return 0;
}
