#include <stdio.h>
#include <string.h>
struct date
{
	int date;
	int month;
	int year;
};
void  main()
{
	struct date d1,d2;
	
	d1.date=31;
	d1.month=10;
	d1.year=2003;
	
	printf("Enter the details od d2:\n");
	scanf("%d",&d2.date);
	scanf("%d",&d2.month);
	scanf("%d",&d2.year);
	
	printf("date=%d month=%d year=%d\n",d1.date,d1.month,d1.year);
	printf("\ndate=%d month=%d year=%d",d2.date,d2.month,d2.year);
 }