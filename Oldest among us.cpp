
#include <stdio.h>
  
int main()
{
    int Ram, Shayam, Ajay;
  
    printf("Enter the Age of Ram, Shayam and Ajay: ");
    scanf("%d %d %d", &Ram, &Shayam, &Ajay);
  
    if (Ram >= Shayam && Ram >= Ajay)
        printf("%d is the largest number.", Ram);
  
    if (Shayam >= Ram && Shayam >= Ajay)
        printf("%d is the largest number.", Shaym);
  
    if (Ajay >= Ram && Ajay >= Shayam)
        printf("%d is the largest number.", Ajay);
  
    return 0;
}