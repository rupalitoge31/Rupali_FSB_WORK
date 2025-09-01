#include <stdio.h>
void totalsalary(double*);
void main ()
{
	long long double bs=8000;
	totalsalary(&bs);
	
}
void totalsalary(long long double* a) 
{
	 long long double da,ta,hra,totalsalary;
	if (*a<=5000)
	{
		da=*a*0.10;
		ta=*a*0.20;
		hra=*a*0.25;
		totalsalary=*a+da+ta+hra;
		printf("TotalSalary=%lf",&totalsalary);
	}
	 else {
	 	da=*a*0.15;
	 	ta=*a*0.25;
	 	hra=*a*0.30;
	 	totalsalary=*a+da+ta+hra;
		printf("TotalSalary=%lf",&totalsalary);
	 }
}