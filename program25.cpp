//find greatest of three numbers using conditional operators
#include <stdio.h>
int main()
{
    int n1, n2, n3 , greatest;
    printf("Enter three different numbers: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    greatest=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("Gretest no. is %d",greatest);
    return 0;
}
