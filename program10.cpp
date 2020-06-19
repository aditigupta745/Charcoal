//program to calculate and  print paper sizes 
#include <stdio.h>
int main()
{
   int a=1189,b=841, 1=1;
   while(i<9){
	if(a<b)
	{
	   b=b/2;
	}
	else{
	    a=a/2;
	}
	printf(" the dimensionsofA%d are %d mm X %d mm \n", i,a,b);
	i=i+1;
    }
    return 0;
}
