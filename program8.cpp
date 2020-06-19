//checking whether number is even or odd
#include<stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer =");
	scanf("%d" , &num);
	
	// if the number is divisible  by 2
	if(num % 2 == 0)
	
	printf("Number %d is even", num);
	
	else 
	
	printf("Number %d is odd", num);
	
	return 0;
	
}
