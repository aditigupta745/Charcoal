//Approximate the natural logaritm function
#include<stdio.h>
#include<math.h>
main()
{	float sum;
	float sum1=0.0;
	float f_sum=0.0;
	float x;
	int i;
	printf("----approximating natural logarithm----\n");
	printf("enter the value of x--->>");
	scanf("%f",&x);
	for(i=1;i<=7;i++)
	{	if(i==1)
		{
			sum1=((x-1)/x);
		}
		else
		{
			sum=((pow(((x-1)/x),i)));
			sum1=sum/2;
		}
		f_sum=f_sum+sum1;
	}
	printf("sum of first seven terms in logarithm series is-->> %f",f_sum);
	
}
