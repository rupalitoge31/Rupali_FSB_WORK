#include <stdio.h>
struct Admin
{
	int id;
	char name[20];
	double salary;
	float allowance;
};
struct Admin storeAdmin();
void displayAdmin(struct Admin);
void main()
{
	struct Admin a1,a2,a3;

	printf("Enter the details of Admin1:\n");
	a1=storeAdmin();
	
	printf("Enter the details of Admin2:\n");
	a2=storeAdmin();
	
	printf("Enter the details of Admin3:\n");
	a3=storeAdmin();
		
	printf("Enter the details of Admin are:\n");
	displayAdmin(a1);
	displayAdmin(a2);
	displayAdmin(a3);
}
struct Admin storeAdmin()
{
	struct Admin temp;	
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%f",&temp.allowance);
	
	return temp;
}
void displayAdmin(struct Admin adm){

	printf("id=%d name=%s salary=%lf allowance=%f\n",adm.id,adm.name,adm.salary,adm.allowance);
	
}