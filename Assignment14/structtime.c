#include <stdio.h>
#include <string.h>
struct Time 
{
	int hour;
	int mint;
	int sec;
	
};
void main()
{
	struct Time T1,T2;
	
	T1.hour=2;
	T1.mint=35;
	T1.sec=96;
	
	printf("Enter the details of T2:\n");
	scanf("%d",&T2.hour);
	scanf("%d",&T2.mint);
	scanf("%d",&T2.sec);
	printf("hour=%d mint=%d sec=%d\n",T1.hour,T1.mint,T1.sec);
	printf("\nhour=%d mint=%d sec=%d",T2.hour,T2.mint,T2.sec);
}