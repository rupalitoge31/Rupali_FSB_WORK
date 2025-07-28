#include <stdio.h>

int main ()
{
	int total_minutes=140;
	int hours=total_minutes/60;
	int minutes=total_minutes%60;
	
	printf("%d ,%d",hours,minutes);
}