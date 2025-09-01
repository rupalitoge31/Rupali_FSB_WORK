#include <stdio.h>
void armstrong(int);
void main() {
	int no;
	armstrong(no);
}
void armstrong(int a){

	for (int i=1; i<=1000; i++) {

		int a=i;
		int r,sum=0;
		int temp=a;

		while (temp!=0) {
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
		}
		if (a==sum) {
			printf("%d is armstrong\n",a);
		}
	}
}