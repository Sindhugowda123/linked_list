/*WAP to generate a below pattern

*****
_****
__***
___**
____*

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
								printf("*");
						else
								printf("_");
				}
				printf("\n");
		}
}
