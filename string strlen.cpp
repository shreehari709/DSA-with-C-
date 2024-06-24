#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="Length";
	int len1,len2;
	len1= strlen(arr);
	len2= strlen("Breadth");

	printf("string=%s length=%d\n",arr,len1);
	printf("string=%s length=%d\n","Breadth",len2);
	return 0;
}