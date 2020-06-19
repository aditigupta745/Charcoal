//program to calculate profit and loss
#include<stdio.h>

int main()
{
	int CP , SP , Amount;
	
	//Input Cost & Selling Price of Product
	
	printf("Enter Cost price :");
	scanf("%d",&CP);
	printf("Enter Selling Price :");
	scanf("%d",&SP);
	
	if(SP>CP)
	{
		//CAlCULATE PROFIT
		Amount = SP-CP;
		printf("Profit = %d", Amount);
		
	}
	
	else if(CP>SP)
	{
		//CALCULATE LOSS
		Amount = CP-SP;
		printf("Loss = %d",Amount);
		
	}
	
	else 
	{
		printf("**** NEITHER PROFIT NOR LOSS");
		
	}
	
	return 0;
}

