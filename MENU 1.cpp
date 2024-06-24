#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <malloc.h>
#define max 5
int num,input_array[10];
int deleting(){
    int  position, c, n;  
  
    printf("Enter the location of Element to be deleted\n");
    scanf("%d", &position);    
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");    
    else    {    
        for ( c = position - 1 ; c < n - 1 ; c++ ) 
        input_array[c] = input_array[c+1];                
        printf("Resultant array is\n");        
        for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", input_array[c]);        
    }    
    return 0;
}
int part(int start, int end, int arr[])
{
int pt = arr[end];
int x = (start - 1);

for (int y = start; y <= end - 1; y++)
{
if (arr[y] < pt)
{
x++;
int t = arr[x];
arr[x] = arr[y];
arr[y] = t;
}
}
int t = arr[x + 1];
arr[x + 1] = arr[end];
arr[end] = t;
return (x + 1);
}

void disp(int arr[])
{
for (int x = 0; x < max; x++)
printf("%d\t", arr[x]);
printf("\n");
}

void q_sort(int start, int end, int arr[])
{
if (start < end)
{
int p = part(start, end, arr);
q_sort(start, p - 1, arr);
q_sort(p + 1, end, arr);
}
}

int top = -1;
void push(int x, int arr[])
{
if (top == max - 1)
{
printf("\nOVERFLOW!!!!");
return;
}
top++;
arr[top] = x;
}

void bsort(int arr[])
{
int pass, x;
for (pass = 1; pass < max - 1; pass++)
{
for (x = 0; x < max - pass; x++)
{
if (arr[x] > arr[x + 1])
{
int num = arr[x];
arr[x] = arr[x + 1];
arr[x + 1] = num;
}
}
}
disp(arr);
}

void isort(int arr[])
{
int x, y;
int num;
for (x = 1; x < max; x++)
{
num = arr[x];
y = x - 1;

while (y >= 0 && num <= arr[y])
{
arr[y + 1] = arr[y];
y = y - 1;
}
arr[y + 1] = num;
}
disp(arr);
}

void mrg(int beg, int mid, int end, int arr[])
{
int x, y, k;
int n1 = mid - beg + 1;
int n2 = end - mid;

int LeftArray[10], RightArray[10];

for (int x = 0; x < n1; x++)
LeftArray[x] = arr[beg + x];
for (int y = 0; y < n2; y++)
RightArray[y] = arr[mid + 1 + y];

x = 0;
y = 0;
k = beg;

while (x < n1 && y < n2)
{
if (LeftArray[x] <= RightArray[y])
{
arr[k] = LeftArray[x];
x++;
}
else
{
arr[k] = RightArray[y];
y++;
}
k++;
}
while (x < n1)
{
arr[k] = LeftArray[x];
x++;
k++;
}

while (y < n2)
{
arr[k] = RightArray[y];
y++;
k++;
}
}

void pop(int arr[])
{
int num;
if (top == -1)
{
printf("\n UNDERFLOW!!!!");
}
else
{
num = arr[top];
top--;
printf("\nThe Popped Element is %d\n", num);
}
}

void disp_stack(int arr[])
{
if (top == -1)
{
printf("\n UNDERFLOW");
return;
}
printf("Stack:");
for (int x = top; x >= 0; x--)
{
printf("%d\t", arr[x]);
}
}
int front = -1, rear = -1;
void insert(int arr[])
{
int item;
if (rear == max - 1)
printf("OVERFLOW!!!!\n");
else
{
if (front == -1)
{
front = 0;
}
printf("Enter the value to add:\n");
scanf("%d", &item);
rear++;
arr[rear] = item;
}
}

void binsearch(int arr[])
{
int value;
int low = 0, high = max - 1, mid;
printf("Enter Value to find:");
scanf("%d", &value);

while (low <= high)
{
mid = (low + high) / 2;
if (value == arr[mid])
{
printf("Found %d at %d Position", value, mid);
return;
}
if (value < arr[mid])
high = mid - 1;
else
low = mid + 1;
}
printf("Not Found");
}

void del(int arr[])
{
if (front == -1 || front > rear)
{
printf("UNDERFLOW!!!\n");
}
else
{
printf("Deleted element from Queue is %d", arr[front]);
front++;
}
}

void disp_queue(int arr[])
{
if (front == -1 || front > rear)
{
printf("UNDERFLOW!!!\n");
}
else
{
printf("Queue: \n");
for (int x = 0; x <= rear; x++)
{
printf("%d\t", arr[x]);
}
printf("\n");
}
}

