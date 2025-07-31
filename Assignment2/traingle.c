#include <stdio.h>
int main ()
{
	int a=3;
	int b=3;
	int c=3;
	
	if (a==b && b==c)
	{
		printf("Equilateral Traingle");
	}
	else if(a==b||b==c||a==c)
	{
		printf("Isosceles Traingle");
	}
	else {
		printf("scalene Traingle");
	}
}