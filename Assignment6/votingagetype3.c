#include <stdio.h>
void votingage(int);
void main ()
{
	int age;
	printf("Enter the number");
	scanf("%d",&age);
	votingage(age);
}
void votingage(int a) 
{

	if (a>=18)
	{
		printf("eligible for voting");
	}
	 else {
	 	printf("not eligible for voting");
	 }
}