struct LinkedListNode
{
int info;
struct LinkedListNode *next;
};
struct LinkedListNode *start = NULL;

void linearsearch(int arr[])
{
int value;
printf("Enter Value to find:");
scanf("%d", &value);

for (int x = 0; x < max; x++)
{
if (value == arr[x])
{
printf("\nFound %d at %d Position", value, x);
return;
}
}
printf("\nNot Found!!!");
}

void linklist_create()
{
char ch = 'Y';
while (ch == 'Y' || ch == 'y')
{
fflush(stdin);
struct LinkedListNode *num, *ptr;
num = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
printf("\nEnter the data value for the LinkedListNode:");
scanf("%d", &num->info);
num->next = NULL;
if (start == NULL)
{
start = num;
}
else
{
ptr = start;
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = num;
}
printf("Do you want to add another LinkedListNode?");
fflush(stdin);
scanf("%c", &ch);
}
}

void ll_disp()
{
struct LinkedListNode *ptr;
if (start == NULL)
{
printf("\nList is empty:\n");
return;
}
else
{
ptr = start;
printf("\nLinked arr:");
while (ptr != NULL)
{
printf("\t%d", ptr->info);
ptr = ptr->next;
}
printf("\n");
}
}

void linklist_insert_pos()
{
struct LinkedListNode *ptr, *num;
int x, pos;
num = (struct LinkedListNode *)malloc(sizeof(struct LinkedListNode));
printf("\nEnter the position:");
scanf("%d", &pos);
printf("\nEnter the value:");
scanf("%d", &num->info);

num->next = NULL;
if (pos == 0)
{
num->next = start;
start = num;
}
else
{
for (x = 0, ptr = start; x < pos - 1; x++)
{
ptr = ptr->next;
if (ptr == NULL)
{
printf("\nPosition not found:[Handle with care]\n");
return;
}
}
num->next = ptr->next;
ptr->next = num;
}
fflush(stdin);
}

void linklist_del_pos()
{
int x, pos;
struct LinkedListNode *num, *ptr;
if (start == NULL)
{
printf("\nThe arr is Empty!!!\n");
return;
}
else
{
printf("\nEnter the position to deleted:");
scanf("%d", &pos);
if (pos == 0)
{
ptr = start;
start = start->next;
printf("\nThe deleted element is:%.1f\t", ptr->info);
free(ptr);
}
else
{
ptr = start;
for (x = 0; x < pos; x++)
{
num = ptr;
ptr = ptr->next;
if (ptr == NULL)
{
{
    printf("\nPosition not Found:\n");
    return;
}
}
}
num->next = ptr->next;
printf("\nThe deleted element is:%.1f\t", ptr->info);
free(ptr);
}
}
}

struct Dll_LinkedListNode
{
int data;
struct Dll_LinkedListNode *prev;
struct Dll_LinkedListNode *next;
};
struct Dll_LinkedListNode *beg = NULL, *end = NULL;

void dll_add_pos()
{
int x, pos;
printf("Enter the Postion:");
scanf("%d", &pos);
struct Dll_LinkedListNode *new_LinkedListNode, *extra;
if (beg == NULL)
{
printf(" No data found in the arr!\n");
}
else
{
extra = beg;
x = 0;
while (x < pos - 2 && extra != NULL)
{
extra = extra->next;
x++;
}
if (extra != NULL)
{
new_LinkedListNode = (struct Dll_LinkedListNode *)malloc(sizeof(struct Dll_LinkedListNode));
printf("Enter the Value:");
scanf("%d", &new_LinkedListNode->data);
new_LinkedListNode->next = extra->next;
new_LinkedListNode->prev = extra;
if (extra->next != NULL)
{
extra->next->prev = new_LinkedListNode;
}
extra->next = new_LinkedListNode;
}
else
{
printf("Invalid position ,Please enter valid position : \n");
}
}
}

void dll_add_start()
{
struct Dll_LinkedListNode *new_LinkedListNode;
new_LinkedListNode = (struct Dll_LinkedListNode *)malloc(sizeof(struct Dll_LinkedListNode));
printf("Enter Value to add at Start:");
scanf("%d", &new_LinkedListNode->data);
new_LinkedListNode->next = (beg);
new_LinkedListNode->prev = NULL;
if ((beg) != NULL)
(beg)->prev = new_LinkedListNode;
(beg) = new_LinkedListNode;
}

