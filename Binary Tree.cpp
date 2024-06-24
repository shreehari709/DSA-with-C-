#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
struct node* root;
root=0;
root=create();
return 0;
}
struct node
{
	int data;
	struct node *left,*right;
};
struct node *create()
{
	int x;
	struct node *newnode;
}
newnode=(structnode*)malloc(sizeof(structnode));
printf("Enter Data(-1 for No Node)");
scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	newnode->data -x;
	printf("Enter left Child of  %d",x);
	newnode->left=create();
	printf("Enter Right Child of %d",x);
	newnode->right=create();
	return newnode;