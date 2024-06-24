#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char name[20];
	float price[20];
	int pages[20];

    
	printf("Enter the name, price, page\n");
	for(i=0;i<=3;i++)
	 {
		scanf("%c\n %f\n %d\n",&name[i],&price[i],&pages[i]);  
     }
    for(i=0;i<=3;i++)
		{
			printf("%c\n %f\n %d\n",name[i],price[i],pages[i]);
		}
	getch();
	return 0;
		 }         
	struct Book
	{
	char name[20];
	float price[20];
	int pages[20];
};
	
                   