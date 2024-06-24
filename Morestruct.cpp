#include<stdio.h>
#include<string.h>
struct book
	{
		char name[20];
		float price;
		int page;	
		
	};
int main()
{
	float sum;
	struct book b1={"Let Us C",300,422};
	/*printf("Enter the name of Book, price and no. of Pages\n");
	scanf("\n %s \n%f \n%d",&b1.name,b1.price,&b1.page);*/
	struct book b2,b3;
	b2=b1;
	b3=b2;
	printf("For variable B1 Name=%s \n,Price=%f\n and Number of pages=%d\n",b1.name,b1.price,b1.page);
	printf("For variable B1 Name=%s \n,Price=%f\n and Number of pages=%d\n",b2.name,b2.price,b2.page);
	printf("For variable B1 Name=%s \n,Price=%f and Number of pages=%d\n",b3.name,b3.price,b3.page);
	sum=b1.price+b2.price+b3.price;
    printf("Total = %f",sum);
	return 0;
}