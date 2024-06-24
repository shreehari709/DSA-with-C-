#include <stdio.h>
#include<stdlib.h>
#define max 5
int top = -1;
float list[max];
// Push (Stack)
	void push(float x)
	{
		if (top == max - 1)
		{
			printf("\nOVERFLOW!!!!");
			return;
		}
		top++;
		list[top] = x;
	}
// Pop (Stack)
	void pop()
	{
			float num;
			if (top == -1)
		{
			printf("\n UNDERFLOW!!!!");
		}
		else
		{
			num = list[top];
			top--;
			printf("\nThe Popped Element is %.2f\n", num);
		}
	}
// Prints The Stack
	void disp_stack()
		{
			if (top == -1)
		{
			printf("\n UNDERFLOW");
			return;
		}
		printf("Stack:");
		for (int i = top; i >= 0; i--)
	{
		printf("%.2f\t", list[i]);
	}
	}
// Stack Operations
	int main()
	{ 
	while (1)
	{
	int ch;
		printf("Stack\n-----------\n\n");
		printf("1.Push\n2.Pop\n3.Display\n");
		printf("\nSelected Operation:");
		scanf("%d", &ch);
		switch (ch)
{
	case 1:
		float num;
		printf("Enter the Value to Push:");
		scanf("%f", &num);
		push(num);
	break;
	case 2:
		pop();
		break;
	case 3:
		disp_stack();
		break;
	default:
		break;
		}
		}
		system("pause");
		return 0;
	}