#include <stdio.h>
void leapyear(int);
void main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	leapyear(year);
}
void leapyear( int a)
{
    if (a%4==0&& a%100!=0|| a%400==0)
	{
		printf("year is leap",a);
	}
     else {
     	printf("year is not leap",a);
	 }
}