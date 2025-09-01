#include <stdio.h>
typedef struct Time
{
	float hrs;
	float min;
	float sec;
}Time;
void main()
{
	Time t; 
	
	printf("Enter the hrs min sec:");
	scanf("%f",&t.hrs);
	scanf("%f",&t.min);
	scanf("%f",&t.sec);
	
	printf("Hrs=%f Min=%f Sec=%f",t.hrs,t.min,t.sec);
}