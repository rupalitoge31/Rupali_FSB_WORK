#include <stdio.h>
typedef struct Admin {
	int id;
	char name[10];
	double allowance;
} Admin;
void main() {
	Admin adm[5];

	for(int i=0; i<5; i++) {
		printf("Enter id name allowance\n",i+1);
		scanf("%d",&adm[i].id);
		scanf("%s",adm[i].name);
		scanf("%lf",&adm[i].allowance);
	}
	for(int i=0; i<5; i++) {

		printf("Id=%d Name=%s Allowance=%lf\n",adm[i].id,adm[i].name,adm[i].allowance);
	}
	printf("Enter the id you want");
	printf("Enter the name you want");
	int id;
	scanf("%d\n",&id);
	char name[10];
	scanf("%s\n",&name);
	int index=-1;
	for(int i=0; i<4; i++) {
		if(adm[i].id==id&&strcmp(adm[i].name,name)==0) {
			
			
			index=i;
				break;
			
		}
	}
	if(index!=-1) {
		printf("%d found at %d index",adm[index].id,adm[index].name,index);
		
	} else
		printf("id not found");
		printf("name not found");
}

