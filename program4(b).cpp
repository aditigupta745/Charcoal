// Calculation Simple Interest by asking value from users
#include<stdio.h>
int main()
{
	float Principle , RateOfInterest , Time , SimpleInterest;
	/* Input principle , rateofinterest , time*/
	printf("Enter Principle value =" );
	scanf("%f" , &Principle);
	
	printf("Enter RateOfInterest =" );
	scanf("%f" , &RateOfInterest);
	
	printf("Enter Time =");
	scanf("%f" , &Time );
	
	/*CALCULATE SIMPLE INTEREST */
	SimpleInterest = (Principle*Time*RateOfInterest)/100;
	
	printf("SimpleInterest = %f" , SimpleInterest);
	
	return 0;
}
