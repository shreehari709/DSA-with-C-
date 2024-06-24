#include<stdio.h>
#include<conio.h>

  struct book
  {
  char name[5];
  float price;
  int page;
  };
  void main()
  {
   struct book b1={"YPK",556.7,789};
  clrscr();
 /* printf("\nENTER NAME PRICE AND PAGES OF BOOKS\n");
  for(int i=0;i<3;i++)
  {
  scanf("%s%f%d",b1[i].name,&b1[i].price,&b1[i].page);
  }*/
  printf("\nDISPLAY DETAILS\n");
  printf("Address on name=%u",&b1.name);
  printf("\nAddress on price=%u",&b1.price);
  printf("\nAddress on pageNumber=%u",&b1.page);
  getch();
  }
  void linkfloat()
  {
  float a=0,*b;
  b=&a;
  a=*b;
  }