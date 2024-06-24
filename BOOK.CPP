#include<stdio.h>
#include<conio.h>

int main()
{
  struct book
  {
  char name[20];
  float price[20];
  int page[20];
  };
   struct book b1[3];
int i;
  printf("\nENTER NAME PRICE AND PAGES OF BOOKS\n");
  for(int i=0;i<3;i++)
  {
  scanf("%c%f%d",b1[i].name,&b1[i].price,&b1[i].page);
  }
  printf("\nDISPLAY DETAILS\n");
  for(i=0;i<3;i++)
  {
  printf("%c\t%f\t%d",b1[i].name,b1[i].price,b1[i].page);
  }
  getch();
  return 0;
  }

