#include <stdio.h>
void evenodd(int);
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	evenodd (no);
}
void evenodd(int a)
{
	if(a%2==0){
		printf("number is even",a);
	}
	else{
		printf("number id odd",a);
	}
}