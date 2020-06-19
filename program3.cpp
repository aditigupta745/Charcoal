//enter two intergers value and perform arithmetic operation 
#include<stdio.h>

int main()
{
	int a , b;
	printf("enter two numbers");
	scanf("%d,%d",&a , &b);
	a+b; //addition
	a-b; //Substraction
	a*b;  //Multiplication
	a/b; //Division
	
	printf("value of a+b is = %d", a+b);
	printf("\nvalue of a-b is = %d", a-b);
	printf("\nvalue of a*b is = %d", a*b);
	printf("\nvalue of a/b is = %d", a/b);
}
