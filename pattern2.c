/*WAP to generate below pattern

ABCDE 
_BCDE
__CDE
___DE
____E

*/

#include<stdio.h>

int main()
{
		int n;
		printf("Enter n value : \n");
		scanf("%d", &n);
		for(int row=1;row<=n;row++)
		{
				for(int col=1;col<=n;col++)
				{
						if( row <= col)
								printf("%c", (char)(col+64));
						else
								printf("_");
				}
				printf("\n");
		}
}
