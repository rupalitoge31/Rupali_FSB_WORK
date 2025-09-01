#include <stdio.h>
struct SalesManager
{
	int id;
	char name[20];
	double salary;
	float incentive;
	float target;
};
struct SalesManager storeSalesManager();
void displaySalesManager(struct SalesManager);
void main()
{
	struct SalesManager sm1,sm2,sm3;

	printf("Enter the details of SalesManager1:\n");
	sm1=storeSalesManager();
	
	printf("Enter the details of SalesManager2:\n");
	sm2=storeSalesManager();
	
	printf("Enter the details of SalesManager3:\n");
	sm3=storeSalesManager();
		
	printf("Enter the details of SalesManager are:\n");
	displaySalesManager (sm1);
	displaySalesManager (sm2);
	displaySalesManager (sm3);
}
struct SalesManager storeSalesManager()
{
	struct SalesManager temp;	
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%f",&temp.incentive);
	scanf("%f",&temp.target);
	
	return temp;
}
void displaySalesmanager(struct SalesManager sm){

	printf("id=%d name=%s salary=%lf incentive=%f  target=%f\n",sm.id,sm.name,sm.salary,sm.incentive,sm.target);
	
}