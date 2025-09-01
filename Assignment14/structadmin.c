#include <stdio.h>
#include <string.h>
struct admin
{
	int id;
	char name[20];
	double salary;
	float allowance;
};
void main()
{
	struct admin a1,a2;
	
	a1.id=123;
	strcpy(a1.name,"pqr");
	a1.salary=25000;
	a1.allowance=1250;
	
	printf("Enter the details of a2:\n");
	scanf("%d",&a2.id);
	scanf("%s",a2.name);
	scanf("%lf",&a2.salary);
	scanf("%f",&a2.allowance);
	
	printf("id=%d name=%s salary=%lf allowance=%f\n",a1.id,a1.name,a1.salary,a1.allowance);
	printf("\nid=%d name=%s salary=%lf allowance=%f",a2.id,a2.name,a2.salary,a2.allowance);
}