#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int item;
	struct node *next;
};


int main()
{
	int data;
	char ch;
struct node *head,*start;
	head=(struct node*)malloc(sizeof(struct node));
	start=head;
	printf("Enter the Data\n");
	scanf("%d",&data);
	head->item=data;
	printf("DO YOU WANT MORE NODE\n");
	fflush(stdin);
	while(ch=='y'||ch=='Y'){
		head->next=(struct node*)malloc(sizeof(struct node));
		printf("Enter the Data\n");
		scanf("%d",&head->item);
			printf("DO YOU WANT MORE NODE\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
	head->next=NULL;
	head=start;
	while(head!=NULL)
		{
			printf("%d\t",head->item);
			head=head->next;
		}
		getch();
		return 0;
}                 