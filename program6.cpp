//finding roots of the quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{ 	
	int b,a,c;
	float d=0.0;
	float root1=0.0;float root2=0.0;
	printf("enter the value of b,a,c--->>");
	scanf("%d %d %d",&b,&a,&c);
	d=(pow(b,2))-((4*a*c));
	
	if(d>0)
	{
		printf("roots are real and distinct \n"); 
		root1=((-b)/(2*a))+((sqrt(d))/(2*a));
		root2=((-b)/(2*a))-((sqrt(d))/(2*a));
		printf("root1 is-->> %f \n",root1);
		printf("root2 is-->> %f",root2);
	}
	else if(d==0)
	{
		printf("roots are real and equal \n");
		root1=root2=((-b)/(2*a));
		printf("root1 is--->> %f \n",root1);
		printf("root2 is--->> %f",root2);
	}
	else
	{
		printf("roots are imaginary \n");
		root1=((-b)/(2*a))+((sqrt(-d))/(2*a));
		root2=((-b)/(2*a))-((sqrt(-d))/(2*a));
		printf("root1 is--->> %f \n",root1); 
		printf("root2 is--->> %f",root2);
	}
}		
