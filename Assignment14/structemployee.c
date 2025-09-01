#include <stdio.h>
#include <string.h>
struct employee
{
	int id;
	char name[20];
	double salary;
};
void main()
{
	struct employee e1,e2;
	
	e1.id=01;
	strcpy(e1.name,"xyz");
	e1.salary=45000;
	
	printf("Enter the details of e2:\n");
	
	scanf("%d",&e2.id);
	scanf("%s",e2.name);
	scanf("%lf",&e2.salary);
	
	printf("id=%d name=%s salary=%lf\n",e1.id,e1.name,e1.salary);
	printf("\nid=%d name=%s salary=%lf\n",e2.id,e2.name,e2.salary);
}