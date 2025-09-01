#include <stdio.h>
typedef struct Student {
	int rollno;
	char name[10];
	int marks;
} Student;
void main() {
	Student std[5];

	for(int i=0; i<5; i++) {
		printf("Enter rollno name marks\n",i+1);
		scanf("%d",&std[i].rollno);
		scanf("%s",std[i].name);
		scanf("%d",&std[i].marks);
	}
	for(int i=0; i<5; i++) {

		printf("Rollno=%d Name=%s Marks=%d\n",std[i].rollno,std[i].name,std[i].marks);
	}
    printf("Enter the roll no you want");
    int rollno;
    scanf("%d",&rollno);
    int index=-1;
    for(int i=0;i<4;i++){
    	if(std[i].rollno==rollno){
    		index=i;
    		break;
		}
	}
	if(index!=-1){
		printf("%d found at %d index",std[index].rollno,index);
		}else
		printf("rollno not found");
}
	
