//Calculate Body Mass Index
#include<stdio.h>

int main()
{
    double h,w,bmi;
 
    printf("Enter weight in kg:- ");
    scanf("%lf", &w);
 
    printf("Enter height in m:- ");
    scanf("%lf", &h);
 
    bmi=w/(h*h); 
 
    printf("\nYour BMI is %lf", bmi);
 
    if(bmi<=15)
        printf("\nBMI Category:- Starvation\n");
    else if(bmi<=17.5)
        printf("\nBMI Category:- Anorexic\n");
    else if(bmi<=18.5)
        printf("\nBMI Category:- Underweight\n");
    else if(bmi<=24.9)
        printf("\nBMI Category:- Ideal\n");
    else if(bmi<=25.9)
        printf("\nBMI Category:- Overweight\n");
    else if(bmi<=39.9)
        printf("\nBMI Category:- Obese\n");
    else
        printf("\nBMI Category:- Morbidly Obese\n");
        
	return 0;
}

