#include <stdio.h>
typedef struct Student {
	int rollno;
	char name[10];
	int marks;
} Student;
void StoreStudent(Student*,int);
void DisplayStudent(Student*,int);
void SearchStudent(Student*,int);
void main() {
	Student july[5];
	Student aug[6];
	Student sep[3];
	
	StoreStudent(july,5);
	StoreStudent(aug,6);
	StoreStudent(sep,3);
	
	DisplayStudent(july,5);
	DisplayStudent(aug,6);
	DisplayStudent(sep,3);
	
	SearchStudent(july,5);
	SearchStudent(aug,6);
	SearchStudent(sep,3);
}//main ends here
void StoreStudent(Student* ptr,int size){

	for(int i=0; i<size; i++) {
		printf("Enter rollno name marks\n",i+1);
		scanf("%d",&ptr[i].rollno);
		scanf("%s",ptr[i].name);
		scanf("%d",&ptr[i].marks);
	}
}//StoreStudent ends here
void DisplayStudent(Student* ptr,int size){

	for(int i=0; i<size; i++) {

		printf("Rollno=%d Name=%s Marks=%d\n",ptr[i].rollno,ptr[i].name,ptr[i].marks);
	}
}//Display ends here
void SearchStudent(Student* ptr,int size){
	int rollno;
	int found=0;
	
	printf("Enter the roll number to search:");
	scanf("%d",rollno);
	
	for(int i=0;i<size;i++){
		if(ptr[i].rollno==rollno){
			printf("Rollno=%d Name=%s Marks=%d\n",ptr[i].rollno,ptr[i].name,ptr[i].marks);
			found=1;
			break;
		}
	}
	if(!found){
		printf("student not found");
	}
}

    