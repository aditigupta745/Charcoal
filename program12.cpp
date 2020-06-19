//program to calculate the area of triangle
#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,s,area;
	printf("Enter the three sides of triangle :");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle is %f", area);
	return 0;
}
