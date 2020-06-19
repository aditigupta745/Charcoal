#include<stdio.h>
 
float interest_calc(float a, float b, float c);
 
int main()
{
    float principal, period, rate;
    float res;
    printf("\nEnter Prinicpal Amount:\t");
    scanf("%f", &principal);
    printf("\nEnter Period of Years:\t");
    scanf("%f", &period);
    printf("\nEnter Rate of Interest:\t");
    scanf("%f", &rate);
    res = interest_calc(principal, period, rate);
    printf("\nSimple Interest = %f\n", res);
    printf("\n");
    return 0;
}
 
float interest_calc(float a, float b, float c)
{
    float si;   
    si = (a * b * c)/100;
    return si;
}
