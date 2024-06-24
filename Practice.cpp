#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
int a[10],n=4,key;

printf("Enter the Array Elements\n");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

	for(int j=1;j<n;j++){
	key=a[j];
	int i=j-1;
	while(i>-1&&a[i]>key)	{
		a[i+1]=a[i];
		i=i-1;
	}
	a[i+1]=key;
}
	for(int c=0;c<n;c++){
		printf("%d\n",a[c]);
	}
	
return 0;
}
