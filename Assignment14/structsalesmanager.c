#include <stdio.h>
#include <string.h>
struct salesmanager
{
	int id;
	char name[30];
	double salary;
	double incentive;
	double target;
};
int main()
{
	struct salesmanager sm1,sm2;
	
	sm1.id=12;
	strcpy(sm1.name,"xyz");
	sm1.salary=35000;
	sm1.incentive=5000;
	sm1.target=200000;
	
	printf("Enter the details of sm2.\n");
	scanf("%d",&sm2.id);
	scanf("%s",sm2.name);
	scanf("%lf",&sm2.salary);
	scanf("%lf",&sm2.incentive);
	scanf("%lf",&sm2.target);
	
	printf("id=%d name=%s salary=%lf incentive=%2lf target=%2lf",sm1.id,sm1.name,sm1.salary,sm1.incentive,sm1.target);
	printf("id=%d name=%s salary=%lf incentive=%2lf target=%2lf",sm2.id,sm2.name,sm2.salary,sm2.incentive,sm2.target);
}