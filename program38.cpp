//Find the grace marks of a student
#include<stdio.h>
#include<conio.h>
main() {

int _class,f_sub;

printf("\nPlease enter the class obtained\n1=first 2=second 3=third:  ");
scanf("%d",&_class);
printf("\n\nPlease enter the number of failed subjects:  ");
scanf("%d",&f_sub);

switch(_class) {

case 1:
    if(f_sub<=3) {
    printf("\nGrace marks = 5 marks per subject.\n");
    }
    else {
    printf("\nNo Grace marks.\n");
    }
    break;

case 2:
    if(f_sub<=2) {
    printf("\nGrace marks = 4 marks per subject.\n");
    }
    else {
    printf("\nNo Grace marks.\n");
    }
    break;

case 3:
    if(f_sub==1) {
    printf("\nGrace marks = 5 marks per subject.\n");
    }
    else {
    printf("\nNo Grace marks.\n");
    }
    break;

default:
    printf("Error! wrong input.\n");
    break;
    }

    return 0;

    }
