#include <stdio.h>
struct Employee
{
	int id;
	char name[20];
	double salary;
};
struct Employee storeEmployee();
void displayEmployee(struct Employee);
void main()
{
	struct Employee e1,e2,e3;

	printf("Enter the details of Employee1:\n");
	e1=storeEmployee();
	
	printf("Enter the details of Employee2:\n");
	e2=storeEmployee();
	
	printf("Enter the details of Employee3:\n");
	e3=storeEmployee();
		
	printf("Enter the details of Employee are:\n");
	displayEmployee(e1);
	displayEmployee(e2);
	displayEmployee(e3);
}
struct Employee storeEmployee()
{
	struct Employee temp;	
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	
	return temp;
}
void displayEmployee(struct Employee emp){

	printf("id=%d name=%s salary=%lf\n",emp.id,emp.name,emp.salary);
	
}