//program to find youngest of three
#include<stdio.h>
#include<math.h>

int main()
{
	int ram , shyam , ajay;
	printf("Enter the ages of ram , shyam , ajay :-");
	scanf("%d%d%d",&ram,&shyam,&ajay);
	
	if((ram>shyam)&&(ajay>ram))
	{
		printf("\nthe youngest of the three is shyam");
	
	}
	if((shyam>ram)&&(ajay>ram))
	{
		printf("\nthe youngest of the three is ram");
		
	}
	if((shyam>ajay)&&(ram>ajay))
	{
		printf("\nthe youngest of the three is ajay");
	}
	
}
