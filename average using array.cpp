#include <stdio.h>
int main()
{
    int arr[5],avg,sum=0,i,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    } 
    	for(i=0;i<n;i++)
    	{
	  sum=sum + arr[i];
        }
   
   avg=sum/n;
   printf("Average = %d",avg);
    return 0;
}
