#include <stdio.h>
void firstlastdigit(int);
void main ()
{
	int no=12345;
	firstlastdigit(no);
}
void firstlastdigit(int a){

	int rem,sum=0;
	int ld=a%10;//last digit
	
	while (a>=10)
	{
		a=a/10;
	}
	int fd=a;//first digit
		sum=fd+ld;
	
	printf("%d + %d =%d\n",fd,ld,sum);
}