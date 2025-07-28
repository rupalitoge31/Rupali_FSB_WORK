#include <stdio.h>

int main ()
{
	int maths=95;
	int pysics=90;
	int chemistry=80;
	int biology=100;
	int english=75;
	int total=('maths' + 'physics' + 'chemistry' + 'biology' +'english'); 
	float percentage = (total/500.0)*100;
	
	printf("Total marks %d",total);
	printf("Percentage %f",percentage);
	
}