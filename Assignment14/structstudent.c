#include <stdio.h>
#include <string.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
void main()
{
	struct student s1,s2;

	s1.rollno=56;
	strcpy(s1.name,"pooja");
	s1.marks=96;
	
	printf("Enter the details of s2:\n");
	scanf("%d",&s2.rollno);
	scanf("%s",s2.name);
	scanf("%d",&s2.marks);
	
	printf("rollno=%d name=%s marks=%d\n",s1.rollno,s1.name,s1.marks);
	printf("\nrollno=%d name=%s marks=%d",s2.rollno,s2.name,s2.marks);
}