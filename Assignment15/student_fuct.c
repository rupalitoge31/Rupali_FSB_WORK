#include <stdio.h>
#include <string.h>
struct Student
{
	int rollno;
	char name[20];
	int marks;
};
struct Student storeStudent();
void displayStudent(struct Student);
void main()
{
	struct Student s1,s2;

	printf("Enter the details of Student1:\n");
	s1=storeStudent();
	
	printf("Enter the details of Student2:\n");
	s2=storeStudent();
		
	printf("Enter the details of Student are:\n");
	displayStudent(s1);
	displayStudent(s2);
}
struct Student storeStudent()
{
	struct Student temp;	
	scanf("%d",&temp.rollno);
	scanf("%s",temp.name);
	scanf("%d",&temp.marks);
	
	return temp;
}
void displayStudent(struct Student std){

	printf("rollno=%d name=%s marks=%d\n",std.rollno,std.name,std.marks);
	
}