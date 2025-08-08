#include <stdio.h>
void main() {
	for (int i=1; i<=1000; i++) {

		int no=i;
		int r,sum=0;
		int temp=no;

		while (temp!=0) {
			r=temp%10;
			sum=sum+r*r*r;
			temp=temp/10;
		}
		if (no==sum) {
			printf("%d is armstrong\n",no);
		}
	}
}