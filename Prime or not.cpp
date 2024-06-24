#include <stdio.h>
int main() 
{
  int n, i, count = 0;
  printf("Enter a Number: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; i++) 
  {

    if (n % i == 0)
	 {
      count = 1;
     }
  }

  if (n == 0 || n == 1) 
  {
    printf("%d is neither prime nor composite.", n);
  } 
  else {

    if (count == 0)
      printf("%d is a prime number.", n);
    else
      printf("%d is not a prime number.", n);
  }

  return 0;
}