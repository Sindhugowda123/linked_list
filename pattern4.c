/*WAP to generate below pattern

99999
_7777
__555
___33
____1

*/

#include<stdio.h>

int main()
{
		int n;
		printf("Enter n value : \n");
		scanf("%d", &n);
		for(int row=n;row>=1;row--)
		{
				int k= (row*2)-1;
				for(int col=1;col<=n;col++)
				{
						if( row+col >= n+1)
								printf("%d", k);
						else
								printf("_");
				}
				printf("\n");
		}
}
