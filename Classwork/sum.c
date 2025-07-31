#include <stdio.h>
void main()
{
	int no=34567;
	int ro1,sum=0;
	
	while (no>0)
	{
		ro1=no%10;
		sum=sum+ro1;
		no=no/10;
	}
	 printf("%d",sum);
}