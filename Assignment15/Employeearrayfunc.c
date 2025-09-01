#include <stdio.h>
typedef struct Employee {
	int id;
	char name[10];
	double salary;
} Employee;
void main() {
	Employee emp[5];

	for(int i=0; i<5; i++) {
		printf("Enter id name salary\n",i+1);
		scanf("%d",&emp[i].id);
		scanf("%s",emp[i].name);
		scanf("%lf",&emp[i].salary);
	}
	for(int i=0; i<5; i++) {

		printf("Id=%d Name=%s Salary=%lf\n",emp[i].id,emp[i].name,emp[i].salary);
	}
    printf("Enter the id you want");
    int id;
    scanf("%d",&id);
    int index=-1;
    for(int i=0;i<4;i++){
    	if(emp[i].id==id){
    		index=i;
    		break;
		}
	}
	if(index!=-1){
		printf("%d found at %d index",emp[index].id,index);
		}else
		printf("id not found");
}
	
