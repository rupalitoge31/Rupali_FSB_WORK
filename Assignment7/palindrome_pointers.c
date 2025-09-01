#include <stdio.h>
void palindrome(int*);
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	
	palindrome(&no);
}
void palindrome(int* no)
{
	int n=*no;
	int r1,r2,r3,rev;
	int q1;
	r1 =n%10;
	q1 =n/10;
	r2 =q1%10;
	r3 =q1/10;
	rev =r1*100+r2*10+r3;
	if(*no==rev){
		printf("number is palindrome",&no);
	}
	else {
		printf("number is not palindrome",&no);
	}
}