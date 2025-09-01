#include <stdio.h>
void divisibility(int);
int main ()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	divisibility(num);
}
void divisibility(int a){

	
	if(a%3==0 && a%5==0)
	{
		printf("Divisible by both 3 and 5");
	}
	else if(a%3==0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else if (a%5==0)
	{
		printf("Divisible by 5 but not by 3 ");
	}
	else {
		printf("Divisible by None");
	}
}