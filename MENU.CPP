#include<stdlib.h>
#include <stdio.h>

struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;

void create()
{
    char ch='Y';
    while(ch=='Y'||ch=='y')
    {   
        fflush(stdin);
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter the value");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
            start=temp;
        }
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
            ptr->next=temp;
        }
        printf("Add another node?");
        fflush(stdin);
        scanf("%c", &ch);
    }
}
void display()
{
    struct node
 #include<stdio.h>
#include<stdlib.h>
struct node   
{  
    int data;  
    struct node *prev;   
    struct node *next;   
};
struct node *start=NULL, *end=NULL;   
void dll_addpos()
{
    int i,pos;
    printf("Postion:");
    scanf("%d", &pos);
    struct node *new_node, *extra;
    if (start == NULL)
    {
        printf (" No data found in the list!\n");
    }
    else
    {
        extra = start;
        i = 0;
        while (i < pos - 2 && extra != NULL) { extra = extra->next;
        i++;
    }
        if (extra != NULL)
    {
        new_node = (struct node *) malloc (sizeof (struct node));
        printf("Value:");
        scanf("%d", &new_node->data);
        new_node->next = extra->next;	
        new_node->prev = extra;	
        if (extra->next != NULL)
        {
            extra->next->prev = new_node;
        }
        extra->next = new_node;
    }
        else
    {
        printf ("Invalid position ,Please enter valid position : \n");
    }
    }
}
void dll_adds()
{
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    printf("Value:");
    scanf("%d", &new_node->data);
    new_node->next = (start);
    new_node->prev = NULL;
    if ((start) != NULL)
        (start)->prev = new_node;
    (start) = new_node;
}

void dll_adde()
{

    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    end = start; 
    printf("Value:");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
 
    if (start== NULL) 
    {
        new_node->prev = NULL;
        start = new_node;
        return;
    }

    while (end->next != NULL)
        end = end->next;
    end->next = new_node;
    new_node->prev = end;
    return;
}
void dll_main()
{
    char ch = 'Y';
    while(ch=='Y'||ch=='y')
    {   
        fflush(stdin);
        
        fflush(stdin);
        scanf("%c", &ch);
    }
}
void double_linklist_display()
{
    struct node *current = start;  
    if(start == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    printf("Double linked list\n");  
    while(current != NULL) 
    {  
        printf("%d ", current->data);  
        current = current->next;  
    }
    printf("\n");  
}
void main()     
{   
    int choice;
    system("cls");
    while(1)
    { 
        printf("\nSelect Operation");
        printf("\n1.Show List");
        printf("\n2.Insert at Start");
        printf("\n3.Insert at End");
        printf("\n4.Insert Any Postion\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            double_linklist_display();
            break;
        case 2:
            dll_adds();
            break;   
        case 3:
            dll_adde();
            break;
        case 4:
            dll_addpos();
            break;    
        default:
            printf("Wrong Choice");
        }
    }
}