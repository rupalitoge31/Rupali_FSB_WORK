#include <stdio.h>
struct Date
{
	int date;
	int month;
	int year;
};
struct Date storeDate();
void displayDate(struct Date);
void main()
{
	struct Date d1,d2,d3;

	printf("Enter the details of Date1:\n");
	d1=storeDate();
	
	printf("Enter the details of Date2:\n");
	d2=storeDate();
	
	printf("Enter the details of Date3:\n");
	d3=storeDate();
		
	printf("Enter the details of Date are:\n");
	displayDate (d1);
	displayDate (d2);
	displayDate (d3);
}
struct Date storeDate()
{
	struct Date temp;	
	scanf("%d",&temp.date);
	scanf("%d",&temp.month);
	scanf("%d",&temp.year);
	
	
	return temp;
}
void displayDate(struct Date dt){

	printf("%d : %d : %d \n",dt.date,dt.month,dt.year);
	
}