//whether the character is capital,small case letter,digit or a special symbol  
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	char ch;
	
	printf("Enter a is Character:");
	scanf("%c",&ch);
	
	
	if(ch>=65&&ch<=90)
	{
		printf("\n%c is Upper case letter",ch);
		
	}
	else if(ch>=97&&ch<=122)
	{
		printf("\n%c is Lower case letter",ch);
		
	}
	else if(ch>=48&&ch>=57)
	{
		printf("\n%c is Digit",ch);
		
	}
	else if((ch>=0 && ch<=47)||(ch>=58 && ch<=64)||(ch>=91 && ch<=96)||(ch>=123 && ch<=127))
	{
		printf("\n%c is Special Symbol",ch);
	}
	return 0;
}
