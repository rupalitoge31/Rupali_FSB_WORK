#include <stdio.h>
#include <string.h>
struct HR
{
	int id;
	char name[30];
	double salary;
	double commission;
};
void main()
{
	struct HR H1,H2;
	
	H1.id=1235;
	strcpy(H1.name,"sakshi");
	H1.salary=90000;
	H1.commission=0.30;
	
	printf("Enter the details of HR2:\n");
	scanf("%d",&H2.id);
	scanf("%s",H2.name);
	scanf("%lf",&H2.salary);
	scanf("%lf",&H2.commission);
	
	printf("id=%d name=%s salary=%lf commision=%lf\n",H1.id,H1.name,H1.salary,H1.commission);
	printf("id=%d name=%s salary=%lf commision=%lf\n",H2.id,H2.name,H2.salary,H2.commission);
}
