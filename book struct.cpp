#include<stdio.h>
#include<string.h>
struct book
{
	char name[5];
	float price;
	int page;
};
 void disp(struct book b)
 {
 	printf("\n%s \t%f \t%d",b.name,b.price,b.page);
 }
 int main()
 {
 	struct book b1={"Ypk",556,322};
	struct book *ptr;
	ptr=&b1;
	printf("\nName=%s\n Price=%f and Number of pages=%d",b1.name,b1.price,b1.page);
	printf("\nName=%s\n Price=%f and Number of pages=%d",ptr->name,ptr->price,ptr->page);
	return 0; 
 }