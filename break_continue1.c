/*WAP to calculate the sum of numbers(10 numbers max)

a) If the user enters a negative number, the loop terminates

 b) If the user enters a negative number, it's not added to the result

 ex   a: user enters 1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed 

  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum */

#include<stdio.h>

int main()
{
		int i = 1,sum = 0,num;
		while(1)
		{
				printf("Enter num value : \n");
				scanf("%d", &num);
				if(num == 0)
						break;
				if(num < 0)
						continue;
				sum = sum + num;
				i++;
				if(i > 10)
						break;
		}
		printf("Total sum = %d\n", sum);
}
