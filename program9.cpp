//fahrenheit to celsius conversion
#include<stdio.h>

int main()
{
	float celsius , fahrenheit;
	
	//Input Temprature in Fahrenheit =")
	printf("Enter Temp. in  Fahrenheit =");
	scanf("%f", &fahrenheit);
	
	//Celsius to  Fahrenheit Conversion Formulae
	celsius=(fahrenheit - 32)*5/9;
	
	printf("\nTemp. in Celsius is = %.2f" , celsius);
	
	
}
