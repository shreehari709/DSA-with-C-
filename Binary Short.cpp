#include<stdio.h>
int main()
{
	int n,i,j, a[100],temp;
	printf("Enter the number of Array elements\n");
	scanf("%d",&n);
	printf("Enter the Elements in Array\n");
	for(i=0;i<n;i++)	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("Display the Sorted Array");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
	return 0;
}

