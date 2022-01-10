#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int top=-1;

int push(int* stack, int element)
{
		if(top == MAX-1)
		{
		printf("Stack is full\n");
		}
		else
        {
		printf("Enter element to push into stack : \n");
		scanf("%d", &element);
		top++;
		stack[top]=element;
		}
}
int pop(int* stack, int element)
{
		if(top == -1)
		{
		printf("Stack is empty\n");
		}
		else
        {
		printf("Deleted element is : %d\n", stack[top]);
		top--;
		}
}

int print(int* stack, int element)
{
		int i;
		if(top == -1)
		{
				printf("Stack is empty\n");
		}
		else
		{
				printf("Stack is : ");
				for(int i = top; i >= 0; i--)
				{
						printf("%d\n", stack[i]);
				}
		}
}

int main()
{
		int stack[MAX];
		int choice,element;
		while(1)
		{
        printf("1.Push\n2.Pop\n3.Print\n4.Exit stack\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
				case 1: 
						push(stack, element);
						break;
				case 2:
						pop(stack, element);
						break;
				case 3:
						print(stack, element);
						break;
				case 4: exit(0);
						break;
			    default: printf("error: No valid option\n");
						 break;
		}
}
}
