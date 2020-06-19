//Convert Cartesian Form To Polar Form 

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x , y , r , theta;
	printf("Enter the x and y coordinates :\n" );
	scanf("%f%f",&x,&y);
	
	//Calculating r
	r = sqrt(x*x + y*y);
	
	//Calculating theta in radians 
	theta = atan(y/x); //atan is a funtion to find tan inverse
		
	printf("\nPolar coordinate r = %.2f and theta = %.2f");
	getch();
	return 0;
}

