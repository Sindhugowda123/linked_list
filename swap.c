//Program to swap two numbers using pointers without using extra variable

#include<stdio.h>

int swap(int *a, int *b)
{
		*a = *a ^ *b;
		*b = *a ^ *b;
		*a = *a ^ *b;
}
int main()
{
		int a,b,size;
		printf("Enter a value : \n");
		scanf("%d", &a);
		printf("Enter b value : \n");
		scanf("%d", &b);
		printf("Before swapping : \n");
		printf("a = %d b = %d\n", a, b);
		swap(&a, &b);
		printf("After swapping : \n");
		printf("a = %d b = %d\n", a, b); 
}
