#include <stdio.h>
void main()
{
	int no=153;
	int r,sum=0;
	int temp=no;
	
	while (temp!=0)
	{
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if (sum==no)
	{
		printf("Armstrong");
	}
	else{
		printf(" not Armstrong");
	}
}