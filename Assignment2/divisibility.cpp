#include <stdio.h>
int main ()
{
	int num=15;
	
	if(num%3==0 && num%5==0)
	{
		printf("Divisible by both 3 and 5");
	}
	else if(num%3==0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else if (num%3==0)
	{
		printf("Divisible by 5 but not by 3 ");
	}
	else {
		printf("Divisible by None");
	}
}