void dll_add_end()
{

struct Dll_LinkedListNode *new_LinkedListNode;
new_LinkedListNode = (struct Dll_LinkedListNode *)malloc(sizeof(struct Dll_LinkedListNode));
end = beg;
printf("Enter the value to add at End:");
scanf("%d", &new_LinkedListNode->data);
new_LinkedListNode->next = NULL;

if (beg == NULL)
{
new_LinkedListNode->prev = NULL;
beg = new_LinkedListNode;
return;
}

while (end->next != NULL)
end = end->next;
end->next = new_LinkedListNode;
new_LinkedListNode->prev = end;
return;
}

void double_linklist_display()
{
struct Dll_LinkedListNode *current = beg;
if (beg == NULL)
{
printf("arr is empty\n");
return;
}
printf("LinkedListNodes of Double linked arr: \n");
while (current != NULL)
{
printf("%d ", current->data);
current = current->next;
}
printf("\n");
}

void msort(int beg, int end, int arr[])
{
if (beg < end)
{
int mid = (beg + end) / 2;
msort(beg, mid, arr);
msort(mid + 1, end, arr);
mrg(beg, mid, end, arr);
}
}

void ssort(int arr[])
{
int x, y, sml;

for (x = 0; x < max - 1; x++)
{
sml = x;
for (y = x + 1; y < max; y++)
if (arr[y] < arr[sml])
sml = y;

int num = arr[sml];
arr[sml] = arr[x];
arr[x] = num;
}
disp(arr);
}

void main()
{
while (1)
{
int ch, input_array[max];
printf("Select Operation\n\n\n");
printf("1.Input Array\n2.Display Array\n3.Delete \n4.Search\n5.Sort\n6.Stack\n7.Queue\n8.Linked List\n9.Double Linked List\n10.Exit\n");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("Input Array-:\n");
for (int x = 0; x < max; x++)
scanf("%d", &input_array[x]);
printf("\n");
break;

case 2:
printf("Array:");
disp(input_array);
break;

case 3:
deleting();
break;

case 4:
printf("Searching\n-----------\n\n");
printf("1.Linear Search\n2.Binary Search\n");

scanf("%d", &ch);
switch (ch)
{
case 1:
linearsearch(input_array);
break;

case 2:
binsearch(input_array);
break;

default:
break;
}
break;

case 5:
printf("Sorting\n-----------\n\n");
printf("1.Bubble sort\n2.Selection sort\n3. Insertion sort\n4.Quick sort\n5.Merge sort\n");

scanf("%d", &ch);
switch (ch)
{
case 1:
bsort(input_array);
break;

case 2:
ssort(input_array);
break;

case 3:
isort(input_array);
break;

case 4:
q_sort(0, max - 1, input_array);
disp(input_array);
break;

case 5:
msort(0, max - 1, input_array);
disp(input_array);
break;

default:
break;
}
break;

case 6:
printf("Stack\n-----------\n\n");
printf("1.Push\n2.Pop\n3.Display\n");

scanf("%d", &ch);
switch (ch)
{
case 1:

printf("Enter the Value to Push:");
scanf("%d", &num);
push(num, input_array);
break;

case 2:
pop(input_array);
break;

case 3:
disp_stack(input_array);
break;

default:
break;
}
break;

case 7:
printf("Queue\n-----------\n\n");
printf("1.Insert\n2.Delete\n3.Display\n");

scanf("%d", &ch);
switch (ch)
{
case 1:
insert(input_array);
break;

case 2:
del(input_array);
break;

case 3:
disp_queue(input_array);
break;

default:
break;
}
break;

case 8:
printf("Linked List Menu\n\n");
printf("1.Create \n2.Display\n3.Insert\n4.Delete\n");

scanf("%d", &ch);
switch (ch)
{
case 1:
linklist_create();
break;
case 2:
ll_disp();
break;
case 3:
linklist_insert_pos();
break;
case 4:
linklist_del_pos();
break;
default:
printf("Wrong Choice");
}
break;

case 9:;
printf("Double Linked List\n-----------\n\n");
printf("1.Display\n2.Insert at Postion\n3.Insert at Start\n4.Insert at End\n");

scanf("%d", &ch);
switch (ch)
{
case 1:
double_linklist_display();
break;

case 2:
dll_add_pos();
break;

case 3:
dll_add_start();
break;

case 4:
dll_add_end();
break;

default:
break;
}
break;

case 12:
exit(0);
break;

default:
printf("Error!!!!\nIncorrect Operation!!!");
break;
}
getch();
}
}
