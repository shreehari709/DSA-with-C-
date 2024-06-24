#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int shorting(int temp,int*);
int main()
{

while(1)
{
	int ch,n,i,key,a[100];
	switch(ch)
	{
		case 1:
			{
			printf("Insert the Array elements");
			for(i=0;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
            }
		case 2:
			{
		    printf("Shorting the array Elements ");
			shorting(temp,a);
		    }
	/*	case 3:
			{
			printf("Search the Array Elements ");
			search(a,key,n);
		    }
		case 4:
			{
			printf("Dispaly the Array Elements ");
			display(a);
		    }     
		case 5:
			{
		    exit(0) 
		    }
		default:
		{
			printf("Wrong Choice Please enter the correct choice ")
			}    */
	}
}
return 0;
}

int shorting(int temp,int* a)
{
	int i,j,p;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[i]>a[i+1])
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	return 0;
}