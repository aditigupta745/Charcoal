//program to fint out if the point lies on X axis , Y axis or in the origin
#include<stdio.h>

int main()
{
	int X,Y ;
	printf("Enter the points of  X and Y :\n");
	scanf("%d%d",&X,&Y);
	
	if((X==0)&&(Y==0))
	{
		printf("\nPoints lies on origin :");
		
	}
	else if((X==0)&&(Y!=0))
	{
		printf("\nPoints lies on Y-axis");
	}
	else if((X!=0)&&(Y==0))
	{
		printf("\nPoints lies on X-axis");

	}
	else 
	{
		printf("\nPoints lies neither on X-axis nor on Y-axis");
	}
	return 0;
		
}
