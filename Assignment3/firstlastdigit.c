#include <stdio.h>
void main ()
{
	int no=12345;
	int rem,sum;
	int ld=no%10;
	
	while (no>0)
	{
		rem=no%10;
		no=no/10;
		sum=ld+rem;
	}
	printf("Sum=%d %d %d",sum,ld,rem);
}