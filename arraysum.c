/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Input : [2,7,11,15], target = 9
Output : [0,1]
Output Because nums[0] + nums[1] == 9, we return [0,1]*/

#include<stdio.h>

int main()
{
		int size,i,target,count = 0,sum = 0;
		printf("Enter array size : \n");
		scanf("%d", &size);
		int arr[size];
		printf("Enter array elements : \n");
		for(int i=0;i<size;i++)
		{
				scanf("%d", &arr[i]);
		}
		printf("Enter the target number: ");
		scanf("%d", &target);
		for(i = 0;i < size; i++)
		{
				sum = sum + arr[i];
				arr[i] = i;
				if(sum == target)
				{
						count = 1;
						break;
				}
		}
		if(count == 1)
		{
				for(int k = 0;k <= i; k++)
				{
						printf("%d ", arr[k]);
				}
		}
		else
		{
				printf("Error : Target is not equal to sum of array elements");
		}
		printf("\n");
		return 0;
}
