#include <stdio.h>
struct Time
{
	int hour;
	int min;
	int sec;
};
struct Time storeTime();
void displayTime(struct Time);
void main()
{
	struct Time t1,t2,t3;

	printf("Enter the details of Time1:\n");
	t1=storeTime();
	
	printf("Enter the details of Time2:\n");
	t2=storeTime();
	
	printf("Enter the details of Time3:\n");
	t3=storeTime();
		
	printf("Enter the details of Time are:\n");
	displayTime (t1);
	displayTime (t2);
	displayTime (t3);
}
struct Time storeTime()
{
	struct Time temp;	
	scanf("%d",&temp.hour);
	scanf("%d",&temp.min);
	scanf("%d",&temp.sec);
	
	
	return temp;
}
void displayTime(struct Time t){

	printf("%d : %d : %d \n",t.hour,t.min,t.sec);
	
}