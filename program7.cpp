//Checking whether a number is prime or not
#include<stdio.h>

int main()
{
	int a,num,b=0;
	printf("Enter a number =");
	scanf("%d",&num);
	
	for (a=1; a<=num; a++)
	{
		if(num%a==0)
		{
			b++;
			
		}
	}
	if(b==2)
	{
		printf("Enter number is %d and it is prime", num);
		
	}
	else
	{
		printf("Enter number is %d and it is not prime", num);
		
	}
	
	;
}
