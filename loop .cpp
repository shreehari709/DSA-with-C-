#include<stdio.h>
int loop();

int main()
{
	int n;
 n=loop();
return 0;
}
int loop()
{
	int n,i,j;
	printf("Enter the value of n \n");
	scanf("\n %d \n",&n);
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
		printf(" * ");
	    }
	    printf("\n");
	}
	return n;
}
