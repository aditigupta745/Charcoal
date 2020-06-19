//program to determine wheather a point lies in straight line
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2,x3,y3;
	int slope1,slope2;
	
	printf("Enter the co-ordinate of first point(x1,y1)\n");
	scanf("%d%d",&x1,&y1);
	
	printf("Enter the co-ordinate of second point(x2,y2)\n");
	scanf("%d%d",&x2,&y2);
	
	printf("Enter the co-ordinate of third point(x3,y3)\n");
	scanf("%d%d",&x3,y3);
	
	//operation ((m1 and m2 are slope)
	slope1 = abs(y2-y1)/abs(x2-x1);
	slope2 = abs(y3-y2)/abs(x3-x2);
	
	if(slope1==slope2)
	printf("\nAll three points are in straight line :");
		
	
	else 
	printf("\nAll three point are not in straight line :");
		
	return 0;
	
}
