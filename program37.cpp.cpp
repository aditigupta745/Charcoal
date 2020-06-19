//Menu driven program of factorial,prime,odd even, exit
#include<stdio.h>

int main()
{
	int choice , x , num , i ,fact = 1;
	printf("\n1. Factorial of a number");
	printf("\n2.Prime or not");
	printf("\n3.Odd or Even");
	printf("\n4.Exit");
	printf("\nEnter Your Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	
			printf("\nEnter a number :");
			scanf("%d",&num);
			for(i=1;i<=num;i++)
			{
				fact*=i;
				printf("\nFactorial is : %d",fact);
			}
			break;

		case 2:
			printf("\nEnter a number :");
			scanf("%d",&num);
			if(num%2==0)
			printf("\nNo. is Even");
			else
			printf("\nNo. is Odd");
			break;
	
		case 3:
			printf("\nEnter a number :");
			scanf("%d",&num);
			for(i=2;i<num;i++)
			{
				if(num%i==0)
				{
					x=1;
					printf("\n Number is not Prime");
				}	
				else
					printf("\n Number is not prime ");
			}
			break;
		
		case 4:
			return 0;
		
		default:
			printf("Please enter a valid input");
		}
	}
