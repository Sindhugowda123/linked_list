/*WAP to print all even and odd numbers from 1 to 100

o/p : even numbers are : 2,4,6,....100

      odd numbers are : 1,3,5,.....99*/

#include<stdio.h>

int main()
{
		int arr_odd[50], arr_even[50],j = 0,k = 0;
		for(int i = 1; i <= 100; i++)
		{
		if(i % 2 == 0)
		{
				arr_even[j] = i;
				j++;
		}
		else
		{
				arr_odd[k] = i;
				k++;
		}
		}
		printf("Odd numbers are : ");
		for(int i = 0; i < 50; i++)
		{
				printf("%d ", arr_odd[i]);
		}
		printf("\n");
		printf("Even numbers are : ");
		for(int i = 0; i < 50; i++)
		{
				printf("%d ", arr_even[i]);
		}
		printf("\n");
}
