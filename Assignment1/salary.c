#include <stdio.h>
void main ()
{
	double bs=8000;
	double da,ta,hra,totalsalary;
	
	if (bs<=5000)
	{
		da=bs*0.10;
		ta=bs*0.20;
		hra=bs*0.25;
		totalsalary=bs+da+ta+hra;
		printf("TotalSalary=%f",totalsalary);
	}
	 else {
	 	da=bs*0.15;
	 	ta=bs*0.25;
	 	hra=bs*0.30;
	 	totalsalary=bs+da+ta+hra;
		printf("TotalSalary=%f",totalsalary);
	 }
}
	 
	 