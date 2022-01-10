#include <stdio.h>
#include<stdlib.h>

#define MAX 4

int top1 = -1, top2 = -1;

int enqueue(int* stack1)
{
    int num;
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    if(top1 == MAX-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack1[++top1] = num;
    }
    
}
int pop(int* stack1)
{
    if(top1 != -1)
    {
        return stack1[top1--];
    }
}
int push(int* stack2)
{
    while(top1 >= 0)
    {
        stack2[++top2] = pop(stack2);
    }
}

int dequeue(int* stack2)
{
		int count=0;
    if(top2 == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Deleted element is %d\n", stack2[top2]);
        top2--;
        count--;
    }
}

int print(int *stack2)
{
    for(int i=top2;i>=0;i--)
    {
        printf("%d ",stack2[i]);
    }
    printf("\n");
}

int main()
{
	int stack1[MAX], stack2[MAX]; 
    int choice;
    while(1)
    {
        printf("1.enqueue\n2.push\n3.dequeue\n4.print\n5.exit\n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue(stack1);
            break;
            case 2: push(stack2);
            break;
            case 3: dequeue(stack2);
            break;
            case 4: print(stack2);
            break;
            case 5: exit(0);
            break;
        }
    }
}
