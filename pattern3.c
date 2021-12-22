/*WAP to generate below pattern

AAAAA
_BBBB
__CCC
___DD
____D

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
								printf("%c", (char)(row+64));
						else
								printf("_");
				}
				printf("\n");
		}
}
