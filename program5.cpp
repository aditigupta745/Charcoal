//Calculation average of four numbers
#include<stdio.h>

int main()
{
	int a,b,c,d;
	float avg;
	
	
	printf("Enter the first number = ");
	scanf("%d" , &a);
	printf("Enter the second number =");
	scanf("%d" , &b);
	printf("Enter third number =");
	scanf("%d",&c);
	printf("Enter fourth number =");
	scanf("%d",&d);
	
	avg = (float)(a+b+c+d)/4;
	
	printf("\nAvg of %d,%d,%d,%d is:%.2f",a,b,c,d,avg);
	
	return 0;
	
}
