#include<stdio.h>
int main(){
	int a[10],i,key,j,n;
	printf("Enter the number of Array\n");
	scanf("%d",&n);
	printf("Enter the Elements in Array\n");
	for(i=0;i<=n;i++)	{
	scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++){
    key=a[j];
    i=j-1;
    while((i>-1)&&(a[i]>key)){
    	a[i+1]=a[i];
    	i=i-1;              
			}
    a[i+1]=key;
}
for(i=0;i<=n;i++)  {
printf("\t%d",a[i]); }
	return 0;
}

