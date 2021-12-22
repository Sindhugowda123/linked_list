//Program to delete a value from an array

#include<stdio.h>
int main()
{
		int size,loc,flag = 0;
		printf("Enter array size : \n");
		scanf("%d", &size);
		int arr[size];
		printf("Enter array elements ; \n");
		for(int i = 0; i < size; i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Enter the location to delete its value : \n");
		scanf("%d", &loc);
		if(loc >= size + 1)
		{
				flag = 1;
				printf("Error : Deletion is not possible\n");
		}
		else
		{
				for(int i = loc-1; i < size-1; i++)
				{
						arr[i] = arr[i+1];
				}
		}
		if(flag != 1)
		{
				printf("The resultant array is : \n");
				for(int i = 0; i < size-1; i++)
				{
						printf("%d ", arr[i]);
				}
				printf("\n");
		}
}
