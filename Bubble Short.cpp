#include<stdio.h>
#include<conio.h>
int bubblesort();
int n,i,j, a[100],temp; 
int main()
{
	printf("Enter the number of Array elements\n");
	scanf("%d",&n);
	printf("Enter the Elements in Array\n");
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	bubblesort();
return 0;
}

int bubblesort()
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			
		}
	}
	printf("Display the Shorted Array");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}


	

