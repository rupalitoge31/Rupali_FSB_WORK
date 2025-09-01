#include <stdio.h>
void palindrome(int);
void main()
{
	int no=121;
	palindrome(no);
}
void palindrome(int a){

	int r1,r2,r3,rev;
	int q1;
	
	r1=a%10;
	q1=a/10;
	r2=q1%10;
	r3=q1/10;
	rev=r1*100+r2*10+r3;
	
	if (a==rev){
		printf("Palindrome");
	}	
	else {
		printf("Not palindrome");
	}
}