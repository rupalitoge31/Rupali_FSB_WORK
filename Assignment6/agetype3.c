#include <stdio.h>
void defineage(int);
void main () {
	int age;
	printf("Enter the age");
	scanf("%d",&age);
	defineage(age);
}
void defineage(int a) {
	if(a<12) {
		printf("Child");
	} else {

		if(a<=19)
			printf("Teenager");

		else {

			if(a<=59)
				printf("Adult");

			else {
				printf("Senior");
			}
		}
	}
}