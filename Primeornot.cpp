#include <stdio.h>
#include<conio.h>
int main() 
{
  int n, i, flag = 0;
  printf("Enter a any number: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) 
  {
    if (n % i == 0) 
	{
      flag = 1;
    }
  }
  
  if (n == 0 || n == 1) 
  {
    printf("%d is neither prime nor composite.", n);
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }
   getch();
  return 0;
}