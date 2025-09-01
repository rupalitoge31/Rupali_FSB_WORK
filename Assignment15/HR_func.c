#include <stdio.h>
struct HR
{
	int id;
	char name[20];
	double salary;
	float commission;
};
struct HR storeHR();
void displayHR(struct HR);
void main()
{
	struct HR hr1,hr2,hr3;

	printf("Enter the details of HR1:\n");
	hr1=storeHR();
	
	printf("Enter the details of HR2:\n");
	hr2=storeHR();
	
	printf("Enter the details of HR3:\n");
	hr3=storeHR();
		
	printf("Enter the details of HR are:\n");
	displayHR(hr1);
	displayHR(hr2);
	displayHR(hr3);
}
struct HR storeHR()
{
	struct HR temp;	
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%f",&temp.commission);
	
	return temp;
}
void displayHR(struct HR hr){

	printf("id=%d name=%s salary=%lf commission=%f\n",hr.id,hr.name,hr.salary,hr.commission);
	
}