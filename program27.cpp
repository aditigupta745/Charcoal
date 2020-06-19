//Conditional operators
#include<stdio.h>
int main()
{
	float sal; /*variable declaration*/
	printf("Enter the salary\n");
	scanf("%f",&sal);
	(((sal>=25000)&&(sal<=40000)) ? printf("Manager"):(((sal>=15000)&&(sal<25000))?printf("Accountant"):printf("Clerk")));
}
