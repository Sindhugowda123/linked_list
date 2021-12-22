/*WAP to calculate sum and difference of two double integers based on case choice value

Take 2 double integers and an i/p from user :

 if "a" , add the integers and print "sum is .." ,

 if "s" , subtract the integers and print "diff is .." ,

 default case : print "defaut case- noactioni"
 
*/

#include<stdio.h>
#include<stdio_ext.h>

int main()
{
		double num1,num2,sum = 0, diff = 0;
	    char choice;	
		printf("Enter num1 value : ");
		scanf("%lf", &num1);
		printf("Enter num2 value : ");
		scanf("%lf", &num2);
		printf("Enter choice : ");
		__fpurge(stdin);
		scanf("%c", &choice);
		switch(choice)
		{
				case 'a':
						sum = num1 + num2;
						printf("sum = %lf\n", sum);
						break;
				case 's':
						if(num1 > num2)
						diff = num1 - num2;
						else
						diff = num2 - num1;
						printf("diff = %lf\n", diff);
						break;
				default :
						printf("Default Case - No Action\n");
						break;
		}
}
