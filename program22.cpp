//output the grade of the steel
#include<stdio.h>

int main()
{
    int hard,ts;
    float cc;
    printf("Enter the Hardness, Tensile strength and carbon content of the steel\n"); 
    scanf("%d%d%f",&hard,&ts,&cc);
    
   if(hard>50&&cc<0.7&&ts>5600)
   printf(" Grade 10\n");
else if(hard>50&&cc<0.7&&!(ts>5600))
printf("Grade 9\n");
else if(!(hard>50)&&cc<0.7&&ts>5600)
printf("Grade 8\n");
else if(hard>50&&!(cc<0.7)&&ts>5600)
printf(" Grade 7\n");
else if(hard>50||cc<0.7||ts>5600)
printf("Grade 6\n");
else 
printf("Grade 5\n");
return 0;
}
