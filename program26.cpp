//Sum of square of sine and cosine is 1
#include<stdio.h>
#include<math.h>

int main()
{
    float degree;
    float sum;
    float sum1,sum2;
    
	printf("Enter the value of angle in Degree\n");
    scanf("%f",&degree);
    
	sum1= sin(degree)*sin(degree);
    sum2= cos(degree)*cos(degree);
    sum=(sin(degree)*sin(degree))+(cos(degree)*cos(degree));
    printf("%f\n",sum1);
    printf("%f\n",sum2); 
    printf("%f",sum); //sum of angles of  sin and cosine will be 1

return 0;
}
