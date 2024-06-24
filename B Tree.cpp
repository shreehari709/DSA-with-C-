#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int item;
	struct node* left;
	struct node* right;
};
void inorder(struct node* root){
	if(root==NULL)
	return ;
	inorder(root->left);
	printf("%d->",root->item);
	inorder(root->right;);
}
void preorder(struct node* root){
	if(root==NULL)return 0;
		printf("%d->",root->item);
	inorder(root->left);
	inorder(root->right;)
}
void postorder(struct node* root){
	if(root==NULL)return 0;
	inorder(root->left);
	inorder(root->right;)
		printf("%d->",root->item);
}
struct node* createNode(int value){
	struct node* newNode=malloc(sizeof(struct node));
	newNode->item=value;
	newNode->left=NULL;
	newNode->right=NULL;
	
	return newNode;
}
  
  struct node* insertleft(struct node* root, int value){
  	root->left=createNode(int value);
  	return root->left;
  }
  struct node* insertright(struct node* root, int value){
  	root->right=createNode(int value);
  	return root->right;
  }
int main()
{
 struct node* root =  createNode(1)
 insertleft(root,2);
 insertright(root,3);
 insertleft(root->left,4);
 
 printf("Inorder\n");
 inorder(root);
 printf("Postorder\n");
 postorder(root);
 printf("Preorder\n");
 preorder(root);
return 0;
}
