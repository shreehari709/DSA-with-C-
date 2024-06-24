#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int arr[MAX],front=-1,rear=-1;
int insert();
int del();
int display();
int main(){
  int ch;  
  while(1) {
  	system("cls");
	printf("\n1 INSERT\n");
    printf("2 DELETE\n");
    printf("3 DISPLAY\n");
    printf("4 QUIT\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d",&ch);
    switch(ch)    {
    case 1:
     insert();
     break;    
    case 2:    
     del();
     break;     
     case 3:    
     display();
     system("pause");
     break;     
     case 4:
     	exit(0);
		break;	 	 
     default:
     printf("WRONG CHOICE PLZ ENTER CORRECT CHOICE\n");  }  }  }
 int insert(){
 int item; 
 if(rear==MAX-1)
 printf("OVERFLOW\n");
 else{
  if(front==-1){
  front=0;  }
 printf("ENTER ANY NUMBER\n");
 scanf("%d",&item);
 rear++;
 arr[rear]=item;  }
 return 0;   }
int del() {
	if(front==-1|| front>rear)	{
	printf("UNDERFLOW\n");	}
else  {
printf("THE ELEMENT DELETED FROM THE QUEUE IS=%d",arr[front]);
front++;  }
return 0; }
int display() {
 int i; 
 if(front==-1||front>rear)  {
 printf("UNDERFLOW\n");  }
 else {
 printf("DISPLAY QUEUE\n");
 for(i=0;i<=rear;i++)  {
 printf("%d\t",arr[i]);   }  }
return 0;   }
