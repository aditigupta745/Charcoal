//program to interchange  the content of C and D
#include<stdio.h>

int main()
{
	int C,D,E;
	printf("\nEnter the number at location C :");
	scanf("%d",&C);
	printf("\nEnter the number at location D :");
	scanf("%d",&D);
	/* Now Changing the content of two variables 
	using a third variable as temp store */
	
	E=C;
	C=D;
	D=E;
	
	printf("C=%d\n",C);
    printf("D=%d\n",D);
    
    return 0;
}
