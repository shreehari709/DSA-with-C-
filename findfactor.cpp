#include <stdio.h>
#include<conio.h>
int main() 
{
    int num, i;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) 
	{
        if (num % i == 0) 
		{
            printf("%d ", i);
        }
    }
    getch();
    return 0;
}
