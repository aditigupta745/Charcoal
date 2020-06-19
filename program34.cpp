//approximate level of intelligence
#include<stdio.h>
#include<conio.h>

int main()
{
int y;
float i,x;
for(y=1;y<=6;y++) 
    { 
        for(x=5.5;x<=12.5;)//x varies from5.5 to 12.5 so 
        { 
            i=2+(y+0.5*x); //formula 
            printf("i=%f y=%d x=%f\n",i,y,x);//displaying 
            x=x+0.5; //x increase in step of 0.5 by question 

        } 
    }   
    return 0;
} 
