//whether the triangle is isoceles ,equilateral,scalene or ringhtangled

#include<stdio.h>
#include<math.h>
main()
{
	float AB,BC,AC;/*variable declaration*/
	float square_sumroot=0.0;/*variable initialization*/
	printf(" values of sides of a triangle-->>\n");
	printf("enter the value of side AB-->>");
	scanf("%f",&AB);/*input value of side from user*/
	printf("enter the value of side BC-->>");
	scanf("%f",&BC);/*input value of side from user*/
	printf("enter the value of side AC-->>");
	scanf("%f",&AC);/*input value of side from user*/
	square_sumroot=sqrt((pow(AB,2))+((pow(BC,2))));/*computing square sum root*/ 
	if((AB==BC)&&(BC==AC)&&(AC==AB))/*condition check*/
	{
		printf("traingle is an equilateral triangle");/*printing result*/
	}
	else if(((AB==BC)&&(BC!=AC))||((AB==AC)&&(AB!=BC))||((BC==AC)&&(BC!=AB)))/*condition check*/
	{
		printf("traingle is an isosceles triangle");/*printing result*/
	}
	else if((square_sumroot==AC))/*condition check*/
	{
		printf("triangle is right angled");/*printing result*/
	}
	else if((AB!=AC)&&(AC!=BC)&&(AB!=BC))/*condition check*/
	{
		printf("triangle is scalene");/*printing result*/	
	}
}/*end of main*/	
