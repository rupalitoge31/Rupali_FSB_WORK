#include <stdio.h>
void upperlowercase(char);
void main ()
{
	char ch='S';
	//printf("Enter the letter");
	//scanf("%d",&ch);
	upperlowercase(ch);
}
void upperlowercase(char a)
{
		
	if (a>='A'&&a<='Z')
	{
		printf("char is uppercase");
	}
	 else {
	 	printf("char is lowercase");
	 }
}